/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237381
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
    var_12 = ((/* implicit */long long int) ((short) -6466111398728317426LL));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) max((var_9), (((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_2]))) - (0LL))))));
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)21198))))) : (-9223372036854775789LL))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */short) var_8);
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_3] [i_3] = 0LL;
                    arr_19 [12LL] [i_4] = arr_17 [i_3] [i_4] [i_4];
                    arr_20 [i_4] [i_4] = ((/* implicit */short) min((((/* implicit */long long int) ((short) arr_11 [(short)10]))), (((long long int) var_0))));
                }
            } 
        } 
    } 
}
