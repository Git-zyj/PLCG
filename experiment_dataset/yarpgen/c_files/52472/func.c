/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52472
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
    for (short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2]))))), (max((arr_4 [i_0 - 2] [i_0] [i_0 - 1]), (arr_4 [i_0] [i_1] [i_2])))));
                    arr_8 [i_0 - 2] [i_1] [i_1] [i_2] = ((/* implicit */int) var_8);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) max((var_8), (var_8))))));
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            {
                arr_13 [i_3] = ((/* implicit */int) var_7);
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 17; i_5 += 3) 
                {
                    for (short i_6 = 1; i_6 < 18; i_6 += 3) 
                    {
                        {
                            arr_19 [i_3] = ((/* implicit */unsigned int) arr_9 [i_3]);
                            var_12 = ((/* implicit */signed char) var_7);
                            var_13 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_1)) ? (1286143290583986111LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3 + 2])))))));
                        }
                    } 
                } 
                arr_20 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_0 [i_3 + 4])), ((+(((/* implicit */int) arr_7 [i_3 + 4]))))));
                arr_21 [i_3] = arr_11 [i_3 + 1];
            }
        } 
    } 
}
