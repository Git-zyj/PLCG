/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204210
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
    var_12 = ((/* implicit */unsigned int) 5917881412847689217LL);
    var_13 |= ((/* implicit */unsigned char) var_6);
    var_14 = ((/* implicit */int) var_1);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) (-((((_Bool)0) ? (9071147543637356089ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) 4294967295U));
        arr_3 [i_0] = (-((((_Bool)0) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(short)13]))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((short) arr_0 [i_0 - 1] [i_0 - 1])))));
        var_17 = ((/* implicit */unsigned short) (+(arr_1 [i_0 + 1] [i_0 - 1])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (long long int i_4 = 1; i_4 < 17; i_4 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_5 = 0; i_5 < 19; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_2] [i_4] [i_4] [i_4] [i_1 - 1] = ((((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) & (min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_12 [i_5] [i_3] [i_2] [i_1]))))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (arr_6 [i_1] [i_1]))))));
                            var_18 = ((/* implicit */unsigned int) -212047490);
                            arr_19 [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (_Bool)1);
                            arr_20 [i_1] [(short)2] [i_3] [i_2] [i_5] [i_2] [i_2] = ((/* implicit */int) arr_13 [i_1] [i_2] [i_3] [i_4] [i_5] [i_1]);
                            arr_21 [i_2] [i_4] [i_4] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) (signed char)76)))));
                        }
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */long long int) arr_9 [i_2]);
                            var_20 = ((/* implicit */long long int) arr_12 [i_1] [i_2] [i_3] [i_4]);
                            var_21 ^= arr_7 [i_1] [i_2] [i_3];
                            arr_24 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) (short)-7060);
                            var_22 = ((/* implicit */_Bool) max((var_22), (((_Bool) max((((/* implicit */unsigned long long int) (unsigned short)65511)), (15246613720084176453ULL))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (2147483643)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_26 [i_1 - 1] [i_2] [i_3] [i_2] [i_7]))))))));
                            arr_28 [i_2] [i_2] = ((/* implicit */_Bool) ((arr_27 [i_4 - 1] [i_2] [i_1] [i_2] [13LL]) << (((max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-95)))) - (9223372036854775790LL)))));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_3] [i_3] [i_1] [i_3] [i_1])), (arr_13 [i_4 + 2] [i_4] [i_4] [i_4 + 1] [i_1 - 1] [i_1])))))))));
                        }
                        for (long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                        {
                            var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) 2147483621)) ? ((+(((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */long long int) (+(((unsigned int) 2147483621))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_9 = 3; i_9 < 18; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65531))));
                            arr_33 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)7] = ((/* implicit */_Bool) arr_15 [i_2] [i_1 - 1] [i_1]);
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            arr_36 [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) (signed char)72);
                            arr_37 [i_1] [i_1] [12LL] [i_2] [i_1] = ((/* implicit */unsigned int) ((arr_8 [i_4 - 1] [i_1 - 1]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            arr_38 [i_2] [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */int) var_6)) << (((458415027) - (458415005)))))));
                            arr_39 [i_2] [i_2] [(unsigned char)14] [(unsigned char)14] [i_10] [i_1] [i_1] = ((/* implicit */long long int) var_8);
                        }
                    }
                } 
            } 
        } 
        var_28 = ((unsigned int) ((((/* implicit */_Bool) (+(var_0)))) ? ((~(arr_22 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -257127432))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 15; i_11 += 3) 
        {
            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_48 [i_1] [i_11] [i_12] [i_13] = ((/* implicit */unsigned int) arr_7 [i_13] [i_11 + 2] [i_1]);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & ((~(((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)510))))) : ((~(max((((/* implicit */unsigned long long int) 4362051355782454977LL)), (arr_31 [i_12] [i_12])))))));
                        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) (_Bool)0))));
                    }
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((max(((short)-790), (((/* implicit */short) (_Bool)1)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (-20283686123721840LL)))))))));
                    arr_49 [i_1 - 1] = ((/* implicit */unsigned short) var_1);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_41 [(unsigned short)6] [i_11]))));
                }
            } 
        } 
    }
    var_33 = max((((/* implicit */unsigned int) ((_Bool) var_9))), (((unsigned int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))));
}
