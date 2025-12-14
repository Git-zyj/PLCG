/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192004
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192004 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192004
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
    var_13 |= max((var_5), (var_5));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_10 [7U] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) var_3);
                            var_14 = ((/* implicit */signed char) ((17762235242483528615ULL) == (arr_0 [i_2])));
                            var_15 = ((unsigned long long int) var_6);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] [i_1] |= ((/* implicit */unsigned int) (unsigned char)2);
                var_16 = ((/* implicit */unsigned char) (signed char)0);
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_3);
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
}
