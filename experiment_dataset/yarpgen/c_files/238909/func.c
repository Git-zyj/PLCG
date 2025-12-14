/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238909
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1 - 1]))))))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1 + 1] [i_2] = ((/* implicit */short) ((((((/* implicit */int) ((var_13) < (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) < (((((/* implicit */int) var_4)) & (((/* implicit */int) var_4)))))) ? (((/* implicit */int) ((arr_8 [i_1 - 1] [i_2 + 2] [i_2] [i_3]) < (arr_8 [i_1 - 1] [i_2 - 1] [i_2 + 1] [i_2])))) : (var_6)));
                            arr_12 [i_0] [i_1 - 2] [i_0] [i_3] [i_1 - 1] [i_0] = ((/* implicit */signed char) var_0);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        {
                            arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((arr_9 [i_0]) | (arr_2 [i_1 - 1] [i_0])))));
                            arr_20 [i_0] [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((var_13) & (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_4] [i_1] [i_5] [i_5])))) << (((max((min((((/* implicit */unsigned int) arr_2 [i_4] [i_5])), (var_13))), (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))) - (3700714817U)))));
                            var_16 = min(((+(17316940881370846601ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1] [i_5]))) >= (var_5))))) / (min((((/* implicit */long long int) var_14)), (-1LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */int) (~(((((/* implicit */_Bool) 15530601610995707215ULL)) ? (var_7) : (68719476735ULL)))));
}
