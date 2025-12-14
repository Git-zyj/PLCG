/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46639
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)41627)) + (arr_0 [i_0]))))));
        var_16 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_14)) ^ (arr_0 [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((arr_3 [i_1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))) % (((/* implicit */int) (unsigned short)23907))));
        arr_7 [i_1] [(_Bool)1] = ((/* implicit */int) var_4);
    }
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2] = ((/* implicit */unsigned char) var_14);
        arr_13 [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_8 [i_2 + 1] [i_2])) : (((/* implicit */int) var_0))))));
        var_17 = ((_Bool) (unsigned short)23908);
        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((/* implicit */int) min((max(((short)3), ((short)-1))), (var_11)))) + (((/* implicit */int) var_14)))))));
        arr_14 [i_2] = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1))))))));
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_3] [i_3 + 1])) >> (((var_3) - (1202078901)))));
        var_20 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */int) var_14);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) (short)26)) : (((/* implicit */int) (_Bool)1))));
    }
    var_23 ^= (((_Bool)0) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) var_2)))));
    var_24 = var_3;
    var_25 = ((/* implicit */short) min((((((-865738245) + (((/* implicit */int) (unsigned short)0)))) - ((((_Bool)1) ? (-2081859595) : (var_3))))), (((((/* implicit */int) var_2)) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)41628))))))));
    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
}
