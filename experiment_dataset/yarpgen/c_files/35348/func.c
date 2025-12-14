/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35348
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
    var_16 = ((/* implicit */long long int) 11916755242728881116ULL);
    var_17 = ((/* implicit */short) var_9);
    var_18 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 3 */
    for (int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((((/* implicit */_Bool) 6529988830980670490ULL)) || (((/* implicit */_Bool) (unsigned char)218))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) (short)27686)) + (((/* implicit */int) (short)-14646))))), (var_2)))) && (((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) arr_4 [i_1] [19] [i_0]);
            arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_1])) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0]))) : (arr_3 [i_0] [i_0])))) ? ((((-(((/* implicit */int) var_9)))) * (((/* implicit */int) ((short) 18446744073709551615ULL))))) : (((((/* implicit */int) var_4)) / (arr_0 [i_0 - 2])))));
            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-26465)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) (short)-23154))));
        }
        for (short i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            arr_8 [i_0 + 2] [i_0] [11U] = var_11;
            arr_9 [i_0 - 2] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_7 [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_13)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 2]))))) : ((-(max((((/* implicit */int) (short)-26460)), (arr_0 [i_0])))))));
        }
        for (unsigned char i_3 = 2; i_3 < 19; i_3 += 1) 
        {
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned char) ((((_Bool) arr_6 [12] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((arr_11 [i_0 - 1] [i_3 - 1]) % (((/* implicit */unsigned long long int) arr_0 [i_3]))))));
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_3 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_3]))) : (18446744073709551599ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))));
        }
    }
    for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 2) 
            {
                for (unsigned char i_7 = 0; i_7 < 17; i_7 += 2) 
                {
                    {
                        arr_25 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_24 [i_4] [i_6 - 2] [i_4] [i_6 - 2]))))));
                        arr_26 [i_4] [i_4] [i_6 - 2] [i_6 - 2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_7])), (arr_13 [i_4])))) ? (((((/* implicit */int) arr_22 [i_4 + 2] [i_5] [i_4] [i_7])) + (((/* implicit */int) var_15)))) : ((-(((/* implicit */int) arr_4 [(_Bool)0] [i_5] [13ULL]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)26462))) : (arr_21 [(unsigned short)9] [i_5] [0] [i_4])));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_4 + 2])) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_20 [i_4]))))) % (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4]))) ^ (arr_16 [i_4 + 3])))));
        arr_27 [i_4 + 1] [i_4] = ((/* implicit */short) min((max((var_11), (((/* implicit */unsigned long long int) arr_22 [i_4 + 1] [(short)2] [i_4] [i_4 + 4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4 + 1] [i_4] [i_4 + 4])) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [i_4 + 4])) : (((/* implicit */int) arr_22 [i_4 + 4] [i_4] [i_4] [i_4 + 4])))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
    {
        var_25 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [i_8])) ? (((/* implicit */int) (short)27686)) : (((/* implicit */int) arr_30 [i_8] [i_8]))));
        var_26 *= ((/* implicit */signed char) ((arr_28 [i_8]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_29 [3ULL] [i_8])));
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (arr_29 [i_8] [i_8])));
        arr_31 [(unsigned char)11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)-5245))) ? (-1) : (((/* implicit */int) (unsigned char)251))));
    }
}
