/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39889
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
    var_14 = ((/* implicit */signed char) var_6);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) (_Bool)1))))) ? (((arr_3 [i_0]) ? (((/* implicit */int) arr_2 [1] [i_0])) : (((/* implicit */int) (unsigned char)232)))) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (((/* implicit */short) arr_3 [i_0])))))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((3968), (((/* implicit */int) arr_6 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? ((+(((/* implicit */int) (signed char)-64)))) : (var_5)))) : (7680ULL)));
                    var_17 -= ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_4)))) ? ((~(((/* implicit */int) (signed char)-30)))) : (((/* implicit */int) ((((/* implicit */int) (short)-32332)) != (((/* implicit */int) (short)32314)))))));
                    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_8))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_4 [i_2] [i_1] [(unsigned char)7])))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            {
                                var_19 *= arr_8 [i_5] [i_5];
                                var_20 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)52284)) - (52259))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (signed char i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) min((var_21), ((+(((int) var_4))))));
                                arr_28 [i_3] [i_3] [i_5] [i_8] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned short) arr_26 [i_3] [i_4] [i_4] [(_Bool)1] [i_4])), (var_7))))) ? (((((/* implicit */_Bool) (unsigned short)29096)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)(-127 - 1))))) : (((((/* implicit */_Bool) arr_23 [i_3] [i_4] [i_3] [i_3] [i_8] [i_9])) ? (((/* implicit */int) arr_23 [i_9] [i_8] [(signed char)2] [i_4] [i_4] [i_3])) : (((/* implicit */int) var_7))))));
                                var_22 = ((/* implicit */signed char) min(((unsigned char)13), (((/* implicit */unsigned char) (_Bool)1))));
                                var_23 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) arr_9 [i_3])))) : (((/* implicit */int) (signed char)8))))) || (((/* implicit */_Bool) (~(var_4))))));
                            }
                        } 
                    } 
                    arr_29 [i_5] [i_4] [i_5] [i_5] |= ((/* implicit */unsigned long long int) arr_22 [i_3]);
                }
            } 
        } 
    } 
}
