/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52829
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52829 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52829
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
    for (signed char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 3; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 15; i_2 += 2) 
            {
                {
                    arr_9 [(short)10] [i_1] [i_2 - 3] [i_2 + 1] = ((/* implicit */unsigned short) arr_3 [i_0] [i_0] [i_2 - 1]);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_16 [i_3] [i_4] [i_3] [i_2] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)182)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 + 1])))))) ? ((-(((/* implicit */int) arr_2 [i_0] [i_4 + 2])))) : (((((/* implicit */_Bool) (~(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 2])))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), (var_5)))) : ((~(((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1 - 2] [i_0]))))))));
                                arr_17 [(_Bool)1] [i_3] [(_Bool)1] [i_3] [(unsigned short)0] = ((/* implicit */short) (~(((((((/* implicit */_Bool) 1051450548360988132ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)43450))) : (var_1))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2 - 1] [(unsigned char)5] [i_2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) ((unsigned char) var_2)))))) : ((((+(var_1))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))))));
    var_13 = var_7;
}
