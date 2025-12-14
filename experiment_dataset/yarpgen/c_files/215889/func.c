/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215889
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 15; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            arr_13 [i_0 + 1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) ((unsigned short) var_6))))) & (((/* implicit */int) arr_4 [(unsigned char)12]))));
                            arr_14 [i_0] [i_1] [i_3] [i_4] = ((/* implicit */long long int) max((arr_1 [i_0 - 2]), (arr_6 [i_1] [i_1 + 3] [i_1])));
                            var_18 ^= ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [2])) ? (((/* implicit */int) arr_6 [(unsigned short)12] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)235))))), (arr_8 [i_1 - 3])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_5] = ((((/* implicit */long long int) var_10)) % (((((/* implicit */_Bool) arr_16 [i_0 + 2] [i_0] [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 1])) ? (((/* implicit */long long int) (-(var_10)))) : (((long long int) (signed char)(-127 - 1))))));
                            arr_19 [i_0] [i_0] [i_1] [i_1] [12ULL] [i_3] [i_5] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) max(((signed char)-120), (arr_7 [18LL]))))))));
                        }
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
        } 
        arr_20 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) max(((signed char)120), ((signed char)93)))) ^ (((/* implicit */int) arr_5 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)4)), (17979214137393152LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (signed char)-113)) : (((/* implicit */int) (signed char)-108)))))))), (((((/* implicit */_Bool) (unsigned short)52549)) ? (((/* implicit */int) (short)4594)) : (arr_12 [i_0 + 2] [(unsigned char)2] [(unsigned short)12])))));
        var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
        var_22 += ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_0 - 1] [i_0] [i_0 - 1] [i_0])) && (((((/* implicit */_Bool) arr_11 [i_0 - 2] [i_0] [i_0 - 2] [i_0 - 1])) || (((/* implicit */_Bool) arr_0 [i_0 - 1]))))));
    }
    /* LoopSeq 2 */
    for (short i_6 = 0; i_6 < 18; i_6 += 4) 
    {
        var_23 += ((/* implicit */_Bool) ((unsigned short) min((((long long int) (unsigned short)1211)), (((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)-104)), ((unsigned short)57514)))))));
        /* LoopSeq 4 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -548213092)) / (968151219416306222ULL))), (((/* implicit */unsigned long long int) ((((arr_23 [i_7] [i_7]) + (9223372036854775807LL))) << (((((/* implicit */int) var_16)) - (15759))))))))) ? (max((((/* implicit */int) (unsigned short)65533)), (((((/* implicit */int) var_13)) ^ (arr_2 [i_6] [(unsigned short)12]))))) : (((/* implicit */int) (!(((((/* implicit */_Bool) (unsigned short)35025)) || (((/* implicit */_Bool) (short)-22864)))))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) || ((((_Bool)1) && (((/* implicit */_Bool) (signed char)117)))))))) * (0ULL)));
        }
        for (short i_8 = 1; i_8 < 17; i_8 += 2) 
        {
            arr_30 [i_6] [i_8] = ((/* implicit */unsigned char) ((_Bool) ((short) 0LL)));
            var_26 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) arr_1 [i_6])) + (((/* implicit */int) arr_4 [i_6])))));
        }
        for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
        {
            var_27 -= ((/* implicit */signed char) (-((+(min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (signed char)126))))))));
            var_28 = ((unsigned char) min((((/* implicit */int) (unsigned char)15)), (-1)));
            var_29 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_28 [i_9 + 3] [i_9 - 1] [i_9 - 1])) : (((/* implicit */int) var_7)))), (((/* implicit */int) var_8))));
            var_30 = ((/* implicit */signed char) (unsigned char)116);
        }
        for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            var_31 = ((min((((((/* implicit */_Bool) 716853329)) ? (381371239) : ((-2147483647 - 1)))), (((/* implicit */int) ((unsigned short) (_Bool)1))))) % ((-(((/* implicit */int) (signed char)15)))));
            var_32 = ((/* implicit */_Bool) ((min((arr_16 [i_6] [i_6] [(unsigned short)12] [i_6] [i_6] [i_10] [i_10]), ((~(((/* implicit */int) arr_9 [i_6] [i_6] [i_6] [i_6])))))) % (((((/* implicit */_Bool) ((6200913276592732599LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) (_Bool)0)))))));
        }
    }
    for (signed char i_11 = 0; i_11 < 12; i_11 += 2) 
    {
        var_33 = ((/* implicit */unsigned char) ((((((long long int) (signed char)10)) >> (((((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11])) - (38))))) >> (((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) ^ (arr_23 [i_11] [i_11]))) + (570434478647377919LL)))));
        arr_40 [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -823129168)))) * (0ULL))) << (((((((/* implicit */int) (unsigned short)19332)) % (((/* implicit */int) (short)-8403)))) - (2518)))));
    }
}
