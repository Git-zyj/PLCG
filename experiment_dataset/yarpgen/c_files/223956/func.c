/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223956
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
    var_14 *= ((/* implicit */short) (signed char)(-127 - 1));
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                {
                    var_15 -= ((/* implicit */long long int) (+(min((max((((/* implicit */unsigned long long int) (signed char)127)), (var_9))), (((unsigned long long int) arr_7 [i_0] [i_1] [i_0]))))));
                    var_16 = ((/* implicit */unsigned int) arr_5 [i_1 - 1] [i_0 + 1] [i_2 - 1]);
                    arr_8 [(short)2] |= ((/* implicit */unsigned long long int) ((3166623370U) + (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(arr_5 [i_0] [i_2] [i_0]))))))));
                    var_17 = max((max((arr_4 [i_1 + 3] [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0 - 1] [i_1 + 3] [i_2 - 1])))), ((~(var_9))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)-8192), (((/* implicit */short) arr_7 [i_2 + 2] [i_1] [i_0]))))) ? (arr_4 [i_0 - 1] [18ULL]) : (((((/* implicit */_Bool) var_2)) ? (arr_4 [i_0] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))) || (((/* implicit */_Bool) (signed char)73)))))));
                }
            } 
        } 
    } 
}
