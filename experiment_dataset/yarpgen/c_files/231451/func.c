/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231451
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_5))));
    var_19 = var_2;
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28773))) > (11388138524395085113ULL)))) + (((/* implicit */int) ((_Bool) (_Bool)0))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_0)))));
        var_21 += ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_15)))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        arr_4 [4ULL] = ((int) min((arr_2 [(unsigned char)6]), (0ULL)));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) (_Bool)0)))));
    }
    for (int i_1 = 2; i_1 < 16; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 18; i_2 += 3) 
        {
            var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (max((((unsigned long long int) arr_9 [i_2] [i_1])), (arr_9 [i_1] [i_1 - 2]))) : (((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
            arr_12 [i_2] [i_2] = ((/* implicit */short) (((_Bool)1) ? (var_2) : (((unsigned long long int) ((var_5) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
            var_23 = ((/* implicit */int) (+(((unsigned long long int) var_17))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 18; i_3 += 4) 
        {
            var_24 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            arr_17 [i_3] [i_1] [13] = ((/* implicit */short) (((+(((/* implicit */int) var_12)))) >= (((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) arr_10 [i_3] [i_1])) : (((/* implicit */int) var_13))))));
            var_25 = ((/* implicit */unsigned long long int) var_4);
            arr_18 [i_1] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1 + 2] [i_1 + 2] [i_1 - 2]))));
            var_26 -= ((/* implicit */int) ((unsigned char) arr_15 [i_1 - 2] [i_1 + 2] [i_1 + 2]));
        }
        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
        {
            arr_22 [i_1] [i_4] |= ((/* implicit */int) (!(((/* implicit */_Bool) (short)-13818))));
            arr_23 [i_1 - 2] [i_1] [(_Bool)1] = ((((/* implicit */int) ((_Bool) (+(var_14))))) ^ (((92345583) * (((/* implicit */int) (_Bool)0)))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 4; i_5 < 17; i_5 += 2) 
        {
            arr_26 [i_5] [i_1 + 2] = ((/* implicit */unsigned char) arr_6 [i_1] [i_5]);
            arr_27 [i_5 - 1] [i_5 - 4] [i_1 - 1] = ((/* implicit */_Bool) ((arr_11 [i_5 + 1] [i_5 - 1] [i_1 - 1]) / (((/* implicit */int) var_0))));
            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-(arr_20 [i_5 - 2] [13ULL]))))));
            arr_28 [i_5] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)235))));
        }
        arr_29 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((((/* implicit */int) (unsigned char)58)) - (-1570022027)))));
        arr_30 [i_1] = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) arr_13 [i_1 + 2])));
    }
}
