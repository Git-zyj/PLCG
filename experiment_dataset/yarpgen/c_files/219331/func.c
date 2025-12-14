/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219331
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_12 = ((((/* implicit */_Bool) arr_5 [i_2 - 1] [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                    var_13 &= arr_2 [i_1];
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((var_7) ? (8291534603051083174LL) : (((/* implicit */long long int) ((/* implicit */int) (short)17226))))) + (-8291534603051083183LL)));
                                var_14 = ((/* implicit */short) ((arr_3 [i_0 - 1]) <= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_0 - 1] [i_2 + 2] [i_3] [i_4])))));
                                var_15 |= ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (arr_9 [i_0 - 1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [i_1] [i_2] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), ((+(((/* implicit */int) var_10))))));
    }
    var_17 = ((/* implicit */unsigned short) var_3);
}
