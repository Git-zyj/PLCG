/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35048
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
    var_13 = ((/* implicit */unsigned short) ((((var_8) / (197864820))) | (((((/* implicit */_Bool) ((unsigned short) 18446744073709551615ULL))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned short)37577)))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */signed char) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) (unsigned short)65519)) ? (max((18446744073709551613ULL), (2240859772630060927ULL))) : (min((16205884301079490688ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))))));
        var_15 = ((/* implicit */long long int) ((int) ((unsigned long long int) arr_1 [i_0])));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) == (((((/* implicit */_Bool) 302600053)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (var_0)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
        var_16 = ((/* implicit */unsigned long long int) var_10);
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_18 [i_3] [i_3] = ((/* implicit */signed char) ((short) -302600068));
                    arr_19 [i_2] [i_3] = ((/* implicit */_Bool) ((unsigned int) arr_11 [i_3] [i_4 + 2]));
                }
            } 
        } 
        var_17 = ((/* implicit */short) ((unsigned long long int) (signed char)71));
        arr_20 [14U] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((((/* implicit */_Bool) 1125899906809856ULL)) ? (-302600030) : (-6)))));
        arr_21 [i_2] [i_2] = ((/* implicit */long long int) (short)-15902);
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((signed char) arr_16 [i_2] [i_2] [i_2] [18LL])))));
    }
    var_19 = ((/* implicit */unsigned short) var_12);
}
