/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206730
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
    var_11 = ((/* implicit */_Bool) 405211073);
    var_12 = ((/* implicit */unsigned long long int) ((405211073) << (((405211073) - (405211071)))));
    var_13 = min(((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_2)))))), ((_Bool)1));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned long long int) var_1);
        arr_2 [i_0] |= ((/* implicit */long long int) ((((405211086) + (405211051))) != ((+((-(((/* implicit */int) var_9))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_10 [i_1] = ((/* implicit */unsigned long long int) var_10);
                /* LoopSeq 2 */
                for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
                {
                    var_15 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -405211052)) < (12ULL)));
                    arr_14 [i_0] [i_1] [i_2] = (!(arr_5 [i_1] [i_1 + 4]));
                }
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_10)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -405211052)) : (arr_8 [i_4]))) : (((((/* implicit */_Bool) 6463757274420322415ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (var_10))))));
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_20 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(11982986799289229201ULL)))) ? (((/* implicit */unsigned long long int) ((arr_11 [(_Bool)1] [(_Bool)1] [i_2] [i_4] [i_5]) - (((/* implicit */int) arr_15 [i_1] [i_2] [i_1]))))) : (((((/* implicit */_Bool) arr_15 [i_1] [i_4] [i_1])) ? (((/* implicit */unsigned long long int) var_2)) : (14803883356785772293ULL)))));
                        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [(unsigned char)2] [(_Bool)1]))))) >> (((/* implicit */int) ((_Bool) arr_16 [i_0] [(unsigned char)11] [(_Bool)1] [i_0] [i_0]))))))));
                        arr_21 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
                arr_22 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_3);
                arr_23 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) | (arr_18 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1 + 4]));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_18 = ((/* implicit */_Bool) min((var_18), (((_Bool) (_Bool)1))));
                var_19 = var_4;
                var_20 &= ((/* implicit */_Bool) (-(11982986799289229187ULL)));
            }
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) 6463757274420322420ULL))))))));
                        var_22 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) -405211069)) - (278407138478223265ULL)));
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_8))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (405211086) : (((/* implicit */int) arr_28 [(_Bool)1] [(_Bool)1]))))))))));
                        var_24 = (_Bool)1;
                        var_25 = ((_Bool) arr_8 [i_0]);
                    }
                } 
            } 
            arr_31 [i_0] [i_0] [i_1] = var_6;
        }
        var_26 = var_0;
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
    {
        arr_34 [i_9] [i_9] = ((/* implicit */_Bool) (~(max((((unsigned long long int) var_4)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [(_Bool)0] [(_Bool)0] [8ULL] [i_9] [i_9])))))))));
        arr_35 [10] |= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) -405211079)))));
    }
    var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((((((var_7) == (((/* implicit */int) var_1)))) ? (max((11982986799289229196ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (max((6463757274420322416ULL), (((/* implicit */unsigned long long int) var_10)))))) >> (((var_10) - (7452800233172210621LL))))))));
}
