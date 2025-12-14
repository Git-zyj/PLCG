/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22063
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_14 = ((4095) >> (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) - (51500))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_15 |= ((/* implicit */signed char) arr_6 [i_2] [i_1] [5LL]);
                        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) 0U))));
                    }
                    arr_9 [i_0] = ((/* implicit */int) ((var_3) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2])))));
                    arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 5217685206972871051ULL)) ? (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_2] [i_1] [i_0]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (int i_5 = 3; i_5 < 20; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    {
                        arr_17 [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_14 [i_0] [0LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 1318694900758464557ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10902))) : (5217685206972871063ULL)))));
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2481627242U)) ? (1650270777) : (((/* implicit */int) (unsigned short)33880))))) ? (((/* implicit */int) arr_15 [i_5 - 1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_4]))))));
                        arr_18 [i_0] = (((_Bool)1) ? (((((/* implicit */_Bool) 3787523391U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_5 - 2]))));
                        var_18 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) -1650270778)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */int) var_4)) : (arr_7 [(_Bool)1] [i_5 + 2] [i_4] [i_0])))) : (var_5)));
                    }
                } 
            } 
        } 
        arr_19 [i_0] [i_0] = ((/* implicit */long long int) var_10);
        var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))) : (var_8))));
    }
    for (signed char i_7 = 1; i_7 < 9; i_7 += 2) 
    {
        var_20 = ((/* implicit */long long int) ((14872263558939317331ULL) + ((~(((((/* implicit */_Bool) (short)9106)) ? (3574480514770234285ULL) : (((/* implicit */unsigned long long int) 137425907U))))))));
        var_21 ^= ((/* implicit */signed char) var_7);
    }
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 3) 
    {
        for (int i_9 = 1; i_9 < 16; i_9 += 3) 
        {
            {
                var_22 = ((/* implicit */long long int) min((((int) ((((/* implicit */int) (signed char)127)) > (((/* implicit */int) (short)22332))))), (min((((((/* implicit */int) (short)-9107)) & (((/* implicit */int) var_1)))), (((/* implicit */int) var_1))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_23 = ((/* implicit */long long int) var_8);
                    var_24 -= ((/* implicit */unsigned int) var_10);
                    var_25 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_12)) ? (3574480514770234285ULL) : (arr_6 [i_8] [i_9] [i_8]))));
                    /* LoopNest 2 */
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 4) 
                        {
                            {
                                arr_35 [i_8] [i_8] [(unsigned char)2] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_9 + 4] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */int) ((var_8) > (((/* implicit */unsigned long long int) -1076761117))))) : (((/* implicit */int) arr_26 [i_8] [i_9 + 2] [i_10]))));
                                var_26 = ((/* implicit */unsigned short) -1);
                                var_27 = ((/* implicit */int) (short)-17122);
                                arr_36 [i_8] [(_Bool)1] [i_12] &= ((/* implicit */long long int) 3574480514770234284ULL);
                                arr_37 [i_8] = ((/* implicit */unsigned short) ((signed char) arr_24 [i_11]));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (3574480514770234293ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (876044027) : (((/* implicit */int) var_6)))))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1))))))))));
}
