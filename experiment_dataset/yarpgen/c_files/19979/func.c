/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19979
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
    var_18 &= ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-1))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max((((((_Bool) (unsigned char)82)) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [i_0]))))) : (max((var_4), (((/* implicit */long long int) var_5)))))), (173892847064276944LL))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]);
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) 2544437910807771131LL);
                                var_22 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_23 += ((/* implicit */signed char) ((9153457989526994027LL) + (min(((~(9153457989526994027LL))), (((/* implicit */long long int) arr_5 [i_0] [i_1] [i_2] [i_0]))))));
                    var_24 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1] [i_1 - 2])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (4983258952911790643LL))))));
                }
            } 
        } 
        var_25 &= ((/* implicit */signed char) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
    }
    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-11)) ? (((/* implicit */int) max((var_3), (((/* implicit */signed char) (((_Bool)0) && (((/* implicit */_Bool) var_4)))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2699750435522452187LL)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) ((long long int) var_7))))))));
    var_27 |= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) -1LL)) : (var_13)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_7))))) : ((-(var_2))))), (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */long long int) (signed char)(-127 - 1))), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)12)))))));
}
