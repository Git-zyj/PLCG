/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23450
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
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            {
                arr_4 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 8267857157546707221LL)) > (arr_1 [i_0 + 1]))))));
                arr_5 [i_1] = 18446744073709551609ULL;
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(8267857157546707221LL)))) ? (((/* implicit */int) ((arr_0 [i_0 - 1]) == (arr_0 [i_0 - 1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])))))));
                arr_7 [i_0] [6U] [i_1] = var_9;
                arr_8 [8U] &= ((unsigned long long int) max((((unsigned long long int) 18446744073709551609ULL)), (arr_3 [i_0 - 1] [i_1 - 1] [(_Bool)1])));
            }
        } 
    } 
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((((/* implicit */_Bool) -8267857157546707221LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) - (-8267857157546707207LL))) : (((/* implicit */long long int) var_14))));
    var_18 &= ((/* implicit */long long int) (+((+(var_4)))));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        for (unsigned char i_3 = 3; i_3 < 19; i_3 += 4) 
        {
            {
                var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2] [i_2]))) : (arr_12 [i_2] [i_3 - 1] [i_3])))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) arr_10 [i_2] [(unsigned char)1])))))))), ((+(8267857157546707222LL)))));
                /* LoopNest 3 */
                for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        for (signed char i_6 = 3; i_6 < 19; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) -8267857157546707207LL)) ? (arr_9 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) -8267857157546707207LL)))), (((/* implicit */unsigned long long int) (short)(-32767 - 1)))));
                                arr_22 [i_2] [i_2] [(signed char)16] [i_2] [i_3] = (i_3 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6ULL), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_3] [i_6])))) : (min((var_1), (((/* implicit */long long int) arr_16 [i_2] [i_3] [11U] [i_5 + 1] [i_6 - 3] [i_3]))))))) ? (((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 3] [i_3] [i_6] [i_6])) << (((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 1] [i_3] [i_6] [i_6 - 3])) - (3345))))) : (((/* implicit */int) (_Bool)1))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((6ULL), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_14 [i_3] [i_6])))) : (min((var_1), (((/* implicit */long long int) arr_16 [i_2] [i_3] [11U] [i_5 + 1] [i_6 - 3] [i_3]))))))) ? (((((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 3] [i_3] [i_6] [i_6])) + (2147483647))) << (((((((((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 1] [i_3] [i_6] [i_6 - 3])) - (3345))) + (33150))) - (16))))) : (((/* implicit */int) (_Bool)1)))));
                                arr_23 [i_4] [i_4] [i_4] [i_4] [i_3] = ((/* implicit */unsigned int) ((min((((/* implicit */int) arr_10 [i_5] [i_5])), ((-(var_14))))) >> (min((min((var_8), (((/* implicit */unsigned long long int) 19U)))), (((/* implicit */unsigned long long int) (short)32757))))));
                                arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) (unsigned char)86))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)32765))) : (var_1)))))), (((unsigned long long int) (!(((/* implicit */_Bool) var_9)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
