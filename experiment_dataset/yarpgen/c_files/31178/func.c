/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31178
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
    var_10 = ((_Bool) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((((/* implicit */_Bool) (~(arr_3 [i_1] [i_1 + 2])))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_1] [i_1 + 3] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_1 - 1] [(unsigned short)7]))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)30707)) < (arr_1 [i_0] [i_1]))))) : (min((((/* implicit */long long int) (unsigned short)14254)), (var_7))))));
                var_12 &= ((/* implicit */long long int) ((var_2) != (((/* implicit */unsigned int) (+(((/* implicit */int) min(((unsigned short)51271), (((/* implicit */unsigned short) arr_4 [i_0 - 1] [i_1] [i_1]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) max((((/* implicit */int) var_1)), (max((((/* implicit */int) (unsigned short)51295)), (1440439933))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_2 = 3; i_2 < 24; i_2 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_14 = ((((/* implicit */_Bool) (unsigned short)51303)) ? (((/* implicit */int) arr_5 [i_2 + 1])) : (((/* implicit */int) var_1)));
            arr_9 [i_2 - 1] [i_3] [i_3] &= ((/* implicit */_Bool) (+(((unsigned long long int) (unsigned short)14281))));
            var_15 = ((/* implicit */short) ((unsigned short) arr_8 [i_2] [i_2 - 3]));
            arr_10 [i_3] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)10726)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_2]))) : (var_8)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2 + 1])))));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                for (int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_18 [i_6] [i_5] [i_5] [i_4] [i_4] [i_2] = ((/* implicit */_Bool) (~(((int) (unsigned short)14222))));
                        arr_19 [i_6] [(short)9] [i_5] [(short)14] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_2 + 1])) < (((/* implicit */int) (short)7995))));
                    }
                } 
            } 
            var_16 = ((/* implicit */unsigned char) var_2);
        }
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
        {
            var_17 &= ((/* implicit */int) ((unsigned int) -827146522));
            arr_23 [i_2] [i_7] = arr_14 [i_2 + 1] [i_2 - 3] [i_7 - 1] [i_7 - 1];
            var_18 &= ((/* implicit */_Bool) (-(arr_8 [i_2 - 3] [i_7 - 1])));
        }
        arr_24 [(_Bool)1] = ((unsigned short) arr_22 [i_2 - 1]);
    }
    for (short i_8 = 0; i_8 < 15; i_8 += 4) 
    {
        arr_27 [i_8] &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_8] [i_8] [i_8] [i_8])) ? (((/* implicit */int) arr_14 [i_8] [i_8] [i_8] [i_8])) : (((/* implicit */int) (short)16768))))) % ((~(var_7)))));
        arr_28 [i_8] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_26 [i_8])) ? (arr_16 [i_8]) : (arr_16 [i_8]))), (((((/* implicit */_Bool) arr_16 [i_8])) ? (arr_16 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8])))))));
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 2; i_10 < 13; i_10 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 12; i_11 += 2) 
                    {
                        for (long long int i_12 = 4; i_12 < 12; i_12 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52004)) && ((((!(((/* implicit */_Bool) -1498518389)))) || (((/* implicit */_Bool) arr_22 [i_10 + 1]))))));
                                arr_41 [i_9] [i_9] [i_9] [i_11 + 3] = ((/* implicit */short) ((long long int) var_0));
                            }
                        } 
                    } 
                    arr_42 [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_9] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) (unsigned short)51281)) ? (((/* implicit */int) (short)-3327)) : (((/* implicit */int) arr_29 [i_9])))) : (((((/* implicit */int) arr_40 [i_10] [i_10] [i_9] [i_8] [i_8] [i_8])) & (((/* implicit */int) (_Bool)1))))))), (var_8)));
                }
            } 
        } 
    }
}
