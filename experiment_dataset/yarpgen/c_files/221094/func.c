/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221094
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
    var_19 = ((/* implicit */short) ((unsigned short) var_3));
    var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_1)) : (((((/* implicit */int) (unsigned char)161)) & (((/* implicit */int) var_14)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = 18446744073709551598ULL;
                    var_21 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                }
                arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) ((var_17) == (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))) ^ (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (1062837234U) : (((arr_3 [i_0]) + (((/* implicit */unsigned int) var_16))))))));
            }
        } 
    } 
}
