/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215130
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
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_3 [i_0 - 2])))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            arr_9 [i_3] [i_2] = ((/* implicit */unsigned short) (!((_Bool)0)));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_0] [i_3])) : (((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) arr_4 [i_3 + 3] [i_2 + 1] [i_2 - 3] [i_0 + 1])))) : (((((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) arr_8 [i_2] [i_0 - 1] [i_0 - 1]))))) | (arr_8 [i_0] [i_1] [i_1])))));
                            var_22 = ((/* implicit */unsigned int) (((+(min((((/* implicit */unsigned long long int) 8388607U)), (arr_7 [i_0] [i_0] [i_1] [i_2 + 1] [i_2] [i_3 + 1]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)255)))))));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0] [i_1]))) ? (((((((/* implicit */_Bool) 10064335592317305374ULL)) && (((/* implicit */_Bool) 18446744073709551615ULL)))) ? (min((((/* implicit */long long int) arr_0 [i_0])), (arr_2 [i_3] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_1]))))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_2 - 1])))))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) max((((unsigned long long int) 11U)), (((/* implicit */unsigned long long int) (~(arr_6 [i_0 - 1] [i_0 - 2] [i_0 + 1]))))));
                var_25 = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) % (var_5))) < (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1])))) ? (((((/* implicit */_Bool) (~(arr_8 [i_0 + 1] [i_0] [i_0])))) ? (((/* implicit */int) arr_1 [i_0 - 2] [i_0 + 1])) : (((/* implicit */int) ((signed char) var_9))))) : (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_26 = ((/* implicit */_Bool) ((signed char) ((unsigned short) ((var_17) ? (var_5) : (((/* implicit */unsigned int) -6))))));
}
