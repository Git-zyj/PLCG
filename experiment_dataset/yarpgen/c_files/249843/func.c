/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249843
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
    var_13 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((short) arr_6 [i_1] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_1])) * (((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_6 [i_1] [10]), (var_4))))) : ((-(3461273957707100669LL))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 2] [i_1] [(_Bool)1])) >> (((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [i_0])) - (219))))))));
                    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_1] [i_2])) : (((/* implicit */int) var_7))))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 ^= ((/* implicit */unsigned long long int) 33554432);
                                arr_13 [i_1] [18] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (-((+(((unsigned int) arr_10 [i_1] [i_1] [i_2] [i_3] [i_4] [i_4]))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_0 - 2])))) || (((((/* implicit */_Bool) arr_1 [i_0 + 1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_0 + 2] [i_2]))))));
                    var_18 ^= ((/* implicit */signed char) ((unsigned int) (~(((/* implicit */int) ((unsigned char) arr_3 [(short)6]))))));
                }
            } 
        } 
    } 
}
