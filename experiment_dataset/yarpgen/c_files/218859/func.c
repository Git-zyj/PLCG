/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218859
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218859 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218859
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((signed char) 931767236U));
                var_12 = ((/* implicit */unsigned short) 931767236U);
                arr_8 [i_0] = ((/* implicit */short) ((((/* implicit */int) min((arr_1 [i_0] [i_1]), (arr_1 [i_1] [i_0])))) & (((/* implicit */int) min((arr_1 [i_0] [1]), (arr_1 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) ((signed char) (((-(((/* implicit */int) var_0)))) | (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_11 [(signed char)8] [i_2] [i_2] [i_2] [i_2])))))));
                            arr_14 [i_0] = ((/* implicit */int) (+(max((9223372036854775807LL), (((/* implicit */long long int) arr_5 [(unsigned short)6] [(unsigned short)6] [(short)0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_8))))))) - (((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-125)))) / (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)245))))))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) == (var_7)));
    var_16 = ((/* implicit */signed char) var_4);
}
