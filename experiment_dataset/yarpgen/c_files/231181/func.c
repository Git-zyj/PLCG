/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231181
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
    var_20 = ((/* implicit */long long int) var_10);
    var_21 = ((/* implicit */unsigned long long int) ((int) var_1));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((long long int) (-(((/* implicit */int) var_9))))) <= (((/* implicit */long long int) min((((/* implicit */int) (short)8657)), (var_14))))));
        arr_3 [i_0] = (_Bool)1;
        var_22 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
    }
    for (unsigned char i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (1462276756926744267ULL)))) ? (((/* implicit */long long int) (((_Bool)0) ? (78265208U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (1461293033838559498LL)))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_3] = ((/* implicit */unsigned int) (~((-(((int) var_5))))));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            {
                                arr_19 [6] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned int) ((((_Bool) var_11)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (max((var_19), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (unsigned char)175))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) * ((-(var_13))))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 28621973))));
                                arr_20 [i_1] [i_4] [i_1] [i_4] [i_5] [i_1 + 2] [i_3] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 5274217304653409785LL)) ? (var_15) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1899148097)) ? (var_1) : (((/* implicit */unsigned int) 2147483633))))) ? (-87526416) : (var_4))) + (87526419)))));
                                arr_21 [i_1] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) -1379431505)) ? (4045031407U) : ((-(1881624404U)))));
                            }
                        } 
                    } 
                    arr_22 [(unsigned short)2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1831157678)) ^ (4192492818U)))) ? ((~(var_6))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
    }
    var_24 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_8))))))));
}
