/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24541
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
    var_13 = ((/* implicit */signed char) 0ULL);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)5] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0 + 1]));
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        var_14 *= ((/* implicit */unsigned char) (((+(((/* implicit */int) var_3)))) > (((/* implicit */int) (signed char)125))));
        arr_6 [i_1] = ((/* implicit */unsigned short) var_0);
        arr_7 [15LL] [(signed char)7] = ((/* implicit */_Bool) ((((var_6) - (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 - 1])))) % (((unsigned long long int) (signed char)-127))));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            arr_10 [i_2] = arr_9 [i_1] [i_1];
            /* LoopNest 2 */
            for (unsigned char i_3 = 2; i_3 < 18; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 *= ((((arr_11 [i_1] [i_3]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [(_Bool)0] [i_3]))) : (var_5))) / (((/* implicit */long long int) ((/* implicit */int) var_7))));
                        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */_Bool) ((8768116970948092230ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4] [i_4] [i_4] [i_3] [i_2] [i_1])))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [(_Bool)1] [i_4] [4LL])))))));
                    }
                } 
            } 
            arr_16 [i_2] [i_1] = ((signed char) ((var_9) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
        }
        var_17 -= ((/* implicit */signed char) -9223372036854775806LL);
    }
}
