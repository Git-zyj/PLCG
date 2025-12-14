/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234776
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = (-(((/* implicit */int) arr_0 [i_0 + 1])));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 1])) ? (var_3) : (((/* implicit */int) var_2))));
            var_11 = ((/* implicit */short) ((int) ((short) arr_1 [i_0] [i_0])));
        }
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [2] [2])) ? (((/* implicit */int) arr_3 [i_0 + 1] [(unsigned char)6] [(unsigned char)6])) : (var_3)));
            var_13 = ((/* implicit */unsigned char) ((unsigned int) arr_3 [i_0] [(short)2] [i_0 - 1]));
        }
        var_14 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_0] [0LL] [0LL]));
    }
    for (int i_3 = 3; i_3 < 18; i_3 += 4) 
    {
        arr_11 [(short)0] [14U] |= ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) arr_10 [i_3])) ? (arr_10 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) arr_9 [2LL] [10U])))), (((/* implicit */long long int) arr_9 [i_3] [0ULL]))));
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
            {
                for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                {
                    {
                        var_15 -= ((/* implicit */_Bool) max((max((arr_16 [i_3 + 2]), (arr_16 [i_3 - 2]))), (((/* implicit */long long int) ((arr_16 [i_3 - 1]) < (arr_16 [i_3 + 2]))))));
                        arr_22 [i_3] [i_3] [i_5] [i_3] = ((/* implicit */short) ((long long int) (-((-(((/* implicit */int) var_2)))))));
                    }
                } 
            } 
        } 
    }
    var_16 = ((/* implicit */short) var_1);
}
