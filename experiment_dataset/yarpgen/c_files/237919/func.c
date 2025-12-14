/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237919
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
    var_19 = ((/* implicit */unsigned char) ((int) var_8));
    var_20 = ((/* implicit */_Bool) var_16);
    var_21 = ((/* implicit */signed char) (-(var_8)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_22 = (~((~(((/* implicit */int) arr_4 [i_0])))));
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-6)) ? (1326916450719616521LL) : (((/* implicit */long long int) ((/* implicit */int) (short)5)))))) ? (arr_6 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (signed char i_3 = 4; i_3 < 21; i_3 += 2) 
                    {
                        {
                            arr_12 [i_0] [i_1 + 2] [i_2] [i_0] [i_0] [i_1 + 1] = ((/* implicit */long long int) ((signed char) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_17)) ? (arr_1 [i_1]) : (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_13 [i_0] = ((/* implicit */int) ((unsigned short) (~(((((/* implicit */int) var_13)) % (((/* implicit */int) arr_7 [i_1] [i_2])))))));
                            arr_14 [i_0] [i_1 + 1] [14ULL] [14ULL] [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) (~(arr_9 [i_0] [i_0] [i_2])));
                        }
                    } 
                } 
            }
        } 
    } 
}
