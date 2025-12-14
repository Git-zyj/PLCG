/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230188
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
    var_10 += ((/* implicit */long long int) var_0);
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))), (var_8)));
    var_12 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_3)) >= (((/* implicit */int) arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
                {
                    var_14 = ((unsigned char) 0);
                    arr_8 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 1)) && (((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2] [i_2 - 2] [i_2 + 1])))) ? ((~(((/* implicit */int) arr_6 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_2 + 1])))) : (var_6)));
                }
                for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_4 = 2; i_4 < 15; i_4 += 1) 
                    {
                        var_15 |= ((/* implicit */unsigned int) ((min((((((/* implicit */int) arr_12 [i_3] [i_1] [i_3] [i_4] [(short)4])) <= (((/* implicit */int) var_0)))), (((((/* implicit */_Bool) (short)-32760)) || (((/* implicit */_Bool) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (min((max((0ULL), (((/* implicit */unsigned long long int) arr_2 [(unsigned short)2])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_6 [i_4] [i_0] [i_3] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_3] [i_4])))))))));
                        arr_14 [i_3] [i_3] [i_3] [i_4] = ((/* implicit */int) (unsigned short)65534);
                    }
                    var_16 &= ((/* implicit */short) ((((/* implicit */long long int) min((1), (((/* implicit */int) var_0))))) != (((long long int) ((((/* implicit */_Bool) (unsigned char)33)) && (((/* implicit */_Bool) var_9)))))));
                    var_17 = (i_3 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_0])) - (6149)))))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) >> (((((((/* implicit */int) arr_10 [i_3] [i_3] [i_3] [i_0])) - (6149))) + (15757))))));
                }
            }
        } 
    } 
}
