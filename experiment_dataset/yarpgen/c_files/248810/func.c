/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248810
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_15 = arr_0 [(unsigned char)7];
        var_16 ^= ((/* implicit */int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 722496881147787014LL)) || (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) == (arr_3 [i_1] [i_1])))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [i_1] [i_2] = ((/* implicit */_Bool) var_12);
            var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) arr_2 [1])))));
            /* LoopSeq 1 */
            for (int i_3 = 2; i_3 < 12; i_3 += 3) 
            {
                var_19 ^= ((/* implicit */_Bool) var_6);
                var_20 -= ((/* implicit */long long int) var_11);
                var_21 = min((((unsigned char) var_1)), (min((var_11), ((unsigned char)22))));
            }
        }
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)54))));
        var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)21)) && (var_2)))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))));
    }
    for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
    {
        arr_15 [i_4] [i_4] = ((/* implicit */short) ((unsigned long long int) (~(arr_14 [i_4 - 2]))));
        arr_16 [i_4 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)7320)), (arr_14 [i_4 - 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_4])) || (((/* implicit */_Bool) (((_Bool)1) ? (arr_14 [i_4]) : (((/* implicit */long long int) var_4)))))))) : (((/* implicit */int) var_8))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        var_23 = ((((/* implicit */int) ((short) arr_13 [i_5] [i_5]))) == (((/* implicit */int) min(((short)7334), ((short)-7335)))));
        var_24 = ((/* implicit */unsigned int) min((min((arr_9 [(unsigned char)9] [(_Bool)1] [i_5] [i_5]), (arr_9 [i_5] [3LL] [i_5] [i_5]))), (((/* implicit */unsigned long long int) max((4294967295U), (var_12))))));
        arr_19 [i_5] = ((/* implicit */int) var_13);
        var_25 = ((/* implicit */signed char) (((~(arr_9 [i_5] [i_5] [8LL] [i_5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5]))) >= (arr_9 [i_5] [i_5] [i_5] [i_5])))))));
        var_26 = ((/* implicit */_Bool) min(((+(((/* implicit */int) arr_0 [i_5])))), (max((((/* implicit */int) arr_0 [i_5])), (var_4)))));
    }
}
