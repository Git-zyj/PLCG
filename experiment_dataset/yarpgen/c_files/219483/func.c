/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219483
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
    var_20 &= ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_2] [6LL])) ? (arr_2 [i_0] [4ULL]) : (arr_2 [i_0] [6LL]))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) == (arr_2 [i_0] [(unsigned short)2])))))))))));
                    arr_8 [i_0] = ((((/* implicit */_Bool) ((((unsigned int) arr_6 [i_0] [i_0] [i_0] [i_0])) | (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))))) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((arr_2 [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                    var_22 = ((/* implicit */unsigned short) (((+(arr_1 [i_0]))) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (~(arr_6 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-(((((/* implicit */unsigned long long int) ((unsigned int) var_6))) * (((unsigned long long int) var_12)))))))));
}
