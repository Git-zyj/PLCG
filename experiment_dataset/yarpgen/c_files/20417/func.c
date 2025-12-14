/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20417
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
    var_17 = ((/* implicit */long long int) (~(min((((25U) >> (25U))), (25U)))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 7; i_2 += 4) 
                {
                    var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (short)26108)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) != (((/* implicit */int) arr_2 [i_0]))))))) | (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_3)), (arr_1 [i_0])))) ? (((/* implicit */int) arr_4 [i_0])) : ((~(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))));
                    arr_9 [i_0] [i_2] [i_0] [i_2] = ((/* implicit */signed char) ((min((arr_5 [i_1 + 3] [i_2]), (arr_5 [i_1 + 2] [i_1]))) ? (((/* implicit */int) arr_5 [i_0 + 1] [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_1 - 1] [4U])) % (((/* implicit */int) (unsigned short)41696))))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) / (((/* implicit */int) arr_0 [i_2]))))))))));
                }
                var_19 = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)65527)) || (((/* implicit */_Bool) (short)16383))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)11)), (2181431069507584LL)));
}
