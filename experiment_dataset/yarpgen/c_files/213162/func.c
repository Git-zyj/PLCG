/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213162
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((int) arr_8 [(unsigned char)10] [i_0] [i_0] [i_0]));
                    arr_10 [i_2 - 1] [i_0] [i_0] = ((/* implicit */short) ((int) var_0));
                    var_17 = min((var_11), (((/* implicit */short) var_14)));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_8);
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
    {
        for (int i_4 = 3; i_4 < 20; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */long long int) ((min((((/* implicit */int) arr_13 [i_3] [i_4] [i_4 - 2])), (var_13))) ^ (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned short)65524))))));
                arr_15 [i_3] [i_3] = var_12;
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_4 - 2] [i_3])), (arr_8 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 - 3])))) ? (min((arr_14 [i_3] [i_4]), (((/* implicit */unsigned long long int) min((arr_0 [i_3]), (var_4)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_9)))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_5 = 4; i_5 < 7; i_5 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_5])) - (((/* implicit */int) arr_3 [i_5]))));
        var_22 += ((/* implicit */unsigned long long int) (unsigned short)65535);
        arr_20 [9LL] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)65532))))) % (var_8)));
    }
    for (short i_6 = 0; i_6 < 22; i_6 += 1) 
    {
        var_23 = ((/* implicit */long long int) (unsigned short)1463);
        var_24 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 6LL))));
    }
    for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        arr_26 [i_7] = ((((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7])) || ((_Bool)0)))) <= (((/* implicit */int) (signed char)-15)));
        var_25 *= ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535))));
    }
}
