/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224648
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_0] [i_1] [i_0] &= ((/* implicit */short) min((max((arr_1 [i_1] [i_1]), (((/* implicit */long long int) arr_4 [i_2])))), (((/* implicit */long long int) ((short) (unsigned short)65511)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_4 - 3])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_13 [12] [12] [i_2] [i_4 + 2] [12])) : (((/* implicit */int) var_9)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4 + 1])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [18] [i_0] = min(((((!(((/* implicit */_Bool) arr_4 [i_0])))) ? (min((var_7), (arr_1 [i_0] [(signed char)1]))) : (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_7))));
                                arr_16 [i_4 - 2] [i_3] [i_2] [(unsigned char)16] [i_2] [i_1] [i_0] &= ((((/* implicit */int) (unsigned short)32767)) + (((/* implicit */int) ((short) var_2))));
                                arr_17 [i_0] [i_1] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_11), (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17))))) ? (min((((/* implicit */int) ((unsigned char) arr_11 [i_0] [i_1] [(short)17] [i_3] [i_4] [(short)17]))), (((((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_3] [i_4])) + (var_8))))) : (-119547414)));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_4 - 1]))) ? (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_4 - 2]) : (7712900937296359401LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)20), (((/* implicit */unsigned short) (short)-29269))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */long long int) var_17)), (var_5)))) ? (var_8) : (((/* implicit */int) var_14)))) / ((-(((/* implicit */int) var_10))))));
    var_20 = ((/* implicit */unsigned long long int) var_6);
}
