/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224351
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
    var_15 = ((/* implicit */unsigned char) min((var_15), (var_9)));
    var_16 = ((int) var_4);
    var_17 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_11), (((/* implicit */int) ((((/* implicit */int) (unsigned short)65529)) < (var_3))))))), (max((((/* implicit */unsigned long long int) min(((unsigned short)6), (var_5)))), (var_12)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) var_8);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                {
                    arr_9 [(short)0] [(short)0] = ((/* implicit */unsigned short) arr_4 [(short)14] [i_0] [(short)14]);
                    arr_10 [i_2] [11ULL] [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((long long int) max((((/* implicit */unsigned long long int) var_13)), (18446744073709551614ULL)))) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0])))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
}
