/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36166
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (unsigned char)229))));
            var_16 = ((/* implicit */unsigned char) var_11);
        }
        var_17 = ((/* implicit */unsigned short) arr_0 [i_0]);
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 255)) ? (255) : (-256))))));
            arr_8 [i_0] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -269)) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 + 1]))), (((long long int) -269))));
            var_19 ^= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))), (arr_4 [i_0] [i_2] [1ULL])));
            var_20 = ((/* implicit */_Bool) (~(((268) >> (((240) - (220)))))));
        }
        for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
        {
            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
            var_22 = ((((/* implicit */_Bool) arr_6 [i_0 + 1])) ? (arr_10 [i_0 + 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0])) ? (var_14) : (arr_2 [i_0]))) != ((-(arr_0 [i_0]))))))));
            arr_11 [i_0] = ((/* implicit */unsigned char) (+(268)));
        }
        arr_12 [i_0] = ((/* implicit */unsigned long long int) max((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))), (269)));
    }
    var_23 = max((((/* implicit */unsigned long long int) var_2)), (var_11));
    var_24 |= ((/* implicit */unsigned char) var_5);
}
