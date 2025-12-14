/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5349
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
    var_10 ^= ((/* implicit */unsigned char) (((-(var_8))) >> (((var_2) + (445588939)))));
    var_11 = ((/* implicit */signed char) (unsigned short)62941);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) var_2);
        arr_2 [2LL] = ((/* implicit */_Bool) (~((-(arr_0 [6ULL])))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2 - 2] [i_2 + 4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)49171))));
                    arr_8 [i_0] [(_Bool)1] [(short)21] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [18ULL] [i_0])) > (((/* implicit */int) arr_1 [i_2 + 3])))))));
                    var_13 = ((/* implicit */unsigned char) arr_0 [i_1 + 3]);
                }
            } 
        } 
    }
    for (long long int i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (unsigned char)16))));
        arr_12 [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((-1964754438) - (((/* implicit */int) (unsigned char)16))))) ? (((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_10 [i_3])))) : (((/* implicit */int) max((arr_10 [i_3]), (arr_10 [i_3]))))));
    }
}
