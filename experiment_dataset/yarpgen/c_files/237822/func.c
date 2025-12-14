/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237822
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */_Bool) 8972014882652160ULL);
                    arr_7 [i_0] [i_1] = ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? ((~(var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_2 + 1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned int) var_10);
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_11 [i_3] [i_3]);
            }
        } 
    } 
}
