/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230688
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
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) min(((+(((/* implicit */int) (short)21342)))), (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0]))))));
                arr_4 [i_1 + 1] [i_0] = ((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)12122)) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0 - 3] [i_0] [2])))) || (((/* implicit */_Bool) (+(1554360006)))))))));
                var_21 ^= ((/* implicit */long long int) min((((((/* implicit */_Bool) (+(3578123371U)))) ? ((-(((/* implicit */int) arr_3 [(unsigned short)10])))) : (((/* implicit */int) max((((/* implicit */signed char) arr_1 [(signed char)8])), (arr_2 [i_0] [(short)16] [i_0])))))), ((((!(arr_0 [(short)0]))) ? (((/* implicit */int) arr_2 [i_0] [(unsigned short)2] [i_1 + 2])) : (((/* implicit */int) arr_0 [(signed char)22]))))));
                var_22 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1 - 1])))))));
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_0))));
    var_24 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_18), (((/* implicit */int) (_Bool)1))))) ? ((~(var_18))) : (((/* implicit */int) var_1)))), (-892651270)));
}
