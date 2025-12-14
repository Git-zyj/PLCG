/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211182
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
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_5 [i_2] [i_1] [i_1] [i_0]))));
                    var_14 = ((/* implicit */long long int) (short)-31244);
                    var_15 = ((/* implicit */long long int) arr_4 [i_1]);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (4293706258U))))) : (max((((/* implicit */long long int) ((unsigned short) 4293706248U))), (((long long int) var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            {
                var_17 = ((/* implicit */_Bool) arr_12 [i_3] [i_3]);
                /* LoopSeq 2 */
                for (int i_5 = 4; i_5 < 16; i_5 += 1) 
                {
                    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_11 [i_3 + 2] [i_5 - 3] [i_4]) - (arr_11 [i_3 + 2] [8LL] [i_4])))) ? (((unsigned long long int) -1320180767)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_5)))))))));
                    var_19 = ((/* implicit */unsigned short) arr_16 [i_3] [i_3] [i_5]);
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_20 &= ((/* implicit */unsigned int) ((arr_18 [i_6] [i_6] [i_5 + 4] [(_Bool)1] [(signed char)3] [i_3 + 1]) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_3 + 2] [i_3 + 2])) : (((/* implicit */int) (short)-31244))));
                        var_21 = ((((/* implicit */_Bool) arr_12 [i_5] [i_3])) && (((/* implicit */_Bool) arr_12 [i_5] [i_3])));
                        var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3 - 1] [i_3] [i_3 - 1]))) + (1203058083771892108LL)));
                    }
                    for (signed char i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((((/* implicit */_Bool) arr_19 [i_7 + 4] [4] [i_4] [i_4] [i_7] [(unsigned short)6])) || (arr_16 [i_7 + 1] [i_4] [i_3 + 1]))) && (((((/* implicit */_Bool) (signed char)101)) && (((/* implicit */_Bool) (short)-1)))))))));
                        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) 3409195689U))));
                    }
                    for (unsigned long long int i_8 = 2; i_8 < 19; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-108))) == (4293706240U)))))));
                        var_26 = ((/* implicit */unsigned short) ((((unsigned long long int) (!(((/* implicit */_Bool) (signed char)121))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_5 - 3] [14] [i_5] [(_Bool)1] [i_5])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_17 [i_5 + 4] [i_4] [i_4] [i_3] [i_3 + 1])))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((arr_18 [i_3] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (((/* implicit */long long int) ((-1485721583) / (arr_11 [i_4] [i_5] [i_4])))) : (((8600565265035295815LL) / (((/* implicit */long long int) ((/* implicit */int) arr_17 [(unsigned short)4] [i_4] [i_5] [i_4] [i_3]))))))), (((/* implicit */long long int) 1993820566)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 4) 
                    {
                        var_28 |= ((/* implicit */long long int) (~(((/* implicit */int) (short)30))));
                        var_29 += ((/* implicit */signed char) var_12);
                        var_30 = ((/* implicit */int) arr_9 [i_3]);
                        var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_22 [i_3] [17] [i_5 + 3] [i_3]) ^ (arr_22 [i_3] [i_5 - 1] [i_5 + 2] [i_3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_22 [i_3] [16U] [i_5 + 3] [i_3])));
                    }
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                {
                    var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) 4293706258U))));
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 20; i_11 += 1) 
                    {
                        var_33 ^= ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_25 [i_3] [i_4] [i_4] [14LL])) / (((/* implicit */int) (signed char)-121))))) * (arr_14 [i_10] [i_4] [i_4] [i_3 + 1])))));
                        var_34 = ((((/* implicit */_Bool) ((int) arr_27 [i_3] [(short)9] [(short)10]))) ? (-1) : (((int) arr_25 [i_3 - 1] [i_3] [i_3] [(unsigned short)16])));
                    }
                    for (int i_12 = 0; i_12 < 20; i_12 += 3) 
                    {
                        var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_4] [i_4] [i_4]))))) ? (((((/* implicit */_Bool) arr_21 [i_3] [i_4] [i_4] [i_3] [i_4] [i_4])) ? (((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [i_4] [i_4] [7])) : (((/* implicit */int) arr_21 [i_3] [i_10] [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */int) arr_21 [i_3] [i_4] [i_4] [2] [i_4] [i_4]))));
                        var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-98)))) ? (-1350890998) : (((/* implicit */int) ((signed char) (unsigned short)65535)))))) ? (((/* implicit */unsigned long long int) ((int) ((_Bool) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -1485721583)) : (8856133059218079681ULL))))))));
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((long long int) arr_26 [i_10] [i_12])))));
                    }
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [i_10])) ? (((/* implicit */unsigned long long int) arr_29 [i_3 - 1] [19] [i_10] [i_10] [i_3] [18LL])) : (arr_14 [(signed char)15] [i_4] [i_3] [i_3 + 2])))) ? ((+(((/* implicit */int) var_8)))) : (((/* implicit */int) (unsigned short)28380))));
                    var_39 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)30))))) ? (arr_28 [i_10] [i_4] [(unsigned short)14]) : (((((/* implicit */int) (_Bool)1)) << (((-3589041990055024465LL) + (3589041990055024483LL))))))))));
                }
                var_40 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) arr_16 [i_3 - 1] [i_3] [i_3 - 1])) ^ (((/* implicit */int) (unsigned short)23231)))));
            }
        } 
    } 
}
