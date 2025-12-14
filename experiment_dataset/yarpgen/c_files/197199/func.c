/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197199
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) var_16))));
    var_18 = ((/* implicit */unsigned long long int) (~(((((var_10) <= (var_10))) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_10))) : (((/* implicit */long long int) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_16)))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) arr_3 [i_1] [i_1 + 3] [5ULL]))));
                arr_4 [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)21060)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) : (7802070871647128480ULL)))));
                arr_5 [i_1] [i_1] = ((/* implicit */_Bool) arr_0 [i_0]);
                /* LoopNest 2 */
                for (long long int i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_20 = ((/* implicit */_Bool) ((((arr_9 [i_0] [i_0 - 1] [i_2] [i_2] [i_2 - 4]) - (arr_9 [i_0 - 1] [i_0 - 2] [i_2] [(_Bool)1] [i_2 - 1]))) / (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) 4334560411307371792LL)) && ((_Bool)0)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
