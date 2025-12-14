/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26415
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
    var_17 = ((/* implicit */short) ((((((/* implicit */int) var_0)) == (((((/* implicit */int) (short)-1)) + (((/* implicit */int) var_16)))))) ? (((/* implicit */int) var_13)) : (((var_14) | (((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_0)))))))));
    var_18 = (unsigned short)8092;
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [(signed char)9] [(signed char)1] [(unsigned char)2] = ((/* implicit */unsigned short) arr_1 [i_0]);
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1022)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_6 [i_2] [i_1] [i_0]))))) ? (min((2ULL), (arr_2 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21307))) < (arr_5 [i_2])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned short)18918))))), ((short)-1))))) : (min((arr_2 [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_2] [i_1] [(signed char)5] [i_0])) / (((/* implicit */int) (signed char)41)))))))))));
                }
            } 
        } 
    } 
}
