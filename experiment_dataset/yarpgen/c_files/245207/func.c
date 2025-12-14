/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245207
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
    for (unsigned long long int i_0 = 3; i_0 < 23; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */long long int) arr_1 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_4] [i_3 + 1] [i_2] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), ((~(4294967295U)))))) ? (((/* implicit */int) (unsigned short)41103)) : (((/* implicit */int) (_Bool)1))));
                                var_13 = ((/* implicit */unsigned short) arr_10 [i_0] [(_Bool)1] [i_0] [(unsigned char)17] [i_0] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
}
