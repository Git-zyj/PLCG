/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213703
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
    var_20 = ((/* implicit */signed char) var_18);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) var_17);
                    var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [(signed char)5]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1 + 4] [i_0]))))) ? (min((arr_0 [i_2]), (((/* implicit */unsigned int) arr_2 [i_0] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (signed char)-43)))))))));
                    var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1 - 1] [i_1 - 1])) ? (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (600955334550275740LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1 - 2])))))) || (((/* implicit */_Bool) var_11)));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) -600955334550275740LL))));
                    arr_8 [i_0] [i_1] = ((/* implicit */signed char) -600955334550275731LL);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)34652)) - (((/* implicit */int) var_2))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)32))) - (-600955334550275731LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31795))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))) + (var_3)))))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
            {
                var_25 = ((/* implicit */unsigned short) ((4288570718U) + (4218567207U)));
                var_26 = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (short)0))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [23ULL]))) : (0ULL)))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [i_0] [(signed char)9] [i_0])))))))));
            }
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3])) : (((/* implicit */int) arr_12 [i_3] [i_0] [i_0] [i_0]))))) ? (max((((((/* implicit */_Bool) (short)-15120)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_3] [(unsigned char)14] [i_0]))))), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3] [2U])) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (((/* implicit */int) arr_7 [i_3] [i_3])))))));
            var_28 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_3 [i_0])))) : (((((/* implicit */int) arr_12 [i_0] [i_0] [i_3] [i_3])) % (((/* implicit */int) arr_1 [i_0]))))))));
        }
        for (unsigned short i_5 = 0; i_5 < 24; i_5 += 2) 
        {
            var_29 = ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0])) * (((/* implicit */int) (unsigned short)65535))))))) & (min((((/* implicit */unsigned long long int) (unsigned short)21379)), (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))));
            arr_16 [i_0] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)42362))) : (18446744073709551615ULL)))) ? (((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (600955334550275745LL)))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    {
                        arr_22 [i_0] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_6] [i_6])) ? (((/* implicit */long long int) 1792317124U)) : (max((((((/* implicit */_Bool) arr_12 [i_6] [i_6] [i_6] [(signed char)5])) ? (arr_15 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))))), (((/* implicit */long long int) arr_11 [i_5] [i_7]))))));
                        var_30 *= ((/* implicit */_Bool) arr_7 [i_0] [i_5]);
                        var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_5 [i_7]))));
                    }
                } 
            } 
        }
    }
}
