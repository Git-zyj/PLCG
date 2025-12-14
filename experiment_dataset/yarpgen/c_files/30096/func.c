/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30096
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
    var_18 = ((/* implicit */signed char) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        {
                            arr_13 [i_0] [0ULL] [i_0] [i_2] [(signed char)19] = ((/* implicit */short) ((int) (-(((/* implicit */int) arr_8 [i_0])))));
                            arr_14 [(_Bool)1] [i_3] [i_3] [i_2] [i_3] |= ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [(unsigned char)18] [i_0] [(_Bool)1] [i_0])), (arr_7 [(unsigned char)8] [22ULL])))) || (((/* implicit */_Bool) arr_6 [i_0] [i_1 + 1]))))), ((~(((unsigned int) arr_5 [i_3] [i_3] [i_3] [(_Bool)1]))))));
                        }
                    } 
                } 
                arr_15 [i_1] [i_0] = ((/* implicit */_Bool) ((((arr_2 [i_1 - 3] [(_Bool)1] [(_Bool)1]) >= (arr_2 [i_1 - 1] [i_1] [i_1 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [18] [i_0] [i_0]))) : (arr_2 [i_0] [(signed char)22] [9ULL])));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1 - 3] [i_1 + 1])) >> (((arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1]) - (6189171548331798225LL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0] [i_0] [i_0]))) >= (8807988813378854576ULL)))) : (((/* implicit */int) var_13))));
                arr_16 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (5486169573178241368ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)9)))))) || (((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) > (var_14))) ? (((var_13) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_5 [i_0] [i_0] [(short)16] [(unsigned char)18])))) : (((/* implicit */int) ((arr_2 [i_0] [i_0] [(signed char)23]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) min((var_9), (((/* implicit */short) var_16)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (short i_6 = 2; i_6 < 17; i_6 += 1) 
            {
                {
                    var_21 &= ((/* implicit */unsigned char) arr_1 [i_5]);
                    arr_25 [i_6] [i_5] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_20 [6LL]) ? (arr_23 [i_5] [i_6 - 1] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))) ? (max((arr_23 [i_5] [i_6 - 2] [i_5] [i_5]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_3 [16LL] [i_5]))))))));
                    var_22 -= ((/* implicit */short) (~(((2078740074U) >> (((((((/* implicit */_Bool) 992935757)) ? (((/* implicit */int) (short)-21436)) : (((/* implicit */int) (signed char)-57)))) + (21457)))))));
                    arr_26 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)59))) + (((((((/* implicit */_Bool) arr_10 [i_4] [(short)10] [(short)22] [i_5])) && (((/* implicit */_Bool) arr_11 [5U] [(_Bool)1] [(_Bool)1] [i_4])))) ? (((arr_17 [(short)10] [i_4]) + (var_2))) : (((arr_22 [14ULL] [i_5]) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        for (long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                arr_32 [i_7] [i_7] &= ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_7 [(short)20] [i_8])) ? (((/* implicit */long long int) (-(((/* implicit */int) (short)32767))))) : (max((var_11), (((/* implicit */long long int) (_Bool)1)))))));
                var_23 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
}
