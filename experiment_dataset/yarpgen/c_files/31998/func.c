/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31998
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
    var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_10))));
    var_20 = var_18;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned short) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned short)36260)))))) - ((-(((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)43601))))))));
        var_22 = min((((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65528)) > (((/* implicit */int) (unsigned short)64693))))), ((unsigned short)0));
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) (-(min((((((/* implicit */int) var_13)) / (((/* implicit */int) var_11)))), ((-(((/* implicit */int) var_8))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_9))) >= (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)65535))))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))) - (((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_2]))))));
        arr_7 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_4 [i_2])) + (((/* implicit */int) arr_3 [(unsigned short)11])))) >= (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_2])) >= (((/* implicit */int) arr_2 [i_2])))))));
    }
    var_26 = var_16;
    var_27 = min(((unsigned short)28456), ((unsigned short)1297));
}
