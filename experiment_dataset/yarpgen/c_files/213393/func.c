/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213393
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
    var_17 = ((/* implicit */signed char) ((var_15) >= (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29701))) | (534380016U))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)191)) || (((/* implicit */_Bool) var_16))))))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 1; i_1 < 15; i_1 += 4) /* same iter space */
        {
            var_18 *= ((((((/* implicit */_Bool) -4521843136848727082LL)) && (((/* implicit */_Bool) 120)))) || (((/* implicit */_Bool) 1863085383)));
            arr_5 [i_0] [13LL] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_3 [i_0] [i_1 - 1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) (short)32767)) > (((/* implicit */int) (short)28607))))) : (((((/* implicit */int) var_6)) >> (((var_4) + (1590436573)))))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 4) /* same iter space */
        {
            arr_10 [i_2] [i_0] [i_2] = ((/* implicit */int) ((((3760587279U) <= (((/* implicit */unsigned int) var_2)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_0]))) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])))));
            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (var_4) : (((/* implicit */int) arr_1 [i_0] [i_2 + 1]))));
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            arr_13 [i_0] [i_0] [i_0] = ((/* implicit */short) var_5);
            arr_14 [i_3] [i_3] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) arr_8 [(short)10] [i_0])) * (((/* implicit */int) (short)-27189))))));
        }
        arr_15 [1ULL] = 4294967293U;
    }
}
