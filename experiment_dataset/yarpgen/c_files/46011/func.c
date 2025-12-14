/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46011
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46011 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46011
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
    var_16 = ((/* implicit */unsigned short) (~((~(var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_4 [i_1 + 1] [i_1 + 1] [i_1 - 1]), (((/* implicit */long long int) (signed char)110))))) ? (((/* implicit */int) (unsigned short)57344)) : ((-(((/* implicit */int) var_15)))))))));
                            var_18 = ((/* implicit */int) (~(min((((/* implicit */unsigned int) (signed char)-48)), (((((/* implicit */_Bool) var_2)) ? (4232214795U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)47)))))))));
                            arr_10 [i_0] [i_0] [i_1] [i_2] [i_2] = ((/* implicit */int) (_Bool)1);
                            arr_11 [i_3] [i_2] [11U] [(signed char)11] [i_3] = ((/* implicit */signed char) ((((int) arr_5 [i_0] [i_1 - 1] [i_2] [i_3])) != (((/* implicit */int) (((~(((/* implicit */int) var_15)))) == (((/* implicit */int) arr_8 [i_2] [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_2])))))));
                            var_19 = ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_14))))));
                        }
                    } 
                } 
                arr_12 [i_1 + 1] = ((/* implicit */int) ((var_13) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))))));
                var_20 ^= ((/* implicit */long long int) var_12);
            }
        } 
    } 
}
