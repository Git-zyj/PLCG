/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207748
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_17 ^= ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) arr_5 [(unsigned char)14] [i_1] [i_0] [i_0])), (var_0))) >> (((max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((11702375125416825419ULL) - (arr_4 [i_0] [i_1] [i_1]))))) - (4693389747009095091ULL)))));
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */int) (short)32748))))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (signed char i_4 = 2; i_4 < 14; i_4 += 2) 
                        {
                            {
                                var_19 ^= max(((signed char)-123), ((signed char)-126));
                                var_20 -= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_7 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 + 1] [i_4 + 1] [i_4 + 1])))) | (((((var_11) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_4 + 2] [i_4 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 + 2])) - (115)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) var_13)) ^ (var_0)));
}
