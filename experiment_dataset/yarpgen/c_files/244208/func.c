/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244208
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
    var_10 = ((/* implicit */unsigned short) var_1);
    var_11 *= ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))))));
    var_12 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)43979)) >= (((/* implicit */int) (unsigned char)135))));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_0))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((unsigned int) arr_4 [i_1 - 3] [i_1 + 1])) >= (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (unsigned short)63067)) ? (arr_2 [i_2]) : (((/* implicit */int) arr_6 [i_0 + 1]))))))))))));
                    arr_8 [i_1] [i_2] = ((/* implicit */signed char) ((short) 991215990U));
                    var_16 = ((/* implicit */signed char) ((unsigned short) ((((((/* implicit */int) arr_4 [i_1 - 3] [i_1])) + (2147483647))) >> (((3303751289U) - (3303751272U))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (unsigned short)2475)) : (((/* implicit */int) (signed char)-51))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    arr_11 [i_1] [i_1 - 3] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0] [i_0]);
                    var_18 ^= (-(((/* implicit */int) min((arr_3 [i_1 - 3] [i_1 - 1] [i_3]), (arr_3 [i_1 - 1] [i_1 + 1] [i_3])))));
                }
                var_19 += ((/* implicit */unsigned long long int) ((signed char) min((((2525928703U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)32765))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))));
                arr_12 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1955764184)) ? (392241869U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7)))));
            }
        } 
    } 
}
