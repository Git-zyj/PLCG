/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34949
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 2])) == (((/* implicit */int) var_4)))))));
        arr_2 [i_0] &= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2])))) + (((/* implicit */int) arr_0 [i_0 - 1]))));
    }
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 3) /* same iter space */
    {
        var_13 *= ((/* implicit */unsigned char) ((max((((((/* implicit */int) arr_5 [i_1 - 2] [i_1])) - (((/* implicit */int) arr_4 [i_1] [i_1 + 2])))), (arr_3 [i_1]))) > (((/* implicit */int) arr_5 [i_1] [i_1]))));
        var_14 = arr_4 [i_1] [i_1 + 2];
        var_15 = ((/* implicit */long long int) var_1);
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 19; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                {
                    var_16 = (~(((((/* implicit */_Bool) arr_4 [i_1] [i_2 + 2])) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) arr_4 [(_Bool)1] [i_2 + 2])))));
                    arr_10 [i_1 - 1] [i_1 - 1] = ((/* implicit */int) ((((((var_1) <= (((/* implicit */int) var_8)))) ? (((/* implicit */int) (short)-24897)) : (((((/* implicit */int) (short)2039)) >> (((/* implicit */int) arr_0 [i_3])))))) != (((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2 - 1] [i_3])) ? (1859005269) : (1140272893)))));
                    arr_11 [i_1] [i_2 + 1] [i_3] = ((/* implicit */int) arr_9 [i_3] [i_2] [i_2] [i_1]);
                    var_17 += ((/* implicit */unsigned char) (_Bool)0);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) var_5)) >= (min((((/* implicit */int) (_Bool)0)), (var_10)))))), ((-(((((/* implicit */int) (unsigned char)100)) - (329654350)))))));
}
