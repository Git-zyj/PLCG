/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220380
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
    var_15 ^= ((/* implicit */int) ((246446128280958850ULL) << (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2775912881U)) : (var_5)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))));
    var_16 |= ((/* implicit */short) var_12);
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((unsigned short) var_8))), (min((((/* implicit */unsigned int) var_14)), (((unsigned int) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_9 [i_1] [i_2] [8U] [i_1] = ((/* implicit */unsigned char) ((unsigned long long int) (short)21307));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (+((~(((/* implicit */int) (short)-21307)))))))));
                    var_19 = ((/* implicit */unsigned int) (unsigned short)28668);
                }
                arr_10 [i_1] = ((/* implicit */int) (unsigned short)30076);
            }
        } 
    } 
}
