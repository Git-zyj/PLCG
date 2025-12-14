/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221381
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
    var_11 += ((/* implicit */unsigned char) min((((/* implicit */int) var_9)), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))));
    var_12 = ((/* implicit */unsigned short) max((var_12), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4709454491115590375LL))))), ((unsigned short)43757)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) arr_2 [i_0] [i_0] [i_0]))));
                var_14 = ((/* implicit */signed char) arr_4 [i_0 - 1]);
                arr_6 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */signed char) (_Bool)1)), ((signed char)22))))));
                arr_7 [i_0] = ((/* implicit */long long int) min((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)41)))))));
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 14; i_2 += 4) 
                {
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (int i_4 = 3; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_10 [(short)8] [i_1 + 2]))));
                                var_16 &= ((/* implicit */long long int) max(((-((+(((/* implicit */int) arr_0 [i_4])))))), (((/* implicit */int) arr_4 [i_1 - 1]))));
                                var_17 = ((/* implicit */signed char) ((unsigned short) ((short) min(((short)32757), (((/* implicit */short) (signed char)22))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
