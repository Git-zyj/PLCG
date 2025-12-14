/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229496
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    var_19 ^= ((/* implicit */_Bool) min(((+(((/* implicit */int) ((signed char) (short)22293))))), (((((/* implicit */_Bool) ((signed char) 549755813887ULL))) ? (((((/* implicit */_Bool) (short)-15008)) ? (((/* implicit */int) (signed char)-111)) : (((/* implicit */int) (short)15)))) : (((((/* implicit */_Bool) (unsigned short)3506)) ? (((/* implicit */int) (unsigned short)62029)) : (((/* implicit */int) (short)-3398))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 4) 
                    {
                        arr_10 [i_3 + 1] [i_3 - 1] [i_3] [i_1] [i_3 - 1] [i_3 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) (short)14986)))) ? (((/* implicit */int) ((short) (short)15))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (unsigned short)14979)) ? (((/* implicit */int) (unsigned short)10723)) : (((/* implicit */int) (unsigned short)3499))))))));
                        arr_11 [i_0] [(unsigned short)16] [i_2] [i_2] [i_3 + 1] &= ((/* implicit */_Bool) ((unsigned char) ((short) (-(((/* implicit */int) (short)(-32767 - 1)))))));
                        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((int) ((unsigned short) 1754124481))))));
                        var_21 = ((/* implicit */long long int) min((((signed char) 13690110768621668454ULL)), (((signed char) max(((short)-14987), ((short)14986))))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 2; i_4 < 21; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) ((short) (short)-15008))), (((unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)3499)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)62368)))))));
                                arr_19 [i_1] [i_4 - 1] [i_2] [i_1] [(signed char)14] [i_1] = ((/* implicit */signed char) (unsigned short)3506);
                                var_23 += ((short) max((((((/* implicit */_Bool) (unsigned short)40145)) ? (((/* implicit */int) (short)-15008)) : (((/* implicit */int) (unsigned short)3482)))), (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (unsigned short)3168)) : (((/* implicit */int) (short)-28348))))));
                                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((short) (unsigned short)3470))) ? (((/* implicit */int) max(((unsigned short)37640), (((/* implicit */unsigned short) (short)7559))))) : (((/* implicit */int) ((unsigned char) (_Bool)1))))))))));
                                var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) (short)7573))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_26 *= ((/* implicit */signed char) ((short) max((268435455LL), (((/* implicit */long long int) ((signed char) (short)-2448))))));
        var_27 = ((/* implicit */short) min((((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (signed char)-14)), ((unsigned short)56856))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) -268435456LL)), (18446744073709551615ULL)))) ? (((/* implicit */int) ((_Bool) 7721467228258772480ULL))) : ((-(((/* implicit */int) (unsigned short)16383))))))));
        var_28 -= ((/* implicit */short) (+(((/* implicit */int) min((max(((unsigned short)49159), (((/* implicit */unsigned short) (signed char)-100)))), (((/* implicit */unsigned short) ((_Bool) (unsigned short)3168))))))));
    }
    var_29 += ((unsigned short) ((((/* implicit */_Bool) var_10)) ? (-4448189563225034558LL) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)16369))))));
    var_30 ^= -49609672035210445LL;
    var_31 = ((/* implicit */unsigned short) ((unsigned long long int) (_Bool)1));
}
