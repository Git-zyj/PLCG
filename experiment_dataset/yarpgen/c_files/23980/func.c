/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23980
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_13)) & ((~(6646484286622022446LL)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) 342582184)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))))), (((/* implicit */unsigned long long int) max((6646484286622022461LL), (((/* implicit */long long int) (signed char)-70))))))) >= (max((((/* implicit */unsigned long long int) (unsigned char)234)), (3475417595591426824ULL)))));
                                var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0])) > (arr_5 [i_1] [i_1] [i_1])))), ((~(((/* implicit */int) var_15)))))))));
                                var_19 = ((/* implicit */short) ((unsigned long long int) (-(arr_3 [i_4]))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)237))))) ? ((~(arr_4 [i_0] [i_1] [i_2]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_1] [i_2])))));
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((unsigned int) 49057998U)) > (((/* implicit */unsigned int) ((/* implicit */int) min((var_15), (arr_2 [i_2] [i_1])))))))), (((((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_1] [i_2])) & (var_10))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0])))))))))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_10 [i_0] [i_1] [i_2] [i_0] [i_1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 342582188)) ? (var_16) : (((/* implicit */int) (unsigned char)31))))) : (min((arr_9 [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
}
