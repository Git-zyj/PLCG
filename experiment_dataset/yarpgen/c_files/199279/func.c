/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199279
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
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_2))))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [(unsigned char)13]) > (((((/* implicit */_Bool) (short)-7706)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned char)19] [i_1]))) : (arr_2 [i_0])))))))));
                                arr_15 [i_2] = ((/* implicit */unsigned char) (+(603821518U)));
                                arr_16 [(signed char)9] [i_0] [i_2] [i_1] [i_2 + 1] [(_Bool)1] [i_4] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) max(((unsigned short)40321), (((/* implicit */unsigned short) (short)-8123))))) ? (536793800U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_2] = ((/* implicit */long long int) arr_1 [i_0] [i_1]);
                    arr_18 [i_2] = ((/* implicit */signed char) max((((arr_9 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [i_2]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) arr_11 [i_0] [i_2]))))) : (536793800U))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 4294807420U))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (var_6)));
}
