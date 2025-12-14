/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242676
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
    var_14 = ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-7)) : (((/* implicit */int) (signed char)-91)))) * (((/* implicit */int) ((signed char) (signed char)-119)))))) ^ (min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-57))))), (max((404190334120617706LL), (((/* implicit */long long int) (signed char)18)))))));
    var_15 = ((/* implicit */signed char) ((((min((((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))), (((/* implicit */long long int) max(((signed char)-96), (var_13)))))) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) var_13)) ? (min((-1LL), (var_8))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))))) + (4617158856699543083LL))) - (34LL)))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_16 = min((arr_0 [i_0]), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) (signed char)-52)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-91))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 1) /* same iter space */
        {
            arr_8 [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)-106))));
            var_17 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_1 + 3]))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])) : (((/* implicit */int) (signed char)77))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 16; i_2 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) arr_0 [i_2]);
            var_20 = ((((/* implicit */_Bool) 9223372036854775779LL)) ? (274877906943LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)54))));
        }
        /* LoopNest 2 */
        for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            for (signed char i_4 = 1; i_4 < 18; i_4 += 1) 
            {
                {
                    arr_17 [i_4] [14LL] [i_0] = ((/* implicit */long long int) ((signed char) max(((~(8312085961866167773LL))), (((/* implicit */long long int) min(((signed char)117), ((signed char)35)))))));
                    var_21 = max((((/* implicit */long long int) ((signed char) (-(((/* implicit */int) (signed char)(-127 - 1))))))), (-5089876861710378340LL));
                    var_22 *= ((signed char) (((~(var_7))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)101))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_5 = 2; i_5 < 7; i_5 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -5363384892577658887LL)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)26)))) & (((/* implicit */int) var_11))));
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(var_7))))));
    }
}
