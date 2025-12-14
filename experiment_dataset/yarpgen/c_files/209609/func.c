/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209609
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
    var_20 = ((/* implicit */int) min((var_14), (((/* implicit */long long int) ((short) var_10)))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_0 + 1] [i_0 + 1]), (arr_1 [i_0 - 1] [i_0 - 1])))) && (((/* implicit */_Bool) ((short) (signed char)113)))));
        arr_3 [i_0] [i_0] |= ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((_Bool) max(((short)-6926), ((short)-107))))), (((unsigned int) arr_0 [i_0] [i_0]))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((9223372036854775807LL), (((/* implicit */long long int) (short)32756))))) ? (((((/* implicit */_Bool) ((6825326146540812363ULL) | (18446744073709551615ULL)))) ? (((/* implicit */int) max(((signed char)55), ((signed char)55)))) : (((((/* implicit */_Bool) arr_0 [i_0] [3LL])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) var_11)))))) : ((~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned char) var_4)))))))));
    }
    for (short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        var_22 = ((/* implicit */long long int) max((min(((-(6825326146540812363ULL))), (((/* implicit */unsigned long long int) ((unsigned short) var_0))))), (((/* implicit */unsigned long long int) max(((unsigned char)177), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)71)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32767))));
        var_24 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2])) || (((/* implicit */_Bool) arr_4 [i_1 + 3] [i_1 - 1])))), (((-3497860842285437999LL) != (arr_4 [i_1 - 1] [i_1 - 2])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((long long int) ((long long int) arr_7 [i_2] [i_2]))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                {
                    var_26 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1065353216)) ? (((/* implicit */int) (short)32742)) : (((/* implicit */int) (unsigned short)2941))))));
                    arr_17 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_11 [i_2] [i_3 + 1] [i_2]))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_2]))));
        arr_18 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-57)) ? (((/* implicit */int) (short)-9874)) : (((/* implicit */int) (signed char)-79))));
    }
    for (signed char i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        var_28 = ((/* implicit */long long int) (short)17552);
        var_29 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1945833190)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)79))))) ? (((long long int) arr_19 [i_5])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)79)) != (((/* implicit */int) (signed char)-71))))))));
        var_30 ^= ((/* implicit */signed char) (-(min((((((/* implicit */_Bool) (unsigned short)2950)) ? (((/* implicit */unsigned long long int) var_2)) : (arr_22 [(unsigned short)15] [i_5]))), (((/* implicit */unsigned long long int) (-(arr_19 [i_5]))))))));
        var_31 += ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)(-32767 - 1)))) ^ (((/* implicit */int) max(((unsigned short)61537), (((/* implicit */unsigned short) (signed char)63)))))));
    }
    var_32 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (signed char)108)) ^ (((/* implicit */int) (unsigned char)21))))));
    var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)238)), (var_18)));
    /* LoopNest 3 */
    for (unsigned int i_6 = 2; i_6 < 20; i_6 += 3) 
    {
        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
        {
            for (short i_8 = 2; i_8 < 21; i_8 += 2) 
            {
                {
                    var_34 = ((/* implicit */signed char) ((((((unsigned int) var_11)) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)79))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))));
                    /* LoopSeq 2 */
                    for (int i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) 11753811055422429790ULL)) ? (((/* implicit */int) (unsigned char)127)) : (((/* implicit */int) (_Bool)1))));
                        arr_35 [i_9] [i_8] [i_7 + 2] [i_6] [i_6] = ((/* implicit */unsigned char) (+(var_7)));
                        var_36 = ((/* implicit */_Bool) -219677817869558686LL);
                    }
                    for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        var_37 = max((((/* implicit */unsigned int) (short)-107)), (arr_34 [i_6] [i_6] [i_6] [i_6]));
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7709553337601431882ULL)))) ? (arr_30 [i_6 + 1] [i_7 + 1] [i_10]) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) ? (((/* implicit */long long int) arr_37 [i_6] [i_6 - 2] [i_6] [i_6 - 2])) : (var_5))))))));
                        var_39 = ((/* implicit */unsigned int) (-(arr_30 [i_6] [i_7] [i_8])));
                        arr_38 [i_7] [(unsigned short)15] = ((/* implicit */_Bool) var_15);
                        arr_39 [i_10] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_34 [i_6 - 1] [i_6] [i_7 - 1] [i_6 - 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1324)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_9)))))))) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)127)), ((+(var_0))))))));
                    }
                    var_40 += ((/* implicit */short) var_7);
                }
            } 
        } 
    } 
}
