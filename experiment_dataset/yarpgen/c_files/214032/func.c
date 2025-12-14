/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214032
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
    var_18 = (~(2011618570U));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [10U] [i_2] [i_3] [(unsigned char)1] [i_1] [i_2] [i_0] = (!((!((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])))))));
                                var_19 = 4229318047640160165LL;
                            }
                        } 
                    } 
                } 
                arr_13 [i_0] [(unsigned char)2] = ((/* implicit */_Bool) arr_8 [i_0 - 3] [(_Bool)1] [(_Bool)1] [i_0 - 3] [16U]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (+(max((max((var_3), (((/* implicit */long long int) -2133547419)))), (max((((/* implicit */long long int) 1262551529U)), (var_5)))))));
    var_21 = ((/* implicit */int) var_9);
}
