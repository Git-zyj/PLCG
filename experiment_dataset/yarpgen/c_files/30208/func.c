/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30208
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_0] = ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */int) (_Bool)1)) : ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_1 + 1] [i_1 - 1])) : (arr_1 [i_0 + 1] [i_1]))));
            arr_7 [i_0] [i_0] = ((((/* implicit */int) arr_5 [i_0 + 1] [i_0])) >= ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 4 */
                for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    arr_12 [i_0] [(short)9] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -1832647058)))))));
                    var_10 = ((((/* implicit */int) arr_2 [i_1 - 2])) - (((2147483626) << (((((/* implicit */int) (_Bool)1)) - (1))))));
                    var_11 *= ((/* implicit */short) ((int) arr_5 [i_1] [i_3]));
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_12 = (~((-(var_4))));
                    var_13 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_5)))))));
                    var_14 *= ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (var_4) : ((+(((/* implicit */int) arr_5 [i_0] [i_1])))));
                }
                for (int i_5 = 4; i_5 < 17; i_5 += 2) 
                {
                    var_15 = ((/* implicit */short) ((arr_10 [i_0 + 1] [i_0] [i_0 + 1]) ? (arr_14 [i_0 + 1] [i_0 + 1]) : (33415685)));
                    arr_19 [18] [i_1 - 2] [i_1 - 2] [i_0] [i_1 - 1] = ((((/* implicit */int) arr_13 [i_1 - 1] [i_0 + 1] [i_5 + 1] [i_0])) ^ (((((/* implicit */int) var_0)) ^ (arr_18 [(short)8] [i_1]))));
                    /* LoopSeq 2 */
                    for (short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_5] [i_0] [i_5] [i_6] [i_0 + 1] |= (+(((/* implicit */int) arr_4 [i_0 + 1] [i_1 - 2])));
                        arr_23 [i_0] = ((/* implicit */_Bool) (short)32767);
                        var_16 ^= arr_4 [i_2] [i_1];
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        var_17 = ((/* implicit */short) (-(((/* implicit */int) arr_24 [i_0 + 1] [i_1 + 1] [i_2] [i_5]))));
                        arr_27 [i_0 + 1] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1] = (short)19575;
                        var_18 = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                        var_19 = ((arr_17 [9] [9] [9] [i_0]) >> ((((-(((/* implicit */int) var_6)))) + (17021))));
                        var_20 ^= ((/* implicit */short) (~(((/* implicit */int) (short)19712))));
                    }
                }
                for (short i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    var_21 = ((/* implicit */short) ((var_3) && (((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_2] [i_8] [i_0])))))));
                    var_22 = ((/* implicit */_Bool) ((int) ((int) arr_9 [i_0] [i_2])));
                    arr_31 [i_0] = ((/* implicit */int) var_8);
                }
                var_23 = ((/* implicit */short) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_9 [i_1 + 1] [i_0 + 1]))));
                var_24 *= ((/* implicit */int) (short)10766);
            }
            var_25 = ((/* implicit */short) ((_Bool) arr_0 [i_0]));
        }
        arr_32 [i_0] = var_6;
    }
    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_6))));
}
