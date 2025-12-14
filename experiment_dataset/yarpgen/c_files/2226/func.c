/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2226
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
    var_11 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) (unsigned char)17)))), (max((((/* implicit */int) var_1)), (arr_0 [i_0])))));
        arr_3 [2LL] &= ((/* implicit */unsigned short) (short)13964);
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        var_12 = (~(((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) 1221949815)) : (var_7))))));
        arr_7 [(_Bool)1] [(_Bool)1] |= ((/* implicit */unsigned int) (+(((int) (unsigned char)0))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 23; i_2 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2 + 2]))) ? (((/* implicit */int) ((unsigned short) arr_8 [i_2 - 1]))) : (arr_8 [i_2 + 2])));
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) : (arr_10 [i_2] [i_2] [i_2])))))) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_6) : (var_3))))))));
                var_14 = ((/* implicit */_Bool) ((long long int) ((unsigned int) arr_12 [i_2] [i_2 + 2])));
            }
            var_15 += ((/* implicit */unsigned int) max((min((arr_11 [i_2 - 1]), (arr_11 [i_2 + 2]))), (((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_10 [i_2 + 2] [i_3] [i_2 + 2]))))))));
            arr_16 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) 6983307014824733829LL))))))));
        }
        var_16 -= ((/* implicit */_Bool) max((((unsigned long long int) (unsigned char)253)), (((/* implicit */unsigned long long int) ((short) max((((/* implicit */unsigned long long int) 3420320092U)), (arr_12 [i_2 + 2] [i_2 - 2])))))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 95994320)) >= (min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_2])) * (((/* implicit */int) (short)-30330)))))))));
        var_18 *= ((/* implicit */_Bool) arr_13 [i_2 + 2]);
    }
}
