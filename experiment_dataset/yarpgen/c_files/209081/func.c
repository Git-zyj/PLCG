/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209081
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
    var_14 = ((/* implicit */unsigned char) max(((+((~(((/* implicit */int) var_8)))))), (max((max((var_7), (((/* implicit */int) (unsigned char)1)))), (((/* implicit */int) max(((unsigned char)254), (((/* implicit */unsigned char) var_12)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [i_0]))));
                    var_15 ^= ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    arr_10 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */short) arr_0 [i_1]);
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0 - 4]))));
        arr_12 [i_0] [i_0] = ((/* implicit */signed char) ((((((/* implicit */int) (short)10)) > (((/* implicit */int) (unsigned short)52652)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)58381))))) : (arr_0 [i_0 + 2])));
    }
}
