/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36374
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
    var_16 = ((/* implicit */int) (~(min((((/* implicit */unsigned long long int) -1408291069)), (var_11)))));
    var_17 *= (~(((((/* implicit */_Bool) (-(var_3)))) ? (max((var_10), (var_12))) : (((/* implicit */unsigned long long int) ((int) 7719347205295651789LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 13; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */_Bool) (~(max((arr_3 [i_0] [i_1] [i_2 - 1]), (((/* implicit */long long int) arr_4 [i_2 - 4] [(short)0]))))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (~((~(7719347205295651810LL))))))));
                    var_20 += ((/* implicit */unsigned long long int) max(((!((!(((/* implicit */_Bool) var_0)))))), ((!(((/* implicit */_Bool) arr_3 [8] [i_2 - 1] [8]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 20; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 1; i_6 < 17; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 19; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_11 [i_4] [i_4])), (var_0)));
                                var_22 ^= ((/* implicit */short) min((((/* implicit */long long int) (~((~(arr_13 [(short)4] [i_4])))))), (((((/* implicit */_Bool) (unsigned char)179)) ? (4386252577935143099LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5626)))))));
                            }
                        } 
                    } 
                    arr_20 [i_3] [(unsigned char)17] [i_5] [i_4] = ((/* implicit */short) max((((/* implicit */long long int) -1324716817)), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59909))) - (arr_16 [i_3] [i_5] [i_5] [i_3] [i_5] [0LL])))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 17; i_8 += 3) 
                    {
                        for (int i_9 = 1; i_9 < 19; i_9 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) ((int) arr_23 [i_3]));
                                var_24 = ((/* implicit */unsigned int) (~((~((~(18446744073709551606ULL)))))));
                                var_25 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 + 2] [i_9 + 1] [i_5] [i_5]))) <= (min((9078647277033496184ULL), (((/* implicit */unsigned long long int) arr_27 [i_3] [i_3] [i_5] [i_3] [8ULL])))))))));
                                var_26 = ((/* implicit */int) (~(-1LL)));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */long long int) 3);
                }
            } 
        } 
    } 
}
