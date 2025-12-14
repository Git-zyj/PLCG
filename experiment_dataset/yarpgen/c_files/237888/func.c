/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237888
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
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                arr_12 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0 + 1])), (-677080036)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3912485981U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) : (-3189248750507281022LL)))) ? ((~(((/* implicit */int) (unsigned short)33323)))) : ((+(((/* implicit */int) var_9)))))) : (min((((/* implicit */int) (unsigned short)55233)), (-677080036)))));
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_1] = ((/* implicit */unsigned int) arr_3 [i_0]);
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_0 - 2] = ((unsigned int) ((0U) < (2639884198U)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */int) min((((/* implicit */long long int) 0U)), (7407267837906751212LL)));
    var_12 = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */int) (unsigned char)7)) < (((/* implicit */int) var_3))))))));
}
