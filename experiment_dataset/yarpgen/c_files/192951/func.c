/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192951
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
    for (signed char i_0 = 4; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    arr_7 [i_1] = var_9;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                                arr_14 [i_3] [(signed char)1] [i_2] [i_0] [i_3] = ((/* implicit */signed char) min((arr_9 [i_0] [i_3] [i_3] [i_3]), (arr_6 [i_3] [i_1] [i_0])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = var_17;
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) != (((/* implicit */int) ((((/* implicit */int) var_4)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) min(((signed char)67), (var_17))))))) ? (min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) var_12)))) : ((-(((((/* implicit */int) (signed char)108)) * (((/* implicit */int) (signed char)-124))))))));
    var_22 = ((/* implicit */signed char) var_8);
}
