/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44934
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
    var_14 = ((/* implicit */short) min((((/* implicit */long long int) ((_Bool) min((4294967271U), (4294967271U))))), (min((((/* implicit */long long int) ((unsigned char) var_5))), (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_15 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((_Bool) 35U)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_7)), (var_3))))) : (((25U) ^ (12U)))))) ? (min((((/* implicit */long long int) 33U)), (min((((/* implicit */long long int) 4294967271U)), (var_8))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967271U)) ? (((/* implicit */int) ((unsigned short) var_8))) : (((/* implicit */int) min((var_1), (((/* implicit */signed char) var_6))))))))));
                            var_16 = ((/* implicit */unsigned short) ((min((((4294967268U) + (4294967271U))), (4294967247U))) == (4294967271U)));
                            arr_12 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) 11U);
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) 4294967269U))));
                            arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) min((((unsigned int) ((int) 33U))), (4294967271U)));
                        }
                    } 
                } 
                var_18 = ((/* implicit */long long int) var_9);
                arr_14 [3] = ((/* implicit */short) ((var_9) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) 4294967285U))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) var_5))))) : (var_4)));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_3);
}
