/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29169
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            arr_9 [(unsigned short)11] = (unsigned short)40212;
                            var_17 = ((/* implicit */short) max((((/* implicit */unsigned short) (short)12)), ((unsigned short)40354)));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_4 = 1; i_4 < 11; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                arr_17 [i_4] = ((/* implicit */short) ((((((/* implicit */int) (short)-3388)) < (((/* implicit */int) (unsigned short)25182)))) ? (((((/* implicit */int) var_0)) + (((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_3 [i_4 + 1] [i_4]))));
                                var_18 -= arr_10 [(short)3] [i_6];
                                arr_18 [(unsigned short)6] [i_5] [i_4] [i_1] [i_4] [i_1] [i_0] = ((/* implicit */short) (unsigned short)33833);
                                arr_19 [i_0] [i_1] [i_4] [i_4 + 1] [i_5] [i_4] = ((/* implicit */short) ((unsigned short) arr_8 [i_0] [i_1] [i_1] [i_4 + 1]));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 2; i_7 < 11; i_7 += 3) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 12; i_8 += 4) 
                        {
                            {
                                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) arr_11 [i_0] [i_0 + 3])) : (((/* implicit */int) arr_6 [(unsigned short)2]))));
                                arr_24 [i_0] [i_1] [i_4] [i_0] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_16))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0 + 2])) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) arr_20 [i_0 + 2]))));
                }
                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min(((-(((/* implicit */int) min(((unsigned short)25182), (((/* implicit */unsigned short) (short)22437))))))), (((/* implicit */int) (short)32743)))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        for (short i_10 = 0; i_10 < 15; i_10 += 2) 
        {
            for (short i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (unsigned short)9858))) ? (((((/* implicit */int) arr_26 [i_9])) / (((/* implicit */int) arr_26 [i_9])))) : (((/* implicit */int) arr_26 [i_9]))));
                    var_23 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) arr_30 [i_11] [i_9] [i_9]))))) ? ((~(((/* implicit */int) arr_29 [i_11] [i_10])))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_29 [i_9] [i_11])), ((unsigned short)9933)))))));
                    var_24 = min((min((((/* implicit */unsigned short) var_6)), (arr_26 [i_11]))), (arr_26 [i_9]));
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)32743)) : (((/* implicit */int) (unsigned short)22341))));
}
