/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32340
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_6 [i_0 + 4] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) 2125575857609466292ULL)))))) : (max((var_1), (((/* implicit */unsigned int) 1526568356))))))));
                    arr_9 [(short)12] [i_0] = ((/* implicit */short) arr_6 [i_1 - 1] [i_1 - 1]);
                    var_20 *= ((/* implicit */unsigned int) max((((/* implicit */int) max((arr_8 [i_1 - 1]), (arr_8 [i_1 - 1])))), (max((((/* implicit */int) arr_4 [i_0 + 3] [i_2 - 1])), (max((-1192457966), (((/* implicit */int) (unsigned char)255))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_4] [i_4] [i_2] [i_2] [i_2 + 1] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_1 - 1] [i_0]) ? (885562002U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))))) + (((/* implicit */int) arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_3]))));
                                var_21 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_0 + 2] [i_0 + 2] [i_0] [i_0 - 2])))) ? ((~(((/* implicit */int) arr_0 [i_2 + 1] [i_2 + 1])))) : (max(((-(((/* implicit */int) (unsigned short)31208)))), (((/* implicit */int) min((arr_5 [i_2] [i_2]), (((/* implicit */unsigned short) (_Bool)0)))))))));
                                var_22 -= ((/* implicit */unsigned short) 1403657507U);
                                var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_0 - 1])) ? (0LL) : (((/* implicit */long long int) arr_12 [i_3] [i_3] [i_2 + 2] [i_2] [i_1 - 1] [i_0 - 1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_1 - 1] [i_0 + 3]))))) : ((-(arr_2 [i_2 - 1])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) max((((/* implicit */short) var_12)), (var_3)))) : ((~(((/* implicit */int) var_5))))));
    var_25 = ((/* implicit */unsigned long long int) var_17);
}
