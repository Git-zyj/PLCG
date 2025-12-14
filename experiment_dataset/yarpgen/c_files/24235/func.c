/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24235
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] = ((/* implicit */unsigned int) (short)-6333);
                                var_17 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -289375501)))) != (1937810877360446429LL)));
                                var_18 = ((/* implicit */unsigned short) arr_5 [i_0]);
                                arr_13 [i_2] [i_1] [i_2] [i_1 + 1] [i_4] [i_1 - 1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_14 [(unsigned short)11] [(unsigned short)11] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 2] [i_2])) == ((-(((/* implicit */int) arr_9 [i_2] [i_1] [i_0] [i_0])))))))) * (1937810877360446429LL)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) var_10))));
}
