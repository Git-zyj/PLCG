/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232782
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
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((short) ((((1163433140U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34872))))) ? (((/* implicit */int) ((_Bool) arr_0 [i_0]))) : (((/* implicit */int) (!(arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 ^= ((/* implicit */long long int) ((unsigned int) 3131534138U));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 23; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_14 [i_1] [i_3 + 2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) (~((+(min((((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (1163433131U)))))));
                                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned int) 3131534168U))) ? (((((/* implicit */_Bool) (unsigned char)207)) ? (-21369983) : (((/* implicit */int) arr_6 [i_4] [14U] [23ULL] [i_0])))) : (((/* implicit */int) ((unsigned short) var_12))))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_2] [i_1] [i_0] |= (((+((+(1163433127U))))) + (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 1163433121U)) ? (-1) : (((/* implicit */int) var_5)))) + ((+(((/* implicit */int) var_10))))))));
                    var_22 *= ((/* implicit */unsigned long long int) ((short) min(((~(((/* implicit */int) (unsigned short)63851)))), (((/* implicit */int) (short)-19581)))));
                    arr_16 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (631170000) : (435613401)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1581531355)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)0))))) : ((+((~(3131534150U)))))));
                }
            } 
        } 
        var_23 += ((/* implicit */unsigned int) min((((/* implicit */int) (!((!(((/* implicit */_Bool) var_3))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (var_16) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
    }
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        arr_20 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((int) arr_6 [i_5 - 1] [i_5] [17LL] [i_5])) : (((((/* implicit */_Bool) (short)15031)) ? (21369977) : (-1)))));
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_9 [i_6] [i_6] [i_6] [i_6] [2LL] [i_6]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9225))) : (var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1)))))) : (((long long int) 68719476735LL))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)248))))) : (((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245))) : (7976618355264896544LL))))))));
        arr_24 [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(_Bool)1] [i_6] [2U] [i_6] [(_Bool)1] [(_Bool)1]))) & (var_18)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_1))))) : (((arr_0 [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))))));
    }
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(max((4047697407848813705LL), (((/* implicit */long long int) var_10))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_18)))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) -21369998)) ^ (7976618355264896531LL))))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((4294967295U) | (((/* implicit */unsigned int) var_16)))), (((/* implicit */unsigned int) ((var_17) ^ (-21369998))))))) ? (((((((/* implicit */_Bool) 7976618355264896544LL)) && (((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -21369977))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))) : (((-1752034785) - (0)))));
    var_27 += ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((int) (short)756))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)19568)) : (((/* implicit */int) var_4)))) : ((-(((/* implicit */int) var_1)))))) > (((((/* implicit */_Bool) (unsigned short)12424)) ? (((/* implicit */int) (_Bool)1)) : (-585153398)))));
    var_28 = ((/* implicit */int) max((var_28), ((~((~(((((/* implicit */_Bool) var_14)) ? (var_15) : (((/* implicit */int) var_1))))))))));
}
