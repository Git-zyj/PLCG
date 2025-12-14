/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206802
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206802 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206802
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (_Bool)1)))), (var_3)))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 1148641332)))) % (min((((/* implicit */unsigned int) 1148641332)), (var_16)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_10 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) min((510743178909496625ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_2 - 1] [i_2 + 1] [i_2 + 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            {
                                arr_18 [i_3] [i_1] [i_2 - 2] [i_3] [i_4] = ((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (short)11937))))));
                                arr_19 [i_0] [i_0] [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) -1148641327);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_6 = 2; i_6 < 8; i_6 += 2) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (unsigned short)19170)) : (((/* implicit */int) (_Bool)1))));
                            arr_28 [i_5] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_13 [i_2])) ? (1148641349) : (((/* implicit */int) var_1))))));
                            arr_29 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */short) var_14);
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_15 [i_5] [i_5] [i_2 + 1] [i_1] [i_5]))));
                        }
                        var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_2 - 2]))));
                        var_22 = (~(((/* implicit */int) arr_20 [10ULL] [i_1] [i_2] [i_5])));
                    }
                    for (unsigned int i_7 = 1; i_7 < 9; i_7 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned short) (!(((/* implicit */_Bool) ((var_10) ^ (18446744073709551608ULL)))))));
                            var_24 -= ((/* implicit */short) ((((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_7 + 1])) && (((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1])))) ? (((/* implicit */int) ((arr_2 [i_2 + 1] [i_7 - 1]) == (arr_4 [i_2 - 2] [i_2])))) : ((+(arr_4 [i_2 - 2] [i_2])))));
                            var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((-1148641332), (1148641326)))), (min((((/* implicit */unsigned long long int) arr_1 [i_1])), (arr_8 [i_7] [(unsigned char)6] [i_7] [(unsigned char)6]))))))));
                            var_26 = ((/* implicit */signed char) ((int) (unsigned short)46372));
                        }
                        for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_27 = ((((/* implicit */int) min(((unsigned short)19164), (arr_22 [i_7 + 2] [i_7] [i_7 + 2] [i_7 + 1] [i_7])))) - (((/* implicit */int) min((((/* implicit */unsigned short) arr_39 [i_7 - 1] [i_7 - 1] [i_7 + 1] [i_7 + 2] [i_7])), (arr_22 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7 - 1])))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (+(12632991024983731109ULL))))));
                        }
                        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-43)))))));
                        arr_40 [i_7] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) (unsigned char)0);
                    }
                    for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((17071070205889058108ULL), (((/* implicit */unsigned long long int) (unsigned short)36133))))) ? (((1148641339) ^ (((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [10U])))) : (((/* implicit */int) arr_12 [i_10] [(unsigned char)2] [(unsigned char)2] [(unsigned char)2]))))) ? (((((/* implicit */_Bool) 190494313)) ? (((/* implicit */int) (unsigned short)19152)) : (((/* implicit */int) (unsigned short)46366)))) : (((/* implicit */int) arr_31 [i_0] [i_1] [i_1] [i_10] [i_10])))))));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) max((arr_43 [i_0] [i_0] [i_10]), ((unsigned short)19170))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) -1148641334))) & (((/* implicit */int) arr_39 [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]))))))))));
                        arr_45 [(unsigned short)3] [i_1] [i_2] [i_2 - 2] [(unsigned short)3] [i_10] = ((/* implicit */unsigned char) ((short) (!(((/* implicit */_Bool) var_10)))));
                    }
                }
            } 
        } 
    } 
}
