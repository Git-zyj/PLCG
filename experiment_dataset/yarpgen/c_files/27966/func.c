/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27966
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
    var_15 = ((/* implicit */_Bool) (-((+(((((/* implicit */_Bool) 0U)) ? (2339373344U) : (((/* implicit */unsigned int) 0))))))));
    var_16 = ((/* implicit */short) ((unsigned int) min((min((((/* implicit */int) (unsigned char)0)), (0))), ((+(var_5))))));
    var_17 = ((/* implicit */short) max((((/* implicit */int) (signed char)4)), (0)));
    var_18 = ((/* implicit */unsigned int) min(((+(((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (10104276502610870881ULL))))), (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2 + 1])) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_2 + 1])) : (((/* implicit */int) var_4))))));
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (+(max((0), (((/* implicit */int) ((short) (short)-16476)))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32764)) ? (10104276502610870877ULL) : (((/* implicit */unsigned long long int) 21)))))));
                        var_21 = ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) 0))))))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_2] [(unsigned char)19])) : (((/* implicit */int) ((short) var_0)))))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_0 + 1] [i_0]);
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_5))));
                        var_23 = min(((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2 + 3] [i_2])))), (min((-22), (2))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) var_9);
                        var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */int) (unsigned char)37)), (0))), (((/* implicit */int) (unsigned char)22)))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) 4294967295U))));
        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1455195151)) ? (((/* implicit */int) (short)-2242)) : (21)))), (min((743308955U), (((/* implicit */unsigned int) arr_0 [(unsigned char)4])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((short) (unsigned char)158));
        var_28 = ((var_6) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_5] [i_5 + 1] [i_5] [(_Bool)1])))))));
        var_29 = ((/* implicit */int) ((long long int) arr_17 [i_5]));
        var_30 = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_9)), (min((((/* implicit */unsigned char) (_Bool)1)), (arr_1 [i_5] [i_5])))));
        arr_19 [i_5] &= ((short) arr_6 [i_5] [i_5 + 1] [i_5] [16LL]);
    }
}
