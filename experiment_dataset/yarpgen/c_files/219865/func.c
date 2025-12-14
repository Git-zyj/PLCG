/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219865
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
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (-4073589657795658281LL) : (-775751603616214148LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_3 [i_2])))))));
                            var_20 = ((((/* implicit */_Bool) (-(arr_9 [i_0 + 1])))) ? (((long long int) arr_4 [i_3 + 3] [i_2])) : (((arr_9 [i_3 + 3]) % (arr_9 [i_0]))));
                            var_21 = min(((~(max((((/* implicit */long long int) arr_7 [i_0] [i_1] [i_0])), (6649015541817584492LL))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_3 - 1] [i_1] [i_0 - 1]))))));
                        }
                    } 
                } 
                var_22 *= ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            {
                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_12))));
                var_24 -= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)69)) ^ (((/* implicit */int) arr_18 [i_4] [i_4]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_5] [i_4]))) : (((((/* implicit */_Bool) 33554431LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4] [i_4]))) : (-1597053894041871453LL))));
            }
        } 
    } 
}
