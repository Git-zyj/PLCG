/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240269
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
    var_13 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)12] [i_0] |= ((/* implicit */short) ((18446744073709551608ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                    arr_9 [i_2] [(short)13] [i_0] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned short)32704)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))) : (arr_4 [(unsigned char)5])))));
                    arr_10 [i_2] [i_0] = ((/* implicit */signed char) (-((-(((/* implicit */int) arr_7 [i_0]))))));
                }
            } 
        } 
        arr_11 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0]));
        arr_12 [i_0] [i_0] = (signed char)(-127 - 1);
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1048575U)) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (unsigned short)0)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1))))))) : ((-(((unsigned long long int) var_11))))));
}
