/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200521
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65535)), (((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_1 + 1]))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2))))));
                var_10 ^= var_0;
                var_11 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) arr_5 [i_0])) : (arr_2 [i_0] [i_1])))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_3 [i_1]))))), (172102229U)));
                var_12 = (~(arr_5 [i_1]));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 3; i_2 < 20; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            {
                arr_11 [i_2] = ((/* implicit */unsigned short) arr_7 [i_2]);
                var_13 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_8 [i_2 - 3]))) ? (((((/* implicit */_Bool) arr_8 [i_2 - 3])) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_7 [(_Bool)1])))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_2 - 1] [i_3] [i_2 + 1])) : (((/* implicit */int) (unsigned short)65535))))));
                arr_12 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2])) ? (var_6) : (((/* implicit */int) (unsigned short)65535))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_4);
}
