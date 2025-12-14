/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213433
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
    var_18 = ((/* implicit */short) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [8ULL] = ((/* implicit */long long int) var_15);
        var_19 = ((/* implicit */int) ((short) arr_0 [i_0] [i_0 + 1]));
        var_20 = ((/* implicit */unsigned char) ((long long int) var_3));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 3; i_1 < 12; i_1 += 1) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))));
            arr_7 [i_0] [(short)11] [i_0] = ((/* implicit */int) var_15);
            var_21 = max((8670376115625536388LL), (((/* implicit */long long int) (unsigned char)112)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 2) 
        {
            var_22 = ((/* implicit */short) arr_3 [11ULL] [i_0] [(unsigned char)6]);
            var_23 = ((/* implicit */int) ((unsigned char) 4738121238198791506LL));
        }
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 1; i_4 < 19; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    var_24 = ((/* implicit */short) -8670376115625536409LL);
                    var_25 = ((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3]);
                    /* LoopSeq 3 */
                    for (short i_6 = 4; i_6 < 17; i_6 += 4) 
                    {
                        arr_21 [i_3] = ((/* implicit */int) ((short) ((unsigned long long int) var_17)));
                        arr_22 [i_3] [(short)12] [(short)12] [i_3] [i_3] = ((/* implicit */long long int) var_11);
                    }
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        arr_25 [i_3] = ((/* implicit */short) max((var_3), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_24 [i_3] [i_3])), ((+(var_0))))))));
                        arr_26 [i_5] [i_3] = ((long long int) var_10);
                    }
                    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        arr_29 [i_3] [(short)1] [i_3] = ((/* implicit */short) -8670376115625536372LL);
                        arr_30 [i_3] = ((/* implicit */long long int) arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 - 1]);
                    }
                }
            } 
        } 
        arr_31 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) var_14)), (var_7))))));
        arr_32 [i_3] [i_3] = ((/* implicit */long long int) (~(var_8)));
    }
    for (long long int i_9 = 0; i_9 < 20; i_9 += 3) /* same iter space */
    {
        arr_36 [i_9] = ((/* implicit */unsigned char) ((_Bool) var_13));
        /* LoopSeq 3 */
        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_11 = 2; i_11 < 17; i_11 += 4) 
            {
                arr_41 [i_9] [i_9] [i_11] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), ((+(arr_17 [i_9] [i_11] [i_11] [i_9])))));
                var_26 = ((/* implicit */unsigned long long int) var_14);
                /* LoopSeq 2 */
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
                    var_28 = ((/* implicit */unsigned long long int) max((var_13), (((unsigned char) -8670376115625536409LL))));
                    var_29 = ((/* implicit */_Bool) max((((short) var_3)), (((/* implicit */short) ((unsigned char) min((var_0), (((/* implicit */long long int) (unsigned char)135))))))));
                }
                for (unsigned char i_13 = 2; i_13 < 19; i_13 += 3) 
                {
                    var_30 = var_4;
                    arr_49 [i_9] [i_9] [i_11 - 1] [i_9] = ((/* implicit */_Bool) (-(3818152137852867697ULL)));
                    var_31 = ((/* implicit */unsigned char) var_11);
                    var_32 = var_16;
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 2; i_14 < 18; i_14 += 2) 
                    {
                        var_33 = ((/* implicit */_Bool) (~(max((8670376115625536427LL), (((/* implicit */long long int) arr_14 [i_13 - 2] [i_9] [i_13 - 2]))))));
                        var_34 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_8))))));
                    }
                }
            }
            arr_53 [i_9] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) var_6)))));
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 3) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 20; i_17 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned char) ((short) min((arr_11 [i_9]), (arr_45 [i_9]))));
                            arr_65 [i_9] [i_10] [i_10] [i_9] [i_17] = min((((long long int) var_0)), (((/* implicit */long long int) arr_18 [i_9] [i_16] [i_16] [i_16 - 1])));
                            var_36 = ((/* implicit */int) 0ULL);
                        }
                    } 
                } 
            } 
            arr_66 [i_10] [i_9] [i_9] = ((/* implicit */_Bool) ((short) ((int) var_11)));
        }
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 2) 
        {
            var_37 = ((/* implicit */unsigned char) var_4);
            var_38 = ((/* implicit */_Bool) (unsigned char)142);
            arr_69 [i_9] [i_18] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_9] [i_9] [i_9]))));
            arr_70 [i_9] [i_9] = ((/* implicit */short) (-(var_1)));
            arr_71 [i_9] [i_9] [i_18] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (((long long int) var_5)))))));
        }
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            var_39 = ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) var_11))));
            var_40 = ((/* implicit */int) arr_43 [i_9] [1ULL] [i_9] [i_19]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_20 = 2; i_20 < 18; i_20 += 4) 
            {
                arr_78 [7LL] [i_9] = ((/* implicit */short) ((unsigned char) arr_50 [i_19] [i_9] [i_20 + 2]));
                /* LoopSeq 1 */
                for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 1) 
                {
                    var_41 = ((/* implicit */short) (+(var_8)));
                    arr_81 [i_9] [i_21] = ((/* implicit */long long int) arr_40 [i_20 + 2] [i_20 + 2] [i_20 + 2]);
                }
                arr_82 [i_9] [i_9] [i_9] [17] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_60 [i_20 - 2] [i_20 - 2]))));
            }
            /* LoopSeq 2 */
            for (long long int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                var_42 = ((/* implicit */unsigned char) var_12);
                var_43 = ((unsigned char) ((unsigned char) (unsigned char)12));
                arr_86 [i_9] [(unsigned char)5] [i_9] = ((unsigned char) (!(((/* implicit */_Bool) arr_10 [i_19]))));
            }
            for (int i_23 = 4; i_23 < 16; i_23 += 3) 
            {
                var_44 = ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) ((_Bool) var_8))))));
                var_45 = ((/* implicit */_Bool) var_8);
            }
        }
        var_46 = ((/* implicit */unsigned long long int) var_9);
        arr_89 [i_9] = ((/* implicit */unsigned long long int) -8670376115625536409LL);
    }
    var_47 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)140))));
    var_48 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)87))));
    var_49 = ((/* implicit */short) (~(((/* implicit */int) max((((_Bool) (short)9)), (((_Bool) var_1)))))));
}
