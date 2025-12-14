/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201658
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) (~((~(((/* implicit */int) ((unsigned short) -2080050833))))))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) && (((/* implicit */_Bool) arr_4 [i_2]))))) != (((((/* implicit */int) min((arr_1 [15ULL]), (((/* implicit */unsigned short) var_11))))) / (var_12))))))));
                    var_17 ^= (+(arr_8 [i_0] [i_0] [i_2] [i_1]));
                    arr_10 [i_1] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) > (arr_9 [i_0] [i_2] [i_2])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_17 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-112)) ? ((-(arr_4 [i_3 + 4]))) : (min((arr_4 [i_3 + 2]), (((/* implicit */unsigned long long int) arr_1 [i_4 - 1]))))));
                                var_18 = ((/* implicit */unsigned int) arr_3 [i_0] [i_4 + 2]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 3) 
    {
        var_19 *= ((/* implicit */short) max(((+(((/* implicit */int) ((_Bool) arr_8 [i_5] [i_5] [i_5] [1U]))))), ((+(((/* implicit */int) var_13))))));
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((int) arr_21 [(unsigned char)2] [(unsigned char)2])))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1023))))) + (arr_18 [(_Bool)1])))));
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (int i_8 = 3; i_8 < 7; i_8 += 4) 
                {
                    {
                        arr_30 [i_5 - 1] [i_5] [i_5] [i_5] [i_5 + 1] [i_5] = (~(arr_18 [i_5]));
                        arr_31 [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_7] [i_6] [i_5] [(unsigned short)17] [i_6] [i_6]))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) max((((/* implicit */unsigned int) (signed char)112)), (((unsigned int) arr_25 [i_5] [i_5 - 1] [i_5] [i_5 + 1]))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_5 [i_9] [i_9] [i_9]) ? (((((/* implicit */_Bool) arr_1 [i_9])) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_9] [i_9])))))))) ? ((~(arr_4 [i_9]))) : (((/* implicit */unsigned long long int) min((3089877313U), (((/* implicit */unsigned int) ((((/* implicit */int) arr_33 [i_9] [i_9])) + (((/* implicit */int) var_0))))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) min((arr_4 [i_9]), (var_1))))));
    }
    /* LoopSeq 2 */
    for (int i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        var_24 = ((/* implicit */signed char) 3070784799U);
        arr_36 [i_10] [i_10] = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_13 [(short)6] [i_10] [i_10] [i_10] [(short)6])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) / (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_10] [i_10] [i_10] [12LL])))))))))));
        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) ((_Bool) var_12))) | (((/* implicit */int) var_10)))) : (((/* implicit */int) arr_34 [i_10])))))));
        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [17ULL] [i_10]))) : (max((((/* implicit */unsigned long long int) (+(var_2)))), (((((/* implicit */unsigned long long int) var_7)) - (arr_8 [i_10] [i_10] [i_10] [i_10])))))));
    }
    for (short i_11 = 3; i_11 < 15; i_11 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_12 = 4; i_12 < 15; i_12 += 3) 
        {
            var_27 = ((/* implicit */int) (((!(((/* implicit */_Bool) arr_32 [i_11 - 1] [i_12 + 2])))) ? ((+(max((((/* implicit */long long int) 2234637209U)), (arr_11 [i_11] [i_11 - 1] [i_12 - 3] [i_11] [i_11 - 1]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)62549))) != (var_4)))), (arr_1 [i_11])))))));
            var_28 = ((/* implicit */unsigned int) arr_38 [i_11]);
            var_29 &= ((((/* implicit */int) arr_16 [i_12 - 3] [i_12 + 1] [16] [16] [i_11 - 3] [i_11 + 2])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_12 - 4] [i_12] [8] [8] [i_11] [i_11 - 2]))))));
            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((signed char) arr_13 [4ULL] [(_Bool)1] [i_12 - 2] [i_11] [4ULL])))));
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_12))));
            arr_45 [i_11] [i_11] [i_11] = (+((+(arr_32 [i_11 - 2] [i_11 - 1]))));
            var_32 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) min((var_1), (((/* implicit */unsigned long long int) (signed char)112)))))), (((((/* implicit */_Bool) (signed char)112)) ? (5184334515316262259ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11 - 3] [i_13])))))));
        }
        for (signed char i_14 = 0; i_14 < 17; i_14 += 4) 
        {
            var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) (~((-(((/* implicit */int) arr_3 [i_11] [i_11])))))))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), ((~(((((/* implicit */_Bool) (-(arr_11 [i_14] [i_14] [i_14] [i_14] [0])))) ? (arr_4 [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (arr_44 [5ULL] [i_14]) : (((/* implicit */unsigned int) var_12)))))))))));
            arr_49 [i_11] [i_14] [i_11] = ((/* implicit */int) var_10);
        }
        var_35 = ((/* implicit */unsigned char) arr_38 [i_11]);
    }
    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) max((var_4), (((((/* implicit */_Bool) var_10)) ? ((~(17835817573679824573ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
    var_37 = ((/* implicit */unsigned char) var_9);
}
