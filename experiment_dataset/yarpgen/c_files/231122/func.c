/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231122
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
    var_10 -= ((/* implicit */_Bool) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0 + 3] [i_0 + 1] = ((arr_1 [i_0 + 2]) & (arr_1 [i_0 - 1]));
        arr_3 [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) 2147450880U)) ? (((/* implicit */unsigned long long int) (+(2147516416U)))) : (arr_0 [i_0 - 2] [i_0 + 3])));
        var_11 = ((/* implicit */short) ((arr_0 [i_0 - 3] [i_0 + 3]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12567)))));
        arr_4 [i_0 - 2] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((((/* implicit */_Bool) 5051046425314557215LL)) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 + 1]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (994129831777493552ULL)))));
        var_12 = ((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 2]);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 3; i_2 < 13; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 15; i_3 += 1) 
            {
                for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    {
                        arr_15 [i_2] [i_2 - 2] [i_2 - 1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) 2147516416U);
                        var_13 -= ((/* implicit */unsigned char) (~(var_5)));
                        var_14 += ((/* implicit */int) arr_12 [10] [i_3] [10]);
                        arr_16 [i_1] [i_2 + 2] [i_2] [i_4] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_2 - 2]))));
                        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)1893)) / (((/* implicit */int) arr_13 [i_1] [i_2 + 1] [i_1] [i_4] [i_3]))));
                    }
                } 
            } 
        } 
        var_16 -= ((/* implicit */unsigned int) 8301821958739273398LL);
    }
}
