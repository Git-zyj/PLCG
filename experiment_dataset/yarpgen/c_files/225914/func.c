/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225914
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [i_3] [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */int) (-(min((arr_3 [i_0] [i_2]), (((/* implicit */unsigned long long int) var_14))))));
                            arr_14 [i_0] [i_1] [i_1] [(_Bool)1] = ((/* implicit */signed char) (~(((/* implicit */int) var_15))));
                            arr_15 [i_2] [i_2] [i_2] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)255))));
                            arr_16 [i_2] &= ((/* implicit */unsigned long long int) var_11);
                        }
                    } 
                } 
                arr_17 [i_0] [i_1] [i_0] = (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)92)))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) var_11))));
}
