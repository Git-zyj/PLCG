/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228887
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
    var_20 = ((/* implicit */short) ((unsigned long long int) min((min((var_18), (((/* implicit */unsigned short) (short)32758)))), (((/* implicit */unsigned short) var_15)))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)122)) : (arr_1 [i_0])));
                        arr_10 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) 9195664067362140375LL);
                        var_22 += ((/* implicit */int) ((unsigned char) ((5966762701264689723LL) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_7 [i_2] [i_2] [i_2] [i_2]))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) var_7))));
                            var_25 = ((/* implicit */unsigned short) var_7);
                            var_26 *= ((/* implicit */short) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)30879))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        var_28 -= ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */int) var_8)) : ((+(arr_1 [i_1])))))));
                        var_29 = ((/* implicit */int) ((max((((/* implicit */unsigned long long int) -1428968196)), (max((((/* implicit */unsigned long long int) var_8)), (1919120720453613912ULL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0 - 1] [i_2 + 3] [5LL] [i_0 - 1]), (var_8)))))));
                    }
                    for (unsigned char i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        var_30 -= ((/* implicit */signed char) var_7);
                        var_31 = ((/* implicit */_Bool) max((((/* implicit */int) ((short) 1919120720453613908ULL))), ((~(2089563792)))));
                        var_32 = ((/* implicit */unsigned int) max((var_32), (((/* implicit */unsigned int) var_7))));
                    }
                    var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((11272459240950077301ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4))) + (arr_15 [(unsigned char)2] [i_1] [i_1] [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)-119)), ((unsigned short)34887))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        for (short i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (int i_12 = 1; i_12 < 11; i_12 += 3) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) (+(10581148700166302460ULL))))));
                                arr_34 [i_10] [i_10] [i_10] = (+(((arr_23 [i_8] [i_9]) << (((16527623353255937703ULL) - (16527623353255937703ULL))))));
                                var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) var_13))));
                                var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((min((var_14), (((/* implicit */unsigned long long int) ((arr_27 [i_9] [i_10] [i_9]) ? (((/* implicit */int) arr_14 [i_8] [i_8])) : (((/* implicit */int) var_18))))))) >> (((((((/* implicit */_Bool) -1428968196)) ? (arr_15 [i_8] [i_12 - 1] [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((var_10) | (((/* implicit */unsigned int) arr_24 [i_10]))))))) - (18433821883141157189ULL))))))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-32761))));
                }
            } 
        } 
    } 
}
