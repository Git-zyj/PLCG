/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223363
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
    var_12 = ((/* implicit */int) var_0);
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */_Bool) ((long long int) arr_4 [i_1]));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_0] [i_0] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */int) arr_1 [i_1 + 4])) * (((/* implicit */int) arr_1 [i_1 + 4]))))));
                            arr_15 [i_0] [9LL] [i_0] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)7] [i_0 + 1] [i_0]))) / (var_0)))) ? (min((((/* implicit */unsigned int) (unsigned char)21)), (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_11))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
