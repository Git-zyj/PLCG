/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52198
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_3))) / (((((/* implicit */_Bool) ((var_12) & (var_0)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65528)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0 + 3]) : (arr_0 [i_0 + 3])))));
                    arr_9 [i_2] [i_0 + 4] = ((unsigned long long int) var_14);
                    arr_10 [i_2] [i_1] = ((/* implicit */short) max((((((/* implicit */int) arr_1 [i_1] [i_2])) & (((/* implicit */int) arr_1 [10ULL] [i_2])))), (((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((((/* implicit */int) (unsigned short)64271)) + (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) ((unsigned short) arr_2 [i_0])))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_16 [i_2] [i_2] [i_2] [i_2] = arr_4 [i_0 - 1];
                                arr_17 [i_0 + 2] [i_2] [i_0 + 1] [i_0 + 2] [i_0 + 2] [i_0 + 4] [i_0 + 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_2))))) ? ((+(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_5] [i_1 - 1] [i_2] [i_5 + 1]))))) / (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_0 + 2] [i_6 - 1] [i_2] [i_5 + 1]))) : (var_12)))));
                                arr_24 [i_0 + 1] [i_2] [i_2] [i_0 + 1] [(unsigned short)3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_14 [i_0 + 2] [i_1 - 1] [i_1 - 1] [i_5 + 1] [i_5 - 2] [i_6 - 1] [i_6 + 1]), (arr_11 [i_0 + 2] [i_2] [i_1 + 2])))) ? ((~(((/* implicit */int) arr_21 [i_5 - 2])))) : (((int) ((((/* implicit */_Bool) arr_15 [i_5] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_7 [(unsigned char)11] [(short)8] [i_2] [i_6 + 2]))))));
                                arr_25 [i_2] [i_2] [i_5] [i_6 + 1] = ((/* implicit */signed char) var_11);
                                arr_26 [i_2] [i_1 + 2] [i_2] [i_1 + 2] [i_6] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) arr_18 [i_2] [i_0 + 4] [i_0 + 2])) || (((/* implicit */_Bool) arr_18 [i_2] [i_0 + 2] [i_0 + 4])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (long long int i_7 = 1; i_7 < 9; i_7 += 1) 
    {
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            {
                arr_32 [i_7] = ((/* implicit */unsigned short) var_0);
                var_18 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_1 [i_7 + 2] [i_7 + 2])) << ((((~(0ULL))) - (18446744073709551611ULL))))) & (((/* implicit */int) arr_21 [i_7]))));
            }
        } 
    } 
}
