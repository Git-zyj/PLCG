/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41779
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
    var_13 = ((/* implicit */unsigned int) (unsigned short)65535);
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) (~(-1141114784)));
                    var_15 = ((/* implicit */unsigned short) (~(arr_1 [i_0 - 1])));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */int) var_3);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_14 [i_1] [i_1] [i_2] [i_1] [(short)8] [(short)8] [i_1] = ((/* implicit */unsigned char) -1141114784);
                            var_17 = ((/* implicit */unsigned short) arr_10 [i_2]);
                            arr_15 [i_2] [i_1] [i_1] [i_2] [i_3] [i_0 - 1] [i_2] = ((/* implicit */unsigned short) arr_0 [i_0]);
                            var_18 = ((/* implicit */unsigned short) var_3);
                            arr_16 [i_0] [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) (+(222337877U)));
                        }
                        /* vectorizable */
                        for (signed char i_5 = 2; i_5 < 12; i_5 += 2) 
                        {
                            var_19 = ((/* implicit */short) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_3] [i_5 + 2] [i_5 + 1] [i_5] [i_2]))));
                            var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_19 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])) - (-1141114776)))));
                        }
                        for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                        {
                            var_21 *= ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36113))) | (4294967277U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                            var_22 = ((/* implicit */int) min((((8263296207696756992ULL) >> ((((~(var_1))) + (1663884063))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (4072629419U) : (222337877U))), ((~(var_5))))))));
                        }
                    }
                    for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) 
                    {
                        var_23 *= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (4072629393U))))));
                        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_7 + 1])))) ? ((-(((/* implicit */int) (signed char)-18)))) : ((+(arr_0 [i_7 + 1])))));
                        arr_27 [i_2] [i_1] [i_2] [i_2] [i_2] = arr_25 [i_2] [i_2];
                    }
                }
            } 
        } 
    } 
}
