/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217944
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)27455)))) : (((var_3) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) << (((((/* implicit */int) (short)27455)) - (27438)))));
                arr_6 [i_0] [i_1] = ((/* implicit */int) (signed char)126);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        {
                            var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) max(((short)27455), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-127)))))))), (((unsigned short) (signed char)-127))));
                            var_13 *= ((/* implicit */unsigned int) arr_4 [i_0]);
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-27442)) ? (((/* implicit */int) (short)3161)) : (((/* implicit */int) (_Bool)1))));
                            var_15 = ((/* implicit */_Bool) max((549755813880ULL), (((/* implicit */unsigned long long int) arr_3 [i_2] [i_2]))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (int i_4 = 0; i_4 < 24; i_4 += 1) 
                            {
                                var_16 = ((/* implicit */signed char) 549755813880ULL);
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) (short)27455)) : (1233700003)));
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46552)) >> (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) ((var_9) >> (((((/* implicit */int) var_4)) + (155)))));
    var_20 = ((/* implicit */signed char) var_1);
    var_21 = ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))))), (var_9)));
}
