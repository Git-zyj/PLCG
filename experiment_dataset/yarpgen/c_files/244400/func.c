/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244400
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
    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned short)65535))) ? (((/* implicit */int) ((_Bool) var_10))) : (((/* implicit */int) (!((_Bool)1))))))), ((+(4174954665442511845LL))))))));
    var_14 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_8))))) * ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) 7U));
        var_15 = ((/* implicit */unsigned int) ((var_1) / (arr_0 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12))));
        var_17 -= ((/* implicit */unsigned int) var_7);
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_19 = ((/* implicit */long long int) (_Bool)1);
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1]))));
        arr_5 [i_1] [6U] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (arr_1 [(_Bool)1]))))))), ((-((((_Bool)1) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_9))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        arr_8 [(_Bool)1] = ((/* implicit */_Bool) var_12);
        arr_9 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_2])))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_1 [i_2]))))) : (((/* implicit */int) (!(var_5))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_2]))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2]))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
        arr_10 [i_2] |= ((/* implicit */short) (_Bool)1);
    }
    var_21 = ((/* implicit */short) var_5);
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_12))));
}
