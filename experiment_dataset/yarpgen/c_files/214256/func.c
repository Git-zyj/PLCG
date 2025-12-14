/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214256
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
    var_16 = min((((/* implicit */unsigned int) var_6)), (min((((/* implicit */unsigned int) var_3)), (var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [15U] [15U] [i_2] = min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1]))))), (((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((arr_1 [i_0]), (4192066117U))))));
                    arr_7 [(_Bool)1] [i_1] [i_0] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_1] [i_1 + 1] [i_1])) / (var_0)))) ? (arr_0 [i_1 + 1]) : (max((arr_2 [i_1 - 1]), (((/* implicit */unsigned int) 16777216)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 2; i_3 < 14; i_3 += 3) 
    {
        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) arr_14 [i_4]))));
                var_18 |= ((/* implicit */unsigned short) arr_1 [i_3 - 1]);
                var_19 = (+(-3637819389706529334LL));
                arr_15 [i_3] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_3] [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(arr_1 [i_3 + 1])))));
                arr_16 [i_3] [(short)4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_2 [i_4])) ? (((((/* implicit */_Bool) (unsigned char)136)) ? (-3637819389706529346LL) : (((/* implicit */long long int) arr_1 [i_3])))) : (((/* implicit */long long int) max((1336154820U), (((/* implicit */unsigned int) (short)-1))))))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_4])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) 2524365877U);
}
