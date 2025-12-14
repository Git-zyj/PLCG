/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53528
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_14 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_2 = 3; i_2 < 12; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) (short)17145);
                        var_16 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_3] [2ULL])) ? (((/* implicit */int) ((signed char) (unsigned short)34679))) : (((/* implicit */int) ((unsigned char) arr_1 [1ULL] [i_1]))))) ^ (((/* implicit */int) arr_5 [i_0] [i_0] [i_1]))));
                    }
                    var_17 = ((/* implicit */short) arr_0 [i_1 - 1]);
                    var_18 = ((/* implicit */unsigned short) var_1);
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 12; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 12; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned int) 1486537759)), (min((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)1))))), (((unsigned int) var_3))))));
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) var_7))), (((((/* implicit */int) var_13)) >> (((((unsigned int) (signed char)61)) - (55U)))))));
                            }
                        } 
                    } 
                }
                for (long long int i_6 = 3; i_6 < 12; i_6 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */short) ((max((arr_13 [i_6 - 3] [i_1 + 1] [i_0] [i_1] [4]), (arr_13 [i_6 + 1] [(unsigned short)6] [i_0] [i_1] [i_1]))) + (((/* implicit */int) ((((/* implicit */_Bool) 2032787271813061262ULL)) || (((/* implicit */_Bool) (short)255)))))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_6 + 1] [i_7] [i_1 + 1]))) : (((unsigned int) var_11))));
                                var_23 = ((/* implicit */long long int) min((((/* implicit */int) (short)10321)), (-413760222)));
                                var_24 = 4451897165457083143ULL;
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (signed char)-1)), (-5988770203252454320LL))) / (((/* implicit */long long int) 2693824971U))));
                    var_26 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((1486537743) / (((/* implicit */int) var_13)))), (-440125803)))), (((((/* implicit */_Bool) ((int) var_1))) ? (((((/* implicit */_Bool) var_13)) ? (1472418570816852225ULL) : (((/* implicit */unsigned long long int) 3458764513820540928LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 3] [i_1 + 1] [i_1 + 1] [i_1])))))));
                    var_27 ^= ((/* implicit */unsigned long long int) (short)-13902);
                    /* LoopNest 2 */
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) arr_7 [i_0] [i_1 + 3]);
                                var_29 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1486537784)) || (((/* implicit */_Bool) 16676903698013581893ULL)))))) < (((((unsigned long long int) var_1)) + (((/* implicit */unsigned long long int) var_4))))));
                                var_30 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_11)), (var_3)));
                            }
                        } 
                    } 
                }
                for (long long int i_11 = 3; i_11 < 12; i_11 += 2) /* same iter space */
                {
                    var_31 = ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_13 [i_0] [i_0] [i_1] [i_11 - 3] [i_11])) ^ (var_3))) + (((/* implicit */unsigned long long int) ((unsigned int) 4611677222334365696LL)))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_20 [i_1] [i_1 + 1] [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [0] [i_1]))))) : (((var_7) >> (((/* implicit */int) ((signed char) arr_10 [i_1]))))));
                    var_32 = ((/* implicit */unsigned short) min((arr_7 [i_11 - 2] [i_0]), (((/* implicit */unsigned long long int) 7984709527071854209LL))));
                }
                /* vectorizable */
                for (long long int i_12 = 3; i_12 < 12; i_12 += 2) /* same iter space */
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) ((signed char) arr_5 [i_0] [i_0] [i_1])))));
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1486537771)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)52)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_6 [9] [i_0] [i_1])))) : (var_6)));
                    var_35 = (i_1 % 2 == 0) ? (((/* implicit */unsigned char) ((((529713043989041548ULL) << (((3616837375U) - (3616837363U))))) >> (((arr_8 [i_0] [i_1] [i_1]) - (1165312943U)))))) : (((/* implicit */unsigned char) ((((529713043989041548ULL) << (((3616837375U) - (3616837363U))))) >> (((((arr_8 [i_0] [i_1] [i_1]) - (1165312943U))) - (1275830258U))))));
                }
                var_36 = (i_1 % 2 == 0) ? (((/* implicit */unsigned long long int) ((arr_30 [i_0] [2] [i_0] [i_0] [i_1]) >> (((max((((arr_9 [i_1] [i_0] [i_0] [i_1] [(unsigned short)10]) ? (arr_14 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (2147483647)))))) - (16106243675960153262ULL)))))) : (((/* implicit */unsigned long long int) ((((arr_30 [i_0] [2] [i_0] [i_0] [i_1]) + (2147483647))) >> (((((max((((arr_9 [i_1] [i_0] [i_0] [i_1] [(unsigned short)10]) ? (arr_14 [i_0] [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1 - 1] [i_1] [i_1] [i_1])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) < (2147483647)))))) - (16106243675960153262ULL))) - (4123725423033178106ULL))))));
                var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) ((int) ((signed char) var_1))))));
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned short) ((unsigned int) max((((/* implicit */short) (unsigned char)255)), (var_13))))))));
}
