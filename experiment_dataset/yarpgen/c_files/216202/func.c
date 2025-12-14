/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216202
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
    var_13 = ((/* implicit */int) ((min((((/* implicit */long long int) (short)-12537)), (2869458124053830496LL))) % (max((((/* implicit */long long int) ((unsigned short) 2869458124053830475LL))), (min((2869458124053830496LL), (2576643664546077909LL)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned long long int) -2576643664546077922LL);
        arr_4 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) 228246348)), (3049461474U)));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_6 [i_1]))));
        arr_8 [i_1] = var_5;
        arr_9 [(unsigned short)4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [14]))));
        arr_10 [2] = (+(1010828308));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    {
                        arr_24 [(signed char)10] [i_3] [i_3] [(signed char)10] = ((/* implicit */short) min((((/* implicit */int) min((var_6), (((/* implicit */unsigned short) (_Bool)1))))), (((((/* implicit */_Bool) var_6)) ? (arr_22 [i_3] [i_3 + 1] [i_3 - 1]) : (arr_22 [i_3] [i_3 + 1] [i_3 - 2])))));
                        arr_25 [i_3] [i_5] [i_3] [i_5] [i_3 - 1] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2826044082U))))) : (((/* implicit */int) arr_19 [i_4] [i_2] [i_2]))))));
                        arr_26 [i_2] [i_3 - 2] [4U] [i_3] = ((/* implicit */unsigned char) -9044548513230782038LL);
                    }
                } 
            } 
            arr_27 [i_3] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (((/* implicit */int) (unsigned short)65535))));
            arr_28 [(unsigned short)0] [(unsigned short)0] [i_3] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min(((-2147483647 - 1)), (-1519286745)))), (((arr_5 [i_3] [i_3]) - (((/* implicit */unsigned long long int) -2576643664546077898LL))))));
            arr_29 [i_2] [i_3] = ((/* implicit */unsigned long long int) var_2);
        }
        arr_30 [i_2] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)30))) : (3130441685U)))))));
        arr_31 [10] &= ((/* implicit */signed char) -2576643664546077898LL);
        arr_32 [(_Bool)0] = ((((/* implicit */_Bool) (~((+(((/* implicit */int) (signed char)30))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (min((((((/* implicit */unsigned long long int) -2576643664546077898LL)) + (var_3))), (((/* implicit */unsigned long long int) ((signed char) var_3))))));
        arr_33 [i_2] [(signed char)12] = ((/* implicit */int) ((((/* implicit */_Bool) max((11253054794150201977ULL), (((/* implicit */unsigned long long int) -228246362))))) ? (((unsigned long long int) max(((signed char)-70), ((signed char)35)))) : (((/* implicit */unsigned long long int) 228246351))));
    }
    var_14 = ((/* implicit */signed char) -2869458124053830509LL);
}
