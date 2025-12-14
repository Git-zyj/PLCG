/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21144
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
    var_19 = ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_4 [i_0] |= ((/* implicit */_Bool) max((((/* implicit */int) (short)0)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        var_20 = ((/* implicit */long long int) var_1);
        var_21 = ((/* implicit */long long int) var_2);
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 24; i_3 += 2) 
            {
                arr_11 [i_3] [i_3] [i_3] = ((/* implicit */short) ((((((/* implicit */int) var_3)) >> (((var_15) + (5032407300386162507LL))))) != (((((/* implicit */int) (short)0)) & (((/* implicit */int) var_12))))));
                var_22 = ((/* implicit */short) (-(var_2)));
            }
            for (short i_4 = 0; i_4 < 24; i_4 += 2) /* same iter space */
            {
                arr_16 [i_1] [i_2] [i_4] = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 4 */
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    arr_19 [i_5] [14U] [i_5] = ((/* implicit */short) var_2);
                    var_23 ^= (~(var_9));
                    var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_0))));
                    arr_20 [i_1] [i_5] [i_4] = ((arr_17 [i_2] [i_2 + 1]) + (((((/* implicit */_Bool) arr_6 [i_1] [i_4])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_3))))));
                }
                for (short i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) != (var_14)));
                    arr_23 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) var_12)) != (((/* implicit */int) var_0))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    var_26 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)23278)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) arr_21 [i_1] [i_1] [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_4])) : ((~(arr_18 [i_1] [i_1] [(unsigned short)13] [i_1])))));
                    var_27 += ((/* implicit */long long int) var_4);
                }
                for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                {
                    arr_31 [i_1] [i_1] [i_2 + 2] [i_2] [i_4] [i_8] &= ((/* implicit */long long int) var_10);
                    arr_32 [(short)16] [(short)16] [i_8] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) (short)-8)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) var_13)))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5857894787108587786LL)) ? (-238108437503812292LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-31233)))));
                }
                arr_33 [20LL] &= ((/* implicit */long long int) (short)-8);
                /* LoopNest 2 */
                for (unsigned char i_9 = 3; i_9 < 23; i_9 += 2) 
                {
                    for (unsigned char i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        {
                            var_29 = ((var_14) + (-1LL));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49831)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)4883)))))) : (((((/* implicit */long long int) var_18)) | (var_15)))));
                            arr_38 [i_1] [i_2] [i_4] [i_9] [i_2] [i_10] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) var_2)) : ((-(var_7)))));
                        }
                    } 
                } 
            }
            for (short i_11 = 0; i_11 < 24; i_11 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */long long int) var_10);
                arr_42 [i_1] [i_2] = (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_16))));
                var_32 = ((((/* implicit */_Bool) 6304130346053227310LL)) ? (-20LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
            }
            var_33 = var_12;
            var_34 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_9)))) ? (var_15) : (((/* implicit */long long int) arr_21 [i_1] [i_1] [(short)11] [i_2 - 1] [i_2 + 1] [i_2]))));
            var_35 = ((/* implicit */short) var_4);
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_36 = var_6;
                var_37 = ((/* implicit */short) arr_39 [i_1] [i_1] [10LL]);
                arr_45 [i_1] [(short)5] [(short)10] [i_12] = ((/* implicit */short) var_11);
                /* LoopSeq 3 */
                for (unsigned int i_13 = 2; i_13 < 22; i_13 += 2) 
                {
                    var_38 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) ((((var_17) > (-1LL))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_7)) ? (arr_34 [(unsigned short)18] [(unsigned short)6] [(unsigned short)18] [i_12]) : (((/* implicit */long long int) 4294967295U)))))))));
                }
                for (long long int i_14 = 2; i_14 < 22; i_14 += 2) 
                {
                    var_40 = ((/* implicit */long long int) var_12);
                    var_41 = (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_3)))))) : (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49833))) : (var_16))));
                }
                for (long long int i_15 = 0; i_15 < 24; i_15 += 2) 
                {
                    var_42 = var_15;
                    arr_58 [6LL] [i_2] [6LL] [i_15] &= ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    var_43 *= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)-8))))) : (5282602088421974439LL)));
                    arr_59 [11U] [i_12] [11U] [11U] &= ((((/* implicit */_Bool) (unsigned short)60653)) ? (((/* implicit */long long int) ((/* implicit */int) (short)8878))) : (1701748851259299042LL));
                }
                var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? ((~(var_14))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
            }
        }
        var_45 = min((min((((/* implicit */long long int) var_2)), (arr_56 [i_1] [i_1] [i_1] [i_1] [(unsigned short)9] [i_1]))), (min((var_17), (((/* implicit */long long int) (short)0)))));
    }
    var_46 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))));
    var_47 *= ((/* implicit */unsigned short) var_18);
    var_48 |= ((/* implicit */unsigned char) (!(var_13)));
}
