/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196538
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
    var_11 -= ((/* implicit */_Bool) var_1);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                arr_12 [i_0] [i_2] [(unsigned char)0] = ((((/* implicit */_Bool) ((711438373U) * (var_2)))) ? ((+(((/* implicit */int) arr_5 [i_2 - 1] [i_2] [i_2])))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) var_4)))));
                                var_12 += ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_0 + 1] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_6 [i_0 + 1] [i_2 - 1] [i_2 + 1])))));
                                arr_13 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 2])) ? (((/* implicit */unsigned int) arr_8 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 + 1])) : (var_1)))) ? (((((/* implicit */_Bool) (short)32767)) ? (arr_8 [i_0] [i_0] [(_Bool)1] [(unsigned short)1] [2ULL] [i_0 - 1]) : (-515993248))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1])) || (((/* implicit */_Bool) (short)32767)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 3) 
                        {
                            {
                                arr_18 [i_5] [i_5] [i_5] [i_5] [i_6] = ((unsigned long long int) (+(3782086396U)));
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (signed char)96)) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) ? (((var_7) ? (min((var_2), (var_8))) : (((/* implicit */unsigned int) ((var_7) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)101))))))) : ((~(arr_9 [i_0 - 1])))));
                                arr_19 [(unsigned short)8] [(unsigned short)8] [i_2 + 1] [i_0] [i_6] [i_1] |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_1] [10] [i_5 + 1] [i_6] [i_6]))));
                                var_14 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1205947746)) || (((/* implicit */_Bool) var_9)))))) : (var_10))) <= (((/* implicit */long long int) (~(((((/* implicit */_Bool) (short)10237)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0])))))))));
                            }
                        } 
                    } 
                    arr_20 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) var_8)))));
                    arr_21 [1ULL] [i_1] = var_1;
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) 12324498260867555427ULL))));
                }
            } 
        } 
    } 
}
