/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49167
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) max((2885212047U), (((/* implicit */unsigned int) ((signed char) max((((/* implicit */long long int) arr_1 [i_0])), (arr_3 [i_1] [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 9; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) 3942460273U)), (arr_11 [i_0] [i_1] [i_0] [i_3 + 2]))) << ((((~(((/* implicit */int) (short)-2505)))) - (2482)))));
                            arr_12 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned long long int) (signed char)-26);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((unsigned int) ((((/* implicit */long long int) -536898349)) * (-1LL)));
    var_21 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 0LL)), (18296377861173126188ULL)));
}
