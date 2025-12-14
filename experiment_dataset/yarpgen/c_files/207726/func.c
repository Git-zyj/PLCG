/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207726
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) arr_2 [i_0] [(unsigned char)9] [i_0]);
                            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_3]);
                        }
                    } 
                } 
                arr_9 [(unsigned char)5] [i_1] [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)10275));
                arr_10 [i_0] [i_0] [i_0] = max(((unsigned short)28672), ((unsigned short)28388));
                arr_11 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((arr_1 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)13)))))))) ? (((((/* implicit */_Bool) ((var_17) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((var_16), (((/* implicit */unsigned short) (_Bool)1)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_13))));
    var_20 = ((/* implicit */unsigned short) ((var_11) && (((/* implicit */_Bool) ((unsigned long long int) ((var_6) && (var_1)))))));
}
