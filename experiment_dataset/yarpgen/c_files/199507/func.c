/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199507
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (min((((/* implicit */int) (unsigned char)175)), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (arr_2 [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((arr_3 [i_0]) < (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_0] [i_2])) : (arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned int) (((+(arr_14 [i_4] [i_3] [i_2] [i_0] [(unsigned char)20] [i_0] [i_0]))) >> (((((/* implicit */int) (unsigned short)52443)) - (52426)))));
                                var_20 = ((/* implicit */signed char) (((+(arr_10 [i_3] [i_3 + 2] [i_2] [i_3] [i_4]))) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */long long int) ((signed char) (_Bool)1));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (unsigned short)13116))));
}
