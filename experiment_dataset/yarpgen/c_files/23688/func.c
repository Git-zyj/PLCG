/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23688
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) ((201326592) - (((/* implicit */int) (unsigned char)50)))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_9)) : ((+(var_3)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) (unsigned char)32)) : ((~(((/* implicit */int) (short)32767)))))), (((((((/* implicit */int) (unsigned short)53312)) | (((/* implicit */int) (signed char)-1)))) + (max((((/* implicit */int) (unsigned short)9875)), (var_10))))))))));
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)12246))) + (((((/* implicit */long long int) ((/* implicit */int) (signed char)118))) | (min((((/* implicit */long long int) (unsigned short)53312)), (-5510456262788604622LL)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) var_11);
                                arr_15 [i_0 - 1] [i_2] [i_3] [i_4] = ((((/* implicit */long long int) ((((/* implicit */_Bool) (~(633390870)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)59607)) : (var_3))) : ((~(((/* implicit */int) (unsigned short)53301))))))) + (((((/* implicit */long long int) ((var_9) ? (-633390870) : (((/* implicit */int) var_16))))) | (((((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) + (9223372036854775801LL))))));
                                arr_16 [i_4] [i_3] [i_2] [i_1 + 1] [i_0] = ((/* implicit */long long int) (+(((/* implicit */int) ((signed char) ((var_15) + (409451696U)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 18; i_6 += 2) 
            {
                {
                    arr_22 [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), (var_3)))) ? (var_8) : ((-(0LL)))))), (min((((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)44189))))), (((/* implicit */unsigned long long int) (-(975735910805919898LL))))))));
                    var_21 = ((/* implicit */unsigned int) -633390847);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_7 = 4; i_7 < 15; i_7 += 1) 
                    {
                        var_22 = ((/* implicit */int) ((-5510456262788604622LL) | (((/* implicit */long long int) ((4226694030U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)24889))))))));
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 19; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_0] [i_5] [i_6] [i_7] [i_8] = ((((/* implicit */_Bool) (~(var_13)))) ? (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (5252754823224819903LL))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53411))) : (5252754823224819903LL))));
                            var_23 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (((((/* implicit */_Bool) -633390870)) ? (5396132779557215289ULL) : (var_13)))));
                            var_24 = ((/* implicit */int) ((short) ((-5252754823224819903LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (13615727355792811498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))));
                            arr_32 [(signed char)0] [i_5] [i_5] [i_5] [i_7 - 1] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)22)) + (-838866138)))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)11707)) : (((/* implicit */int) (short)32767)))) : ((~(((/* implicit */int) var_5))))));
                            arr_33 [i_6] [i_5] [i_6] [i_5] [i_6] = ((/* implicit */unsigned int) (~(((var_14) | (((/* implicit */int) var_4))))));
                            var_27 = ((/* implicit */long long int) ((2547301753U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
                        }
                    }
                    for (int i_10 = 0; i_10 < 19; i_10 += 1) 
                    {
                        var_28 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) 7484304969941947358LL)) ? (((((/* implicit */_Bool) var_6)) ? (-1625286867293069277LL) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-32)))))))));
                        arr_36 [i_0] [i_0 - 3] [i_6] [i_6 + 1] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) + (((/* implicit */int) (unsigned short)12207))))) ? (((((/* implicit */_Bool) ((1067959872) / (838866146)))) ? ((~(3492484672U))) : (((/* implicit */unsigned int) -838866155)))) : (((/* implicit */unsigned int) var_11))));
                        arr_37 [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_10)) | (((((((/* implicit */_Bool) var_3)) ? (7484304969941947359LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))) | (min((-7484304969941947359LL), (((/* implicit */long long int) var_10))))))));
                    }
                }
            } 
        } 
        var_29 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4001969765857979626LL)) ? (568554087U) : (((/* implicit */unsigned int) var_3))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)52891), (((/* implicit */unsigned short) var_0)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (unsigned short)13924))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120))) + (var_6))))));
    }
    var_30 = ((/* implicit */short) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_7)), (0U)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))));
}
