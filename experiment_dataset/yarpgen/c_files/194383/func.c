/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194383
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
    for (int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : ((+(((/* implicit */int) arr_2 [i_0] [14U]))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (max((var_3), (((/* implicit */unsigned int) arr_9 [i_3] [i_1] [i_2] [i_2] [i_4])))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */short) var_18)))))))))));
                                arr_14 [i_0] [i_0] [i_1] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) max((((((((/* implicit */_Bool) var_0)) || ((_Bool)1))) ? (arr_5 [i_0]) : (((((/* implicit */_Bool) 8424442873348295713ULL)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) var_0)))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0 - 2] [2LL])))))));
                                var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (min((((/* implicit */unsigned long long int) var_7)), (arr_11 [i_3] [i_3] [i_0] [i_3] [i_3]))))), (((/* implicit */unsigned long long int) (+(var_9))))));
                                var_21 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_13 [i_4] [7] [i_0] [i_0] [i_4] [i_0 - 2]), (arr_13 [i_0] [i_4] [i_0] [i_0] [i_1] [i_0 - 2])))), (((((/* implicit */_Bool) arr_13 [i_3] [i_3] [i_0] [i_0] [14ULL] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4] [i_4] [i_0] [i_0] [i_3] [i_0 - 2]))) : (8621298207055969002ULL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */int) ((min((((/* implicit */long long int) max((var_12), (((/* implicit */int) var_5))))), (((88722805239881184LL) << (((10022301200361255902ULL) - (10022301200361255897ULL))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_23 = ((int) (~(var_12)));
}
