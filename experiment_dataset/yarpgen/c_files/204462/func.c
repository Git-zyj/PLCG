/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204462
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
    for (unsigned char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_0 - 1] [i_0 - 1] [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1890480135U)) ? (((/* implicit */int) arr_2 [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)0)))))));
                                arr_16 [i_4] [i_3 + 1] [i_1] [i_1] [i_0 + 1] = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)43)))) >= ((-(((/* implicit */int) arr_9 [i_0 - 1] [i_1] [i_2] [i_2] [i_1] [i_4]))))));
                                var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(2404487177U)))) ? (arr_8 [(unsigned short)0]) : (((/* implicit */unsigned long long int) ((1890480140U) >> (((/* implicit */int) (_Bool)1)))))));
                            }
                            var_21 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_0 + 2] [i_0] [i_2] [i_3 + 1] [i_3])))))));
                        }
                    } 
                } 
                arr_17 [i_1] = ((/* implicit */unsigned int) var_1);
                arr_18 [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                arr_19 [i_0] [i_1] = ((/* implicit */long long int) ((((_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65517))))) : (((arr_5 [i_0] [i_0] [i_0 + 2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 2])))))));
                var_22 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_15)))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) max(((short)-32225), (((/* implicit */short) (_Bool)1))));
    var_24 = ((/* implicit */long long int) ((6382072084848218623ULL) | (((/* implicit */unsigned long long int) var_15))));
    var_25 = ((/* implicit */unsigned short) max((((((/* implicit */long long int) (-(((/* implicit */int) var_10))))) ^ (var_15))), (((/* implicit */long long int) var_3))));
}
