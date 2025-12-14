/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240535
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
    for (long long int i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 8; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 2] [i_0]))))));
                    arr_8 [i_0] [5ULL] = ((/* implicit */unsigned short) arr_0 [i_2] [i_0]);
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_6 [8LL] [i_0] [i_0] [i_1]))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_1] [(unsigned char)5] = ((/* implicit */long long int) min((((/* implicit */int) ((arr_12 [i_0 - 2] [i_0 - 2] [i_2] [i_3] [i_4 + 1]) == (((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (arr_4 [i_0 - 2] [i_0 + 1] [i_0]) : (arr_4 [i_1 + 3] [i_2 - 2] [i_0])))));
                                arr_14 [(_Bool)1] [i_0] = ((/* implicit */signed char) arr_6 [i_0] [i_3] [i_2] [i_0]);
                                arr_15 [(unsigned short)1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_6 [i_1 - 2] [i_2 + 2] [i_4] [i_0]))));
                                arr_16 [i_0] [i_0] [i_1 - 1] [(_Bool)1] [i_3] [i_4] = (+(((((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0])) ? (arr_12 [i_0 + 1] [i_0 - 2] [i_1 + 3] [i_1 + 3] [i_1 - 2]) : (((/* implicit */unsigned long long int) arr_10 [i_0 + 1] [i_0 - 2] [i_1 + 2] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 *= ((/* implicit */unsigned int) var_4);
    var_15 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (signed char i_5 = 1; i_5 < 21; i_5 += 1) 
    {
        for (int i_6 = 3; i_6 < 22; i_6 += 3) 
        {
            {
                arr_21 [i_6] [17ULL] = arr_20 [i_5] [i_6];
                arr_22 [(_Bool)1] [10LL] &= ((/* implicit */unsigned long long int) arr_19 [i_6 + 2] [10U]);
                var_16 ^= ((/* implicit */long long int) arr_19 [(_Bool)1] [i_6]);
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((((/* implicit */int) var_3)) > ((-((+(((/* implicit */int) var_5)))))))))));
}
