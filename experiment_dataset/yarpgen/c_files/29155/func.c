/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29155
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
    var_19 = ((/* implicit */signed char) var_2);
    var_20 = ((/* implicit */long long int) var_16);
    var_21 = ((/* implicit */short) var_0);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_4 [i_0 + 1])));
                arr_6 [i_1] [(_Bool)1] [i_0] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1]))))), (((((/* implicit */int) ((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0 + 1])))))) & ((+(((/* implicit */int) (unsigned char)243))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)243)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 + 1]))))), (arr_1 [i_1])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 4; i_2 < 18; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 18; i_3 += 4) 
        {
            {
                arr_13 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)13)) ? (((/* implicit */int) (short)-32741)) : (((/* implicit */int) (short)8191))));
                var_22 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(unsigned char)10] [i_3 - 2] [(unsigned char)10])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) % (arr_10 [(short)4] [i_3 + 1] [(short)4]))) : (min((((/* implicit */unsigned long long int) var_2)), (arr_10 [6LL] [i_3 - 1] [6LL])))));
                arr_14 [10] [10] &= ((/* implicit */_Bool) arr_9 [14LL]);
            }
        } 
    } 
}
