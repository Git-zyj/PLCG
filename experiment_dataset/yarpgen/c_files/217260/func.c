/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217260
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) var_1);
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (short)28672)) : (-708061075)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_3 [2U] [i_1]))))))) : (max((var_13), (((/* implicit */unsigned long long int) arr_6 [i_1])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_3 [(unsigned short)4] [i_0]), (((/* implicit */unsigned short) arr_6 [i_0]))))))))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((int) min((max((((/* implicit */unsigned short) var_0)), (var_15))), (var_15))));
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 4) 
        {
            {
                arr_13 [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) 3448245509750670809LL)) ? (((/* implicit */int) ((signed char) arr_12 [i_4] [i_4]))) : (((/* implicit */int) arr_12 [i_4] [i_4])))) <= (((((/* implicit */_Bool) min((arr_10 [i_3] [i_4]), (((/* implicit */unsigned short) arr_11 [i_3] [i_3] [i_4]))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_8))))) : (((((/* implicit */_Bool) arr_10 [i_4] [2LL])) ? (((/* implicit */int) (unsigned short)9672)) : (((/* implicit */int) (signed char)-32))))))));
                arr_14 [i_3] [(unsigned short)2] [i_4] = ((/* implicit */_Bool) arr_12 [i_4] [(unsigned short)10]);
                var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 1U))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        for (int i_6 = 2; i_6 < 10; i_6 += 3) 
        {
            for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_20 *= arr_5 [i_6] [i_6] [i_6] [i_6];
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            {
                                arr_26 [i_9] [i_8] [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) arr_17 [i_6 - 1] [i_6 + 1])) ? (((/* implicit */int) min((arr_17 [i_6 + 1] [i_6 - 1]), (arr_17 [i_6 - 1] [i_6 - 2])))) : (((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_6 - 2])) ? (((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 2])) : (((/* implicit */int) arr_17 [i_6 - 2] [i_6 - 2])))));
                                arr_27 [i_9] [i_8] [i_5] [i_5] [i_5] [i_5] = (-(((/* implicit */int) (unsigned short)568)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
