/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218376
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) -2492570213124898533LL))));
                    var_14 = ((/* implicit */signed char) (+(((/* implicit */int) ((max((arr_4 [i_0] [i_1 - 1]), (arr_2 [i_0]))) >= (((/* implicit */unsigned long long int) arr_6 [i_0])))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 18; i_5 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_5 [i_0] [i_3] [(unsigned short)7] [i_3 + 1])) ? (arr_5 [i_3] [i_3] [i_4] [i_3 - 3]) : (((/* implicit */unsigned int) (-2147483647 - 1)))))));
                        var_16 -= ((144115188075855871LL) / (((/* implicit */long long int) 2618640547U)));
                        arr_16 [i_0] [i_0] [i_0] [i_3] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_21 [i_6] = var_12;
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1536560919)) ? (((/* implicit */int) arr_17 [i_6])) : (110056940)))) >= (max((((((/* implicit */_Bool) arr_18 [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_20 [i_6]))), (min((arr_20 [i_6]), (arr_20 [(_Bool)1])))))));
    }
}
