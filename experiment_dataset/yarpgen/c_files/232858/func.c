/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232858
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
    var_13 |= ((/* implicit */unsigned char) (((+(((var_10) - (((/* implicit */long long int) 4224224882U)))))) << (((((/* implicit */int) var_9)) + (14480)))));
    var_14 = (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (547761739)))));
    var_15 = ((((/* implicit */int) var_0)) > (var_4));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_16 *= ((/* implicit */unsigned char) var_1);
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-((+(var_7))))))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)162)) + (-2117080942)))) - (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_9 [i_0] [i_0] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)2)), (arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) var_2);
                                var_20 += ((/* implicit */_Bool) (unsigned char)12);
                                var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((var_5) / (((/* implicit */int) arr_0 [i_1] [i_1]))))), (arr_10 [i_4] [i_4] [i_4 + 1] [i_4])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 0U)))) : (arr_9 [i_0] [i_0] [i_0])));
                                arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) var_10);
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) arr_3 [i_0] [i_0]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_10)))), ((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0]))))))) >= (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0]))))))))))));
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) arr_0 [i_0] [i_0]));
                        arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) & (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))), (max((arr_4 [i_2] [i_2] [i_2]), (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                        var_24 = ((/* implicit */unsigned char) min((var_24), (var_8)));
                        arr_21 [i_0] [i_0] [i_0] [i_0] = arr_15 [i_0];
                    }
                }
                arr_22 [i_0] [i_0] = ((/* implicit */unsigned short) 2267092616U);
            }
        } 
    } 
}
