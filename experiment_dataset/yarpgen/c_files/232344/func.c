/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232344
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) var_3))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((unsigned short)44578), (arr_10 [i_0] [i_1] [i_3])))) | (((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            var_11 = (unsigned short)8191;
                            arr_15 [i_0] [i_1] = arr_8 [i_1] [i_1] [i_3] [i_4];
                            var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_1] [i_2 + 2])) | (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2 - 1]))))));
                        }
                        for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            var_13 = var_0;
                            arr_18 [(unsigned short)3] [i_3] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_1)) + (((/* implicit */int) arr_9 [i_5 + 1] [i_1] [i_1]))))));
                            arr_19 [i_0] [i_1] [i_2 + 4] [i_3] [i_5] [i_5 - 1] = var_7;
                        }
                        var_14 = arr_14 [i_2 - 1];
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) min((var_3), (var_8))))));
    }
    for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
    {
        arr_23 [i_6] = (unsigned short)58919;
        var_16 = arr_3 [i_6] [i_6];
    }
    /* LoopNest 2 */
    for (unsigned short i_7 = 1; i_7 < 19; i_7 += 3) 
    {
        for (unsigned short i_8 = 2; i_8 < 19; i_8 += 3) 
        {
            {
                arr_30 [i_7] [(unsigned short)6] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_17 [i_7] [i_7] [(unsigned short)6] [(unsigned short)10] [(unsigned short)20] [i_7] [i_8])), ((~(((/* implicit */int) arr_4 [i_7 - 1] [i_8] [(unsigned short)14]))))));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65531)) ? (((/* implicit */int) (unsigned short)44584)) : (((/* implicit */int) arr_27 [i_8 + 1]))))) ? (((/* implicit */int) arr_16 [(unsigned short)16])) : (((((/* implicit */_Bool) arr_2 [i_7])) ? (((/* implicit */int) arr_17 [i_8 - 1] [(unsigned short)8] [(unsigned short)0] [i_7] [(unsigned short)0] [i_7] [i_7])) : (((/* implicit */int) (unsigned short)0))))));
            }
        } 
    } 
    var_18 = var_1;
}
