/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49504
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
    var_18 += var_9;
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_19 ^= ((/* implicit */short) ((signed char) (short)-8136));
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (unsigned char i_3 = 3; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_11)) ? (var_0) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_11))))), (((/* implicit */unsigned int) ((signed char) 2077680873)))));
                                var_21 = ((/* implicit */int) var_5);
                                var_22 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1])) ? (((/* implicit */int) arr_4 [i_4 + 1])) : (((/* implicit */int) arr_4 [i_4 + 2]))))) % ((((_Bool)1) ? (16069825420341464926ULL) : (((/* implicit */unsigned long long int) 4611686018427387903LL)))));
                                var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_1 [i_3 - 1]), (var_4))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
