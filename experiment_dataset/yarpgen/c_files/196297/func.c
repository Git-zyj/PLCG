/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196297
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [(_Bool)1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) << (((/* implicit */int) var_3)))));
                    /* LoopSeq 4 */
                    for (unsigned int i_3 = 2; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] [i_0] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1))))) / (((long long int) (unsigned char)103))));
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0 + 1] [i_2] [i_2] [i_3 + 1]);
                        arr_15 [i_3 + 1] [(unsigned short)24] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (((((/* implicit */_Bool) arr_11 [i_0 + 2] [i_1] [i_2 - 1] [i_3 + 1])) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_2 + 1]))))) : (((unsigned int) 4153495134U))))));
                    }
                    for (unsigned short i_4 = 2; i_4 < 23; i_4 += 2) /* same iter space */
                    {
                        var_15 &= ((/* implicit */unsigned short) ((((141472162U) << (((5757670372282994834LL) - (5757670372282994826LL))))) - (min((min((654959913U), (((/* implicit */unsigned int) arr_0 [i_2])))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_0] [i_1] [20ULL] [i_4])) * (((/* implicit */int) arr_0 [i_0])))))))));
                        var_16 = ((/* implicit */short) var_3);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_0 + 2] [i_0 - 1] [i_0 + 2] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_5 + 2] [i_5 - 1]))));
                        arr_22 [i_0] [(short)22] [(short)22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [(_Bool)1] [i_5]))))) - (((unsigned int) arr_18 [i_0 + 1] [i_0] [i_0 + 1] [(_Bool)1] [i_0] [i_0 + 1]))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 23; i_6 += 2) /* same iter space */
                    {
                        var_17 &= ((/* implicit */short) ((((((/* implicit */int) ((short) 4294967295U))) + (2147483647))) << (((/* implicit */int) ((((4204724432673517048ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)256))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0 - 1] [i_0] [i_0]))))))));
                        arr_26 [i_0] [(_Bool)1] [i_2 + 1] [i_6 - 2] = (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2 + 1] [i_6] [i_2 + 2] [(short)7])) < (var_10)))) << (((((/* implicit */int) arr_2 [i_2] [i_1])) - (207)))))));
                    }
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) var_9);
    var_19 = ((/* implicit */_Bool) ((unsigned long long int) min((((-331153411992561558LL) / (((/* implicit */long long int) var_9)))), (max((var_1), (((/* implicit */long long int) var_3)))))));
}
