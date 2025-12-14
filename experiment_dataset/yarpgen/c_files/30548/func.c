/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30548
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 4; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)8295);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) (short)-20311)) : (arr_1 [i_0 - 2] [i_0 + 1]))), (((/* implicit */int) ((((long long int) arr_11 [i_0] [i_3] [i_2] [i_2] [i_2])) <= (((/* implicit */long long int) ((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_1)))))))))))));
                                var_15 = ((/* implicit */short) var_1);
                                var_16 *= ((/* implicit */unsigned long long int) ((short) (((_Bool)1) ? (((/* implicit */int) (short)20315)) : (((/* implicit */int) (unsigned char)255)))));
                            }
                        } 
                    } 
                    arr_13 [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    var_17 = ((/* implicit */unsigned int) (~((-(((/* implicit */int) var_10))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (4294967283U) : (10U)))) : (var_13))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) var_1)))))))))));
}
