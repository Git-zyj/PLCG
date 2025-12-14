/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224843
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
    var_18 = ((/* implicit */_Bool) ((signed char) var_17));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        var_20 |= ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (signed char)5)) | (((/* implicit */int) var_13))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned char) var_8)))));
        /* LoopSeq 1 */
        for (signed char i_2 = 4; i_2 < 8; i_2 += 3) 
        {
            arr_6 [i_1] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (!((_Bool)1))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                arr_9 [i_3] [i_3] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_2 - 4] [i_2 - 4])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) arr_3 [i_2 - 4] [i_2 - 2]))));
                arr_10 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_1] [i_1])) | (((/* implicit */int) arr_8 [i_3] [i_1]))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_22 = ((signed char) (_Bool)1);
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (signed char)-8))));
                }
                arr_17 [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)7))));
            }
        }
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 += ((/* implicit */signed char) (_Bool)1);
        arr_21 [i_6] [i_6] = (_Bool)1;
        arr_22 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) var_14))) >> ((((_Bool)1) ? (((/* implicit */int) (signed char)1)) : (((/* implicit */int) arr_19 [i_6]))))));
        var_25 += ((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) (((-(((/* implicit */int) var_4)))) > (((/* implicit */int) (unsigned char)19)))))));
        var_26 = (_Bool)1;
    }
}
