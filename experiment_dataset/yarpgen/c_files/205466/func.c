/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205466
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
    var_19 = ((/* implicit */long long int) (_Bool)1);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((_Bool) -1001119534)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(1001119548))))));
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
    {
        for (int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            for (unsigned short i_4 = 3; i_4 < 23; i_4 += 3) 
            {
                {
                    arr_14 [i_2] [i_4] = ((/* implicit */int) (~(max((((/* implicit */unsigned long long int) 1001119524)), (arr_11 [i_2] [i_2 - 1] [i_4 - 3])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 1; i_5 < 24; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_21 [i_2] [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned char) (unsigned short)47386);
                                var_23 = ((/* implicit */signed char) 6076145430482968230ULL);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        for (signed char i_8 = 1; i_8 < 23; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_2 + 2]))));
                                arr_29 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) 1001119523);
                                arr_30 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_27 [i_4] [i_3] [i_4] [i_7] [i_7] [i_8 - 1]))) ? (((/* implicit */unsigned long long int) ((arr_27 [i_4] [i_3] [i_4] [i_4] [i_7] [i_8]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned long long int) -7194266589965832747LL)) & (17317308137472ULL)))));
                                arr_31 [i_4] [i_3] [i_4] [i_7] = max((arr_22 [i_2] [i_3] [i_7] [i_8]), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
