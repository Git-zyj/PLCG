/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215489
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
    var_15 = ((/* implicit */_Bool) ((int) ((((_Bool) var_12)) ? (var_9) : (min((((/* implicit */unsigned long long int) var_1)), (var_7))))));
    var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) (unsigned char)98)))))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (var_9)))) ? (((var_12) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)158))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (var_1))))))));
    var_17 = ((/* implicit */unsigned int) (unsigned char)158);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 20; i_1 += 2) 
        {
            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_0]) ? (arr_1 [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_0])))))) ? (arr_0 [i_0 - 1]) : (arr_1 [i_0] [i_1])));
            arr_5 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 - 4] [i_1])) ? (((/* implicit */int) arr_3 [i_1 - 2] [i_1])) : (((/* implicit */int) arr_3 [i_1 - 4] [i_1]))));
        }
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_2))) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) (unsigned char)170)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_4 [i_0])))))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
                        {
                            {
                                var_21 |= ((/* implicit */long long int) 2134147661956922095ULL);
                                var_22 *= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) arr_8 [i_0] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) : (arr_0 [i_4]))));
                                var_23 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)1197))));
                                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_4] [i_5])) ? (((/* implicit */int) arr_4 [i_0])) : (arr_10 [i_3])));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_16 [i_0] [i_6] [i_6] [i_6] [i_6] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        var_25 = ((/* implicit */unsigned short) arr_6 [i_6] [i_2] [i_0]);
                        arr_17 [i_6] [i_3] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_7 [i_0] [i_0 + 1] [i_3]));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            arr_22 [i_0] [i_6] = ((/* implicit */int) arr_2 [i_0 + 1]);
                            var_26 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                        }
                        for (unsigned int i_8 = 2; i_8 < 21; i_8 += 4) 
                        {
                            arr_25 [i_0] [i_2] [i_3] [i_8] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0] [i_2] [i_6] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_2] [i_2] [i_3] [i_6] [i_8] [i_8]))) : (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned short)64339))));
                            arr_26 [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_1 [i_0] [i_2])))) ? (arr_8 [i_0] [i_2] [i_3] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_8]))))));
                            var_28 = ((/* implicit */unsigned int) arr_1 [i_0] [i_2]);
                        }
                    }
                }
            } 
        } 
        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)1197))));
    }
}
