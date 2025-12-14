/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223109
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
    var_12 -= (+(((/* implicit */int) (short)32767)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */int) var_1);
                var_14 ^= ((int) ((unsigned long long int) var_4));
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) max((65280U), (((/* implicit */unsigned int) (short)3858))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) 576460752302899200LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2922805890U))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        for (long long int i_3 = 2; i_3 < 10; i_3 += 1) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_4))) == (((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) var_4)), (11837884994047083417ULL))) : (((/* implicit */unsigned long long int) (+(2153669381942759946LL))))))));
                var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) 4193792))));
                /* LoopNest 2 */
                for (long long int i_4 = 3; i_4 < 10; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned short) var_5)))));
                                var_19 = ((/* implicit */_Bool) (-(16777088)));
                            }
                            /* vectorizable */
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) -2153669381942759947LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) : (13608514101472999015ULL)))));
                                arr_24 [i_2] [i_2] [i_4 + 3] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((unsigned short) (unsigned char)47));
                            }
                            /* vectorizable */
                            for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
                            {
                                arr_27 [i_3] [i_2] [i_3] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) -261503132)) ? (8051697696282998619ULL) : (((/* implicit */unsigned long long int) 3176775822420670539LL))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned char) ((long long int) (-(-8544047999129367567LL))));
                            }
                            arr_29 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)32256))))));
                            var_21 = ((/* implicit */short) (((((+(12288))) == (-12288))) ? (max((((/* implicit */long long int) var_4)), (var_1))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-31744), (((/* implicit */short) var_0)))))) == (4503599627370495ULL)))))));
                            var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
                            var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1760143678)) ? (275353596) : (((/* implicit */int) (short)4095))));
                        }
                    } 
                } 
            }
        } 
    } 
}
