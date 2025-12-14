/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3538
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
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_13 = ((((/* implicit */int) (short)-1)) >= (((/* implicit */int) arr_1 [i_0 + 1])));
        var_14 = ((/* implicit */signed char) var_9);
    }
    /* vectorizable */
    for (unsigned int i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) | (var_5)))) == (arr_2 [i_1 - 3])));
        var_15 = ((/* implicit */_Bool) ((short) (unsigned char)197));
        var_16 = ((/* implicit */signed char) var_1);
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 11; i_2 += 3) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [6U])) ? (arr_5 [2U]) : (((/* implicit */unsigned int) var_5))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 2; i_3 < 11; i_3 += 3) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) arr_8 [i_2]);
            var_18 = ((/* implicit */signed char) ((int) var_12));
        }
        var_19 = ((/* implicit */unsigned short) ((((arr_3 [i_2] [14]) / (var_9))) << (((((/* implicit */int) arr_7 [(unsigned char)7] [i_2 - 1] [i_2])) - (13954)))));
        arr_11 [i_2] = (~(arr_8 [i_2]));
    }
    var_20 = ((/* implicit */long long int) max((var_3), (max((var_3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_10)))))))));
}
