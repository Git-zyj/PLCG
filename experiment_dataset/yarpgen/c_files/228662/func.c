/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228662
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 4) 
                    {
                        var_17 += ((/* implicit */unsigned short) arr_1 [i_1]);
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1853714982)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))));
                        var_19 *= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-79))));
                    }
                    arr_12 [i_0 + 1] [i_2] [i_2] &= ((/* implicit */_Bool) (~(((int) max((arr_3 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_12)))))));
                    /* LoopSeq 4 */
                    for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        arr_15 [i_0] [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_2])))));
                        var_20 = (~(((var_2) ? (((/* implicit */int) (signed char)-31)) : (((/* implicit */int) var_8)))));
                    }
                    for (int i_5 = 1; i_5 < 18; i_5 += 3) 
                    {
                        var_21 -= ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((short) var_16)))))));
                        var_22 ^= min((min((((/* implicit */unsigned long long int) arr_7 [(signed char)3] [(_Bool)1] [i_2] [(signed char)3])), (max((((/* implicit */unsigned long long int) var_2)), (arr_5 [i_0] [(_Bool)1] [i_2]))))), (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_1 - 1] [i_2] [i_2]), (((/* implicit */unsigned int) var_2))))));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (unsigned short)54619)) : (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_5] [i_0] [i_0]))))) ? (-6735894754740591083LL) : (((/* implicit */long long int) ((/* implicit */int) min((var_16), ((unsigned char)247))))))))))));
                        var_24 ^= ((/* implicit */signed char) (+((-(((/* implicit */int) (signed char)-13))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -2565239463913098151LL)), (var_10)))) ? (((long long int) arr_6 [i_0 + 1] [i_1] [i_5 + 1] [i_6])) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_2]))))))), (((/* implicit */long long int) ((1479603871) + (((/* implicit */int) arr_16 [(short)7] [(short)7] [(short)7] [i_6])))))))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)179)) ? (2720056527U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)64)))));
                        }
                    }
                    for (short i_7 = 2; i_7 < 17; i_7 += 1) 
                    {
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)12389))))), (max((((/* implicit */long long int) (_Bool)0)), (arr_13 [i_1] [i_1 - 1] [i_1] [i_1 - 1] [i_7] [i_7 - 2]))))))));
                        arr_24 [i_1] [i_1] [i_1] [i_7 - 2] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)2)), (arr_1 [i_1 - 1]))))))));
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 20; i_8 += 3) 
                    {
                        var_28 |= ((/* implicit */long long int) arr_25 [i_0 + 2] [i_1 + 1] [i_2] [i_8] [i_8]);
                        arr_28 [i_0] [i_0] [i_1] [i_1] [i_8] [(unsigned short)4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_0] [i_0])))))));
                        var_29 = ((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [i_8]);
                        var_30 = ((/* implicit */unsigned short) var_2);
                    }
                    var_31 = ((/* implicit */_Bool) arr_8 [(_Bool)1] [i_0] [(_Bool)1] [(_Bool)1] [(_Bool)1]);
                }
            } 
        } 
    } 
    var_32 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    var_33 = ((/* implicit */unsigned short) var_16);
    var_34 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) min(((signed char)-87), (((/* implicit */signed char) (_Bool)1))))))));
}
