/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192060
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_15))));
    var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? ((+(((var_7) >> (((/* implicit */int) var_17)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((2185467856304308050LL), (var_16)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_8)), ((unsigned char)131)))) : (((/* implicit */int) min((var_6), (((/* implicit */short) var_3))))))))));
    var_21 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_8))))), (((((/* implicit */_Bool) (unsigned char)122)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19417))) : (18446744073709551603ULL)))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((min((((/* implicit */long long int) (unsigned char)136)), (3635571628922174840LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)8536)) : (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_2] [4U]))))))))));
                    var_23 = (!(((/* implicit */_Bool) ((var_4) ? ((~(((/* implicit */int) (unsigned char)92)))) : (((arr_2 [i_2]) ? (((/* implicit */int) (unsigned char)249)) : (arr_0 [i_2])))))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_11)), (-1146825589505153755LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1895192772)) || (((/* implicit */_Bool) (unsigned char)118))))) : (((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_1 - 3])) ? (((/* implicit */int) arr_5 [i_2] [i_2] [i_2])) : (var_15)))));
                    arr_7 [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8541)) ? (((/* implicit */int) arr_4 [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_2]))))) ? (((var_18) - (((/* implicit */int) arr_1 [i_0] [i_2])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)36928))))))), (min((((/* implicit */long long int) (unsigned short)16774)), (9134563700131640640LL)))));
                }
            } 
        } 
        arr_8 [i_0] &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1146825589505153730LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8537))) : (-9134563700131640643LL)))) || (arr_2 [i_0]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) max((arr_4 [i_0]), (arr_1 [(unsigned short)9] [i_0]))))) % (((((/* implicit */unsigned int) ((/* implicit */int) (short)2770))) | (var_7))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48761))) & (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136)))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 0; i_3 < 14; i_3 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)254))) % (69147696U)));
        /* LoopNest 2 */
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            for (short i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        arr_20 [i_3] [i_5] [i_6] = ((/* implicit */unsigned char) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)104))))));
                        var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((((((/* implicit */_Bool) arr_17 [i_5] [i_4] [i_4] [i_5] [i_6])) ? (((/* implicit */int) (short)255)) : (((/* implicit */int) (unsigned short)48748)))) / ((+(((/* implicit */int) var_11)))))))));
                        arr_21 [i_3] [i_3] [i_5] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)16790)) - (((/* implicit */int) var_5))));
                        /* LoopSeq 3 */
                        for (short i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_3] [i_7 + 1] [i_7 - 2] [i_7 - 2] [i_7 + 1])) ? (((/* implicit */int) arr_17 [i_3] [i_7 + 1] [i_7] [i_7 + 2] [i_7 - 2])) : (var_10)));
                            var_28 = ((/* implicit */unsigned char) (((_Bool)1) ? (529517820U) : (((/* implicit */unsigned int) 0))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_27 [i_3] [i_4] [i_3] [i_6] [i_8] = ((((/* implicit */long long int) ((arr_18 [i_4] [i_5] [i_6] [i_8]) % (arr_26 [12U])))) != (((var_16) % (((/* implicit */long long int) arr_18 [i_3] [i_3] [i_5] [i_6])))));
                            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_6] [i_8])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned short)65533))))) || (((/* implicit */_Bool) (unsigned short)48748))));
                            arr_28 [i_3] = ((/* implicit */unsigned short) ((((var_7) == (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_4] [i_5] [i_6] [i_5]))))) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) ((arr_11 [i_3]) || (((/* implicit */_Bool) arr_16 [i_4] [i_6])))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            arr_32 [i_3] [i_4] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 3002490530U)) ? (-2097152LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3] [(unsigned short)12] [i_5] [(unsigned short)12] [i_9])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_9]))))))));
                            var_30 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)204)) & (((/* implicit */int) arr_14 [i_3] [10ULL] [i_6] [i_9]))));
                            var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)16788)) ? (var_18) : (((/* implicit */int) (unsigned char)168))));
                        }
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_5])) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */int) arr_11 [i_4])) : (((/* implicit */int) arr_9 [i_3] [i_5]))))));
                    }
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (3002490530U)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) : (1292476751U)));
                }
            } 
        } 
    }
}
