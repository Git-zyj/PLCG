/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195094
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
    var_18 = ((/* implicit */unsigned char) max((352252609U), (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) ^ (0LL))))));
    var_19 = ((/* implicit */short) ((((/* implicit */int) var_1)) >= (((/* implicit */int) var_16))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */_Bool) arr_1 [i_1] [i_0]);
                arr_5 [i_0] [i_1 - 1] [i_1] = ((/* implicit */unsigned char) (+(min((var_9), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_1])))))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_3] [(unsigned char)12] [i_3] = ((/* implicit */short) (-((+((-(var_12)))))));
                            arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1477184723U))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) min(((+(((((/* implicit */_Bool) 2246222039U)) ? (var_17) : (((/* implicit */long long int) 3942714687U)))))), (((/* implicit */long long int) var_3))));
}
