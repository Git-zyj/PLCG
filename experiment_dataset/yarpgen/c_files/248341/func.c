/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248341
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
    var_20 = var_6;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 1; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) max((arr_6 [(_Bool)1] [i_1 - 3] [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)0))))) && ((!(((/* implicit */_Bool) var_17))))))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_3 [i_1 - 2] [14] [i_1 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_18);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */int) arr_10 [i_0] [i_0] [(_Bool)1] [i_0] [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (arr_7 [i_1 + 1] [i_0] [i_3 + 1] [i_4])))) ? (arr_5 [i_1] [i_1 - 1] [i_1]) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned char)40))))))));
                                arr_14 [i_0] [i_4] [2] [(_Bool)1] [(unsigned char)14] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (min((-2118061602), (max((((/* implicit */int) arr_9 [i_0] [i_1 - 2] [i_4] [i_4])), (arr_5 [5LL] [i_3] [i_4]))))) : (((/* implicit */int) (short)-30246))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) min((((/* implicit */int) var_13)), (((((/* implicit */_Bool) ((long long int) 1098877291))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!((_Bool)1)))))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_23 += ((/* implicit */short) arr_5 [6] [i_1] [(unsigned short)16]);
                                arr_19 [i_0] [i_1] [(unsigned char)10] [(unsigned short)13] [i_6] = arr_9 [i_1 - 2] [i_1 - 2] [i_0] [i_6];
                                arr_20 [(unsigned char)12] [i_5] [i_0] [(unsigned char)16] [(unsigned char)5] [i_2] = ((/* implicit */int) (_Bool)1);
                                var_24 += ((/* implicit */unsigned int) arr_7 [i_0] [i_5] [i_2] [i_5]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
