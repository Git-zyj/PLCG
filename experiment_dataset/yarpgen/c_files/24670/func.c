/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24670
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = 67108863;
        arr_3 [(signed char)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [2] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) arr_0 [i_0] [i_0]))))) : (2060547226U)));
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (783208161) : (var_14)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) min((((unsigned char) 659677837U)), (((/* implicit */unsigned char) ((arr_5 [i_1]) != (((/* implicit */int) (unsigned char)91)))))));
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((/* implicit */int) min((arr_4 [i_1]), (arr_4 [i_1])))), ((-(((/* implicit */int) arr_4 [i_1])))))))));
    }
    for (unsigned char i_2 = 1; i_2 < 15; i_2 += 3) 
    {
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned char)255), ((unsigned char)165)))) && (((/* implicit */_Bool) (unsigned char)1))));
        var_23 *= ((/* implicit */unsigned char) ((int) (_Bool)1));
        var_24 = ((/* implicit */signed char) ((((/* implicit */int) ((short) max((3), (arr_7 [i_2]))))) < (((/* implicit */int) arr_8 [i_2 + 1] [(unsigned char)14]))));
        var_25 = ((/* implicit */int) (short)16383);
    }
    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_26 = ((/* implicit */_Bool) (~(max((-1), (((/* implicit */int) arr_11 [i_3] [i_3]))))));
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) arr_9 [(unsigned char)8]);
        arr_13 [i_3] = ((/* implicit */unsigned int) arr_11 [i_3] [(unsigned char)7]);
    }
    var_27 = ((/* implicit */int) max(((unsigned char)91), (((/* implicit */unsigned char) var_8))));
    var_28 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (((var_11) << (3)))))) : (((/* implicit */int) var_17)));
}
