/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30558
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            {
                arr_5 [i_0] = (+(1359017463U));
                /* LoopSeq 1 */
                for (long long int i_2 = 2; i_2 < 8; i_2 += 3) 
                {
                    var_12 = min((min(((unsigned short)65508), (var_1))), (((/* implicit */unsigned short) ((-9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (short)32761)))))));
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(var_7))))));
                }
                arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (min((var_4), (((/* implicit */int) var_6)))) : ((+(((/* implicit */int) var_8))))))) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_8 [i_0])))) && (var_10)))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 1; i_3 < 8; i_3 += 4) 
                {
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        for (long long int i_5 = 3; i_5 < 9; i_5 += 3) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned int) var_5);
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_17 [i_5] [i_5] [i_5] [i_4 - 1] [i_4] [i_4 - 1] [i_1 + 1]), (((/* implicit */long long int) 0U))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)125)) | (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (unsigned short)11)) : (arr_7 [i_0] [i_1 - 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-126))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_15 += ((/* implicit */unsigned int) min((((/* implicit */long long int) var_9)), (((((/* implicit */long long int) ((/* implicit */int) var_1))) + (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_7)))))));
}
