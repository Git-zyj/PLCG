/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222809
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) (+(var_1)));
                                var_17 ^= min((((8191) << (((((/* implicit */int) max((((/* implicit */short) var_9)), ((short)-13569)))) - (223))))), (max((((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_4 [(_Bool)1] [(_Bool)1])) - (56405))))), (((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 21; i_5 += 2) 
                    {
                        for (int i_6 = 1; i_6 < 23; i_6 += 1) 
                        {
                            {
                                arr_19 [(short)20] [i_2] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_14);
                                arr_20 [i_1] [i_0] [15] [i_5] [i_6 - 1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_5 [i_6] [i_2] [i_1 - 1])) : (((/* implicit */int) min(((short)20261), (((/* implicit */short) arr_5 [19] [i_1 - 1] [i_5 - 3])))))));
                                var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-13569))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
