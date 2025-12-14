/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231976
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) arr_0 [i_0]);
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1 - 3])) && (((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1]))));
                    arr_8 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) -7839029172032841703LL);
                }
                var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1457425665)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1 - 1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        for (long long int i_4 = 3; i_4 < 9; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned int) (-(((/* implicit */int) (short)-12420))))) > (var_14))))))));
                arr_14 [i_3] = arr_4 [i_4 + 2] [i_4 - 3];
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                arr_24 [i_7] [i_6 - 1] [i_5] [i_4] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3])) || (((/* implicit */_Bool) max((((/* implicit */long long int) max((arr_11 [i_3] [i_6 - 1]), (((/* implicit */int) (unsigned short)25472))))), (arr_0 [i_3]))))));
                                arr_25 [i_4] = ((/* implicit */long long int) (!((((+(var_2))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (~(1640649965U)))), (((((/* implicit */_Bool) arr_30 [i_10 + 1])) ? (arr_30 [i_10 - 1]) : (arr_30 [i_10 + 1])))));
                    var_19 = ((/* implicit */unsigned int) ((short) ((long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_11))))));
                    arr_36 [i_8] [i_10] [i_10] [i_10 - 1] = ((/* implicit */int) min((((((/* implicit */long long int) var_2)) + (arr_32 [i_10 + 1] [i_10 - 1] [i_10 - 1]))), (((/* implicit */long long int) ((unsigned int) var_9)))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_35 [i_8] [i_9]) : (((/* implicit */long long int) var_12)))))), (((((/* implicit */_Bool) arr_33 [i_10 + 1] [i_9] [(short)20] [i_10 - 1])) ? (((/* implicit */int) (_Bool)1)) : (var_3))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) max((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), (-3889835185355829682LL))))));
}
