/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199738
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned int i_2 = 1; i_2 < 23; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 - 1] [i_3] [i_2 - 1] |= ((/* implicit */unsigned int) (short)9965);
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21087)) ? (((((/* implicit */_Bool) 838187642)) ? (((/* implicit */int) (short)-9966)) : (((/* implicit */int) (_Bool)0)))) : ((~(((/* implicit */int) (unsigned char)114))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (short)-21221))));
                    var_20 *= ((/* implicit */unsigned long long int) ((short) (-(1U))));
                }
                for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) (short)-9986)))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((short) ((((/* implicit */_Bool) 2361624591U)) ? (((/* implicit */int) var_3)) : (-1)))))));
                }
                for (short i_6 = 1; i_6 < 20; i_6 += 1) 
                {
                    arr_18 [i_6] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967286U)) ? (((/* implicit */int) (short)28672)) : (((/* implicit */int) (unsigned short)27499))));
                    var_23 = ((((((/* implicit */_Bool) (unsigned char)4)) ? (((unsigned int) (unsigned char)175)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)75)) ? (((/* implicit */int) (unsigned char)186)) : (((/* implicit */int) (unsigned char)165))))))) / (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) 1)))))));
                }
                for (short i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    arr_21 [i_7] [i_1] [i_7] = ((/* implicit */long long int) var_11);
                    var_24 = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((int) (short)-9965)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)5)) : (((/* implicit */int) (short)9970))))) ? (((((/* implicit */_Bool) 6485059180198941851ULL)) ? (((/* implicit */unsigned int) 0)) : (2446661388U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -3329042868789598559LL)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (short)-9967))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (int i_9 = 2; i_9 < 23; i_9 += 3) 
                        {
                            {
                                var_25 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-9960)) ? (-1944903271) : (((/* implicit */int) var_9))))) + (((unsigned int) (short)-9980)));
                                arr_27 [i_7] [11LL] [i_1] [i_7] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) 547608330240ULL))) ? (((unsigned long long int) (!(((/* implicit */_Bool) 9))))) : (((/* implicit */unsigned long long int) ((long long int) (short)9994)))));
                                arr_28 [i_0] [i_7] [(_Bool)1] [(short)12] [i_9] [i_7] [i_7] = ((/* implicit */unsigned short) (unsigned char)96);
                                arr_29 [i_8] [i_8] [i_7] [i_8] [i_8] [(short)13] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_10)) || (((793512803) >= (-2))))) ? ((-(((((/* implicit */int) (unsigned short)12)) / (((/* implicit */int) (unsigned char)90)))))) : (((/* implicit */int) (unsigned char)63))));
                            }
                        } 
                    } 
                }
                var_26 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-3786)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9994)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)160))) : (0U)))) : (((var_16) ? (var_13) : (((/* implicit */unsigned long long int) -4301476360216747601LL))))))) ? ((-((+(((/* implicit */int) (unsigned char)175)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) -1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((14818352578442021923ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6)))))) ? (((/* implicit */int) ((unsigned short) -22))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)165))))))) - ((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13089))) : (var_10))))))))));
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (short)18216))));
}
