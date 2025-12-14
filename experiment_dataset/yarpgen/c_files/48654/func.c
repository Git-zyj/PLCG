/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48654
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) max(((-(arr_0 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) var_8)))));
        arr_3 [i_0] [(signed char)10] = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) >> (((3738041463651818955ULL) - (3738041463651818914ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (((0ULL) >> (0ULL))))) : (((/* implicit */unsigned long long int) (+(var_2))))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) arr_4 [i_1]);
        arr_8 [i_1] = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (~(-1953395296)))) ? (max((((/* implicit */unsigned int) var_2)), (var_6))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_5)) : (var_6))))));
        var_10 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551592ULL)))))));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (long long int i_3 = 1; i_3 < 14; i_3 += 2) 
            {
                {
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) var_9);
                    arr_15 [i_1] [i_2] [i_2] [i_3] = ((/* implicit */unsigned int) ((18446744073709551592ULL) >> (((2147483646) - (2147483633)))));
                }
            } 
        } 
    }
    var_11 = var_0;
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((max((((/* implicit */int) var_1)), ((~(((/* implicit */int) var_1)))))) >> (((/* implicit */int) var_1)))))));
    var_13 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) var_8)), (1277107138U))) >> (((/* implicit */int) (_Bool)0))));
}
