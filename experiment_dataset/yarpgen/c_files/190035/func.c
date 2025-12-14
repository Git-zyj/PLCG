/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190035
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
    var_18 -= ((/* implicit */short) max((((/* implicit */unsigned int) var_1)), (var_17)));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((short) max((((/* implicit */long long int) (!(var_3)))), ((~(-3731268203102376745LL))))));
                    /* LoopSeq 1 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (_Bool)1))));
                        arr_9 [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_15), (((/* implicit */short) (unsigned char)211))))), (var_7)))), (max((((unsigned long long int) (signed char)52)), (((/* implicit */unsigned long long int) (~(arr_0 [i_0]))))))));
                        arr_10 [(unsigned char)14] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 128637477)))) : (var_16)));
                        arr_11 [(unsigned short)12] [i_1] [3LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0])))) ? (((((/* implicit */_Bool) (signed char)-52)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)64))))))) >> (((((/* implicit */int) arr_2 [i_0] [i_1] [(unsigned char)6])) - (108)))));
                    }
                    var_21 *= ((/* implicit */long long int) min((((2415609531U) > (min((4294967295U), (((/* implicit */unsigned int) (unsigned char)203)))))), ((!(arr_7 [i_2 + 1] [(short)6] [i_2] [i_2 + 1])))));
                }
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-67))));
    }
    for (unsigned char i_4 = 1; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) ((signed char) ((19ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 4]))))));
                        var_23 = ((int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)40960))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
                    {
                        arr_27 [i_6] [i_6] [i_6] [i_6] [i_6 + 2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) arr_25 [i_4] [i_5])), (0LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))) ? (((/* implicit */int) arr_18 [i_4])) : (((/* implicit */int) max(((signed char)113), (((/* implicit */signed char) (_Bool)0)))))));
                        arr_28 [i_6] [i_5] [12LL] = ((/* implicit */signed char) ((unsigned short) (!((!(((/* implicit */_Bool) (unsigned char)44)))))));
                        var_24 = ((/* implicit */short) var_2);
                    }
                    var_25 -= ((/* implicit */signed char) ((int) (signed char)84));
                    var_26 -= ((/* implicit */short) var_16);
                    var_27 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (_Bool)0)) : ((((~(((/* implicit */int) (signed char)113)))) - (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))));
                }
            } 
        } 
        var_28 |= ((/* implicit */unsigned short) max((((unsigned long long int) 2092294047U)), (((/* implicit */unsigned long long int) ((unsigned int) var_11)))));
    }
}
