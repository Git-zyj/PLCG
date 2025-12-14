/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220793
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (-((+(-2147483642))))))));
            arr_6 [i_0] [i_0] = ((/* implicit */short) arr_0 [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)188)) >= (((/* implicit */int) (unsigned char)187))));
            var_19 += ((/* implicit */long long int) (+(((/* implicit */int) ((short) (unsigned short)31686)))));
            var_20 -= arr_4 [i_2] [i_0];
        }
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) /* same iter space */
        {
            var_21 += ((unsigned char) (unsigned char)68);
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_6))));
            arr_15 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (short)16383)) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67))))) % (((/* implicit */long long int) ((/* implicit */int) (short)-16369)))));
        }
        for (long long int i_4 = 0; i_4 < 17; i_4 += 4) /* same iter space */
        {
            arr_18 [i_0] [i_4] = ((/* implicit */unsigned char) arr_9 [i_0] [i_0]);
            var_22 += 11972720174807413870ULL;
        }
        arr_19 [i_0] [i_0] &= var_10;
        var_23 ^= (unsigned short)6487;
        var_24 *= ((/* implicit */unsigned short) arr_12 [i_0] [0ULL]);
        var_25 ^= ((/* implicit */unsigned short) ((signed char) arr_8 [(unsigned short)8] [i_0]));
    }
    var_26 = ((/* implicit */short) var_13);
}
