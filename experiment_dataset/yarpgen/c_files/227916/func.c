/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227916
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_15 = max((((arr_2 [i_0]) | (((((/* implicit */_Bool) arr_3 [i_0])) ? (12LL) : (var_4))))), (((((/* implicit */_Bool) -1074801525519552046LL)) ? (-7513417267464532813LL) : ((-9223372036854775807LL - 1LL)))));
        var_16 = var_3;
        var_17 = min((min((((((/* implicit */_Bool) var_4)) ? (7513417267464532813LL) : (arr_0 [i_0]))), (((((/* implicit */_Bool) -3854263541416309960LL)) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0]))))), (min((-7513417267464532827LL), (-7474238902379025074LL))));
        var_18 = max((-7513417267464532813LL), (-8151490093549113570LL));
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            var_19 = (~((~(-5227551266159079613LL))));
            var_20 = arr_2 [i_0];
            var_21 = ((long long int) ((((/* implicit */_Bool) min((0LL), (var_3)))) ? (max((var_2), (var_10))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
            var_22 = ((long long int) ((long long int) var_2));
        }
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_23 = var_10;
        var_24 = ((/* implicit */long long int) min((var_24), (arr_6 [i_2] [i_2])));
        var_25 = (-(min((7513417267464532799LL), (-8200382883943084288LL))));
        var_26 = arr_1 [i_2] [i_2];
    }
    var_27 = max((((long long int) var_11)), (((((/* implicit */_Bool) var_11)) ? (((long long int) var_2)) : (var_6))));
    var_28 = 9187343239835811840LL;
    var_29 = ((((/* implicit */_Bool) (+(var_0)))) ? ((+(var_10))) : (((long long int) (-(var_1)))));
}
