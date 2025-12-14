/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227590
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        var_12 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) -543258388)) ? (9223372036854775804LL) : (((/* implicit */long long int) ((int) (+(((/* implicit */int) (unsigned char)207))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */short) ((signed char) ((((/* implicit */int) min(((signed char)66), (arr_6 [i_0] [i_2] [15U])))) * (((/* implicit */int) (short)-28872)))));
                    }
                    var_13 = ((/* implicit */unsigned int) arr_5 [i_2] [i_1 - 2] [5LL] [i_2]);
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((short) (-(((/* implicit */int) (unsigned short)26970)))))) ? (((/* implicit */unsigned long long int) max(((~(var_9))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) var_10)))))))) : (((unsigned long long int) ((unsigned long long int) var_4)))));
}
