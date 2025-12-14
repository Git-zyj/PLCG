/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32280
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 |= min((((/* implicit */unsigned long long int) (signed char)-36)), (((((/* implicit */_Bool) ((int) arr_0 [i_0]))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) + (var_7))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))))));
        arr_3 [(_Bool)1] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((((/* implicit */int) arr_1 [i_0] [0LL])) >> (((((/* implicit */int) arr_1 [i_0] [10LL])) - (65))))) : (((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_1 [6LL] [6LL]))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */int) (~(max((((/* implicit */long long int) arr_2 [i_0])), (max((((/* implicit */long long int) 3931636753U)), (-11LL)))))));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_3)))) ? (((/* implicit */int) ((6576693240035228745ULL) == (((/* implicit */unsigned long long int) 363330542U))))) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(signed char)6]))) : (((var_17) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [2ULL])))))));
            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_0 [i_0]))));
            var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((var_12) ^ (var_12)))) | ((~(-181390849491623266LL)))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] [i_2] [i_0] = ((/* implicit */short) max((min(((~(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) - (((/* implicit */int) arr_6 [i_0]))))))), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))));
            arr_11 [i_0] = ((short) (+(((/* implicit */int) arr_6 [i_0]))));
            arr_12 [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((unsigned short) var_12)))));
        }
        /* vectorizable */
        for (signed char i_3 = 2; i_3 < 9; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (short i_4 = 1; i_4 < 10; i_4 += 2) 
            {
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (3013640945383767362LL)));
                arr_20 [i_0] [i_3 + 1] [i_4] [i_4 + 1] = arr_2 [(signed char)7];
            }
            arr_21 [i_0] [(unsigned char)5] [i_3] = ((/* implicit */unsigned short) (((+(var_17))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8191)))));
        }
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            for (short i_6 = 0; i_6 < 11; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 1) 
                        {
                            {
                                arr_34 [i_5] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_7])))))));
                                var_24 = ((/* implicit */unsigned int) arr_27 [i_8] [(_Bool)1] [(_Bool)1] [i_0] [(signed char)7] [i_0]);
                                arr_35 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */long long int) var_0);
                            }
                        } 
                    } 
                    arr_36 [i_0] [i_5] [i_6] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(min((-5LL), (((/* implicit */long long int) arr_19 [i_0]))))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((var_4), (((/* implicit */unsigned long long int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0])))))));
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned long long int i_10 = 2; i_10 < 10; i_10 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) var_18);
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_15))));
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_10)))) - (-1)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))) : (((((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) + (((632716995U) - (var_14)))))));
                                var_28 = ((signed char) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = var_2;
    var_30 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)193))))) : (var_5)));
    var_31 = ((/* implicit */_Bool) var_6);
}
