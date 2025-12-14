/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228613
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) -1992778404)) ? (((/* implicit */long long int) -1482045875)) : (((((/* implicit */_Bool) 1482045875)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (((((/* implicit */_Bool) (unsigned short)56728)) ? (-2555114431760450501LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))))));
                /* LoopSeq 4 */
                for (int i_2 = 0; i_2 < 18; i_2 += 2) /* same iter space */
                {
                    arr_7 [12U] [(signed char)16] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((((_Bool)1) ? (11471252) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1992778404)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1966080)) ? (((/* implicit */int) (unsigned short)8808)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) -4916987029002918346LL)) ? (((/* implicit */unsigned int) -1992778404)) : (0U)))))));
                    arr_8 [i_2] [(unsigned short)15] = ((/* implicit */short) ((((/* implicit */_Bool) 0ULL)) ? (363101922U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)15)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)21976)))))));
                                arr_15 [i_0] [i_1] [i_3] [i_3] [i_4] [i_5] [i_5] &= ((/* implicit */unsigned char) (-((((_Bool)0) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (signed char)13))))));
                                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (unsigned char)0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        for (long long int i_7 = 1; i_7 < 17; i_7 += 3) 
                        {
                            {
                                arr_21 [i_7] [i_1] [11] [i_7] = ((/* implicit */long long int) (-((((_Bool)1) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146)))))));
                                var_20 |= ((/* implicit */unsigned char) (_Bool)1);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 2; i_9 < 14; i_9 += 2) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_1] [(unsigned char)7] [i_9 - 1] [i_10] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (18446744073709551615ULL)))));
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (2003360725417192568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? ((~(3132149301738051948LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551605ULL)) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (unsigned short)16478)))))));
                                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 141927370757431510ULL)) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) (unsigned short)1031))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) : (((((/* implicit */_Bool) (unsigned char)175)) ? (1457570167U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)120)))))));
                                var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57745)) ? (471921677) : (((/* implicit */int) (_Bool)1))));
                                var_24 *= ((/* implicit */long long int) (unsigned short)65518);
                            }
                        } 
                    } 
                    var_25 ^= ((/* implicit */short) ((((/* implicit */_Bool) 13921395248683624812ULL)) ? ((~(847328067))) : (((/* implicit */int) (_Bool)1))));
                }
                for (int i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                {
                    arr_35 [i_11] [i_1] [2] = ((/* implicit */short) (+((+(((((/* implicit */_Bool) (short)-6164)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-6328667768776870830LL)))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)198)) ? (((/* implicit */int) (unsigned short)49058)) : (1503125118)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)49058))))) : (3488167071U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                }
            }
        } 
    } 
    var_27 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) (short)-26503)) : (((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)121))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8853025406437823423ULL))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 3) 
    {
        for (unsigned long long int i_13 = 3; i_13 < 22; i_13 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 23; i_15 += 3) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */int) 6026387483087345476LL);
                                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (-1869917187)))) ? ((~(((/* implicit */int) (unsigned char)250)))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)22890)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) (+(3238195115816084032LL)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (13921395248683624812ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45246)))))) ? (((/* implicit */unsigned long long int) (-(2246809777U)))) : (1073741823ULL)))));
                            }
                        } 
                    } 
                } 
                arr_46 [(unsigned char)7] [(_Bool)1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4045890225674096207ULL)) ? (((/* implicit */int) (unsigned short)45262)) : (1450614922)))) : (4294967286U)))));
                var_30 = ((/* implicit */_Bool) 1156608362U);
            }
        } 
    } 
    var_31 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (2048157518U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)13754)))))) ? ((-(1156608362U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) (short)-29810)) : (((/* implicit */int) (unsigned char)255)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
    {
        arr_50 [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18261)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18215))) : (11110697045040424459ULL)))) ? (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (short)18214)));
        arr_51 [i_17] [i_17] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 11110697045040424459ULL)) ? (164924688U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-20177)) : (627964919));
        arr_52 [i_17] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
    }
}
