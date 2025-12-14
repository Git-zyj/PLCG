/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222589
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
    for (short i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25863)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [6] [6] [i_1]))) : (var_0)))) ? (((/* implicit */int) (unsigned char)58)) : (((/* implicit */int) var_6))));
                    arr_9 [0U] [i_1] [0U] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + ((-(arr_4 [i_0 + 2] [i_1] [i_0 + 2])))));
                    var_16 = ((/* implicit */int) ((unsigned char) arr_8 [i_0 - 1] [i_0 + 1]));
                    arr_10 [i_0] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)25836)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) : (2856366740708261226ULL))) / (max((((/* implicit */unsigned long long int) arr_4 [i_0 + 1] [i_0 - 1] [i_0])), (5297071136190680697ULL)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_2) : (var_10)));
        /* LoopSeq 1 */
        for (unsigned int i_4 = 1; i_4 < 10; i_4 += 3) 
        {
            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) arr_14 [i_4 + 2] [i_3 + 1] [i_3 - 1])) : (((/* implicit */int) arr_14 [i_4 - 1] [i_3 + 2] [i_3 - 1]))));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                for (signed char i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-10))));
                            arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_3 - 1] [i_3 - 1] [i_4 - 1])) + (((/* implicit */int) arr_19 [i_3 + 1] [i_4] [i_4 + 2]))));
                        }
                    } 
                } 
            } 
            arr_27 [i_3] [i_3] [i_4] = ((/* implicit */unsigned long long int) (unsigned char)89);
            arr_28 [i_3] [(_Bool)1] = ((/* implicit */signed char) arr_15 [i_3] [i_3]);
        }
    }
}
