/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215502
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
    var_10 = ((/* implicit */unsigned char) (~(((unsigned int) var_6))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) var_2);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-13760)) % (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_12 &= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) (+(-21LL)))) : ((~(0ULL)))));
                    var_13 = ((/* implicit */unsigned long long int) var_3);
                }
            } 
        } 
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]);
        var_14 = ((/* implicit */unsigned short) ((var_0) > (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6)))));
    }
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (short)13759)))) ? (((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) 47LL)))), (var_7))))));
}
