/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193020
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
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] = ((unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (72057456598974464ULL) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 11; i_2 += 1) 
                {
                    var_20 ^= (signed char)93;
                    var_21 = ((/* implicit */unsigned char) arr_4 [i_0]);
                }
                for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
                {
                    var_22 -= var_17;
                    arr_13 [i_0] [i_0] [i_3] = ((/* implicit */unsigned int) arr_9 [i_0]);
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (((~(((/* implicit */int) (!(var_2)))))) < ((+(((/* implicit */int) (unsigned short)33786))))));
    var_24 = ((/* implicit */unsigned long long int) var_5);
}
