/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53808
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)33002)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */long long int) var_6)), (461022384418927633LL)))))) ? (((/* implicit */int) var_13)) : (((int) var_2))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 24; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_1 - 1]))));
        var_19 = ((/* implicit */long long int) (!(arr_6 [i_1])));
    }
    for (unsigned short i_2 = 2; i_2 < 24; i_2 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 23; i_3 += 4) 
        {
            for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_17 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) arr_13 [i_3 + 1] [i_2 - 1])), (max((arr_16 [i_3 - 1] [i_2] [i_4] [i_2]), (arr_16 [i_3 - 1] [i_2] [i_2] [i_3 - 1])))));
                        arr_18 [i_4] |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_7 [i_2])))) ? (((/* implicit */int) arr_15 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_6 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))) ? (-461022384418927608LL) : (arr_16 [i_3 + 1] [i_4] [i_3 + 1] [i_3 - 1])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) 3187027242U)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_2]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_3] [9U]))))))) : (((unsigned long long int) var_4)))));
                    }
                } 
            } 
        } 
        arr_19 [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) % (((/* implicit */int) arr_8 [i_2]))))) ? ((~(856240619671633160LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32996)))))) ? (((((/* implicit */_Bool) (unsigned char)56)) ? (arr_14 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33012))));
        arr_20 [i_2] = ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_14))) <= (-461022384418927660LL))) ? (((/* implicit */int) max((var_10), (((/* implicit */unsigned short) arr_6 [i_2 - 1]))))) : (((/* implicit */int) ((short) arr_8 [i_2 - 1])))));
        arr_21 [0LL] [i_2] = ((/* implicit */unsigned char) (+(((int) (unsigned char)255))));
    }
    var_20 = ((/* implicit */long long int) ((((unsigned long long int) var_4)) == (((/* implicit */unsigned long long int) 3800252732U))));
}
