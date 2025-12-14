/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2078
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
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)-22))))), (((long long int) ((((/* implicit */int) var_5)) != (((/* implicit */int) var_7)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                            {
                                arr_12 [(unsigned short)13] = ((/* implicit */_Bool) min(((-(arr_5 [i_1] [i_2]))), (((((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) arr_0 [i_4])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [i_3] [i_1])))))));
                                var_16 = ((/* implicit */long long int) max((((/* implicit */short) (_Bool)1)), ((short)32755)));
                            }
                            arr_13 [i_3] [i_2] [i_1] [i_1] [i_0] = (-((-(((/* implicit */int) max((var_4), (arr_4 [i_3] [i_0])))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) max((var_17), (var_3)));
                var_18 = ((/* implicit */unsigned char) ((int) arr_1 [i_0]));
                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((((/* implicit */int) var_6)), (var_9)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1])))), (((/* implicit */int) var_6)))))));
                arr_14 [i_0] [i_0] [i_0] = ((/* implicit */short) ((min((min((((/* implicit */long long int) var_10)), (arr_5 [i_0] [i_0]))), (((/* implicit */long long int) arr_0 [i_1])))) < (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((unsigned long long int) (unsigned short)8191)))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_13);
    var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_13) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (var_11)))), (min((((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
    var_22 = ((/* implicit */unsigned long long int) var_9);
}
