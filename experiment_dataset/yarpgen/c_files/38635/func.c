/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38635
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
    var_20 = (signed char)114;
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)95);
                    arr_9 [23ULL] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) (+(arr_2 [i_2])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 3; i_4 < 23; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 - 2] [i_4 + 1])) ? (arr_4 [i_4 - 2] [i_4 - 2] [i_4 - 2]) : (arr_4 [i_4 - 1] [i_4 - 1] [i_4 - 3])))) ? (((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 - 3] [i_4 + 2] [i_4 + 2])) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_4 + 2] [i_4 - 1] [i_4 - 2] [i_4 - 3])))));
                                arr_17 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) ((unsigned char) (_Bool)1));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) 
                    {
                        for (signed char i_6 = 2; i_6 < 22; i_6 += 2) 
                        {
                            {
                                arr_25 [18ULL] [21ULL] [i_2] [3] [3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0])))) : (arr_22 [i_6] [i_6 + 3] [i_6] [i_6] [i_6 + 2])))) ? (max((((((/* implicit */_Bool) arr_13 [i_5])) ? (arr_14 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))), (((/* implicit */unsigned int) (!((_Bool)0)))))) : (arr_14 [i_6 - 1] [i_5] [i_0])));
                                var_21 -= ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [(unsigned char)18]))))) >> ((((+(((((/* implicit */_Bool) 3005631194U)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) - (921066873023612285LL)))));
                                arr_26 [(_Bool)1] [i_5] [i_2] [3ULL] [i_1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((int) var_16))))) ? ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)28819)) : (((/* implicit */int) (short)-4637)))))) : (((((/* implicit */_Bool) ((int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (max((((/* implicit */int) (unsigned short)65516)), (-1))) : ((-(((/* implicit */int) arr_0 [11]))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
