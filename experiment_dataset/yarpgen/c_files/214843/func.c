/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214843
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))), (18446744073709551615ULL)));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2]);
                    arr_10 [(short)5] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) (short)-31830))))), (max((5761429620646242040ULL), (8856445854945297762ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 8; i_3 += 1) 
                    {
                        arr_13 [i_0] [i_2] &= var_0;
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 4; i_4 < 7; i_4 += 1) 
                        {
                            arr_16 [i_1] [i_1 - 1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */unsigned long long int) arr_4 [i_3] [i_1])) - (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3715))) + (arr_6 [i_2]))))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4294967295U)), (5169946408851622650ULL)))))))));
                        }
                    }
                }
            } 
        } 
        var_19 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */short) ((var_10) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40532)))))), ((short)17484))))));
    }
    var_20 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)186)), ((short)(-32767 - 1))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_5)))))), (((/* implicit */long long int) var_8))));
    var_21 -= ((/* implicit */unsigned int) (((~(((var_2) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-97))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_15)))) : (-762051747373513685LL))))));
}
