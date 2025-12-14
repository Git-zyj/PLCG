/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248823
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
    for (unsigned char i_0 = 4; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            arr_13 [i_2] [(short)1] [i_2] [(short)1] = ((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_2 [i_0 - 3]) : (((/* implicit */long long int) ((/* implicit */int) ((short) ((signed char) var_4))))));
                            var_11 &= ((/* implicit */signed char) var_7);
                            var_12 = ((/* implicit */unsigned short) arr_4 [7LL]);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */signed char) var_8);
                arr_15 [5ULL] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0 - 4])) ? (arr_1 [i_0 - 4] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1020))))), (((/* implicit */unsigned long long int) (unsigned char)71))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                arr_21 [i_5] |= ((/* implicit */signed char) min((arr_4 [i_4]), (max((((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */unsigned long long int) arr_10 [i_4] [i_5] [i_4] [i_5] [i_4] [i_5])) : (4095798293566311103ULL))), (((/* implicit */unsigned long long int) max((var_1), (((/* implicit */int) var_5)))))))));
                /* LoopNest 3 */
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                        {
                            {
                                arr_31 [i_8] [i_8] [(short)7] [i_8] [i_8] [(signed char)2] = max((max((arr_16 [i_6 + 1]), (((/* implicit */int) arr_25 [(short)8] [i_4] [i_4] [i_4] [i_6 + 1] [i_7])))), (((((/* implicit */_Bool) arr_25 [i_5] [(signed char)6] [i_5] [i_6 + 3] [i_6 + 1] [i_7])) ? (((/* implicit */int) (unsigned short)1035)) : (arr_16 [i_6 + 3]))));
                                arr_32 [i_8] [(_Bool)1] [(_Bool)1] [i_5] [i_8] = ((/* implicit */unsigned long long int) ((short) arr_10 [i_8] [5U] [5U] [i_4] [i_7] [i_8]));
                            }
                        } 
                    } 
                } 
                var_13 -= ((/* implicit */short) max((((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) arr_2 [1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_4 [i_5]))) : (((/* implicit */unsigned long long int) arr_2 [i_5])))), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)35)) == (((/* implicit */int) arr_25 [i_4] [11U] [(_Bool)1] [(short)11] [9] [2U])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 506693386)) && (((/* implicit */_Bool) arr_16 [i_4]))))) : (((/* implicit */int) var_9)))))));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3745394057U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)225))))) : (max((((/* implicit */unsigned long long int) var_0)), (var_7)))))) ? (((/* implicit */int) (unsigned short)384)) : (((/* implicit */int) ((_Bool) var_1)))));
}
