/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52636
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
    var_17 |= ((/* implicit */long long int) ((((unsigned long long int) 2147483647)) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (var_14))) - (48856)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((~(3542562666675726879ULL))) >> (((((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])) - (3702)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (8714693706794208685LL) : (((/* implicit */long long int) 4152031195U))))) : (((arr_0 [(unsigned short)1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_18 = ((/* implicit */unsigned short) var_12);
        var_19 = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
        /* LoopNest 3 */
        for (signed char i_2 = 2; i_2 < 12; i_2 += 3) 
        {
            for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) ((var_13) * (((/* implicit */unsigned long long int) arr_9 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 3]))));
                        arr_13 [i_4] [(_Bool)0] [i_2] [(_Bool)0] = ((/* implicit */int) ((((/* implicit */_Bool) -1LL)) ? (arr_1 [i_3 + 3] [i_2 - 2]) : (((/* implicit */long long int) arr_9 [i_1] [i_2] [i_3 + 2] [(unsigned short)4]))));
                        arr_14 [i_1] [i_4] [i_4] [i_4] [i_2] = ((/* implicit */short) arr_8 [i_4]);
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)62688)))))) != (9223372036854775804LL)));
                    }
                } 
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) var_2);
    var_23 = ((/* implicit */short) var_0);
}
