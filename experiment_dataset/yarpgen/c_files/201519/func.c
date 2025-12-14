/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201519
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
    var_10 = var_9;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_11 = (-(var_3));
                            var_12 *= (+(16282151955087326070ULL));
                            /* LoopSeq 3 */
                            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), ((((~(16282151955087326068ULL))) ^ (9137403100440973010ULL)))));
                                arr_13 [i_4] [i_3] [10ULL] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((7854135829590732628ULL) > ((~((-(var_3)))))));
                                arr_14 [i_1] [i_4] = ((18ULL) / (16282151955087326086ULL));
                            }
                            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) 4037559726837711266ULL)) ? (((((/* implicit */_Bool) 9780009692887164613ULL)) ? (arr_8 [i_3] [i_3 + 2] [i_3] [i_3 - 1] [i_3 + 2] [i_3 + 2]) : (arr_2 [i_3 + 1]))) : ((+((-(16282151955087326069ULL))))));
                                var_14 = ((unsigned long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_1]))))), (((4842450063311267240ULL) / (18446744073709551607ULL)))));
                                var_15 = (+(18446744073709551599ULL));
                                var_16 = 7056269395525513708ULL;
                            }
                            /* vectorizable */
                            for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                            {
                                var_17 = ((((/* implicit */_Bool) 2940172661062305689ULL)) ? (4382268898324224425ULL) : (979416537807078274ULL));
                                arr_22 [i_6] [1ULL] [5ULL] = (~(12631350463362024236ULL));
                            }
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) 17ULL)) ? (13913342176536945503ULL) : (var_4))))))));
                            var_19 = ((3ULL) | ((+(12507164412189729692ULL))));
                        }
                    } 
                } 
                arr_23 [9ULL] [i_1] = ((262462016575896277ULL) % ((~(min((18184282057133655346ULL), (10480343793500020340ULL))))));
            }
        } 
    } 
    var_20 *= ((unsigned long long int) ((((/* implicit */_Bool) (-(var_8)))) ? ((~(var_9))) : (2940172661062305681ULL)));
    var_21 = ((unsigned long long int) 20ULL);
}
