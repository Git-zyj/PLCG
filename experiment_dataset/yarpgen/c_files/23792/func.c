/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23792
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
    var_16 = ((/* implicit */unsigned short) var_12);
    var_17 = var_6;
    var_18 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) arr_0 [i_0]);
                            arr_11 [(unsigned short)13] [i_0] [19] [(unsigned char)12] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((var_5) == (700633141)))))), ((+(((/* implicit */int) min(((unsigned char)245), ((unsigned char)0))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 1; i_4 < 24; i_4 += 2) 
                {
                    for (unsigned short i_5 = 4; i_5 < 24; i_5 += 2) 
                    {
                        {
                            var_20 += ((/* implicit */int) var_10);
                            var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(2147483647)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_5] [i_0] [i_4 - 1] [i_5 - 2])))))));
                            /* LoopSeq 1 */
                            for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                            {
                                arr_19 [i_0] [i_0] [i_1] [i_4] [i_5] [i_0] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((((/* implicit */int) arr_17 [i_4] [i_6] [i_4] [i_5] [i_5] [i_0] [i_5])) > (((/* implicit */int) arr_2 [(unsigned char)11]))))) - (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)28867)) && (((/* implicit */_Bool) var_10))))))) & (((var_6) << (((((/* implicit */int) min((arr_6 [(unsigned char)20]), (arr_9 [i_5 - 3] [i_5] [i_4] [i_5] [i_6] [i_4])))) - (21)))))));
                                arr_20 [i_0] [16] [i_4] [i_5] [i_6] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) arr_17 [i_6] [i_0] [i_5] [i_4] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_6] [i_1] [i_0]))) : ((~(700633141)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)241)) >= ((~((-2147483647 - 1))))))) : (((int) max((((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_5] [i_6] [i_0] [(unsigned short)14])), (arr_0 [i_0])))));
                                arr_21 [i_0] [i_1] [i_1] [i_4 - 1] [i_0] [i_5] [(unsigned short)9] = ((/* implicit */unsigned char) arr_7 [i_0] [i_1] [i_4] [i_5]);
                            }
                            var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)74)), (var_2))))));
                        }
                    } 
                } 
                arr_22 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])) - ((+(arr_8 [i_0] [i_0] [i_0] [i_1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)14] [i_1] [i_0])) ? (((/* implicit */int) arr_18 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [(unsigned short)10])) : (((/* implicit */int) var_11))))) ? ((+(((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))) : ((+(((/* implicit */int) var_14))))));
                arr_23 [i_0] = ((((int) arr_18 [i_0] [(unsigned char)6] [i_0] [i_0] [i_0] [i_1] [i_1])) ^ (min((((((/* implicit */int) var_1)) * (((/* implicit */int) arr_1 [i_0] [i_1])))), (((/* implicit */int) arr_12 [i_1] [i_1] [i_0])))));
            }
        } 
    } 
    var_23 |= ((/* implicit */int) var_13);
}
