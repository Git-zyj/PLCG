/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240613
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
    var_10 |= ((/* implicit */long long int) ((var_3) < (((/* implicit */long long int) (~(845399632))))));
    var_11 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((signed char) min((845399632), (845399632)));
                                var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (-((+(((/* implicit */int) ((7607072002824272404LL) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_4])))))))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))) < (0U))) ? (((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (33554176U))) : (((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-61)))))));
                    arr_16 [8LL] |= ((/* implicit */long long int) -845399618);
                    var_15 = arr_12 [i_1] [i_1] [i_1] [i_0] [i_1];
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 13; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_0] [6LL] [i_5] [i_0] = ((/* implicit */unsigned int) 9223372036854775807LL);
                                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_6])) ? (((arr_7 [i_6] [i_6]) - (-845399604))) : (arr_12 [i_6] [i_6] [10] [i_6] [10])))))))));
                                var_17 += ((/* implicit */signed char) (~(845399621)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
