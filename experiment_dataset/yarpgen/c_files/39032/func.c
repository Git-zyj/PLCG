/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39032
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        arr_14 [i_0] [i_1 + 3] [i_1 + 3] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) -180529272036147890LL))) ? (((180529272036147890LL) & (4091498155842128365LL))) : (var_2)))) ? (max((((/* implicit */long long int) (unsigned short)9458)), (max((var_2), (((/* implicit */long long int) arr_13 [i_1] [i_1] [i_2] [3LL])))))) : (min((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2])) > (((/* implicit */int) var_9))))), (var_1)))));
                        var_13 = ((/* implicit */long long int) max((var_13), (((((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned short)48526)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))) : (-1483060517358923392LL))), (((var_2) % (-2198973997412851092LL)))))) ? (arr_0 [(unsigned short)2]) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1483060517358923391LL)) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)11] [1LL] [i_3])) : (((/* implicit */int) (unsigned short)27144))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_6 [i_3] [i_3] [i_3]))))) : (((-1483060517358923391LL) / (arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [i_2])))))))));
                        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0] [(unsigned short)13] [i_0] [9LL]))))) ? (1483060517358923392LL) : (max((4194303LL), (((/* implicit */long long int) var_5))))))));
                        var_15 = ((/* implicit */unsigned short) 1483060517358923380LL);
                        var_16 = ((((((min((arr_11 [i_0] [i_3] [8LL] [i_0] [i_0] [i_1]), (var_7))) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) (unsigned short)49701)))))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) -5491709835638953801LL)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) var_9)))) << (((((/* implicit */int) max((var_12), (arr_1 [i_1] [i_2])))) - (61427))))) - (1911840))));
                    }
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_17 [i_4] [i_2] [i_4] [i_4] = (unsigned short)65535;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)27381)) : (((/* implicit */int) arr_5 [i_2]))))) || (((/* implicit */_Bool) -1483060517358923392LL))));
                            arr_21 [i_5] [(unsigned short)14] [i_2] [i_4] [i_4] = ((/* implicit */long long int) arr_12 [i_0] [i_0] [i_4] [i_0]);
                            arr_22 [i_0] [i_1] [i_2] [i_4] [i_5] |= ((/* implicit */unsigned short) arr_18 [i_0]);
                        }
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3186083488437751285LL)) ? (max((((/* implicit */int) arr_15 [i_2] [i_2])), (((((/* implicit */_Bool) (unsigned short)55261)) ? (((/* implicit */int) (unsigned short)7269)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_10))));
                        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)11709)))))))) > (((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (1618924043168838626LL) : ((+(var_7))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((var_0) > (var_6)));
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [1LL] [9LL] [i_4] [i_2])) : (((/* implicit */int) arr_24 [i_0] [i_1 + 2])))) != (((((/* implicit */_Bool) -4194293LL)) ? (((/* implicit */int) arr_12 [i_4] [i_4] [i_4] [i_0])) : (((/* implicit */int) ((var_4) <= (arr_18 [(unsigned short)3]))))))));
                        }
                    }
                    var_21 = ((/* implicit */unsigned short) var_1);
                    arr_26 [i_0] [(unsigned short)5] = (-(min((9223372036854775797LL), (((/* implicit */long long int) min(((unsigned short)4711), ((unsigned short)11709)))))));
                }
            } 
        } 
    } 
    var_22 = ((long long int) max((((/* implicit */long long int) max((var_9), (var_12)))), (((var_1) - (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
    var_23 = (unsigned short)5898;
}
