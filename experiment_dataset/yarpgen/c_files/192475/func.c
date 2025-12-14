/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192475
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_16 ^= ((/* implicit */signed char) var_8);
                var_17 = ((/* implicit */long long int) (+(max((((((/* implicit */_Bool) 14605938236102391863ULL)) ? (arr_4 [i_0] [11LL]) : (((/* implicit */int) arr_3 [(short)7] [(short)7])))), (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (_Bool)1)))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_18 = ((/* implicit */int) min(((+(var_2))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = (~(max((((/* implicit */long long int) arr_7 [i_2] [i_2] [i_3 - 1] [(unsigned short)3])), (arr_14 [i_2] [i_2] [i_4] [i_4] [i_3 - 1] [i_3] [i_3]))));
                                var_20 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [i_4]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 4; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                                arr_22 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1])) ? (arr_16 [i_5 + 1] [i_5 - 4] [i_5 + 1] [i_5 - 1]) : (arr_16 [i_5 - 1] [i_5 + 2] [i_5 - 4] [i_5 + 2]))), (((((/* implicit */_Bool) arr_16 [i_5 + 2] [i_5 - 2] [i_5 - 3] [i_5 + 2])) ? (arr_16 [i_5 + 1] [i_5 - 2] [i_5 - 2] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
                                var_21 = ((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_2] [i_5]);
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) (-((-((-(((/* implicit */int) var_3))))))));
}
