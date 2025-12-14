/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216668
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
    var_13 *= ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1366307990U))))))) : (((((/* implicit */_Bool) max((((/* implicit */int) var_12)), (1735618037)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119))))) : (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_11)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_14 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))) ? (((/* implicit */unsigned long long int) -1735618038)) : (((((/* implicit */_Bool) -1735618037)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -1735618037))))));
        var_15 += ((((/* implicit */long long int) ((/* implicit */int) (short)-11572))) <= (var_5));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((2147483645) <= (((/* implicit */int) var_0)))))));
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (short)11572)) <= (((/* implicit */int) (short)10513)))))));
        var_17 = var_0;
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
    {
        var_18 = ((min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) * (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_2))))));
        var_19 = ((/* implicit */unsigned char) var_8);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_1)))) ? (((int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967281U)))) : (((/* implicit */int) var_8))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 1; i_4 < 12; i_4 += 2) 
            {
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((_Bool) (short)32767)))));
                var_22 = ((/* implicit */signed char) (((_Bool)1) && (((/* implicit */_Bool) (short)32767))));
            }
            var_23 = ((/* implicit */short) ((unsigned int) (short)-32750));
            var_24 = ((/* implicit */unsigned char) var_3);
        }
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            var_25 = ((short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) 2147483647))))), (((((/* implicit */unsigned int) var_2)) - (var_6)))));
            var_26 = var_10;
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */short) (-(((/* implicit */int) ((short) (~(var_4)))))));
            var_27 = max((max((((/* implicit */long long int) 2147483647)), ((~(var_5))))), (((/* implicit */long long int) var_8)));
        }
    }
    var_28 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((4769927664300842023LL) - (((/* implicit */long long int) -740968257))))) ? (min((var_7), (((/* implicit */unsigned int) var_11)))) : (((var_7) - (((/* implicit */unsigned int) -1047555999)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-1735618037), (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((((/* implicit */long long int) -259595892)) <= (4769927664300842040LL)))))))));
}
