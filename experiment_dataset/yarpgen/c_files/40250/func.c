/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40250
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
    var_10 = max((((/* implicit */long long int) var_3)), (((long long int) max((((/* implicit */unsigned short) (short)21469)), (var_5)))));
    var_11 -= ((/* implicit */long long int) min((var_5), (((/* implicit */unsigned short) var_1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((short) (+(-3881700319249089963LL)));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 3) 
                        {
                            {
                                var_12 = ((short) ((((/* implicit */_Bool) arr_12 [i_4 + 3] [i_4 + 3] [i_4] [i_4] [i_4] [i_4 + 3])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 - 1] [i_4] [i_4] [i_4 + 2] [i_4 - 1]))));
                                var_13 = ((/* implicit */short) var_7);
                                var_14 = ((/* implicit */short) max((min((((/* implicit */long long int) var_4)), (9223372036854775799LL))), (15LL)));
                                var_15 = ((/* implicit */short) max(((+(((9223372036854775799LL) + (-15LL))))), (min((min((arr_0 [i_0]), (arr_0 [i_0]))), (((/* implicit */long long int) arr_7 [i_0] [i_0]))))));
                                var_16 = min((min((arr_3 [i_0] [i_4 + 2] [i_0]), (arr_3 [i_0] [i_4 + 2] [i_0]))), (((/* implicit */short) (!(((/* implicit */_Bool) 14LL))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2197949513728LL)) ? (((/* implicit */int) ((short) var_1))) : (((/* implicit */int) var_4))))) ? (min((((((/* implicit */_Bool) var_3)) ? (var_8) : (-15LL))), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 8983588025148451912LL))))))));
}
