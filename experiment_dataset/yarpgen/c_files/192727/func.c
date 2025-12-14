/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192727
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)113)) || (((/* implicit */_Bool) (unsigned char)128)))) ? (-2037164077) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [2] [i_1])) ? (-2046599926380510776LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2])))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2037164077)) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) (unsigned char)130))))))))));
                    var_21 |= ((/* implicit */signed char) max((8058334778108299787ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)20))) - (9223372036854775807LL))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)142))))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
    {
        var_22 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [i_3 + 1] [i_3])) : (((/* implicit */int) (short)-32766)))))) | (((/* implicit */int) ((((/* implicit */int) (short)-512)) < (((/* implicit */int) arr_8 [i_3 + 1] [i_3])))))));
        arr_9 [2U] [(unsigned char)5] = ((/* implicit */unsigned char) arr_8 [(unsigned short)12] [(unsigned short)12]);
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                for (short i_7 = 3; i_7 < 18; i_7 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */long long int) (short)32767)), (-2325581840854825129LL)))))));
                        arr_21 [i_4 - 1] [i_4 - 1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_7)) : (arr_12 [i_4] [i_4]))))) ? (((((((/* implicit */long long int) ((/* implicit */int) arr_16 [8LL]))) - (var_1))) + (((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4 - 1] [i_5]))))))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned char)121)), (max((1134813906U), (((/* implicit */unsigned int) arr_13 [i_5] [i_4])))))))));
                        arr_22 [i_4 - 1] [(_Bool)1] [i_4] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_17 [5LL] [i_4 + 1] [i_6 - 1] [i_7 + 1])) ? (arr_17 [i_4] [i_4 + 1] [i_6 - 1] [i_7 + 2]) : (arr_17 [i_4 - 1] [i_4 - 1] [i_6 - 1] [i_7 - 1]))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_18 [(unsigned short)16] [i_4 + 1] [i_6 - 1] [i_7 - 3] [18ULL])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                for (short i_9 = 2; i_9 < 20; i_9 += 1) 
                {
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((var_3) - (1657171564))))) : (((((/* implicit */_Bool) -6752415927672009452LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)511))) : ((-9223372036854775807LL - 1LL))))))) && (max((arr_10 [i_4]), (arr_10 [i_4])))));
                        /* LoopSeq 4 */
                        for (short i_10 = 0; i_10 < 21; i_10 += 3) 
                        {
                            arr_30 [i_4] [i_4] [8ULL] [i_4] [i_4] = ((/* implicit */signed char) arr_23 [i_4] [i_4] [i_5]);
                            arr_31 [i_4] [(unsigned char)2] [i_8] [i_9] [5ULL] [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)25498)), (arr_25 [i_4] [i_4] [17ULL] [i_4] [5LL] [i_10])))) ? (((/* implicit */int) var_18)) : (((((/* implicit */_Bool) -4138537970170269198LL)) ? (arr_28 [i_10] [i_4] [(unsigned char)5] [i_4] [i_4]) : (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) arr_7 [i_4 + 1]))))));
                            arr_32 [7LL] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) ((unsigned char) max((((((/* implicit */_Bool) (short)32198)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))), (((/* implicit */int) arr_16 [(unsigned char)3])))));
                            var_25 ^= ((unsigned char) ((((/* implicit */_Bool) (unsigned char)78)) ? (134217728ULL) : (((/* implicit */unsigned long long int) arr_19 [i_8]))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 3) 
                        {
                            arr_35 [i_4] [i_4] = ((/* implicit */long long int) (unsigned short)40045);
                            var_26 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_2) & (((/* implicit */int) (unsigned char)149))))), (7940582902829544927ULL)));
                        }
                        /* vectorizable */
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            arr_38 [17ULL] [i_9] [i_4] [i_4] [i_4] [i_4 - 1] [i_4] = ((/* implicit */unsigned char) ((var_8) & (((/* implicit */long long int) arr_19 [i_4]))));
                            var_27 = ((/* implicit */long long int) ((_Bool) (~(353485385))));
                        }
                        /* vectorizable */
                        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((((/* implicit */int) var_14)) % (((/* implicit */int) (unsigned char)4))))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) var_13))));
                            arr_41 [i_4] [i_5] [i_4] [i_4] [i_4] = ((/* implicit */short) (~(((/* implicit */int) var_15))));
                            var_30 = ((/* implicit */unsigned int) var_5);
                            arr_42 [i_4] [i_8] [i_8] = ((/* implicit */long long int) arr_15 [i_4] [i_4] [i_4] [i_4]);
                        }
                        arr_43 [i_4] [i_4] [i_4] [20LL] = ((/* implicit */unsigned int) ((((arr_17 [i_4 + 1] [i_4 + 1] [i_5] [i_9]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_4 + 1] [(_Bool)1] [i_8] [i_8]))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))), (((/* implicit */unsigned long long int) (short)-28909)))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                for (unsigned char i_15 = 0; i_15 < 21; i_15 += 1) 
                {
                    for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) var_4);
                            arr_52 [17ULL] [i_4] = ((/* implicit */unsigned char) max((var_19), ((+(((/* implicit */int) arr_8 [i_4] [i_4 - 1]))))));
                            var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) min((var_6), ((unsigned char)177))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            arr_55 [i_4] [i_17] = ((/* implicit */long long int) (short)-2136);
            arr_56 [i_4] = ((/* implicit */unsigned long long int) var_6);
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-32767)) && (((/* implicit */_Bool) var_15)))))) + (12829729106232784768ULL)))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_12 [(unsigned short)10] [i_17])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)7)))))) : (((/* implicit */int) var_4))));
            arr_57 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) (short)22892))));
            arr_58 [i_4 + 1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((arr_51 [i_4] [i_17] [(_Bool)0]) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) arr_26 [i_4] [i_4 - 1] [i_4] [i_4] [i_4 - 1] [i_4]))))) ? (((((/* implicit */_Bool) arr_26 [(short)18] [(short)19] [14ULL] [i_4] [i_17] [i_17])) ? (((((/* implicit */_Bool) var_8)) ? (-827062800) : (var_19))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_7 [i_4])))))) : (((/* implicit */int) arr_15 [(_Bool)1] [(signed char)6] [(_Bool)1] [1LL]))));
        }
        var_34 -= ((/* implicit */unsigned short) arr_26 [i_4] [(unsigned short)12] [i_4 + 1] [16] [i_4] [16]);
        var_35 = ((/* implicit */_Bool) ((short) var_6));
    }
}
