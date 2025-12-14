/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225787
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                arr_7 [(unsigned short)7] [i_1 - 1] [18] = ((/* implicit */unsigned long long int) var_3);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 21; i_2 += 4) 
                {
                    for (unsigned char i_3 = 4; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_13 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) (~(arr_9 [i_0] [i_1 - 2] [i_3] [i_3 + 4])));
                            arr_14 [i_0] [i_1 + 2] [i_1 + 2] [(unsigned char)5] [i_3] [i_3] = ((/* implicit */short) (_Bool)1);
                            arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]);
                            arr_16 [5ULL] [i_2] [i_1] [(short)12] [i_0] [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) (short)-21533)) ? (arr_5 [i_1 + 2] [i_1] [i_1 - 2]) : (arr_5 [i_1 - 1] [i_1] [i_1 - 2])))));
                        }
                    } 
                } 
                arr_17 [i_1 + 2] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 + 2] [i_1] [i_1 + 1] [i_1 - 2] [i_1]))) : (9223372036854775807LL)))) & (((((/* implicit */_Bool) (unsigned short)21048)) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (arr_10 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44488)))))) : (((((/* implicit */_Bool) (unsigned short)24576)) ? (2035396665011087952ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21036)))))))));
            }
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 10; i_4 += 4) 
    {
        for (unsigned short i_5 = 1; i_5 < 7; i_5 += 4) 
        {
            {
                arr_23 [i_4] [i_4] [i_5 + 3] = ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                arr_24 [i_4] [i_4] = (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-32748))))));
                arr_25 [i_5 + 3] [i_4] [i_4] = ((/* implicit */short) arr_11 [i_4] [i_4] [i_4] [(short)0] [20ULL]);
                /* LoopNest 3 */
                for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 8; i_7 += 4) 
                    {
                        for (long long int i_8 = 3; i_8 < 6; i_8 += 4) 
                        {
                            {
                                arr_33 [i_6] [6] [i_6] [i_5] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))));
                                arr_34 [i_4] [i_4] [i_7 - 1] [i_8] = ((/* implicit */unsigned int) ((6192877225465943856ULL) & (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_2)) : (arr_10 [i_4]))))))));
                                arr_35 [i_8 - 3] [i_7] [i_6] [i_4] = (-(((((/* implicit */_Bool) arr_9 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 - 1])) ? (arr_9 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 + 1]) : (arr_9 [i_7 + 2] [i_7 + 1] [i_7 + 2] [i_7 - 1]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
