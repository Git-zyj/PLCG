/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35998
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
    var_18 *= ((/* implicit */unsigned short) (((-(((/* implicit */int) (unsigned short)35718)))) - ((+(((/* implicit */int) min(((unsigned short)35718), ((unsigned short)11515))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28361)))))));
        arr_4 [i_0] = (unsigned short)29817;
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) /* same iter space */
    {
        var_19 += (unsigned short)51200;
        var_20 = (unsigned short)21157;
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 8; i_2 += 4) 
        {
            var_21 = var_4;
            var_22 = max(((unsigned short)0), ((unsigned short)29818));
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)2259))));
            arr_13 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_2 [i_1] [i_3]))));
            var_23 = arr_5 [i_1];
        }
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (unsigned short)0)))) ? ((-(((/* implicit */int) arr_6 [i_4] [i_1])))) : ((+(((/* implicit */int) arr_7 [i_1] [(unsigned short)6] [i_4]))))));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
        }
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_7 [i_1] [i_1] [i_1]), (arr_7 [i_1] [(unsigned short)2] [i_1])))))))));
    }
    var_26 = var_8;
    var_27 = var_17;
}
