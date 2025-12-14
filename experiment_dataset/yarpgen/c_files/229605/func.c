/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229605
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
    var_13 = var_1;
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_2))));
                var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_8))))) <= (((/* implicit */int) ((short) arr_3 [i_0])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        for (short i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            for (unsigned char i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                {
                    arr_17 [(unsigned short)1] [15ULL] [15ULL] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_2])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3]))) / (var_9))))))));
                    arr_18 [i_4] [i_3] [i_3] [i_2] = ((/* implicit */unsigned int) (!(((var_12) && (((/* implicit */_Bool) ((unsigned short) var_3)))))));
                    arr_19 [i_2] = ((/* implicit */unsigned short) max(((!(arr_9 [i_2]))), ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_5)), (2078727824043705154ULL))))))));
                }
            } 
        } 
    } 
}
