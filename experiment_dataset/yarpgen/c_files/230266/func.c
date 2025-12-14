/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230266
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
    var_18 = ((/* implicit */long long int) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */int) (signed char)4)) <= (((((/* implicit */int) arr_1 [i_1] [i_1])) % (((/* implicit */int) (unsigned short)6039))))));
                arr_7 [i_0 + 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 31U)))))) <= (((long long int) var_0))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 1246850125U)) ? (3927187668U) : (arr_2 [i_0 + 2])))) : (min((((/* implicit */long long int) (unsigned char)228)), (var_13)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((((/* implicit */unsigned int) arr_8 [i_2])), (var_1))))) ? (((/* implicit */int) ((arr_10 [i_2]) || (((/* implicit */_Bool) (unsigned char)228))))) : (((arr_10 [i_2]) ? (min((var_3), (((/* implicit */int) arr_10 [i_2])))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2]))) < (4294967265U))))))));
        var_21 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((var_5), (((/* implicit */unsigned short) var_16)))))) < (min((((/* implicit */unsigned int) (unsigned short)60306)), (4294967264U))))));
    }
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (min((var_14), (((/* implicit */unsigned int) (_Bool)1))))))) << (((((((/* implicit */_Bool) arr_13 [i_3] [i_3 + 1])) ? (max((((/* implicit */unsigned long long int) var_14)), (0ULL))) : (((/* implicit */unsigned long long int) 2869352235U)))) - (1635861669ULL)))));
        arr_14 [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_13 [i_3] [i_3])) - (((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (unsigned short)5230))))))));
        arr_15 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) max((max((var_14), (((/* implicit */unsigned int) var_4)))), (min((((/* implicit */unsigned int) (unsigned char)209)), (arr_12 [i_3])))))) : (min((((/* implicit */long long int) var_2)), (max((-4137638462973290491LL), (((/* implicit */long long int) (short)-32763))))))));
    }
    for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
    {
        var_23 = ((/* implicit */long long int) (~((~(469762048U)))));
        var_24 = ((/* implicit */unsigned int) (short)-1);
        var_25 = min((((/* implicit */long long int) (unsigned short)504)), (min((9223372036854775807LL), (((/* implicit */long long int) var_8)))));
        arr_18 [i_4] = arr_16 [i_4];
    }
}
