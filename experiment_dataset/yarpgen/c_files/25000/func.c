/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25000
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3097)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3100))) : (288230376151711743ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_13))))) : (18158513697557839890ULL))))));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(var_19))), (((/* implicit */unsigned int) (-(var_6))))))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((max((var_0), (((/* implicit */unsigned int) var_5)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((var_14) == (((/* implicit */unsigned long long int) var_17)))))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 10174958511649518854ULL)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [23ULL] [i_0] [i_2] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_0 [i_0])) / (-1LL)))), (arr_6 [i_0] [i_1]))), (((/* implicit */unsigned long long int) (unsigned char)191))));
                    arr_10 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (+(((max((1023ULL), (8274358547053586476ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_15), (((/* implicit */short) (signed char)82))))))))));
                    var_22 = arr_0 [i_0];
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) var_10))));
                }
            } 
        } 
        arr_11 [(short)4] &= ((/* implicit */unsigned long long int) var_1);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */signed char) ((unsigned int) arr_0 [i_3]));
        arr_16 [i_3] [i_3] = ((/* implicit */short) var_14);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 16; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
        {
            arr_22 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (short)28917)) || (((/* implicit */_Bool) (unsigned short)12135))))));
            arr_23 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [(signed char)12] [i_5] [i_5])) ? (((/* implicit */int) (short)22779)) : (-1358733329)))) : (((((/* implicit */_Bool) var_2)) ? (arr_19 [i_4] [i_4]) : (((/* implicit */unsigned long long int) arr_17 [i_5]))))));
        }
        arr_24 [i_4] = ((/* implicit */unsigned long long int) ((short) arr_21 [i_4]));
        arr_25 [i_4] = ((/* implicit */long long int) var_12);
    }
    var_24 = var_11;
}
