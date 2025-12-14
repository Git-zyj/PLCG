/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228380
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
    var_14 = (-(max((((/* implicit */int) var_7)), ((-(((/* implicit */int) var_4)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? ((-(1764190980U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_12), (arr_0 [i_1])))))))));
                var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) (short)29892)) || (((/* implicit */_Bool) (unsigned short)65533)))))));
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) ((((/* implicit */int) (signed char)0)) <= (286922834))))));
                            arr_9 [i_2 - 1] [(unsigned char)15] [i_2] [i_0] [i_2 - 3] [i_2 - 2] = ((/* implicit */int) var_11);
                            var_17 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned long long int) 286922856)) : (var_13)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 22; i_6 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) (-(((((/* implicit */int) ((((/* implicit */int) (signed char)-101)) > (((/* implicit */int) (short)24381))))) / ((-(((/* implicit */int) (_Bool)1))))))));
                                var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_6 [i_1 - 1] [i_1] [i_0]), (arr_6 [i_1 - 2] [i_1 - 2] [i_0]))))));
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 2] [i_1 + 1] [i_1 - 2])) ? (((/* implicit */int) (short)-22919)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) (-(-286922835)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */int) (unsigned char)48)) : (286922830))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
