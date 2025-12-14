/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233244
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
    var_14 |= ((/* implicit */unsigned int) (signed char)67);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        arr_2 [i_0] = (short)4460;
        var_15 += ((/* implicit */signed char) ((((/* implicit */int) (signed char)126)) % (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_16 = ((/* implicit */signed char) (-(((((((((/* implicit */_Bool) (short)96)) ? (((/* implicit */int) (short)-32753)) : (((/* implicit */int) (signed char)-125)))) + (2147483647))) >> ((((+(16777215U))) - (16777203U)))))));
        arr_6 [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) (short)32054)) & (((/* implicit */int) (short)20950))))));
        var_17 *= ((/* implicit */unsigned short) ((((/* implicit */int) max(((short)-1), (((/* implicit */short) (unsigned char)255))))) - (((((/* implicit */int) (unsigned char)253)) % (((/* implicit */int) (short)8191))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = (~(-2441557289727236826LL));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) - (((/* implicit */int) (short)-32051))));
        arr_10 [i_2] = ((/* implicit */signed char) ((4294967283U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)16383)))));
    }
    /* LoopNest 3 */
    for (short i_3 = 3; i_3 < 19; i_3 += 3) 
    {
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */short) (((~(6291456U))) >> (((((((/* implicit */_Bool) (short)-22622)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (short)16377)))) - (117)))));
                        var_20 += ((/* implicit */short) max(((+(((((/* implicit */_Bool) (short)16395)) ? (2947816344U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((-2105235883) >= (((/* implicit */int) (signed char)-6)))))) & (min((1U), (((/* implicit */unsigned int) (unsigned char)11))))))));
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((2836893094U) * (max((4069286632U), (4294967285U))))))));
                    }
                    for (unsigned short i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((min((((((/* implicit */int) (unsigned char)141)) / (((/* implicit */int) (signed char)6)))), (((/* implicit */int) ((-9223372036854775806LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)6)))))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)50))))) ? (((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) (short)-1))))) : (((/* implicit */int) (unsigned short)65516)))) - (65509))))))));
                        arr_25 [i_3 - 3] [(signed char)20] [15] [i_4] = ((((/* implicit */int) ((((/* implicit */_Bool) (short)-14051)) || (((/* implicit */_Bool) 26LL))))) + (((/* implicit */int) (signed char)31)));
                    }
                    var_23 = ((/* implicit */unsigned int) max((var_23), (min((min((((/* implicit */unsigned int) (signed char)69)), (4294967289U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (short)32753)) : (((/* implicit */int) (signed char)40)))))))));
                    arr_26 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) ((min((((/* implicit */long long int) (signed char)-11)), (274877841408LL))) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)244)))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32057)) ? (16777193U) : (4293918720U)))) ? (((((/* implicit */int) (signed char)-1)) % (((/* implicit */int) (signed char)109)))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)116))) <= (9223372036854775796LL))))))));
                    arr_27 [i_3] [i_4] [i_5] = min((((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (short)-14048)))), (((/* implicit */int) (short)25090)));
                }
            } 
        } 
    } 
}
