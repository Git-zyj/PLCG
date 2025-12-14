/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208472
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
    var_18 = (!(((var_13) && ((!(((/* implicit */_Bool) var_3)))))));
    var_19 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_16))))))) || (((/* implicit */_Bool) var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    var_20 &= var_4;
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) var_16))));
                                var_22 *= ((/* implicit */unsigned char) var_15);
                                var_23 = ((/* implicit */int) arr_14 [i_4] [i_3] [i_2] [i_2] [i_1] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            {
                                var_24 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_17 [i_2 - 1] [i_2 - 1] [i_2] [i_2] [i_2] [i_2 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))));
                                var_25 = ((/* implicit */int) var_16);
                                var_26 = max((((((/* implicit */_Bool) ((var_16) ? (arr_19 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) ((arr_14 [i_2] [i_1] [i_2] [i_5] [i_5] [i_2]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) ((arr_17 [i_0] [i_1] [i_2] [i_2] [i_5] [i_0]) > (((/* implicit */unsigned long long int) arr_10 [i_1] [i_2] [i_5] [i_6]))))))), (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) != (arr_0 [i_0])))) / ((+(var_7))))));
                                var_27 = ((/* implicit */int) ((9223372036854775800LL) << (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                }
                var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))))))));
            }
        } 
    } 
}
