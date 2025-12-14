/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50263
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
    var_12 = ((/* implicit */int) var_2);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 *= ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0 - 2])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1])) : (var_8))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 1) 
                        {
                            {
                                var_14 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8545840727835135114LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123))) : (var_9)))) ? (((((/* implicit */_Bool) (unsigned char)107)) ? (11724094321846159729ULL) : (11724094321846159745ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_3 - 1])))))) ? (arr_10 [i_1] [i_0 - 2] [i_3 + 1]) : (max((((/* implicit */unsigned long long int) (unsigned short)49363)), (6722649751863391886ULL)))));
                                var_15 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_3 - 1] [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_3 + 1] [i_3 + 1] [i_4])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_3 - 1] [i_3 - 1] [i_4])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_2] [i_2])))))));
                            }
                        } 
                    } 
                    arr_14 [i_2] = ((/* implicit */short) (unsigned char)107);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) 6722649751863391887ULL);
}
