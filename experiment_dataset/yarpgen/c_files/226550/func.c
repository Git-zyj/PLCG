/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226550
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
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */int) max((var_6), ((_Bool)1)))) >> ((((~(var_3))) - (5957608603704024395LL)))))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (short)-32754))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)31104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)31104))) : (2360028897U)))) ? (max((2602745561U), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_9))))))));
    var_18 ^= ((/* implicit */unsigned char) (~((-(((/* implicit */int) max(((_Bool)1), (var_13))))))));
    var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (min(((-(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_20 ^= ((((/* implicit */_Bool) max(((((_Bool)1) ? (((/* implicit */int) (short)31111)) : (((/* implicit */int) (short)31115)))), ((-(((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 + 1]))))) : (max((min((9223372036854775807LL), (((/* implicit */long long int) (short)-31112)))), (((/* implicit */long long int) ((signed char) arr_7 [10]))))));
                                arr_15 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)15812))));
                                arr_16 [i_0] [i_1] [(short)14] [i_2] [i_1] [(short)12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (-2160979463397942227LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    arr_17 [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)4))) & (8787503087616LL)));
                }
            } 
        } 
    } 
}
