/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2017
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
    var_15 = ((/* implicit */unsigned int) ((unsigned char) min((((/* implicit */int) (_Bool)0)), (((int) 1261696775U)))));
    var_16 += ((/* implicit */unsigned short) max((max((((unsigned char) var_3)), (((/* implicit */unsigned char) var_1)))), (max(((unsigned char)194), (min((((/* implicit */unsigned char) var_10)), ((unsigned char)188)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (max((max((var_4), (((/* implicit */unsigned int) arr_1 [(_Bool)1] [i_0])))), (((/* implicit */unsigned int) min((((/* implicit */int) var_11)), (arr_2 [i_0]))))))));
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((min((arr_0 [i_0] [i_0 - 2]), (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) / (arr_2 [i_0 - 3])))), (max((max((((/* implicit */unsigned int) arr_2 [(signed char)1])), (var_0))), (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_0]))))));
        arr_3 [i_0] [(unsigned short)4] &= ((/* implicit */short) arr_0 [i_0 + 1] [i_0]);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) min((((var_9) / (((/* implicit */int) var_13)))), (((/* implicit */int) min((((/* implicit */short) ((_Bool) arr_1 [(_Bool)1] [(_Bool)1]))), (var_14)))))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) max((min((arr_6 [i_2] [i_0] [i_0]), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0])))), (((/* implicit */signed char) var_5))));
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) min((((((/* implicit */int) min((var_3), (arr_7 [i_0] [i_1] [i_2])))) * (((/* implicit */int) max((var_6), (var_10)))))), (((/* implicit */int) min((min((var_6), (arr_6 [i_0 + 1] [i_2] [i_2]))), (max((((/* implicit */signed char) arr_5 [i_0] [i_0] [i_0])), (var_3)))))))))));
                }
            } 
        } 
    }
    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        var_22 = ((/* implicit */_Bool) arr_8 [(unsigned char)5] [i_3]);
        var_23 = ((/* implicit */signed char) var_7);
    }
}
