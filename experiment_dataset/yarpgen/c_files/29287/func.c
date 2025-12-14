/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29287
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_11 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((max((max((arr_7 [i_1]), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_2 [i_2])), (arr_10 [i_0] [i_1] [i_0])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1])))))));
                    var_16 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1725697345))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) (~((+(min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_16 [i_1] = ((/* implicit */unsigned long long int) arr_14 [i_3 - 1] [i_1] [i_3 - 2] [i_1] [i_3 + 1]);
                                arr_17 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_3 - 1])) ? (((((/* implicit */_Bool) arr_6 [i_1] [i_3])) ? (arr_7 [i_0]) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_2])))) : (((/* implicit */unsigned long long int) arr_12 [i_4] [i_1] [i_1] [i_0]))))));
                                arr_18 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_2 [i_0]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))) : (min((arr_7 [i_3 + 1]), (((/* implicit */unsigned long long int) ((int) arr_5 [i_2] [i_3])))))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)24043)) ? (1725697345) : (((/* implicit */int) (unsigned char)0))));
                            }
                        } 
                    } 
                    arr_19 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (+(max((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)41484))))), (((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24045))) : (-3103651990319061969LL)))))));
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))));
}
