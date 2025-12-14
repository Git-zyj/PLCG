/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228552
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 1634426842U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_12 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 2660540454U)) && (((/* implicit */_Bool) (signed char)80))));
                                var_13 = ((/* implicit */_Bool) max((((long long int) min((var_5), (var_11)))), (((/* implicit */long long int) var_0))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */unsigned char) ((int) (signed char)126));
}
