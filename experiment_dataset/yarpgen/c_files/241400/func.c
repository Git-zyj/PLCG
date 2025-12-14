/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241400
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */long long int) var_16);
        var_19 = ((/* implicit */signed char) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_7)), (-5508939395186852633LL)))) ? (((/* implicit */int) (unsigned short)50995)) : (((/* implicit */int) (signed char)58))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14533))) : ((~(var_0)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_1 + 1]))) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 1] [(_Bool)1]))) : (var_13)))))) ? (min((((/* implicit */long long int) var_14)), ((-(var_15))))) : (-4848331222653209407LL)));
        arr_6 [i_1 + 1] = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (8953173250749155185LL)))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) -9223372036854775805LL)) : (var_10))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (-8953173250749155195LL)))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 3; i_2 < 24; i_2 += 3) 
        {
            for (signed char i_3 = 3; i_3 < 23; i_3 += 2) 
            {
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */int) arr_9 [i_3] [i_2 - 1] [i_1])) != ((+(((((/* implicit */int) arr_9 [i_1] [i_1] [i_1])) + (((/* implicit */int) var_7)))))))))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((unsigned short) 9223372036854775807LL)))));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (min((min((arr_9 [i_3] [i_3 - 3] [i_1 - 1]), (((/* implicit */unsigned char) var_2)))), (max((((/* implicit */unsigned char) var_7)), (arr_9 [i_3] [i_3 - 1] [i_1 + 1])))))));
                    var_24 = ((unsigned char) var_7);
                }
            } 
        } 
    }
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((/* implicit */int) var_1)))))));
    var_26 = ((/* implicit */long long int) var_14);
}
