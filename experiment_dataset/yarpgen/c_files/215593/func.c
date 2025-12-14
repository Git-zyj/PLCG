/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215593
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 24; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) arr_0 [i_0]);
        arr_2 [i_0] [(short)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [12] [i_0])) ? (((/* implicit */long long int) 3350507750U)) : (9223372036854775807LL))))));
        var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) (((-(arr_4 [i_1] [(unsigned short)3]))) | (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 7903413377952516705ULL))))));
        arr_6 [i_1] = ((/* implicit */unsigned int) (short)5397);
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)18)))) + (2147483647))) << (((3754325956U) - (3754325956U))))))));
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 2) 
        {
            for (short i_3 = 2; i_3 < 14; i_3 += 2) 
            {
                for (unsigned int i_4 = 2; i_4 < 14; i_4 += 3) 
                {
                    {
                        arr_14 [i_1] [i_2 - 2] [(_Bool)1] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)60)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) arr_5 [i_2 + 2]))));
                        var_23 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_15 [i_5])))) ? (((/* implicit */int) (short)5392)) : (((/* implicit */int) (short)5397))));
        arr_17 [4LL] [i_5] &= ((/* implicit */unsigned long long int) (~(-6175934406291405284LL)));
        var_25 = ((/* implicit */int) 2070780856U);
    }
    for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_21 [1U]))));
        var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) 3520235095U)) ? (3982830451674219549LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_18 [i_6])), (1264814473U))))));
        var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_19 [i_6]))));
    }
    var_29 = ((/* implicit */_Bool) min((var_5), (((((/* implicit */_Bool) min(((short)(-32767 - 1)), ((short)32767)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)4)) ? (536869888) : (2095509665)))) : (((((/* implicit */_Bool) (short)-20734)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (2251795518717952ULL)))))));
}
