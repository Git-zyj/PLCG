/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34635
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34635 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34635
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
    var_16 = ((/* implicit */_Bool) max((((max((var_0), (((/* implicit */unsigned long long int) var_7)))) >> (((((/* implicit */int) var_9)) - (69))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */long long int) 5U))))), (min((var_2), (((/* implicit */unsigned long long int) var_6))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0 + 1] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned short) (+(var_1)));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((/* implicit */int) (short)7154)))))));
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_7 [i_1] [i_2] [i_3] [i_3 - 1])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)7154)))) : (arr_0 [i_0] [i_0 - 1]))));
                                var_18 ^= ((/* implicit */unsigned char) (((_Bool)0) ? (1370116095) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    arr_14 [3ULL] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)7)), (arr_4 [i_0])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))) | (max((((var_11) >> (((((/* implicit */int) (short)20009)) - (19998))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) -641557618)) : (822294588U)))))));
                    arr_15 [i_2] [13] [i_2] = var_15;
                }
            } 
        } 
    } 
    var_19 ^= ((/* implicit */unsigned short) var_13);
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)23940)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_14)) || ((_Bool)1))))) : (((((/* implicit */long long int) ((/* implicit */int) (short)-19984))) & (-3366160399902600209LL))))))));
}
