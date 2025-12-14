/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29623
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
    var_18 = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
    var_19 = ((/* implicit */int) var_17);
    var_20 |= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_1)))) ? (var_6) : (((var_6) << (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */signed char) max((((((/* implicit */_Bool) min((arr_1 [i_0 - 3] [i_0 - 2]), (((/* implicit */int) (unsigned short)16383))))) ? ((+(((/* implicit */int) arr_2 [i_0 + 2])))) : (((int) arr_0 [i_0 - 3] [i_0 - 2])))), ((~(((/* implicit */int) arr_2 [i_0 - 1]))))));
        var_22 = max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0 - 1])) : (((var_16) / (arr_1 [i_0 + 1] [i_0 - 1]))))), ((+(((/* implicit */int) arr_2 [i_0 + 2])))));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)11635))))));
        arr_4 [i_0 + 3] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) ((_Bool) var_7))) < ((-(((/* implicit */int) var_3))))))) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 2]))));
    }
    for (unsigned short i_1 = 3; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -779099920))));
        var_23 &= ((/* implicit */unsigned long long int) (((((-2147483647 - 1)) < (779099919))) ? ((-(((/* implicit */int) ((unsigned short) (signed char)1))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2])) || (((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 1])))))));
    }
    for (unsigned short i_2 = 3; i_2 < 22; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_17 [i_2 - 1] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((short) ((signed char) arr_13 [i_2 - 2] [i_2 + 1] [i_2 - 2])));
                        var_24 -= max(((-(((var_17) ? (((/* implicit */int) arr_11 [i_2 - 3] [i_3] [i_4])) : (arr_5 [i_4]))))), ((-(((((/* implicit */int) arr_13 [i_2 + 3] [i_2 - 3] [i_4])) - (-1))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        arr_22 [i_2 - 1] [i_3] [i_4] [i_6] = ((/* implicit */int) (_Bool)1);
                        arr_23 [i_2 + 3] [i_4] = ((/* implicit */_Bool) ((((arr_21 [i_2 + 1] [i_2 - 1] [i_2 - 3] [i_2 + 3]) / (arr_21 [i_4] [i_4] [i_4] [i_4]))) - (arr_5 [i_6])));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                    {
                        for (signed char i_8 = 0; i_8 < 25; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((int) 4)) | (((((/* implicit */_Bool) arr_9 [i_2 - 3])) ? (((/* implicit */int) arr_9 [i_2 - 1])) : (((/* implicit */int) arr_9 [i_2 + 1])))))))));
                                var_26 = ((/* implicit */signed char) max((var_7), (max((1549967333), (((/* implicit */int) (unsigned short)54492))))));
                                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))));
                                arr_30 [i_2 - 1] [i_3] [i_4] [i_7] [i_8] [i_3] [i_2 - 3] = ((/* implicit */short) ((_Bool) min(((+(((/* implicit */int) var_5)))), (((arr_12 [i_2 - 2] [i_2 + 3] [i_2 - 1]) ^ (((/* implicit */int) arr_29 [i_7] [i_4] [i_3] [i_2 - 1])))))));
                            }
                        } 
                    } 
                    arr_31 [i_2 - 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_5 [i_2 + 3])) ? (((((/* implicit */int) (unsigned short)14)) * (((/* implicit */int) arr_28 [i_2 + 1] [i_2 - 2] [i_3] [i_4] [i_4] [i_4])))) : (((((/* implicit */_Bool) (unsigned short)59922)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)7)))))) >> (((((((/* implicit */int) ((((/* implicit */int) arr_19 [i_4] [i_3] [i_3] [i_3] [i_2 + 2] [i_2 - 1])) < (((/* implicit */int) arr_9 [i_3]))))) | (((/* implicit */int) var_13)))) - (27691)))));
                }
            } 
        } 
        var_28 = ((/* implicit */int) arr_27 [i_2 + 3] [i_2 - 1] [i_2 - 2] [i_2 + 3] [i_2 - 1] [i_2 - 3] [i_2 - 3]);
        var_29 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (arr_24 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 2]) : (arr_1 [i_2 - 3] [i_2 - 3])))) ? (((int) var_15)) : (((/* implicit */int) ((((/* implicit */int) var_4)) < (var_7)))))));
        arr_32 [i_2 - 2] [i_2 - 3] = ((/* implicit */short) var_8);
        arr_33 [i_2 + 3] [i_2 + 1] = ((/* implicit */signed char) min(((~(arr_12 [i_2 - 1] [i_2 + 2] [i_2 + 3]))), (((/* implicit */int) ((unsigned short) arr_26 [i_2 + 1] [i_2 - 3] [i_2 - 1] [i_2 + 3] [i_2 - 2])))));
    }
}
