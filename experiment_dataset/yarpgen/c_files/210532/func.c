/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210532
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
    var_12 = ((/* implicit */unsigned long long int) (!((!(var_1)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 6; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_11 [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_1])) - (max((arr_4 [i_2] [i_1]), (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_2]))))))) - (arr_1 [i_1 - 1])));
                            var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((((-(((/* implicit */int) var_10)))) + (2147483647))) << (((((((/* implicit */int) var_11)) * (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) - (770000)))))) - (max((min((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])), (arr_1 [i_3]))), (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_0]))))));
                            var_14 = ((/* implicit */unsigned short) arr_7 [i_1] [i_2] [i_1] [i_1]);
                        }
                    } 
                } 
                var_15 = ((/* implicit */short) (+(((((/* implicit */long long int) max((((/* implicit */int) arr_8 [i_1] [i_1] [i_1 + 3])), (var_2)))) / (max((arr_1 [i_0]), (((/* implicit */long long int) arr_0 [i_0] [i_1 - 1]))))))));
                var_16 = ((/* implicit */short) arr_4 [i_1 + 3] [i_0]);
            }
        } 
    } 
}
