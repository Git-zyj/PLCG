/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236747
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
    var_17 = ((/* implicit */unsigned int) ((long long int) ((var_10) >> (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (unsigned short)15863))))))));
    var_18 = ((/* implicit */int) ((var_1) + (((/* implicit */unsigned long long int) var_8))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 20; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_3 - 3] [i_2] [i_3 - 3] [(short)17] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_1] [i_3] [i_3] [i_1] [i_3 - 1] [i_3])) ? (arr_8 [i_1] [i_1] [i_2] [i_3] [i_3 + 1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                            var_19 |= ((/* implicit */long long int) arr_0 [i_2] [i_1]);
                            var_20 += ((/* implicit */long long int) max((((((unsigned int) arr_0 [i_0] [i_1])) ^ (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)127)), (arr_0 [6LL] [6LL])))))), (((/* implicit */unsigned int) var_11))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1] [i_0 + 1]) + (var_13)))) ? ((~(arr_0 [i_0 + 2] [i_0 + 2]))) : (arr_0 [i_0 + 2] [i_0 + 2])));
                arr_10 [i_0] [12U] [i_0] = ((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0] [i_0 - 1]);
                var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) var_4))));
                arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0 + 2] [i_0] [i_1])) ? ((-(((/* implicit */int) arr_5 [i_0 + 1] [i_1] [i_1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 3 */
    for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
    {
        for (int i_5 = 3; i_5 < 18; i_5 += 3) 
        {
            for (unsigned short i_6 = 1; i_6 < 18; i_6 += 2) 
            {
                {
                    var_24 = ((/* implicit */signed char) var_9);
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        for (long long int i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            {
                                arr_24 [i_8 - 2] [i_5] [i_7] [i_4] [i_5] [i_5] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_6 [i_6 + 1] [i_5 + 1]), (arr_6 [i_6 + 1] [i_5 + 1])))) ? ((+(var_1))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (4901357780267833253ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38673)))))));
                                var_25 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_5 [i_8 - 1] [i_6 + 1] [i_6 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
