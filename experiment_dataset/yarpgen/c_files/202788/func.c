/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202788
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [8U] [i_1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_15))) & (2635914496U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))) ^ ((~(max((1659052794U), (((/* implicit */unsigned int) arr_6 [i_1]))))))));
                    arr_11 [i_0] [i_2] [i_0] [7ULL] = ((/* implicit */unsigned int) 2147483647);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0] [i_2] [i_2] [i_2] [12U] = ((/* implicit */unsigned long long int) max((1659052791U), (((/* implicit */unsigned int) (signed char)1))));
                                arr_17 [i_0 - 1] [i_0 - 1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((_Bool) (short)15));
                                arr_18 [i_2] [i_4] [9ULL] [i_3] [3ULL] = ((/* implicit */unsigned char) min(((~(max((((/* implicit */unsigned long long int) arr_2 [3U])), (arr_5 [2U] [14U] [8]))))), (var_9)));
                            }
                        } 
                    } 
                    arr_19 [i_2] [i_1] [i_2 + 2] [i_0 - 1] = var_8;
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_25 [i_2] = ((/* implicit */_Bool) ((unsigned short) (+((+(var_14))))));
                                arr_26 [i_2] [(unsigned char)10] [9U] = ((/* implicit */unsigned int) (!((!(((((/* implicit */int) var_15)) >= (((/* implicit */int) var_4))))))));
                                arr_27 [i_6] [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_9 [(unsigned short)6]));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            for (short i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                {
                    arr_37 [i_7] = ((/* implicit */unsigned int) var_7);
                    arr_38 [i_7] [i_8] [(unsigned short)2] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_35 [i_7] [(unsigned short)8] [2ULL] [i_7])))) || ((!(((/* implicit */_Bool) arr_35 [i_7] [i_8] [i_9] [i_7]))))));
                    arr_39 [0ULL] [i_8] [0ULL] = ((/* implicit */unsigned int) (+((~(arr_35 [i_9 - 1] [i_9 - 1] [i_9] [(unsigned short)14])))));
                    arr_40 [(signed char)8] [i_8] [i_7] [(signed char)8] = min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)182)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) : (1659052784U)))))), (12526309691042881856ULL));
                }
            } 
        } 
    } 
}
