/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29306
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
    var_15 = ((/* implicit */int) (~(max((12397862594024702296ULL), (((/* implicit */unsigned long long int) ((var_10) ? (((/* implicit */int) var_7)) : (var_3))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) (signed char)-38);
                arr_4 [i_0] = ((/* implicit */long long int) ((unsigned short) var_6));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_10);
                            var_18 = ((/* implicit */short) min((9223372036854775807LL), (-5247373890446422475LL)));
                            arr_11 [i_0] [4LL] [i_1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 13565172257654521706ULL))));
                        }
                    } 
                } 
            }
        } 
    } 
}
