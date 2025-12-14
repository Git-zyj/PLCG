/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42973
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
    var_20 = ((/* implicit */unsigned short) min((min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_16))))))), (((/* implicit */unsigned long long int) (+(var_0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) arr_7 [i_0]))))) / (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)127))) / (arr_3 [i_1] [i_1])))) ? (((/* implicit */long long int) (-(897426392U)))) : (4192256LL)))));
                    var_21 = ((/* implicit */unsigned short) arr_3 [i_0] [i_0]);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 23; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            {
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(max((arr_10 [i_3] [i_3]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_4])) ? (((/* implicit */int) arr_14 [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_3]))))))))))));
                var_23 = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_12 [(unsigned char)10])), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 1]))) : (((((/* implicit */_Bool) 4192256LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4]))) : (var_7)))))));
                var_24 += ((/* implicit */signed char) arr_11 [i_3]);
                var_25 -= ((/* implicit */int) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) arr_11 [i_4]))))) ? (((/* implicit */unsigned int) arr_9 [i_4])) : (((((/* implicit */_Bool) 0ULL)) ? (2345324591U) : (((/* implicit */unsigned int) arr_9 [i_4])))))));
            }
        } 
    } 
}
