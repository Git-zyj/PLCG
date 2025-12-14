/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245720
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
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_3 [4] [i_0 + 3] [i_1])) ? (((/* implicit */int) arr_3 [i_0 - 1] [i_0] [i_0 + 3])) : (((/* implicit */int) (signed char)109))))));
                var_16 -= ((/* implicit */long long int) (-((((!(((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) min((var_3), (var_7)))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned short)65535))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((var_0) & (var_0))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) max(((unsigned short)0), (((/* implicit */unsigned short) var_4))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)65510))))));
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    arr_11 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_2])) ? (19) : (((/* implicit */int) arr_10 [(signed char)1] [i_3] [i_3] [i_2]))))), (arr_7 [i_2] [i_3])))) ? ((-(arr_6 [i_2]))) : (((((/* implicit */_Bool) arr_9 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */int) (unsigned short)14)) : (1722189016)))));
                    var_18 = ((/* implicit */signed char) arr_8 [i_2] [i_2] [i_2] [i_2]);
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
    {
        for (int i_6 = 0; i_6 < 16; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                {
                    arr_19 [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((unsigned short) arr_6 [i_5])), (((/* implicit */unsigned short) ((unsigned char) arr_12 [i_5])))));
                    arr_20 [i_7] = ((/* implicit */int) (_Bool)1);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) max((var_0), (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))), (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) var_4))))))))))));
}
