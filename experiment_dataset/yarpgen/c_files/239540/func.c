/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239540
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
    for (int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */unsigned char) (-(min((262919143U), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_0 + 1]))))));
                    arr_8 [i_0] = arr_4 [i_0] [i_1] [i_0] [i_2];
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) arr_5 [i_3] [i_3] [i_3] [i_3]))) : ((+(((/* implicit */int) ((signed char) arr_12 [i_3] [i_3])))))));
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned int) arr_0 [i_3]);
        arr_15 [i_3] [i_3] &= ((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [4U] [i_3]);
        arr_16 [i_3] [i_3] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_3])), (var_14)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [3LL]))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) var_3)) <= (arr_10 [7ULL] [i_3]))))), (var_15)));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_21 [i_4] = ((/* implicit */unsigned long long int) (+(((var_16) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4] [i_4] [(short)3] [(short)15]))) : (var_11)))));
        var_19 &= ((/* implicit */unsigned short) ((var_18) ? (arr_20 [12ULL] [i_4]) : (((/* implicit */int) arr_0 [(_Bool)1]))));
        var_20 = ((/* implicit */signed char) arr_5 [(signed char)20] [i_4] [16] [i_4]);
        var_21 = ((/* implicit */short) ((unsigned char) ((arr_4 [2] [i_4] [i_4] [i_4]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_4])))));
        arr_22 [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned long long int) var_7));
    }
}
