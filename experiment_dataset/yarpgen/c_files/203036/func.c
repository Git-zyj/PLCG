/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203036
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
    var_19 *= ((/* implicit */signed char) var_16);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] [i_1 + 1] [i_1] = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1] [i_0])) || (((/* implicit */_Bool) max((var_10), (var_0))))))), (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 1] [i_0])) : (((/* implicit */int) var_8))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_20 = ((/* implicit */short) ((unsigned long long int) (~(1741443827))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_13 [(short)18] [i_3] [i_2] [(short)18] [i_0] = ((/* implicit */unsigned long long int) ((long long int) 2063556171U));
                                var_21 *= ((2177012086U) + (2568011902U));
                                var_22 = ((/* implicit */int) ((unsigned short) min((((/* implicit */int) var_8)), ((~(((/* implicit */int) (unsigned char)171)))))));
                                var_23 = ((_Bool) (~(((((/* implicit */_Bool) (signed char)16)) ? (14138727391422315565ULL) : (((/* implicit */unsigned long long int) 9223372036854775806LL))))));
                                arr_14 [(_Bool)1] [i_3] [i_4] [(signed char)11] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1] [i_1])) ? (arr_8 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_0]) : (arr_8 [i_1 - 1] [i_0] [18LL] [i_1 + 1] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                }
                var_24 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)99)) >> (((((/* implicit */int) (short)-24531)) + (24542)))));
            }
        } 
    } 
}
