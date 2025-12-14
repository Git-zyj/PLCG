/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22077
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22077 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22077
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((long long int) arr_0 [i_0]))) ? (((/* implicit */long long int) var_4)) : (arr_1 [i_0]))), (30LL)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_8 [2LL] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_14 [i_3] [i_3] [4] [i_3] [i_3] [4] [(signed char)21] = ((max((((/* implicit */unsigned long long int) arr_3 [i_4 - 1] [i_2 + 1] [(unsigned short)15])), (12800179754389095919ULL))) >> ((((((_Bool)1) ? (((/* implicit */long long int) 4027135557U)) : (arr_13 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]))) - (4027135518LL))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) - (-31LL)))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_2] [17LL] [17LL] [17LL]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_3] [(unsigned short)5])))))) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (!((_Bool)1))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] |= ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                    arr_16 [(_Bool)1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_5 [19ULL] [i_0])))))) | (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    }
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned short) (~(((/* implicit */int) var_3))))))));
}
