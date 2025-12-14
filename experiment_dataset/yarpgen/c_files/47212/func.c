/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47212
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) min((var_11), (var_4))))));
    var_15 = ((/* implicit */int) (!((!(((/* implicit */_Bool) -97165596))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) (~((~((~(arr_1 [i_1])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_17 = ((((/* implicit */unsigned long long int) var_6)) < (872830687809802042ULL));
                            var_18 = ((/* implicit */int) max((var_18), (max((((/* implicit */int) arr_3 [i_0 - 1] [i_0] [19])), (((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8160))) | (17573913385899749573ULL))))))));
                            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) (~(arr_5 [i_3] [i_1 - 1]))))), (872830687809802042ULL))))));
                            var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_3 - 3] [i_2 - 2] [i_2 + 2] [i_1] [i_1] [0])), (var_3))))) & (var_0))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
