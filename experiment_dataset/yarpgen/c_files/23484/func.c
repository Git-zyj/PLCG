/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23484
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
    var_11 = ((/* implicit */unsigned int) max(((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3)))))), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [(unsigned short)2] = ((/* implicit */short) arr_4 [i_0] [i_0]);
                var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) ((var_5) && (((/* implicit */_Bool) arr_2 [i_1] [i_1]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (unsigned char)121);
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((unsigned long long int) arr_3 [i_0] [i_0])) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_4 [i_0] [i_0]))))));
                            arr_12 [i_0] [6] [i_2] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_0 [i_0])) % (((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_0 [i_0])) + (((/* implicit */int) arr_0 [i_0]))))));
                            var_13 = ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_3 [i_3] [i_0])) ? (arr_2 [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_2))));
                            arr_13 [i_3] [i_3] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (arr_8 [i_0] [i_0]) : (arr_8 [i_0] [i_0])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_3] [i_2] [17] [i_1] [i_0])) - ((-(((/* implicit */int) arr_10 [(signed char)3] [(signed char)3] [i_1] [i_2] [i_2]))))))) : (((arr_7 [i_0]) - (arr_7 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) (~(max((((/* implicit */int) var_4)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))))));
}
