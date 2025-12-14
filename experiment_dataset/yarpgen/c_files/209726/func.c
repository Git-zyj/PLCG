/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209726
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
    var_17 = ((/* implicit */unsigned long long int) var_9);
    var_18 = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (signed char)15)), (647302195U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 22; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_0] = ((/* implicit */int) ((min((3647665101U), (((/* implicit */unsigned int) -386305913)))) << (((var_12) + (2022136329)))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_3 - 1] [i_4])) || (((/* implicit */_Bool) arr_12 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))))));
                arr_14 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((-5491675056605435477LL), (((/* implicit */long long int) var_13))))) ? (((/* implicit */int) ((unsigned char) 386305912))) : (((/* implicit */int) arr_12 [i_1 + 1] [i_1 + 1]))))), (max((-5691160728226656090LL), (((/* implicit */long long int) arr_2 [i_1 - 3] [i_1 + 1] [i_0]))))));
            }
        } 
    } 
}
