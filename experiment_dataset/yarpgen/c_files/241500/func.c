/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241500
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
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 += ((/* implicit */_Bool) (((~(((/* implicit */int) arr_1 [i_1] [i_0])))) % (arr_0 [i_0 - 1])));
                var_20 *= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)104)) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_1 [i_1] [(unsigned char)14])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (2498220814U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (arr_4 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_2] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (arr_6 [i_2]))), (((((/* implicit */_Bool) 2413815980U)) ? ((+(arr_9 [i_3] [(unsigned char)16] [i_0]))) : (arr_6 [i_2])))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_14)) & (((int) ((unsigned short) 1072395957)))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) var_17))));
    var_23 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned int) var_6)) : (var_10)));
}
