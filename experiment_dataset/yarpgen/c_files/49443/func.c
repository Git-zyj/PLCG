/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49443
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_11)))))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned short)58658)) ? (((/* implicit */int) (unsigned short)46377)) : (((/* implicit */int) (unsigned short)65280)))) : (((/* implicit */int) (unsigned short)17720))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) max((((/* implicit */int) min(((unsigned short)46377), ((unsigned short)19159)))), ((~(((/* implicit */int) var_12)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? ((-(((/* implicit */int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) arr_3 [i_0] [i_0]))))))) : (((/* implicit */int) var_0))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_5 [i_1])))));
        var_23 |= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_0 [i_1])))))) == (((/* implicit */int) ((unsigned short) ((unsigned short) (unsigned short)31971))))));
    }
    var_24 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)26756)) != (((/* implicit */int) (unsigned short)8188)))))));
    var_25 |= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((var_13), (var_2)))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_14))))) : (((/* implicit */int) min(((unsigned short)0), ((unsigned short)19955)))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (unsigned short)12464)) - (12458)))))) ? (((/* implicit */int) max(((unsigned short)1154), (var_10)))) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_7)))))))));
}
