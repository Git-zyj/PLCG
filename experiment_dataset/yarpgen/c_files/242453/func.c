/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242453
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
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 11; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_1] = ((/* implicit */int) var_5);
                            arr_10 [i_0] [i_1 - 1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (2339390221U)));
                            var_12 += ((/* implicit */int) ((unsigned int) (_Bool)1));
                        }
                    } 
                } 
                arr_11 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(1523233630U)))) ? (((/* implicit */int) (short)21808)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || ((_Bool)1))))));
            }
        } 
    } 
    var_13 ^= ((/* implicit */signed char) var_0);
    var_14 = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) (~(9469569637099983626ULL)))))));
    var_15 = ((/* implicit */_Bool) var_5);
    var_16 = ((/* implicit */signed char) var_6);
}
