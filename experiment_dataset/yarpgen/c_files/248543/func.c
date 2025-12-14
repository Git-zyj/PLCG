/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248543
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_5 [i_1] |= ((/* implicit */_Bool) var_8);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    var_10 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_2 + 1] [(short)7] [i_2 + 1] [(unsigned short)22])) && (((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2] [i_2 + 1] [i_2])))) ? (max((arr_6 [i_2 + 1] [11ULL] [i_2 - 1] [i_2 - 1]), (((/* implicit */unsigned long long int) (short)-5808)))) : (arr_6 [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                    arr_8 [i_0] = -1546473641999861995LL;
                }
                var_11 ^= ((/* implicit */unsigned int) (unsigned short)42018);
            }
        } 
    } 
    var_12 ^= ((/* implicit */unsigned long long int) var_3);
}
