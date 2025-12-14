/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245662
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
    var_10 = ((/* implicit */unsigned short) var_7);
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */short) max((((/* implicit */long long int) (-(arr_6 [i_0])))), (263882790666240LL)));
                    var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_2] [i_2]))))), ((+(arr_2 [i_1] [i_0]))))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_14 [i_0] [i_0] [i_3] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (0U)))) ? (arr_11 [i_0] [i_0] [i_2] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((var_8) || (((/* implicit */_Bool) (unsigned char)148)))))))), (((/* implicit */long long int) ((max((var_7), (((/* implicit */unsigned int) (unsigned short)57896)))) >= (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_13 [i_0] [i_0]))))))))));
                        arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) arr_0 [i_0 - 1])) & (((/* implicit */int) arr_0 [i_0 + 2])))));
                    }
                }
            } 
        } 
    } 
}
