/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209660
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
    var_20 = ((/* implicit */signed char) var_7);
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)49078)) / (((/* implicit */int) (unsigned char)238))));
    var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4469610028920891450ULL)) ? (3314137045U) : (4294967295U)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_23 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [18U]))) ? (((arr_0 [14U] [10U]) / (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)62784)))))));
                var_24 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_0]) >> ((((~(((/* implicit */int) (unsigned char)37)))) + (64)))))) : (((/* implicit */unsigned long long int) ((((arr_0 [i_0] [i_0]) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (unsigned char)37)))) + (64))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    var_25 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_2 [(signed char)11] [(signed char)11] [i_0])) - (((((/* implicit */_Bool) ((0ULL) - (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) arr_6 [i_2] [i_1] [i_0])) : (arr_0 [i_0] [(unsigned char)0])))));
                    var_26 |= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 1891653058U))))));
                    var_27 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [(unsigned char)8] [i_2])))))));
                    var_28 = ((((/* implicit */unsigned long long int) 3102344408U)) / (((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)244))))));
                    var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (arr_3 [i_0]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                var_30 = ((/* implicit */unsigned long long int) 7681009324700429840LL);
                var_31 = ((/* implicit */signed char) 3027320344U);
                var_32 = ((/* implicit */unsigned int) arr_7 [i_3]);
                var_33 = (-(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 12674893697663284436ULL))))), (3245953303908780508ULL))));
            }
        } 
    } 
}
