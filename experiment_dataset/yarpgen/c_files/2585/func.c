/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2585
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
    var_19 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) / (var_15))) / (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-61)), ((short)-23274))))) / (((((/* implicit */_Bool) var_7)) ? (var_6) : (4294967292U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) arr_1 [i_1 - 1] [i_0 - 1]))))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) == (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-84))))) || (((/* implicit */_Bool) arr_1 [i_0 + 1] [i_1 + 2])))))));
                arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */int) (signed char)-118)) | (((/* implicit */int) (unsigned short)4918))));
                arr_8 [i_1] [7LL] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-23281))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (((((((~(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((/* implicit */int) arr_0 [i_0] [i_0])))) << (((((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_1 + 2] [i_0 + 1])) ? (((((/* implicit */_Bool) (signed char)-84)) ? (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1] [i_0])))) : (((((/* implicit */_Bool) 4884267492942421989LL)) ? (((/* implicit */int) (unsigned short)55308)) : (((/* implicit */int) (short)-24533)))))) - (31531))))))));
            }
        } 
    } 
    var_21 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))));
    var_22 *= ((/* implicit */signed char) var_7);
}
