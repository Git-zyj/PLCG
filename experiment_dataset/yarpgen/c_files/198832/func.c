/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198832
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
    var_10 = ((/* implicit */_Bool) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [(unsigned short)4] = ((/* implicit */long long int) ((_Bool) (~((-(arr_5 [i_0] [i_1] [i_0]))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_2 [i_0]))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_5 [i_2] [i_2] [i_0]))));
                    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_3))));
                    arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_5 [i_0] [i_2] [13LL]))));
                }
                for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    arr_12 [i_0] [i_0] [i_3] [i_3] = ((short) (~(arr_10 [i_0])));
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((signed char) var_4)))));
                }
                for (long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    arr_15 [i_0] [i_1] [i_0] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0])))))));
                    arr_16 [i_0] = ((/* implicit */int) var_4);
                }
                var_15 = (-((~(arr_5 [1] [i_1] [i_1]))));
            }
        } 
    } 
}
