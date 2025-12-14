/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249430
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((((((arr_1 [i_0]) + (2147483647))) << (((((arr_1 [i_0]) + (651058765))) - (3))))), (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_2 [i_0])))))));
        var_18 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_0 [i_0] [i_0]), (((/* implicit */short) (_Bool)1))))), (((unsigned int) arr_0 [i_0] [i_0]))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_12))))) ? (arr_7 [i_1 - 1]) : (arr_7 [i_1])))));
        var_20 = ((/* implicit */int) max((var_20), (max((((115805888) << (((/* implicit */int) arr_6 [i_1 + 1])))), (((/* implicit */int) ((_Bool) 9223372036854775807LL)))))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    arr_12 [3LL] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_8 [i_2]))))) > (max((((/* implicit */long long int) arr_6 [i_1 + 1])), (137170518016LL)))));
                    var_21 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_16))))) < (((unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_1])))))));
                    var_22 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_5 [i_1] [i_1 - 1])))) != (((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_5 [i_1] [i_1 - 1]))))));
                }
            } 
        } 
    }
    var_23 = ((/* implicit */unsigned char) (-(max((((/* implicit */int) var_1)), (var_4)))));
}
