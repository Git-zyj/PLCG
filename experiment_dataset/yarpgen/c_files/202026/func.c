/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202026
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
    var_19 ^= ((/* implicit */int) var_16);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 6; i_4 += 2) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_18))));
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */unsigned long long int) 4294967291U)), (12968017318726744709ULL)))))) ? (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [i_0 + 2]))) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3]))));
                                arr_14 [i_0 - 3] [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)200))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0]))));
                    arr_15 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(arr_7 [i_0] [(unsigned char)2] [i_2] [i_0] [i_0] [i_1]))) << (((((/* implicit */int) arr_9 [i_0 + 2] [i_1] [i_1] [i_1])) - (169)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((arr_5 [i_0 - 3] [i_0] [i_0]) << (((arr_5 [(_Bool)1] [i_0] [i_2]) - (1413886443U)))))));
                    arr_16 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_11 [(unsigned char)3] [i_0 - 3] [i_0 - 3] [i_0 - 2] [i_2]))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) min((((/* implicit */short) (_Bool)0)), ((short)-31239)))) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0] [i_0 - 3] [i_0])) - (106)))))) : ((+(12968017318726744689ULL)))));
                }
            } 
        } 
    } 
}
