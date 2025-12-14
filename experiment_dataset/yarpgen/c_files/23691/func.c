/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23691
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
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */long long int) (~((+(((arr_0 [i_0] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))))))));
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_15);
                                var_21 = ((/* implicit */unsigned long long int) ((_Bool) (signed char)88));
                                arr_14 [i_4] [i_3] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)108);
                                var_22 ^= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_0]) - (((/* implicit */long long int) 1918299335U))))))))) * (max((((((/* implicit */long long int) ((/* implicit */int) (signed char)-73))) & (-930099085213699835LL))), (max((((/* implicit */long long int) var_14)), (arr_5 [i_2]))))));
                                arr_15 [i_1] [(unsigned short)14] [i_3] [i_4] = ((/* implicit */short) (+(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0]))) >= (arr_4 [i_1] [i_4 - 1])))) & (((/* implicit */int) ((unsigned short) -257164111)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_23 &= var_11;
    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_9))));
}
