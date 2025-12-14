/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219616
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned int) var_13)))))))), ((~(((((/* implicit */int) (signed char)120)) << (((2410104991U) - (2410104973U)))))))));
    var_15 *= ((/* implicit */signed char) var_11);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_10 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_1 [i_1] [i_2])))));
                    var_16 = ((((/* implicit */_Bool) ((signed char) 1884862305U))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_13))) && (((33554416U) != (((/* implicit */unsigned int) ((/* implicit */int) (signed char)75))))))))) : (((((/* implicit */_Bool) ((0U) << (((((/* implicit */int) (signed char)-1)) + (28)))))) ? (arr_4 [i_1] [i_1] [i_0]) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [22U] [22U])) ? (arr_4 [i_1] [(signed char)19] [i_2]) : (arr_8 [i_0] [i_0] [i_1] [i_0]))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)60)) * (((/* implicit */int) (signed char)-127))))) ? (max((((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2]))) | (910707905U))), (((/* implicit */unsigned int) ((arr_1 [i_4] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))) : (max((2560272586U), (arr_0 [i_3]))))))));
                                var_18 ^= ((/* implicit */signed char) 33554411U);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
