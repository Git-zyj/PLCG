/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26764
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [(signed char)16])), (((((/* implicit */int) arr_2 [i_0] [i_0])) << (((((/* implicit */int) ((short) arr_1 [(_Bool)1]))) - (2707)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 652549545)) ? (arr_1 [i_0]) : ((~(arr_1 [(short)3])))));
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(max((((/* implicit */int) arr_0 [(unsigned char)21])), (arr_1 [(unsigned char)12])))))) ? ((~((+(((/* implicit */int) (_Bool)0)))))) : (arr_1 [(signed char)1])));
        var_19 = ((/* implicit */int) max((var_19), ((~(arr_1 [i_0])))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)333)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_1] [i_1]))))))))));
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_1] [i_1])) < (((/* implicit */int) arr_2 [i_1] [(signed char)2]))))) == (((/* implicit */int) ((((/* implicit */int) arr_2 [(signed char)11] [i_1])) < (((/* implicit */int) arr_2 [(unsigned char)19] [i_1]))))))))));
    }
    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_2)))) : ((~(((/* implicit */int) var_8)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))) || (((_Bool) var_6)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (int i_3 = 4; i_3 < 14; i_3 += 2) 
        {
            {
                var_23 = ((/* implicit */int) ((unsigned char) 2093225237));
                var_24 = arr_11 [(short)12] [(signed char)1] [7];
            }
        } 
    } 
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((var_0) < (((int) ((unsigned char) var_16))))))));
}
