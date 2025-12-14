/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210787
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
    var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)59)) / (((/* implicit */int) var_10)))), (((/* implicit */int) var_0)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_19 |= ((/* implicit */signed char) var_15);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 4; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) 89441854991492459ULL);
                                var_21 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((arr_3 [i_0]) - (((/* implicit */int) arr_8 [i_2]))))) & (max((((/* implicit */unsigned long long int) var_6)), (var_9)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)201)) : (((/* implicit */int) (short)-11782)))) - (((var_12) / (((/* implicit */int) arr_12 [i_4] [i_2] [i_0])))))))));
                            }
                        } 
                    } 
                    var_22 *= ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_6 [i_2 - 1] [i_2 - 1] [i_1 + 2]))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)201)) / (var_4))) / (max((var_4), (((/* implicit */int) var_11))))))) ? (var_15) : ((~((-(var_15)))))));
}
