/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217396
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
    for (short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 4; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (unsigned short)37134))))));
                            var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 2])) ? (((/* implicit */int) arr_1 [i_0] [i_1 - 1])) : (((/* implicit */int) arr_7 [i_0] [i_2 - 2] [i_2]))))));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 4])) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 4])) : (((/* implicit */int) arr_3 [i_0] [i_1 - 2])))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 - 1])) > (((/* implicit */int) arr_3 [i_0] [i_1 + 4])))))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 3) 
                    {
                        {
                            arr_14 [i_0] [i_1] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_1 + 2] [i_4]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) ((signed char) var_9)))));
                            var_20 = ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_4] [i_1 - 1] [i_0] [i_5] [i_1 - 2]))) == (13367347132450398461ULL)));
                            var_21 ^= ((/* implicit */signed char) ((unsigned int) arr_8 [i_1] [i_1 + 3] [20LL] [i_1 - 2]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_15)), ((-(((((/* implicit */_Bool) (unsigned short)28402)) ? (2453620284297956637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9285)))))))));
}
