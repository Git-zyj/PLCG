/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201605
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
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_13 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
            arr_7 [i_0] [i_1] [i_0 + 1] = ((/* implicit */int) max(((short)-18168), (((/* implicit */short) (signed char)(-127 - 1)))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                arr_10 [i_0] = ((/* implicit */long long int) arr_4 [(_Bool)1] [(_Bool)1]);
                var_14 = ((/* implicit */long long int) arr_4 [i_0] [i_0]);
                /* LoopSeq 2 */
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                {
                    arr_13 [i_0] [i_1] [i_1] [i_1] [i_1] [i_3] = arr_6 [i_0];
                    arr_14 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))))));
                    arr_15 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
                    var_15 = ((/* implicit */signed char) arr_3 [i_0] [i_0]);
                }
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    arr_18 [2LL] [i_0] = (+(arr_4 [i_0 - 2] [i_4]));
                    arr_19 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0])))))));
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_16 *= arr_16 [i_4];
                        var_17 = ((/* implicit */short) var_3);
                        var_18 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (unsigned long long int i_6 = 2; i_6 < 9; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
                        var_20 -= ((/* implicit */unsigned long long int) var_0);
                    }
                    for (signed char i_7 = 4; i_7 < 10; i_7 += 4) 
                    {
                        var_21 *= ((/* implicit */unsigned short) var_9);
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_7 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))));
                        var_22 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)116))));
                    }
                    var_23 = ((/* implicit */_Bool) var_0);
                    arr_29 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (~((+(((/* implicit */int) (unsigned short)32766))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 4) 
                    {
                        {
                            var_24 *= ((/* implicit */short) (~(((/* implicit */int) var_9))));
                            arr_35 [i_0] [i_0] [i_0] [i_8] [i_9 + 1] [i_8] [i_0] = ((/* implicit */long long int) (!((!(var_10)))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2]))))))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 13; i_10 += 3) /* same iter space */
            {
                var_26 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                var_27 = ((/* implicit */_Bool) min((max((min((((/* implicit */unsigned long long int) arr_23 [i_0])), (arr_4 [i_1] [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_10] [i_1] [i_10]))))))), (max((var_2), (((/* implicit */unsigned long long int) (+(var_11))))))));
                arr_40 [i_10] [i_0] [i_0] [(unsigned short)1] = ((/* implicit */signed char) (!(var_9)));
                arr_41 [i_0] [i_1] = (!(((/* implicit */_Bool) (+((-(((/* implicit */int) var_0))))))));
                var_28 = ((/* implicit */_Bool) var_3);
            }
            /* vectorizable */
            for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) /* same iter space */
            {
                arr_45 [i_11] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_25 [i_1] [i_11]))));
                arr_46 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            }
            for (unsigned long long int i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_13 = 3; i_13 < 10; i_13 += 4) 
                {
                    arr_53 [i_0 - 2] [i_1] [i_1] [(unsigned short)1] [i_0] = ((/* implicit */long long int) (-((~((-(((/* implicit */int) arr_44 [i_0] [i_1] [i_1] [i_1]))))))));
                    var_29 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_3 [i_0] [(_Bool)1]), (var_6))))));
                    var_30 = ((/* implicit */unsigned long long int) var_8);
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    arr_56 [i_0] [i_0] [i_0] = arr_44 [i_0] [i_12] [i_12] [i_12];
                    var_31 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_47 [i_14] [i_0]))));
                    var_32 = ((/* implicit */long long int) max((var_32), ((~((+(arr_26 [i_0])))))));
                    arr_57 [i_0] [i_12] [11ULL] [i_0] = var_3;
                }
                var_33 = ((/* implicit */unsigned long long int) arr_50 [i_0] [i_0] [i_1] [i_12]);
            }
        }
        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0 - 2]))))), ((-(arr_37 [i_0] [12LL] [i_0] [3U]))))), (((/* implicit */unsigned long long int) max((min((arr_1 [(short)2] [i_0 - 1]), (((/* implicit */long long int) arr_5 [i_0])))), ((~(arr_24 [0U])))))))))));
        /* LoopNest 2 */
        for (unsigned short i_15 = 2; i_15 < 10; i_15 += 3) 
        {
            for (unsigned short i_16 = 3; i_16 < 12; i_16 += 4) 
            {
                {
                    var_36 -= ((/* implicit */unsigned int) arr_20 [i_0] [i_0 - 2] [i_0] [i_15 - 2] [i_0 - 1] [i_16]);
                    /* LoopSeq 1 */
                    for (int i_17 = 2; i_17 < 12; i_17 += 3) 
                    {
                        var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(var_4))))));
                        var_38 = ((/* implicit */long long int) var_3);
                        arr_65 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((arr_60 [i_0] [i_0] [i_16 + 1]), (((/* implicit */short) arr_11 [i_17] [i_17 - 2] [i_16] [i_0 + 1] [i_0 + 1]))));
                    }
                    arr_66 [i_0] [12U] [i_15 + 2] [i_0] = ((/* implicit */unsigned long long int) arr_20 [i_0] [i_15 + 3] [i_16 - 2] [i_0] [i_15] [i_16 - 3]);
                }
            } 
        } 
    }
    var_39 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((max((var_4), (((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
    var_40 = ((/* implicit */long long int) (~(((/* implicit */int) var_10))));
    var_41 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) (signed char)116)), ((unsigned char)181)));
}
