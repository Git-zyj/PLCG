/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236780
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
    var_13 = ((/* implicit */_Bool) var_3);
    var_14 ^= (_Bool)0;
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) var_3);
        var_15 = (_Bool)0;
        var_16 ^= ((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) (unsigned char)1)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = (+(((((/* implicit */_Bool) (unsigned char)235)) ? (((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)235)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_7 [(unsigned char)9] [i_2 - 1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1))))));
            arr_8 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) var_7);
        }
        for (unsigned int i_3 = 1; i_3 < 24; i_3 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned char) max((((unsigned long long int) arr_4 [1])), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)1)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3038635454U))))))));
            var_19 = (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)241)));
        }
    }
    for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        arr_13 [i_4] = (+(((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) arr_4 [i_4])) : (arr_12 [i_4]))));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */int) arr_4 [(_Bool)1])), (var_4))))));
    }
}
