/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225566
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
    var_10 = ((/* implicit */unsigned int) var_4);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            var_11 = ((/* implicit */int) ((_Bool) (short)12288));
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_12 ^= ((/* implicit */unsigned int) arr_1 [i_0]);
                        arr_10 [(signed char)7] [i_1] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_1 + 1] [i_1] [i_2] [8LL])) & (((/* implicit */int) arr_4 [i_1 - 1] [i_0] [(signed char)5] [(_Bool)1]))));
                        var_13 = ((/* implicit */unsigned char) var_7);
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_1))));
                        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [(short)2] [i_2] [(short)6] [i_0]))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_3 [i_0] [i_4] [i_4]), (arr_3 [i_4] [i_4] [i_4])))) || (((/* implicit */_Bool) max((arr_3 [i_4] [i_4] [i_4]), (((/* implicit */unsigned int) var_0)))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((unsigned long long int) arr_1 [i_0])))));
        }
        var_18 += ((/* implicit */signed char) ((unsigned long long int) arr_5 [i_0] [i_0] [i_0] [i_0]));
    }
}
