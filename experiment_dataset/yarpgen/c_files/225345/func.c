/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225345
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
    var_19 |= ((/* implicit */signed char) 2098568510U);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_2 [i_4 - 1])))) + (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_3 + 2] [i_3] [2LL])) ? (arr_10 [i_0] [i_0] [i_3 + 2] [i_0] [i_4]) : (arr_10 [i_0] [i_1] [i_3 + 2] [i_0] [i_4])))));
                                arr_13 [i_0] [i_1] [(signed char)0] [i_3] [i_3] [i_4] [i_4 + 1] = ((/* implicit */unsigned int) arr_12 [i_0] [i_0]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            {
                                arr_19 [i_5] [i_2] = ((/* implicit */unsigned long long int) var_8);
                                arr_20 [i_0] [i_0] [i_2] [i_5] [(unsigned char)4] [i_6] = max((((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)63467)), (min((1937356545), (((/* implicit */int) (short)-894))))))), (1819445301U));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_7 = 4; i_7 < 19; i_7 += 4) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                arr_27 [i_0] [i_1] [i_2] [i_7] [i_2] [i_8] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (~(317227080U)))), (((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)49471))))) - (-1797235409607431141LL)))));
                                var_21 = ((/* implicit */unsigned char) ((_Bool) ((arr_18 [i_1 + 1] [i_1 + 1] [i_8] [i_1 + 1] [i_8] [i_8]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_1 + 3] [i_1]))))));
                                var_22 -= ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_8] [11] [i_2] [i_1])) < (((/* implicit */int) var_2)))))) & (min((-1030742057154978913LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)16064))))))));
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((int) max((((/* implicit */unsigned long long int) (unsigned char)210)), (4781860831973364394ULL))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
