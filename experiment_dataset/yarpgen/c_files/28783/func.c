/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28783
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */signed char) var_10);
                                arr_11 [i_0] [i_3 + 1] [(signed char)0] [i_1] [i_0] [(short)12] = arr_9 [(unsigned short)15] [22LL] [i_2] [(short)15] [i_0] [i_0] [(signed char)17];
                                arr_12 [2U] [i_3 - 1] [22] [i_0] [2U] &= ((/* implicit */long long int) arr_1 [(_Bool)1] [(_Bool)1]);
                                var_18 &= ((/* implicit */signed char) var_11);
                            }
                        } 
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) (signed char)19)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1] [(signed char)16] [i_1] [i_1] [i_1] [(short)15] [i_0]))));
                arr_13 [i_0 + 2] [i_0] [i_0] = ((/* implicit */long long int) ((short) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (6)))) - (arr_7 [(signed char)16] [(_Bool)1] [i_1] [i_1] [i_0 - 1]))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) ((unsigned long long int) ((((var_9) > (((/* implicit */int) (signed char)-1)))) ? ((-(((/* implicit */int) var_2)))) : (((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (signed char)-125)))))));
    var_21 = max((var_4), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12))))) : (var_0))));
}
