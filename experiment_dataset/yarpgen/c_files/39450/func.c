/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39450
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
    var_15 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 - 1]), (((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) (unsigned char)255)))))))) ? (max((((/* implicit */long long int) var_4)), (((((/* implicit */long long int) arr_3 [i_1] [i_1])) - (var_2))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)))) && (((/* implicit */_Bool) max((((/* implicit */short) var_3)), ((short)18781))))))))));
                arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */int) max((((unsigned int) arr_3 [i_0 - 1] [i_0 - 1])), (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)52)))))));
                            arr_12 [i_0 - 1] [i_1] [i_2] [i_3] [i_2] [i_3] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4294967295U)), (2097024ULL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (-(var_1)));
    var_19 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-18781)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) (short)-32327)) + (((/* implicit */int) var_3)))))), (((/* implicit */int) var_4))));
    var_20 = ((/* implicit */short) var_6);
}
