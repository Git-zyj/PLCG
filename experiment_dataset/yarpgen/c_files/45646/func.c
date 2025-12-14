/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45646
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
    var_14 -= ((/* implicit */int) var_6);
    var_15 = ((/* implicit */unsigned long long int) var_5);
    var_16 = ((/* implicit */short) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [i_0] [(short)1] [i_1]) | (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_1]))))) ? (var_7) : (min((((/* implicit */int) var_0)), (var_5)))))), (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0] [i_0 - 1])) ? (min((15879877656473103222ULL), (15879877656473103218ULL))) : (((/* implicit */unsigned long long int) (+(var_11))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_17 = arr_1 [i_2] [i_3];
                                arr_14 [i_0 - 2] [i_2] [i_3] [i_4] = ((/* implicit */short) 1654498433);
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 114523790)) ? (arr_5 [(_Bool)0] [(_Bool)0]) : (var_3)))) ? (((/* implicit */int) ((arr_8 [i_0 - 3] [1] [(signed char)13] [i_1] [i_1] [i_1]) == (arr_8 [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])))) : (((((/* implicit */_Bool) ((arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [i_0] [i_1]) / (var_11)))) ? (arr_10 [i_0 + 1] [i_0 + 1] [20ULL] [(signed char)20] [i_0 - 1] [i_0 - 3] [i_0 - 1]) : (var_8)))));
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_11 [(short)12] [i_0 - 3]), (arr_11 [14] [i_0 + 1])))))))));
                var_20 = ((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_1]);
            }
        } 
    } 
}
