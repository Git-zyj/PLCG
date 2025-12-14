/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33083
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_14 += ((/* implicit */signed char) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)119))) : (var_11)));
        var_15 = ((/* implicit */unsigned short) (+(-5532588987260823002LL)));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_16 = ((/* implicit */signed char) 0LL);
            var_17 ^= ((/* implicit */unsigned long long int) (~((+(var_5)))));
            arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)4])) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (signed char)126)))) : (((/* implicit */int) arr_1 [i_0 + 4]))));
        }
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) var_5)) : (0LL)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-125))));
        /* LoopSeq 1 */
        for (int i_2 = 2; i_2 < 9; i_2 += 1) 
        {
            var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) (signed char)73)))))));
            var_19 -= ((/* implicit */signed char) ((((var_10) - (((/* implicit */unsigned long long int) 0LL)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-81)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14658)) ? (var_10) : (var_1)))) ? (arr_0 [i_2 + 1] [i_2 + 1]) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) * (((/* implicit */int) arr_7 [i_2] [i_2])))))));
                var_20 ^= ((/* implicit */unsigned int) ((var_4) | (((/* implicit */int) arr_8 [i_2] [i_2] [i_2]))));
            }
            for (short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                var_21 = ((/* implicit */long long int) (_Bool)0);
                var_22 = ((/* implicit */unsigned short) 15457375247025951980ULL);
                var_23 = ((/* implicit */unsigned char) ((_Bool) var_2));
                var_24 = ((/* implicit */_Bool) ((arr_11 [i_4 + 1] [i_0] [i_0 + 4]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
            }
        }
    }
    var_25 &= ((/* implicit */long long int) var_12);
}
