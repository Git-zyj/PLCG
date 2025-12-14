/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204471
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (((((_Bool)1) || ((_Bool)1))) ? (((unsigned long long int) arr_2 [i_1])) : (((unsigned long long int) arr_4 [i_1] [i_0] [i_0])));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) arr_0 [8ULL]))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_15 [i_4 - 1] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_5 [i_2 - 1]) < (arr_14 [i_2] [i_3] [i_4 + 1]))))));
                    var_21 -= arr_7 [i_2] [i_3];
                    arr_16 [i_2] [4LL] [i_3] [i_2] = arr_10 [i_4 - 1] [i_2] [(_Bool)1];
                    arr_17 [i_2] [i_3] [i_3] = (+(var_3));
                }
            } 
        } 
    } 
}
