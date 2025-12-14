/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224104
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((signed char) (-(-511345874))));
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((_Bool) ((511345874) & (((/* implicit */int) min(((short)30201), ((short)-30214)))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */short) (_Bool)0);
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)79)) ? (177793953) : (((/* implicit */int) (_Bool)1))));
        }
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
    {
        var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)51622))));
        var_23 ^= ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) 
            {
                {
                    arr_21 [i_5] = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) (signed char)4)) ? (arr_7 [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4]))))), (((/* implicit */unsigned long long int) var_1)))) >> (((max((((((/* implicit */int) arr_4 [i_5])) << (((((/* implicit */int) (short)30223)) - (30202))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-30201)) : (((/* implicit */int) var_6)))))) - (23068657)))));
                    var_24 &= ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_4] [i_4])), (3553540274607224078LL)))) ? (((((((/* implicit */int) (unsigned char)93)) < (((/* implicit */int) var_11)))) ? ((~(((/* implicit */int) (signed char)-21)))) : (arr_15 [i_6] [i_5] [i_4]))) : (((/* implicit */int) var_16)));
                    /* LoopSeq 3 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_5] [i_6] [i_5] |= ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)25277)));
                        arr_26 [i_7] [i_6] [i_6] [i_4] &= ((/* implicit */long long int) ((((((((/* implicit */_Bool) (signed char)4)) ? (((-2087952057) / (((/* implicit */int) (unsigned short)51622)))) : ((((_Bool)0) ? (((/* implicit */int) (signed char)-74)) : (((/* implicit */int) (short)-30229)))))) + (2147483647))) << ((((((-(arr_1 [i_6] [i_7]))) + (469927934))) - (12)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 1; i_9 < 13; i_9 += 1) 
                        {
                            var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)21)) ? (arr_30 [i_9 - 1] [i_9 - 1] [(signed char)12] [i_9 - 1] [i_6]) : (arr_30 [i_9 + 1] [i_9 + 1] [i_9] [i_9 + 1] [i_6])));
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_8] [i_9 - 1] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)109)) : (((/* implicit */int) (signed char)-64)))))));
                            var_27 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 555683588)) ? (((/* implicit */int) (_Bool)1)) : (511345892)))) ? (-1126056960) : (((((/* implicit */_Bool) 511345891)) ? (arr_20 [i_8] [6U] [i_5] [i_4]) : (((/* implicit */int) var_1))))));
                            var_28 -= ((/* implicit */long long int) 1836868355U);
                        }
                        arr_34 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) ((2087952057) << (((((((/* implicit */int) arr_18 [i_8] [i_6] [i_5] [i_4])) + (40))) - (1)))));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        arr_38 [i_10] [i_6] [i_6] [i_5] [13ULL] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) arr_2 [i_10]))) ? (((/* implicit */long long int) max((arr_32 [i_4] [i_4] [i_4] [13] [i_4]), (arr_32 [i_10] [i_6] [i_6] [i_5] [i_4])))) : (((((/* implicit */long long int) -2087952057)) & (arr_2 [i_4])))));
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? ((-(((/* implicit */int) arr_13 [i_10] [i_6])))) : (var_18)));
                    }
                    arr_39 [i_5] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))) & (194472882U)))) ? (min((1881595553031107576ULL), (((/* implicit */unsigned long long int) (short)-11257)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-25)))));
                }
            } 
        } 
        var_30 &= ((/* implicit */short) -91360536);
    }
    var_31 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        arr_42 [i_11] [(_Bool)1] = ((/* implicit */long long int) 511345892);
        arr_43 [i_11] [i_11] = ((/* implicit */long long int) 2087952031);
    }
    var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)108)) ? (76137916) : (((/* implicit */int) (signed char)-82))))) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) (signed char)105)))))))));
}
