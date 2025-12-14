/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219495
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 3; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */short) (((-(((var_15) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) * (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) * (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) (_Bool)1))))) : (731651238U)))));
                    var_16 = ((/* implicit */long long int) max(((short)-2307), (((/* implicit */short) (_Bool)1))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) arr_7 [(unsigned short)14] [i_1] [12U]))));
                    var_18 += min((((arr_2 [i_0]) ? (((((/* implicit */_Bool) (short)-16384)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))) : (7393355251422354139LL))), (((/* implicit */long long int) (-(((((/* implicit */int) (unsigned char)39)) + (-272647937)))))));
                    /* LoopSeq 3 */
                    for (int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (_Bool)1);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 13; i_4 += 3) 
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_8))));
                            var_20 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) var_10)))));
                            var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -7393355251422354135LL)) ? (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (arr_0 [i_4]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]))))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned short) (unsigned short)52708))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(_Bool)1]))) : (2624051044U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)32767)) == (16744448))))))))));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (arr_9 [i_0] [14U] [i_0] [i_0]) : (arr_21 [i_5 + 2] [i_5] [i_5 + 2] [i_5] [i_5])));
                            var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (unsigned char)96))));
                        }
                        var_25 -= ((/* implicit */short) arr_2 [(short)7]);
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)21866))))) ? (((((/* implicit */int) arr_7 [i_2 - 3] [i_1] [i_0])) * (((/* implicit */int) arr_19 [i_2] [(short)1] [(unsigned char)4] [i_2] [i_2])))) : (((int) arr_15 [(unsigned char)12] [i_1] [i_1] [i_1] [i_6]))))))));
                        var_27 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) (_Bool)0)))) ? (max((((/* implicit */long long int) arr_11 [i_2 + 1] [8LL] [15ULL] [i_2 - 2] [6LL] [11U])), (-7393355251422354140LL))) : (((/* implicit */long long int) (~(2147483647))))));
                        var_28 ^= ((/* implicit */short) arr_3 [i_6] [i_1]);
                        var_29 -= ((/* implicit */_Bool) (((~(((((/* implicit */long long int) arr_11 [(short)2] [(unsigned char)3] [i_1] [2] [i_0] [(_Bool)1])) ^ (arr_21 [15LL] [i_6] [i_1] [12LL] [i_6]))))) - (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_30 -= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_1] [i_1]))));
                        var_31 += ((/* implicit */int) ((3563316062U) < (1496975878U)));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_8 = 3; i_8 < 8; i_8 += 2) 
    {
        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) ((int) var_1)))))), (max((((/* implicit */long long int) ((unsigned char) arr_7 [i_8] [8ULL] [i_8]))), (var_3))))))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (unsigned short)60))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_10 = 2; i_10 < 16; i_10 += 3) 
        {
            var_34 += ((/* implicit */long long int) var_9);
            var_35 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 3563316058U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1794))))))))));
            var_36 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)219)) < (((/* implicit */int) (unsigned char)224))));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 19; i_11 += 4) 
        {
            for (unsigned short i_12 = 1; i_12 < 18; i_12 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 3; i_13 < 17; i_13 += 2) 
                    {
                        var_37 -= ((/* implicit */unsigned char) (~(arr_42 [i_13 + 1] [i_12 + 1] [(unsigned short)11] [11] [13U] [i_12 - 1])));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3113887704U)) ? (((/* implicit */int) (unsigned short)58476)) : (((/* implicit */int) (unsigned short)52709))))) ? (-2849017624036415097LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14992)) * (((/* implicit */int) (unsigned char)160))))))))));
                        var_39 += ((/* implicit */_Bool) (((_Bool)1) ? (arr_42 [i_13] [(unsigned char)12] [i_13 - 2] [i_12] [1LL] [i_12 + 1]) : (arr_42 [i_13] [11ULL] [i_13 - 2] [i_12] [(unsigned short)16] [8ULL])));
                    }
                    var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_41 [8ULL] [i_11] [i_11] [i_11] [i_11])) == (((/* implicit */int) arr_31 [15])))) ? (((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (-17) : (1328940012))) : (((/* implicit */int) (short)4))))) ? (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_1)))))) : (((/* implicit */int) (unsigned char)112)))))));
                    var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3)))))));
                    var_42 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((768) + (((/* implicit */int) arr_36 [i_12 + 1] [(unsigned short)7]))))) ? (((/* implicit */int) arr_29 [i_11])) : (arr_34 [i_12] [i_9]))) + (((/* implicit */int) (short)-6062))));
                }
            } 
        } 
        var_43 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_6) ? (((((/* implicit */long long int) 2188601779U)) / (var_3))) : (((/* implicit */long long int) arr_42 [11] [i_9] [i_9] [(short)15] [(unsigned char)11] [(unsigned char)11]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (short)-1711)) : (((/* implicit */int) (short)-29136))))), (arr_39 [i_9] [i_9] [12]))) : (((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) (_Bool)1)), (var_14)))))));
        var_44 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12))));
    }
    var_45 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
}
