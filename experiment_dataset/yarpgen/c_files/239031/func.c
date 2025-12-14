/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239031
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
    var_11 += ((/* implicit */signed char) (((((!(((/* implicit */_Bool) 6733511783885306349ULL)))) && (((/* implicit */_Bool) ((unsigned long long int) 3823126095U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) ((short) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_3))))) : (var_5)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_7 [i_2 - 3] = min((var_2), (((/* implicit */unsigned int) arr_2 [i_0] [i_0])));
                    var_12 = ((/* implicit */unsigned short) (((-(471841181U))) % (3823126115U)));
                    arr_8 [i_0] [i_1 + 2] = ((/* implicit */short) var_7);
                    var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 12; i_3 += 2) 
                    {
                        for (short i_4 = 2; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_16 [i_3] [i_1] [i_2] [i_2] |= ((/* implicit */unsigned short) min((min((arr_0 [i_1 + 2] [i_1 + 1]), (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 - 1])) + (((/* implicit */int) arr_3 [i_1 + 2] [i_1 + 1] [i_1 + 1])))))));
                                arr_17 [i_0] [(unsigned char)5] [i_0] [(short)10] [i_0] [(unsigned char)5] [i_0] = ((/* implicit */signed char) (unsigned short)55397);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
