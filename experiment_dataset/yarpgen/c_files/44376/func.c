/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44376
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
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */short) ((5657644008263635379LL) | (((/* implicit */long long int) ((/* implicit */int) (short)-22254)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_14 -= ((/* implicit */_Bool) (~(-5657644008263635362LL)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            var_15 = ((/* implicit */int) arr_4 [i_0] [i_1]);
            var_16 = ((/* implicit */long long int) (+(((/* implicit */int) var_7))));
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])) : ((-(((/* implicit */int) arr_2 [i_0] [i_1])))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0])) & (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)-11389)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_8 [i_0] [i_0]))) <= (((/* implicit */unsigned long long int) (+(5657644008263635379LL))))));
        }
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) >= ((~(var_11)))));
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        var_21 = ((/* implicit */short) (+((~(9223372036854775807LL)))));
                        var_22 = ((/* implicit */int) ((arr_16 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) == (arr_13 [i_3 - 1]))))));
                    }
                } 
            } 
        } 
    }
    var_23 &= ((/* implicit */int) var_4);
    var_24 = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((var_2) ^ (5657644008263635379LL)))) & (min((((/* implicit */unsigned long long int) var_1)), (var_5)))))));
}
