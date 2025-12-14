/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202996
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 17; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) 14514136679212477718ULL);
                                var_16 = arr_8 [i_1] [i_1];
                                var_17 = ((/* implicit */unsigned char) (-((~(arr_7 [i_1 - 1] [i_3])))));
                                var_18 = ((long long int) (!(((/* implicit */_Bool) (signed char)-125))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((_Bool) ((arr_6 [i_1 - 3] [15ULL] [i_2] [i_2]) & (arr_6 [i_1 - 3] [i_1 - 3] [i_2] [i_1 - 3])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_7)), (((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-25477)), (var_4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25488))) : (min((6U), (((/* implicit */unsigned int) (short)-25477))))))));
}
