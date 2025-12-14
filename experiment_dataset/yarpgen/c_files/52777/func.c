/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52777
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
    var_17 = ((/* implicit */unsigned char) var_2);
    var_18 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) (unsigned short)36144)) & (((/* implicit */int) (unsigned short)19350)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0 - 2] = var_13;
        arr_4 [12ULL] = ((/* implicit */short) (+(var_7)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)60))) * (((arr_9 [i_0] [10ULL]) & (arr_9 [i_0 - 1] [i_0])))));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (short i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_4 + 3])) ? (arr_9 [i_0 - 2] [i_4 + 2]) : (arr_9 [i_0 + 1] [i_4 + 2])));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)172)))))));
                        }
                        var_22 = ((/* implicit */unsigned long long int) ((short) (short)-6344));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_16 [i_0] [i_0] [i_2] [i_3] [i_5] [i_5] [i_2] = ((/* implicit */unsigned int) (-(-2015589852)));
                            arr_17 [8U] [8U] [i_0] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)166)) == (1621853429)));
                            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (arr_14 [i_3] [i_5] [i_5] [i_0]) : (arr_2 [i_0 + 1])));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned short i_6 = 1; i_6 < 16; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6 - 1] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)19334)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
        arr_22 [i_6] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_20 [i_6 - 1])) && (((/* implicit */_Bool) (unsigned char)4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17547495971922090975ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)-26673))))))))) : (var_13)));
    }
    for (unsigned short i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 1) 
        {
            for (unsigned long long int i_9 = 0; i_9 < 18; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [11ULL] [i_8] [11ULL])) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned short)22277))))) ? ((+(((/* implicit */int) (unsigned char)149)))) : (((/* implicit */int) arr_23 [i_7 + 2] [i_7 + 2]))))) * (min(((-(arr_26 [i_7] [i_7] [i_9]))), (1511462346U)))));
                    arr_30 [i_7 + 1] [i_7] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (var_10))) & (((((/* implicit */_Bool) var_14)) ? (arr_26 [i_7] [i_7] [i_7]) : (arr_28 [i_8])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [i_7 + 1])) ? (((/* implicit */int) arr_25 [i_7])) : (((/* implicit */int) var_16))))) : (((10165679457632068709ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2)))))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
                        {
                            {
                                arr_35 [i_7 + 2] [i_8] [11ULL] [i_10] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)10208))))) + (((((/* implicit */_Bool) 2094301052)) ? (((/* implicit */int) (unsigned short)2)) : (-2129508823)))));
                                arr_36 [i_7] [i_8] [i_9] [i_7] [(short)1] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)9042)) * (((((/* implicit */_Bool) arr_25 [i_7])) ? (((/* implicit */int) arr_27 [i_7] [i_11] [i_11])) : (((/* implicit */int) (unsigned short)22275))))))) - (var_2)));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)245)) == (((/* implicit */int) (short)-1))));
    }
}
