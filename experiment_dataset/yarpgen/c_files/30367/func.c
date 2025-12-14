/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30367
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
    var_19 = ((/* implicit */int) min((min(((-(var_15))), (((/* implicit */unsigned int) max(((signed char)121), (var_4)))))), (((/* implicit */unsigned int) max((((/* implicit */short) var_1)), (min((var_5), (((/* implicit */short) var_11)))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [9] = ((/* implicit */signed char) ((var_0) < (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))));
        var_20 = -766565228;
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_21 = -21339992;
        arr_5 [14U] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((arr_0 [i_1]), (var_18))), (((/* implicit */int) (unsigned short)32444))))) ? ((((+(((/* implicit */int) arr_1 [(unsigned char)1])))) + ((-(766565219))))) : ((-(((/* implicit */int) arr_3 [i_1]))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        var_22 -= var_9;
        arr_8 [i_2] = ((/* implicit */unsigned int) max((max((min((((/* implicit */int) var_10)), (arr_0 [i_2]))), (-130848149))), ((~(var_17)))));
        arr_9 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_2])))) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)134))))) ? (((var_2) / (((/* implicit */unsigned int) ((/* implicit */int) (short)29004))))) : (min((((/* implicit */unsigned int) arr_7 [i_2])), ((~(var_15)))))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2]))))) + (((/* implicit */int) arr_1 [i_2]))));
        var_24 = ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32738))))) ? (max((max((arr_7 [12]), (arr_0 [i_2]))), (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) : (arr_0 [i_2]));
    }
    /* vectorizable */
    for (int i_3 = 1; i_3 < 15; i_3 += 4) 
    {
        arr_14 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_3 + 3] [i_3]))));
        arr_15 [i_3] = ((/* implicit */long long int) arr_10 [11]);
        var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) 130848148)) ? (((((/* implicit */int) var_14)) | (((/* implicit */int) arr_1 [(signed char)0])))) : (((/* implicit */int) var_4))));
    }
    var_26 += ((/* implicit */int) (-((+(min((((/* implicit */unsigned int) (unsigned char)125)), (var_2)))))));
    var_27 = ((/* implicit */short) var_16);
    var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((var_12) - (((/* implicit */int) ((var_18) > (var_12)))))) % (((/* implicit */int) var_14)))))));
}
