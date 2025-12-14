/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208180
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [10ULL] [i_0] [i_2] = ((/* implicit */long long int) (+((~(arr_5 [i_2 + 3])))));
                    var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) (short)5270)))))) ? (0ULL) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_3 [(signed char)0] [i_1] [i_2])) : (arr_0 [i_0] [i_1]))))));
                    arr_9 [10ULL] [i_1] [i_2] = arr_5 [i_1 - 2];
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_3 = 3; i_3 < 17; i_3 += 1) 
    {
        for (int i_4 = 0; i_4 < 19; i_4 += 1) 
        {
            for (unsigned int i_5 = 1; i_5 < 17; i_5 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -683620353)) ? (1976953843) : (((/* implicit */int) (signed char)-38))))), (((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(unsigned char)17] [i_3]))) : (((((/* implicit */_Bool) (signed char)-104)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_17) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */int) arr_13 [i_3 + 2] [i_3])) : (((/* implicit */int) var_12))))) * (var_4))))));
                                var_23 = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)104)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12))) : (-5644476213139174410LL)))) ? (((/* implicit */int) (short)-22620)) : (((/* implicit */int) var_13)))))));
                                arr_22 [i_3] [16ULL] [i_5] [i_6] [i_6] [i_7] = ((/* implicit */signed char) ((arr_21 [i_3 - 3] [i_5 + 2] [i_5 + 1] [i_7 - 1] [i_7 - 2] [i_7 - 1] [i_7 - 1]) < (((/* implicit */unsigned long long int) var_16))));
                            }
                        } 
                    } 
                    arr_23 [i_3] [i_4] [2U] = ((/* implicit */unsigned short) min(((+(((var_14) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))), (var_9)));
                    var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_17 [i_3] [(signed char)3] [i_4] [6U]))));
                    var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_3] [i_3 - 2] [i_3 - 2])) ? (arr_15 [i_3] [i_3 + 1] [i_4] [i_5 - 1]) : (arr_15 [i_3] [i_3 + 2] [i_4] [i_5 - 1]))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_3] [i_3 + 2] [i_3 + 1])) || (((/* implicit */_Bool) var_15))))))));
                }
            } 
        } 
    } 
}
