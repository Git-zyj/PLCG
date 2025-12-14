/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194428
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
    var_16 = ((/* implicit */unsigned long long int) (signed char)-99);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) 16003099936566702526ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))) - (((/* implicit */unsigned long long int) arr_2 [i_0])));
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_3])) ? (1048575U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [4ULL]))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = arr_8 [i_0] [(unsigned char)13];
                    }
                } 
            } 
        } 
    }
}
