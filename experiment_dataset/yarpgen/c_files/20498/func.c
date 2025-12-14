/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20498
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
    var_18 = ((short) (_Bool)1);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        {
                            arr_8 [i_3] [(signed char)16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((signed char) arr_7 [i_2] [i_2] [i_2 + 1] [i_2 + 2]))) : (max((arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 2] [i_3]), (((/* implicit */int) var_7))))));
                            arr_9 [(short)14] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) var_15);
                            arr_10 [i_3] [i_3] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) 1991655407)) + (max((min((((/* implicit */long long int) var_6)), (var_4))), (((/* implicit */long long int) arr_1 [i_2 + 1]))))));
                        }
                    } 
                } 
                arr_11 [(_Bool)1] = ((/* implicit */short) var_7);
                arr_12 [i_0] [i_1] = (-(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) (unsigned short)65297))))))));
            }
        } 
    } 
}
