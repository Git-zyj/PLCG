/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45807
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
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)24)) > (((/* implicit */int) (unsigned char)1))))))), (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)22))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)153))));
        arr_4 [i_0] = var_1;
    }
    /* vectorizable */
    for (unsigned char i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
        {
            arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(unsigned char)10]))))) + (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_2] [(unsigned char)3])) : (((/* implicit */int) var_1))))));
            arr_13 [i_1] [i_1 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? ((~(((/* implicit */int) (unsigned char)161)))) : (((/* implicit */int) ((unsigned char) arr_1 [i_2 + 4])))));
            arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_11 [i_2] [i_2 - 1]))));
        }
        for (unsigned char i_3 = 1; i_3 < 13; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 1; i_4 < 14; i_4 += 3) 
            {
                for (unsigned char i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    {
                        arr_24 [i_5] [(unsigned char)14] [i_3 + 2] [(unsigned char)14] [i_1] = var_8;
                        arr_25 [i_5] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)109))));
                    }
                } 
            } 
            arr_26 [i_1] [i_3] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)249))))));
            arr_27 [i_3 - 1] = (unsigned char)254;
            arr_28 [i_3 + 2] = var_3;
            arr_29 [i_1 - 2] = ((unsigned char) arr_22 [(unsigned char)2] [i_3] [(unsigned char)2] [(unsigned char)4]);
        }
        arr_30 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_8 [i_1 - 3] [(unsigned char)0] [(unsigned char)12])) : (((/* implicit */int) var_12))));
    }
    var_14 = var_12;
}
