/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247309
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
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_11 = ((/* implicit */unsigned long long int) arr_5 [i_0] [(short)17] [i_0]);
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 19; i_4 += 4) 
                            {
                                var_12 = ((/* implicit */long long int) max((var_12), (var_4)));
                                var_13 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_6)))))));
                            }
                        }
                    } 
                } 
                var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((arr_5 [i_0] [13LL] [i_0]), (((/* implicit */int) (unsigned short)3524))))), (((((/* implicit */_Bool) (short)3319)) ? (var_2) : (((/* implicit */long long int) arr_5 [(short)0] [7ULL] [i_0]))))));
                var_15 ^= ((/* implicit */unsigned int) (+((~(((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)91)) - (91)))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) ((unsigned int) var_9));
}
