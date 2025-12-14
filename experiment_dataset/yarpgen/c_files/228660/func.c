/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228660
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
    var_13 *= ((/* implicit */long long int) (~(((/* implicit */int) ((((((-7205690036718107522LL) + (9223372036854775807LL))) >> (((var_8) - (7075947640078600917LL))))) <= (var_12))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), ((~((+((+(-3425648968951086858LL)))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) (~(var_4)))) ? (((((/* implicit */_Bool) ((4951717043250703840LL) << (((((arr_5 [i_0] [i_2]) + (6160900656483571067LL))) - (23LL)))))) ? (((long long int) var_9)) : (arr_8 [4LL]))) : (((long long int) (-9223372036854775807LL - 1LL))));
                    var_15 = min((-9223372036854775788LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0 + 3] [i_0])) ? (arr_4 [i_0]) : (arr_6 [i_1 + 2] [i_2])))) ? (arr_3 [i_0] [13LL] [i_2]) : (arr_0 [i_0 + 3] [i_0 + 3]))));
                    arr_11 [i_2] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) min((arr_5 [i_0] [i_1 - 3]), (2159446664980984116LL)))) ? (-2159446664980984113LL) : (5662607425908453626LL));
                    var_16 = arr_2 [i_0] [i_0];
                }
            } 
        } 
    }
    var_17 = (~(((((-8995902543936771179LL) <= (2397333961956081571LL))) ? (min((var_10), (var_7))) : (((((/* implicit */_Bool) -4940049165526122537LL)) ? (var_2) : (var_3))))));
}
