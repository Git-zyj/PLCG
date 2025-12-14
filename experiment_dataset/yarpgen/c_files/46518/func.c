/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46518
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_4 [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_16 &= ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1 + 2] [i_1 + 2] [i_1] [i_1])) && (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1 + 3] [i_1 - 3])))))));
                        arr_12 [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(((/* implicit */int) min(((unsigned char)212), (var_6)))))), ((+(((((/* implicit */_Bool) (unsigned char)5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)251))))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */short) ((min((((((/* implicit */int) arr_1 [(unsigned char)12])) | (((/* implicit */int) arr_1 [(short)10])))), (((/* implicit */int) max(((short)-1), ((short)32767)))))) & (min((((((/* implicit */int) (short)20747)) & (((/* implicit */int) arr_5 [i_1 - 3] [i_1 + 2] [(short)2] [(short)9])))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_8 [(unsigned char)1] [i_1] [i_1 - 1] [i_1] [(unsigned short)0] [i_1])) : (((/* implicit */int) var_11))))))));
                        var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned short) (unsigned char)105)), (max((max((var_15), (var_9))), (((/* implicit */unsigned short) ((((/* implicit */int) var_7)) >= (((/* implicit */int) arr_0 [i_0])))))))));
                        arr_15 [i_0] [i_1] [i_2 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_1 - 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 - 1] [(unsigned short)19] [i_2 - 1] [i_2])) != ((-(((/* implicit */int) (short)-23513))))))) : (((/* implicit */int) (unsigned char)252))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2 - 1] [i_0]))))) > (((/* implicit */int) arr_5 [i_0] [i_2 + 1] [(unsigned char)16] [i_5])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */int) (short)-32767)) : (((/* implicit */int) arr_10 [(unsigned char)0] [(unsigned char)0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */int) arr_13 [(unsigned char)15])) * (((/* implicit */int) (unsigned char)156)))))) : (((/* implicit */int) ((unsigned char) arr_17 [i_1 - 3] [i_1 + 2] [i_1 + 3] [i_1 + 3] [i_1 + 3]))))))));
                        var_20 ^= ((/* implicit */short) arr_11 [i_0] [(unsigned char)6] [i_2] [i_0]);
                        var_21 += ((/* implicit */unsigned char) ((short) ((((((/* implicit */_Bool) (unsigned char)141)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_2] [i_5] [(unsigned short)15])) : (((/* implicit */int) (short)-32767)))) + (((/* implicit */int) arr_0 [i_1 - 1])))));
                        arr_18 [i_2] [i_2 - 1] [(short)10] [(short)10] [i_2] [(unsigned char)19] = ((/* implicit */short) ((((/* implicit */int) var_10)) - ((+(((/* implicit */int) max((((/* implicit */short) (unsigned char)99)), (arr_14 [(short)11] [i_1]))))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) max((max((((/* implicit */int) arr_19 [(unsigned char)12] [i_0] [i_0] [i_0] [i_0] [i_1 - 2])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)32133)) : (((/* implicit */int) (unsigned char)255)))))), (max((((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [(unsigned char)9] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)151)) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0]))))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)156))))) ? (((/* implicit */int) (short)0)) : (min((((/* implicit */int) var_14)), (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [i_2] [i_6]))))))));
                    }
                }
                for (unsigned short i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 1; i_8 < 19; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 19; i_9 += 4) 
                        {
                            {
                                arr_29 [i_0] [i_1] [i_8] [i_8] [i_9 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_22 [i_0] [(unsigned char)6] [i_7 - 1] [i_7])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)128)))), (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) arr_10 [(unsigned short)18] [i_1])) : (((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_7 - 1])))))));
                                var_24 = ((/* implicit */short) var_5);
                                arr_30 [i_0] [i_0] [i_8] [(unsigned short)4] [i_0] [i_0] = ((/* implicit */unsigned char) min((min((((/* implicit */int) ((unsigned short) (unsigned char)49))), ((+(((/* implicit */int) arr_16 [i_0] [i_1 + 1] [i_0] [(unsigned short)3])))))), (((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [(unsigned char)10] [i_7] [i_8 + 1] [i_8]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)127)), (arr_11 [i_8] [i_7] [(unsigned char)14] [i_8])))) : (((/* implicit */int) arr_7 [i_9] [i_9 - 1] [(unsigned short)5] [i_9 - 1]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 16; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_7))));
                                arr_36 [i_0] [(unsigned char)7] = ((/* implicit */unsigned char) ((unsigned short) (+(((/* implicit */int) ((unsigned char) var_14))))));
                                var_26 = ((/* implicit */unsigned char) max((var_26), (arr_2 [i_7] [i_7])));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) max((((short) (!(((/* implicit */_Bool) arr_35 [i_0] [i_0] [i_7] [i_7] [i_7 + 1]))))), (((/* implicit */short) var_14))));
                }
                for (unsigned short i_12 = 1; i_12 < 18; i_12 += 4) /* same iter space */
                {
                    arr_39 [i_1 + 3] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? ((-(((/* implicit */int) (unsigned char)101)))) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_11)))))))) ? (((/* implicit */int) var_11)) : ((~((~(((/* implicit */int) (unsigned short)24576))))))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned short) var_7))))) && (((/* implicit */_Bool) max((arr_25 [i_12] [(short)13] [(short)13]), (((/* implicit */short) arr_0 [i_12]))))))))));
                    arr_40 [i_0] [i_0] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-1)) % (((/* implicit */int) (short)-32767))))) ? ((~(((/* implicit */int) ((unsigned char) var_0))))) : (((/* implicit */int) arr_37 [i_12] [i_12] [i_1 + 3]))));
                    var_29 -= ((/* implicit */short) min((min(((+(((/* implicit */int) (unsigned char)129)))), (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_0] [i_0] [i_0]))))), ((((-(((/* implicit */int) (unsigned char)240)))) % (((/* implicit */int) (short)-1))))));
                }
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) >= (((/* implicit */int) max((max((var_8), ((unsigned char)155))), ((unsigned char)223))))));
    var_31 |= ((/* implicit */unsigned char) ((((/* implicit */int) (short)1)) > ((((-(((/* implicit */int) (unsigned short)494)))) % (((/* implicit */int) ((short) (unsigned short)47103)))))));
}
