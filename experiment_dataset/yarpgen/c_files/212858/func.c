/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212858
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)0))));
        var_15 += (!(((/* implicit */_Bool) var_2)));
        arr_2 [i_0] = ((unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42810))) : (1940788502312975324LL)));
        var_17 = ((/* implicit */long long int) arr_4 [i_1] [i_1]);
        var_18 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_9))) == (((/* implicit */long long int) ((((/* implicit */_Bool) (short)19549)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) (short)19549))))))))) == (((((/* implicit */_Bool) min((-1998259388575937690LL), (((/* implicit */long long int) (-2147483647 - 1)))))) ? (4294443008LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) : (arr_6 [i_2]))))))))));
        var_20 += ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_3)) : (var_9))))))) / (((((/* implicit */_Bool) var_0)) ? (arr_5 [i_2] [i_2]) : (arr_5 [i_2] [i_2])))));
    }
    var_21 = ((/* implicit */unsigned int) ((short) min((var_5), ((!(((/* implicit */_Bool) var_0)))))));
}
