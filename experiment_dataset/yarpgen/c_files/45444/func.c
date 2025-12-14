/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45444
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
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
        var_14 = max((arr_1 [i_0]), ((short)32765));
        var_15 = ((/* implicit */short) var_3);
    }
    var_16 = ((/* implicit */_Bool) var_3);
    /* LoopNest 3 */
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_4 = 1; i_4 < 17; i_4 += 2) 
                    {
                        var_17 ^= ((/* implicit */unsigned char) arr_4 [i_1]);
                        arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) max((arr_11 [i_4]), (var_7))))));
                        var_18 |= ((/* implicit */_Bool) max((((var_12) ? (((/* implicit */int) max((var_3), ((unsigned char)253)))) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3 - 1] [i_4 - 1])))), (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))));
                        arr_14 [i_1] [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_9);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned char) arr_3 [i_1] [i_1]);
                        arr_19 [i_2] [i_2] = (unsigned char)251;
                        arr_20 [i_2] [i_2] [i_2] [i_2] = arr_11 [(short)5];
                        var_20 = ((/* implicit */short) (unsigned char)16);
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                    {
                        for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */short) var_5);
                                var_22 = arr_11 [i_6];
                                arr_26 [i_1] [i_2] [i_1] = var_10;
                                arr_27 [i_1] [i_1] [i_3] [i_6 + 1] [i_6] [i_6 + 1] [i_2] = ((/* implicit */short) max((min((((/* implicit */int) var_2)), ((+(((/* implicit */int) arr_21 [i_1])))))), (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (short i_9 = 2; i_9 < 12; i_9 += 1) 
        {
            {
                var_23 *= ((/* implicit */_Bool) max((((var_7) ? (((/* implicit */int) (short)32441)) : (((/* implicit */int) max((((/* implicit */short) var_2)), (arr_31 [i_8] [i_9 - 1] [i_8])))))), (((/* implicit */int) var_9))));
                /* LoopNest 3 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 12; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                var_24 = max((max((var_1), (((/* implicit */short) var_12)))), (((/* implicit */short) var_4)));
                                var_25 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (unsigned char)108)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_11 - 1] [i_10])) || (((/* implicit */_Bool) arr_23 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 1] [i_10] [i_9 - 1])))))));
                                var_26 = ((/* implicit */short) var_10);
                                arr_39 [i_8] [i_8] [i_11] [i_10] [i_8] [(unsigned char)3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_25 [i_8] [i_9 + 2] [i_12] [i_12]), (((/* implicit */short) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_25 [i_8] [i_9 + 1] [i_10] [i_8])) ? (((/* implicit */int) arr_25 [i_8] [i_9 + 2] [i_10] [i_11])) : (((/* implicit */int) (unsigned char)5)))) : (((((/* implicit */int) arr_25 [(_Bool)1] [i_9 - 1] [i_10] [i_10])) % (((/* implicit */int) arr_25 [i_9] [i_9 - 1] [i_9] [i_10]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_13 = 0; i_13 < 14; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        {
                            arr_45 [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_13])) / ((((-(((/* implicit */int) arr_42 [i_8] [i_9] [i_14])))) | (((((/* implicit */_Bool) (unsigned char)144)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))));
                            var_27 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)0))));
                        }
                    } 
                } 
            }
        } 
    } 
}
