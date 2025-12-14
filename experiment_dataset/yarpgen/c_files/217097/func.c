/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217097
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
    var_20 = ((/* implicit */unsigned short) var_2);
    var_21 = ((/* implicit */short) ((9223372036854775807LL) * (((/* implicit */long long int) ((/* implicit */int) var_17)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    var_22 = ((/* implicit */signed char) arr_8 [i_0] [i_1] [i_2] [i_2]);
                    var_23 = ((/* implicit */signed char) (short)181);
                }
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) var_4)) << (((((/* implicit */int) var_15)) - (35227)))));
                arr_10 [i_0] [i_0] = ((((/* implicit */_Bool) var_0)) ? (var_2) : (((((/* implicit */int) (short)-22063)) - (((/* implicit */int) min((arr_3 [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_6 [i_0] [i_1]))))))));
            }
        } 
    } 
}
