/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43479
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
    var_11 = ((/* implicit */short) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_8 [i_1] [i_1] [(unsigned char)13] [i_1] [(unsigned char)2] = ((/* implicit */unsigned short) var_2);
                            var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) arr_4 [i_2] [i_2])) ? (arr_4 [i_1] [(unsigned short)0]) : (arr_4 [(unsigned short)3] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (arr_4 [i_0] [i_1]))))))))));
                            arr_9 [(unsigned short)6] [i_1] [i_2] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((min((arr_4 [i_1] [(signed char)1]), (((/* implicit */long long int) arr_5 [i_0] [(signed char)0] [i_2] [(unsigned short)7])))) + (((/* implicit */long long int) ((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_1)))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
