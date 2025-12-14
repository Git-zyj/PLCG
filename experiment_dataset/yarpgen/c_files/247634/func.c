/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247634
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                for (unsigned char i_3 = 2; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2]);
                        arr_12 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) (!(((/* implicit */_Bool) -428615939)))))));
                        arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) min(((_Bool)1), ((!(((/* implicit */_Bool) 3853599735582534005LL))))))), (0U)));
                        arr_14 [i_0] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [(_Bool)1] [i_2] [i_3 - 1]))));
                    }
                } 
            } 
        } 
        var_10 = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((1017494511), (-1017494530)))), (((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (arr_3 [i_0 + 1] [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
    {
        var_11 = arr_4 [i_4] [i_4 + 1] [i_4];
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        var_12 = ((/* implicit */unsigned char) ((long long int) arr_18 [i_4] [i_4 + 1]));
                        /* LoopSeq 4 */
                        for (long long int i_8 = 1; i_8 < 21; i_8 += 3) 
                        {
                            arr_29 [i_4 + 1] [i_4 + 1] [21] [i_8] = arr_22 [i_4] [i_6] [i_6] [i_6] [i_8] [i_5];
                            arr_30 [i_4 + 1] [i_5] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (signed char)-23)) : (1017494516)));
                        }
                        for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            arr_33 [i_4] [i_4 + 1] [i_4] [i_4 + 1] [i_4] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_4] [i_4] [i_6] [i_6] [i_4] [i_9]))));
                            arr_34 [i_9] [(_Bool)1] [i_6] [i_5] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_9 + 3] [(_Bool)1] [i_4])) ? (arr_19 [i_5] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [8])))))) ? ((((_Bool)1) ? (arr_7 [(_Bool)1] [i_4] [(signed char)17] [(signed char)17]) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4] [i_5] [i_6] [i_7] [i_5]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3481956989U)) ? (((/* implicit */int) arr_28 [i_9 + 2] [i_9 + 3] [i_9 - 1] [i_9 + 2] [i_9])) : ((+(((/* implicit */int) (_Bool)1))))));
                            arr_35 [i_4 + 1] [i_5] [i_6] [(unsigned short)3] [i_9 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_23 [(signed char)21]))) ? ((+(arr_21 [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_6] [i_6] [i_5] [(_Bool)1])) / (((/* implicit */int) arr_25 [(_Bool)1] [i_5])))))));
                            var_14 = ((/* implicit */long long int) ((signed char) arr_27 [i_4] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1]));
                        }
                        for (long long int i_10 = 0; i_10 < 23; i_10 += 2) 
                        {
                            arr_40 [i_10] [i_7] [i_6] [i_5] [1] [i_4] = ((/* implicit */unsigned int) arr_20 [i_10] [i_4] [(unsigned short)7] [i_4]);
                            var_15 = ((/* implicit */unsigned int) arr_27 [i_5] [i_5] [i_6] [i_5] [i_5] [i_6] [i_10]);
                            arr_41 [i_10] [i_7] [i_6] [i_5] [i_6] [i_5] [(unsigned short)17] = ((/* implicit */short) ((long long int) arr_1 [i_6]));
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                        {
                            arr_46 [i_4] = ((/* implicit */unsigned short) var_9);
                            arr_47 [i_11] [1U] [i_7] [i_6] [i_6] [i_5] [i_4] = ((/* implicit */_Bool) arr_23 [i_4 + 1]);
                            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_4 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_2 [13LL] [i_6] [i_11])))))));
                            arr_48 [i_4 + 1] [i_4 + 1] [i_4] [(unsigned short)2] [i_4 + 1] = ((/* implicit */unsigned int) 67882599759729542ULL);
                        }
                        var_17 = ((/* implicit */_Bool) ((long long int) (-(3780144058U))));
                    }
                } 
            } 
            arr_49 [i_4] = ((/* implicit */signed char) ((unsigned short) arr_10 [i_4 + 1]));
            arr_50 [i_4] [(unsigned short)3] = ((((/* implicit */_Bool) arr_27 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_5] [i_5] [(signed char)20] [i_5])) ? (((/* implicit */int) arr_23 [i_4 + 1])) : (((/* implicit */int) arr_27 [i_4 + 1] [i_4 + 1] [i_4 + 1] [17LL] [i_4 + 1] [i_4 + 1] [i_4 + 1])));
            arr_51 [i_4] = ((/* implicit */unsigned short) ((signed char) arr_15 [i_4 + 1] [i_4]));
        }
        for (short i_12 = 2; i_12 < 21; i_12 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) 3283838401U))));
            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_4] [i_12 + 2] [(short)22] [i_12] [i_4])) ? (((/* implicit */int) arr_10 [i_12])) : (((/* implicit */int) arr_28 [i_4 + 1] [i_4] [6ULL] [i_4] [(short)17]))));
            var_20 += ((/* implicit */signed char) ((arr_10 [i_4 + 1]) ? (((/* implicit */int) arr_10 [i_4 + 1])) : (((/* implicit */int) arr_10 [i_4 + 1]))));
            var_21 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -2654683359446374773LL)) ? (((/* implicit */int) arr_42 [i_4 + 1])) : (((/* implicit */int) var_1)))) ^ (((/* implicit */int) arr_26 [i_12] [i_12] [i_12 - 2] [i_12 - 2] [i_12 - 2] [(_Bool)1]))));
        }
        arr_54 [i_4] = ((/* implicit */long long int) arr_20 [i_4] [i_4] [i_4] [i_4]);
    }
    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) 1017494513)))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_27 [i_13] [i_13] [(unsigned short)18] [(unsigned short)18] [i_13] [i_13] [(unsigned short)18])))))))))));
        var_24 = ((/* implicit */signed char) min((var_24), (arr_22 [i_13 + 1] [i_13] [i_13] [i_13] [i_13] [i_13])));
        var_25 = ((/* implicit */_Bool) (+(min((((/* implicit */long long int) ((_Bool) 1017494558))), (max((((/* implicit */long long int) arr_38 [8] [i_13 + 1] [i_13] [(_Bool)1] [i_13] [i_13] [i_13])), (arr_3 [i_13] [(signed char)21])))))));
    }
    var_26 = ((/* implicit */unsigned int) min((var_6), ((unsigned short)28850)));
    var_27 = ((/* implicit */signed char) min((var_27), (var_1)));
    var_28 = ((/* implicit */_Bool) var_0);
}
