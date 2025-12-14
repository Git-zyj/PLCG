/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239706
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
    var_12 = ((/* implicit */unsigned int) 1440219744);
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((_Bool) (~(((/* implicit */int) ((short) (short)-14978))))));
        var_13 &= ((/* implicit */signed char) (-(max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_0])) : (-1440219744))), (((/* implicit */int) ((short) var_3)))))));
        var_14 -= ((/* implicit */unsigned int) arr_1 [i_0]);
        var_15 = ((/* implicit */short) 15ULL);
        /* LoopSeq 2 */
        for (int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) var_6)) / (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 + 1])))))) ? (((((/* implicit */_Bool) 1440219744)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-32102)))) : (((-1440219761) - (((/* implicit */int) (unsigned short)2812))))));
            var_17 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) var_2))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_1] [i_1])))))));
            var_18 -= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1]))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_0 [i_0]))))))) - ((-(arr_5 [i_1] [i_0])))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_11))));
        }
        for (int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            arr_9 [4U] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((unsigned int) var_7)))) >> (((/* implicit */int) min((((/* implicit */short) max((((/* implicit */signed char) arr_1 [i_0])), (var_2)))), (arr_7 [i_0] [i_2] [i_2]))))));
            /* LoopNest 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 2; i_4 < 20; i_4 += 3) 
                {
                    for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_14 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) >= (((402653184) | (((/* implicit */int) (_Bool)1)))))))));
                            var_21 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) 0LL))))) <= (((/* implicit */int) (((+(((/* implicit */int) arr_8 [i_2] [i_2])))) > (max((((/* implicit */int) (_Bool)1)), (-1055063566))))))));
                            var_22 *= ((/* implicit */_Bool) (+((~(((arr_11 [i_3] [i_4] [i_5]) << (((/* implicit */int) arr_1 [i_0]))))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((arr_16 [i_0] [2] [i_0] [i_2] [i_2]) ^ (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0])))) : (var_1)))) > (((((((/* implicit */_Bool) arr_6 [i_0])) ? (((/* implicit */unsigned int) var_1)) : (arr_17 [i_0] [i_0] [(_Bool)1] [i_2] [i_2] [i_2]))) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_0])) / (((/* implicit */int) (_Bool)1)))))))));
            var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_5 [i_2] [i_0])) ? (arr_11 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (((((/* implicit */_Bool) ((((var_10) + (9223372036854775807LL))) << (((((arr_10 [i_0] [i_0] [i_0] [i_0]) + (56550594))) - (9)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_0] [i_2] [i_2] [i_2])))) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (short i_6 = 1; i_6 < 18; i_6 += 3) 
    {
        arr_23 [i_6] |= ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_2))))) & ((~(2811918831626741666ULL))))) == (((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (3439579052930026121ULL))) : (((/* implicit */unsigned long long int) ((arr_22 [i_6 + 2]) & (((/* implicit */unsigned int) var_11))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (signed char i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_31 [i_7] [i_7] [i_8] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)31))))) ? (538412) : (((/* implicit */int) arr_14 [i_6] [8LL] [i_8] [i_8]))));
                    arr_32 [i_6] [i_6] [(_Bool)0] [(unsigned short)18] = ((/* implicit */short) ((unsigned long long int) min((((((/* implicit */int) arr_12 [i_6])) & (((/* implicit */int) arr_12 [i_8])))), (((/* implicit */int) arr_13 [i_6] [i_8])))));
                    arr_33 [i_6] [i_7] = ((/* implicit */int) arr_7 [(unsigned short)16] [i_7] [i_8]);
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_4 [i_6] [i_6 + 3])) * (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_8] [i_7] [i_8]))) * (-1LL)))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)-5495)) ? (1789193789) : (((/* implicit */int) (unsigned short)21082)))))))))));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) ((arr_24 [i_6] [i_6] [20]) == (((/* implicit */int) arr_26 [i_8] [i_8]))))) >= ((+(arr_24 [i_6] [i_7] [i_8])))))) * (((/* implicit */int) ((short) ((unsigned int) var_7))))));
                }
            } 
        } 
        var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)22)), (var_1)))) ? (((/* implicit */int) arr_12 [i_6])) : (((/* implicit */int) ((short) arr_16 [i_6 + 3] [(_Bool)1] [i_6 + 1] [i_6] [i_6])))))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_6 + 3])) <= (((((/* implicit */_Bool) (unsigned short)63)) ? (((/* implicit */int) (short)-5936)) : (((/* implicit */int) var_0))))))) : (arr_16 [i_6] [i_6] [i_6] [i_6 + 2] [i_6 - 1])));
        var_28 = ((/* implicit */short) min(((unsigned char)5), (((/* implicit */unsigned char) (signed char)45))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 21; i_9 += 2) 
    {
        var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) (-(arr_10 [i_9] [i_9] [i_9] [(short)20]))))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_11)))) || (((/* implicit */_Bool) arr_13 [i_9] [i_9]))));
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [(signed char)9] [i_9] [i_9] [1LL])))) | (var_11))))));
    }
    for (signed char i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        var_32 += ((/* implicit */short) (unsigned short)65472);
        arr_40 [i_10] [i_10] = ((/* implicit */short) (~((~(((int) arr_22 [i_10]))))));
    }
    var_33 += ((/* implicit */unsigned char) var_3);
    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
}
