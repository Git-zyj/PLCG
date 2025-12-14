/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249065
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
    var_14 = ((/* implicit */long long int) var_7);
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [(unsigned char)13] = (+(((((/* implicit */int) arr_5 [i_0 - 2] [i_1])) / (((/* implicit */int) arr_5 [i_0 - 1] [i_2 + 3])))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_1 [i_0 - 2] [i_0]) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 2] [i_0]))))), (((long long int) arr_1 [i_0 - 2] [i_0]))));
                    arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) - (((var_13) ^ (((/* implicit */long long int) -1652220749)))))) / (((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_2])) >= (((/* implicit */int) (unsigned short)651)))) ? (((/* implicit */int) ((short) arr_3 [i_0]))) : (((/* implicit */int) arr_2 [i_0])))))));
                    arr_11 [i_1] [(signed char)20] [i_2 - 1] [i_2 - 1] &= ((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) min(((signed char)5), (((/* implicit */signed char) arr_1 [i_0] [i_1]))))))), ((~(((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) (~((-(var_0)))));
    var_16 = (~(((((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_8)))) & ((~(var_2))))));
}
