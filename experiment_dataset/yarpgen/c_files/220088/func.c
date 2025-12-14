/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220088
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = min((arr_1 [i_0]), (((0LL) & (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : ((-9223372036854775807LL - 1LL)))))));
        var_13 = min((-8LL), (4529031786044652458LL));
        arr_3 [i_0] [i_0] = min((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (5522477299268387574LL) : (-8153891415736575754LL))), (((((/* implicit */_Bool) 1851560371614574440LL)) ? (9070439164483387581LL) : (-427964949970356439LL))))), (((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0]) : ((~(var_4))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_6 [i_1] = var_3;
        arr_7 [i_1] = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
        var_14 = arr_0 [i_1];
        var_15 = ((((/* implicit */_Bool) min((((long long int) var_4)), (((((/* implicit */_Bool) var_5)) ? (var_1) : (arr_4 [i_1])))))) ? (((long long int) var_5)) : (((((/* implicit */_Bool) min((var_3), (var_12)))) ? (-1851560371614574438LL) : (((var_6) / (var_3))))));
    }
    for (long long int i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        var_16 = -1851560371614574440LL;
        arr_11 [i_2] = ((((9070439164483387581LL) >= (arr_0 [i_2 - 3]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((1851560371614574440LL) <= (6428054589981665601LL))))) < (arr_9 [i_2 - 2] [i_2 + 1]))))) : (((long long int) var_8)));
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
        arr_16 [i_3] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 7823918562599095178LL)) ? (var_12) : (arr_13 [i_3]))) != ((+(-7485840452853399294LL)))));
        var_18 = ((/* implicit */long long int) min((var_18), (((((/* implicit */_Bool) arr_0 [i_3])) ? (-4529031786044652470LL) : (arr_0 [i_3])))));
    }
    var_19 = ((/* implicit */long long int) min((var_19), (((long long int) var_9))));
}
