/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233849
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233849 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233849
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
    var_10 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) (unsigned char)0)))) ? (var_0) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)(-127 - 1)))) ? (min((((/* implicit */int) max((arr_1 [(signed char)11]), (arr_7 [i_1] [i_1 - 1] [i_1] [i_1 + 4])))), ((-(((/* implicit */int) (unsigned short)35715)))))) : (((/* implicit */int) max(((short)-381), ((short)381))))));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */short) 0ULL);
                    arr_10 [i_2] [i_1] [(unsigned short)0] [(unsigned short)0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(signed char)17] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)25))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29805)))));
                    arr_11 [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)21322))));
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)-377))))) ? (arr_4 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_1 + 2] [i_0] [i_0])))));
                }
            } 
        } 
    } 
}
