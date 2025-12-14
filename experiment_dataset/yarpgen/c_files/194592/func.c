/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194592
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
    var_19 = ((/* implicit */long long int) var_4);
    var_20 = ((/* implicit */long long int) var_16);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((-(((/* implicit */int) (short)0)))) / ((((_Bool)1) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (_Bool)1))))))), (((arr_12 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0 - 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_2] [i_3] [i_4])) : (((/* implicit */int) var_12))))) : (var_16)))));
                                var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 281474976710656LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-7648736761962090565LL)));
                            }
                        } 
                    } 
                    var_23 += (-(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (min((((/* implicit */long long int) arr_1 [i_2])), (7648736761962090564LL))) : (((arr_12 [22LL] [i_1] [i_1] [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_0))))));
                    arr_16 [i_0 + 2] [14U] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-40))) * (((arr_9 [i_2] [i_2] [6ULL] [i_0]) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) / (8718327109221706230LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (signed char i_6 = 2; i_6 < 24; i_6 += 4) 
                        {
                            {
                                arr_21 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_5] [i_0] = ((((/* implicit */_Bool) min((6526689871108135048ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3849408967824341478ULL)))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (min((min((((/* implicit */long long int) var_3)), (var_11))), (((/* implicit */long long int) ((short) arr_12 [10U] [i_1] [(short)21] [i_6 - 2] [(unsigned char)23]))))));
                                var_24 = ((/* implicit */int) ((min((arr_6 [i_0 + 1] [i_0 + 2]), (((/* implicit */unsigned int) (~(((/* implicit */int) var_18))))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] [i_6])))));
                                arr_22 [i_0] [i_1] [i_5] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_15)) ? (-1152921504606846976LL) : (((/* implicit */long long int) 1797109022U))))))) ? (min(((~(arr_5 [i_0] [i_1] [(_Bool)1]))), (((/* implicit */unsigned int) var_1)))) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                            }
                        } 
                    } 
                    var_25 *= ((((/* implicit */_Bool) ((unsigned int) arr_15 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]))) ? ((+(arr_11 [i_0 - 1] [i_0] [22LL] [i_0 + 2]))) : (((((/* implicit */_Bool) (short)20395)) ? (2497858248U) : (1071267585U))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (long long int i_10 = 3; i_10 < 22; i_10 += 3) 
                {
                    {
                        arr_36 [i_10] [i_8] [i_8] [i_7] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_25 [i_7] [i_7]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [(unsigned char)22] [i_8] [i_8] [i_8] [i_10])) : (arr_7 [i_7]))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_15 [17U] [19LL] [i_9] [17U] [i_8] [17U] [(short)11])) : (var_10)))) ? (((/* implicit */unsigned long long int) ((int) var_4))) : (((unsigned long long int) arr_31 [i_7] [i_8] [i_9] [8]))))));
                        var_26 *= ((/* implicit */_Bool) min((((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_10))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_31 [19LL] [i_8] [i_9] [i_10])) : (((/* implicit */int) arr_28 [i_7] [i_7])))))))), ((~((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) arr_29 [i_7] [(short)15] [i_10 + 2]))))))));
                        var_27 = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) var_4))))), (min((((/* implicit */short) var_8)), (var_4)))))) * (((/* implicit */int) min(((unsigned char)253), ((unsigned char)0))))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned int) min((arr_20 [i_7] [i_8] [i_9]), (((/* implicit */unsigned int) var_6)))));
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) min((18446744073709551606ULL), (((/* implicit */unsigned long long int) -3219208528974257147LL)))))));
                    }
                } 
            } 
        } 
        arr_37 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_6 [i_7] [i_7])), (-2963528062334654353LL))), (7190839212046499352LL)))) ? ((~(((arr_9 [i_7] [i_7] [i_7] [i_7]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (short)-5472)) : (((/* implicit */int) (_Bool)1))))));
        arr_38 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_7] [6LL] [i_7] [6LL] [i_7])) ? (((/* implicit */int) arr_35 [i_7] [i_7] [i_7] [14U] [i_7])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3989028243U))))) : (((/* implicit */int) min((arr_35 [i_7] [i_7] [i_7] [(short)22] [(short)22]), (var_3))))));
    }
}
