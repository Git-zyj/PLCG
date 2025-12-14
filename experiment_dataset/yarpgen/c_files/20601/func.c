/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20601
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
    var_16 = ((/* implicit */long long int) var_4);
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((_Bool) var_15))))) : (min((((/* implicit */long long int) max((var_10), (var_7)))), (min((0LL), (((/* implicit */long long int) var_10))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] = ((((_Bool) arr_1 [i_0 - 2])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
        var_18 = -9021128749672353407LL;
        arr_3 [i_0] = ((/* implicit */int) ((((_Bool) 18211273291632034042ULL)) && (((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 2])))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((arr_1 [i_0 - 1]), (((/* implicit */unsigned int) ((int) var_9)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_11 [i_1] [i_2] = ((/* implicit */unsigned short) ((short) arr_10 [i_1] [i_1] [i_1]));
            var_19 = ((/* implicit */_Bool) arr_8 [18LL] [i_1] [(unsigned char)12]);
        }
        for (signed char i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 3] [(_Bool)1] [i_1]))))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) arr_5 [17] [i_3 + 2])) ? (arr_5 [i_1] [i_3 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)207)))))));
            arr_14 [i_1] [i_1] = ((/* implicit */short) (-(-1036716629)));
        }
        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            arr_19 [i_1] = ((/* implicit */int) 18446744073709551615ULL);
            arr_20 [16] [i_1] [i_1] = ((/* implicit */unsigned int) (signed char)127);
            var_22 = ((/* implicit */short) arr_10 [i_1] [(short)14] [i_1]);
        }
        for (long long int i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            arr_25 [i_1] [i_5] = ((/* implicit */_Bool) ((-9021128749672353407LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            arr_26 [i_1] [i_5] = ((/* implicit */unsigned int) (unsigned char)52);
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_5]))));
            arr_27 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_15 [i_1] [9]))) ? (((/* implicit */int) arr_12 [i_1] [i_1] [i_1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (3807301616U))))));
        }
        arr_28 [i_1] = ((/* implicit */signed char) ((arr_22 [i_1] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
}
