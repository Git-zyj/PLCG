/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199940
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
    var_18 = ((/* implicit */int) ((max((var_6), (((/* implicit */long long int) ((unsigned char) var_12))))) < (((/* implicit */long long int) ((/* implicit */int) ((short) var_6))))));
    var_19 = ((/* implicit */short) var_9);
    var_20 = ((/* implicit */unsigned short) var_10);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 ^= max((max((((/* implicit */unsigned long long int) (_Bool)0)), (5831775505381818538ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */short) arr_10 [i_1] [i_1] [i_1] [i_1]);
                            var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_9)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
