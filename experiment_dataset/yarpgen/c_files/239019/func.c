/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239019
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
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_17 = -1402766242;
                    var_18 += ((/* implicit */short) ((unsigned short) (~(var_14))));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) (short)-19651)) == ((+(((/* implicit */int) arr_1 [i_0])))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */unsigned short) -1402766242);
    var_21 = ((/* implicit */long long int) max((var_21), (((((/* implicit */_Bool) var_13)) ? ((-(((((/* implicit */long long int) var_1)) | (2855332098219278862LL))))) : (((((/* implicit */long long int) var_1)) / (((((/* implicit */long long int) ((/* implicit */int) var_6))) + (8737993999179221274LL)))))))));
    /* LoopNest 2 */
    for (short i_3 = 1; i_3 < 13; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            {
                arr_12 [i_4] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1402766241)) ? (min((2147483638), (((/* implicit */int) var_4)))) : (((int) (!(((/* implicit */_Bool) -2855332098219278873LL)))))));
                var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19626)) ? ((~(2147483638))) : (((/* implicit */int) (short)-21835))))) ? (((arr_2 [i_3 - 1] [i_3 - 1]) | (((/* implicit */long long int) -1402766249)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 524160LL)) ? (((/* implicit */int) arr_6 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((/* implicit */int) (signed char)-109))))));
                arr_13 [i_4] [i_3] [i_3] = var_9;
            }
        } 
    } 
}
