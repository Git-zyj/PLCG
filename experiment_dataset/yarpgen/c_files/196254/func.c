/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196254
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
    var_14 = ((/* implicit */long long int) var_8);
    var_15 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_12)))) ? (((/* implicit */int) ((unsigned char) var_12))) : (((/* implicit */int) ((signed char) var_0)))))) > (((((/* implicit */long long int) ((/* implicit */int) var_4))) % (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (var_2)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */long long int) ((unsigned char) (~(264254329564861009LL))));
                /* LoopNest 3 */
                for (short i_2 = 3; i_2 < 23; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) min(((~(max((arr_1 [i_2]), (((/* implicit */long long int) arr_11 [i_4] [i_1] [i_4] [(unsigned char)23])))))), (((/* implicit */long long int) max(((+(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) arr_5 [i_0 - 1] [i_4])))))));
                                arr_17 [i_0] &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_13 [i_0 + 1] [(unsigned char)18])))))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(2181843386368LL)))))));
                                arr_18 [i_4] [i_3] [12U] [i_2] [i_1] [(unsigned char)22] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) arr_4 [i_0 - 2])), (var_9)))) & (((arr_0 [i_3]) ? (((/* implicit */int) arr_9 [i_4] [i_3] [i_2] [i_1])) : (((/* implicit */int) arr_9 [i_3] [i_3] [i_2] [i_3]))))))) <= (((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_4] [i_2] [i_1] [i_0]))))) ? (((arr_1 [i_1]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_4] [i_1] [i_1] [i_3]))))) : (((/* implicit */long long int) ((arr_3 [i_0] [i_1]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(signed char)0]))))))))));
                                var_18 = ((/* implicit */long long int) (((((~(((/* implicit */int) var_13)))) & (((/* implicit */int) ((short) var_1))))) ^ ((~(((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_4] [i_3] [i_0 - 1] [i_0 - 1])), (var_0))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) & (((/* implicit */int) var_9)))) | (((/* implicit */int) var_9))));
}
