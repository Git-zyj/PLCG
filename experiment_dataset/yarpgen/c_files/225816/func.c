/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225816
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
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) != (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) ((((long long int) var_5)) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) min((((arr_0 [i_0 + 1]) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) != (((((/* implicit */_Bool) 6012818745662278608LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] |= ((_Bool) ((((1967138876166797757LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (3644476398234925758LL) : (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))));
                            var_15 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((2744202335362007092LL) - (2744202335362007086LL)))));
                            var_16 = ((((_Bool) (_Bool)1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (9029082084417907330LL));
                            arr_11 [7LL] [7LL] [(_Bool)1] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) << (((arr_6 [i_0 - 1]) - (5853619216951774162LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((long long int) (_Bool)1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 -= ((/* implicit */_Bool) var_10);
}
