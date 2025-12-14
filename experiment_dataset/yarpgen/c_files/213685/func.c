/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213685
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
    for (unsigned long long int i_0 = 1; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */long long int) max((max((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (unsigned short)58147)) - (58132))))), (((/* implicit */int) ((((/* implicit */int) (unsigned short)58147)) >= (((/* implicit */int) arr_1 [i_0]))))))), (((/* implicit */int) var_4))));
                    var_11 -= ((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (short)-15403)), (2260541629088788658LL))), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */int) (signed char)-121)) | (((/* implicit */int) arr_2 [(short)1] [(short)1])))) : (((/* implicit */int) (!((_Bool)0)))))))));
                    arr_6 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 1] [i_0 - 1])) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_2 - 1]), ((unsigned short)7389)))) ? (1023LL) : (((/* implicit */long long int) 32767))))) : (18446744073709551612ULL)));
                    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) max((-1LL), (-5968012551219229461LL))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            {
                arr_12 [(unsigned char)18] [i_3] = ((/* implicit */int) (_Bool)1);
                var_13 = ((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_4])), (max((16777152), (((/* implicit */int) arr_4 [i_3]))))));
            }
        } 
    } 
}
