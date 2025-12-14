/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199878
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) - (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])))), (max((((((/* implicit */_Bool) 15U)) ? (((/* implicit */int) (unsigned char)132)) : (((/* implicit */int) (unsigned char)113)))), (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) min((((arr_4 [i_0] [i_0] [i_1]) >> (((((/* implicit */int) (signed char)103)) - (93))))), (((/* implicit */long long int) arr_0 [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) (unsigned char)98)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_12 [i_3] [i_2 + 1] [i_1] [i_0])) : (-196207151)))))) > (3822581584U))))));
                            arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2 - 1] [i_3])) / (((/* implicit */int) max((arr_3 [i_2 - 2] [i_3]), (arr_8 [i_0] [i_3] [i_2 - 1] [i_3]))))))), (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_0])) ? (((/* implicit */int) (unsigned char)1)) : (var_11)))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (var_5)))))));
                            var_14 = arr_7 [i_0] [i_1] [i_2 + 1] [i_2 - 2];
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) -5086656832882937230LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5719))) : (3905826158U))), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5086656832882937210LL)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152)))))) ? (((((/* implicit */int) var_2)) << (((((/* implicit */int) (unsigned char)255)) - (241))))) : (((((/* implicit */_Bool) (signed char)-3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7)))))))));
}
