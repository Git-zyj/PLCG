/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43787
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
    for (int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */_Bool) -1098203051013598247LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)15582))) : (4294967295U));
                var_17 = ((/* implicit */unsigned int) ((int) max((((/* implicit */long long int) (short)1232)), (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_1)) : (var_10))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 3] [i_1] [i_0 + 3])) ? (((/* implicit */long long int) 1U)) : (var_4)))) ? (4294967295U) : (max((803496897U), (((/* implicit */unsigned int) arr_1 [i_1] [i_3 - 1])))))));
                            var_19 -= ((/* implicit */short) ((((/* implicit */int) min((arr_2 [i_0 + 3]), (arr_2 [i_0 + 1])))) % (((/* implicit */int) max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))))));
                        }
                    } 
                } 
                arr_10 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (var_3)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)4444)))) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((short) var_2)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) var_9);
}
