/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212770
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
    var_11 = ((/* implicit */unsigned char) (-(var_9)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (int i_2 = 4; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((-8160381001008241486LL) / (arr_2 [6LL] [19LL])))))) ? (((/* implicit */int) (short)-32745)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2 - 1] [i_3])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (short)9))));
                            var_13 = arr_14 [i_0] [i_1] [i_2] [i_3] [i_4];
                            arr_15 [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-32732))) % (6853697869602121334LL)));
                            var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(-1LL))))));
                        }
                        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_14 [4LL] [4LL] [i_2 - 1] [i_2 + 1] [i_3]))));
                    }
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned char)17] [i_2] [(_Bool)1])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [(unsigned char)1] [(_Bool)1]))))) ? (max((arr_0 [i_0]), (((-6853697869602121340LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)139))))))) : (((((((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_1] [i_0] [i_5])) ? (((/* implicit */long long int) arr_1 [i_5] [i_0])) : (2700733564416421869LL))) + (9223372036854775807LL))) << (((((9219788135241729449LL) / (arr_14 [i_0] [i_5 + 1] [i_2] [(_Bool)1] [4LL]))) - (2LL))))))))));
                        var_17 &= ((/* implicit */int) (unsigned char)117);
                        arr_18 [i_1] [i_2 + 1] [i_1] [i_0] &= ((/* implicit */long long int) ((arr_2 [(_Bool)1] [i_5]) >= (((/* implicit */long long int) min(((-(((/* implicit */int) arr_8 [i_0] [i_2] [12])))), (((((((/* implicit */int) (short)-32761)) + (2147483647))) << (((((/* implicit */int) (unsigned char)107)) - (107))))))))));
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_9 [i_0] [i_0] [19LL] [i_0])))) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (signed char)106)))))));
                        var_19 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_5 + 1] [i_1]))) < (5LL)))) / (((/* implicit */int) (signed char)12)))) * (((/* implicit */int) (unsigned char)120))));
                    }
                    /* LoopSeq 4 */
                    for (long long int i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)178)) && ((_Bool)1)));
                        var_21 *= ((/* implicit */short) min(((unsigned char)96), ((unsigned char)90)));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 18; i_7 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)190)) ^ (arr_1 [i_0] [i_1]))))))), (0ULL)));
                        var_23 = (-(13LL));
                        /* LoopSeq 3 */
                        for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                        {
                            var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -4LL)) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_8 [i_7] [i_2] [i_1])), (4981161496727106393LL)))) && (((/* implicit */_Bool) (unsigned char)90))))) : ((+(((((/* implicit */_Bool) (unsigned char)157)) ? (((/* implicit */int) arr_25 [i_0] [i_0] [4LL] [2LL] [i_7] [i_2] [0LL])) : (((/* implicit */int) (_Bool)1))))))));
                            var_25 = ((((/* implicit */_Bool) (~(-2700733564416421879LL)))) ? (arr_14 [i_0] [i_1] [i_2] [i_1] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 1598577043)))))));
                            arr_27 [i_0] [19LL] [1LL] [i_0] [i_7] [i_0] = (!(((/* implicit */_Bool) (unsigned char)156)));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_7 + 2] [i_8 + 1])) >= (((/* implicit */int) (!(((/* implicit */_Bool) max((-9223372036854775803LL), (((/* implicit */long long int) arr_11 [i_0] [i_0] [i_0] [i_7 - 1] [i_0]))))))))));
                            var_27 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)7))));
                        }
                        for (unsigned char i_9 = 3; i_9 < 19; i_9 += 2) 
                        {
                            var_28 += ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)212)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))))))))) / (((((/* implicit */int) arr_7 [i_9] [i_0] [i_1] [i_0])) - (2147483643)))));
                            arr_31 [i_0] [i_0] [i_0] [i_2] [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_9] [i_9 - 2] [0ULL] [i_9 - 2] [i_9])) || (((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2 - 4] [14LL] [i_2 - 4]))));
                        }
                        for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((((~(arr_9 [i_0] [i_1] [i_2] [i_7]))) ^ (((((/* implicit */int) arr_19 [i_0] [i_0] [i_2] [i_7 - 1] [i_10])) + (((/* implicit */int) (unsigned char)4)))))) : (((/* implicit */int) (_Bool)1))));
                            var_30 = arr_25 [i_0] [i_0] [i_0] [i_0] [(unsigned char)6] [i_7] [i_0];
                        }
                    }
                    for (long long int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */long long int) max((var_31), ((-(arr_35 [(_Bool)1] [i_1] [1LL] [i_2 - 1] [(unsigned char)6] [i_11])))));
                        var_32 = ((/* implicit */signed char) ((arr_24 [i_11] [18LL] [i_2] [i_1] [5LL]) > (((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_0] [(signed char)18] [17LL] [17LL] [7ULL] [17LL])) | (arr_9 [12LL] [i_1] [(_Bool)1] [i_11])))) / (max((((/* implicit */long long int) (unsigned char)246)), (9223372036854775800LL)))))));
                        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (signed char)-63))));
                    }
                    for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 4) 
                        {
                            var_34 = ((/* implicit */unsigned char) arr_33 [2ULL] [i_2] [(unsigned char)0]);
                            var_35 = ((/* implicit */signed char) min((var_35), (((/* implicit */signed char) min((((/* implicit */int) arr_20 [i_0])), ((+(((/* implicit */int) (unsigned char)255)))))))));
                            var_36 = ((/* implicit */int) 12LL);
                        }
                        for (unsigned long long int i_14 = 1; i_14 < 18; i_14 += 2) 
                        {
                            var_37 = ((/* implicit */short) ((((((/* implicit */long long int) ((-67858393) - (((/* implicit */int) arr_29 [i_0] [i_0] [i_2] [i_12] [i_14]))))) + (9223372036854775791LL))) <= (((((((/* implicit */unsigned long long int) arr_24 [i_14] [i_12] [i_2 - 4] [i_1] [i_0])) > (5185645082990297153ULL))) ? (6685216361282913609LL) : ((-(-2700733564416421887LL)))))));
                            var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_7 [(signed char)7] [i_1] [i_1] [(_Bool)1])))), (((((/* implicit */int) arr_19 [i_0] [i_1] [i_2 + 1] [i_12] [i_14 + 1])) & (((/* implicit */int) arr_41 [i_0] [i_1] [i_1] [i_12] [i_1]))))))) % ((+(((18446744073709551601ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))))));
                            arr_46 [i_0] [i_1] [i_2] [i_12 + 2] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_25 [i_0] [i_1] [i_2] [i_12 + 2] [i_1] [i_14] [i_2])))) ? (arr_0 [i_2 - 2]) : (2700733564416421880LL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (-2147483647 - 1)))))) && ((_Bool)1))))) : (((arr_32 [i_0] [i_12] [i_14 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) : (min((9223372036854775807LL), (((/* implicit */long long int) 2147483644))))))));
                        }
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)17]))))) ? (((/* implicit */long long int) 131071)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)163))) ^ (arr_34 [i_1]))))) > ((+(max((-11LL), (((/* implicit */long long int) (short)32744)))))))))));
                        arr_47 [i_2] = ((/* implicit */long long int) arr_44 [i_0] [i_1] [i_2 - 1] [i_0]);
                    }
                }
            } 
        } 
    } 
}
