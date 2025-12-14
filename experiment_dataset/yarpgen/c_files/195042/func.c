/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195042
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)30720)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_1 [i_0]))))))));
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [(unsigned short)10])))))))) ? ((+(((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0 + 1])))))) : (((/* implicit */int) max((arr_3 [i_0 + 1] [i_0]), (min((arr_1 [i_0 + 2]), (arr_3 [i_0 + 2] [i_0]))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0])) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_1] [i_1]))))));
            arr_7 [i_0] [i_0] [(unsigned char)2] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_3 [i_0] [i_0]))))));
            arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)215))));
            arr_9 [i_0] [i_1 - 2] = arr_1 [i_0];
        }
        /* vectorizable */
        for (unsigned char i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
        {
            arr_13 [i_0] [(unsigned short)14] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_10 [i_0] [i_0] [i_2 - 2]))));
            arr_14 [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_0 [i_0]))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 14; i_3 += 1) /* same iter space */
        {
            arr_18 [i_0] [i_3] = ((/* implicit */unsigned short) arr_12 [i_3 - 2] [i_3] [i_0 - 1]);
            var_15 = arr_4 [i_3];
        }
    }
    var_16 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_5)))))), (((/* implicit */int) min((((/* implicit */short) (unsigned char)168)), ((short)8480))))));
}
