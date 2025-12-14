/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23404
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (var_4))) <= (((/* implicit */int) var_2))))) ^ (((/* implicit */int) max((((/* implicit */signed char) var_2)), (min((var_7), (var_7))))))));
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19681)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_3)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))) : (((/* implicit */int) ((unsigned short) var_3)))));
        var_12 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0] [i_0])), (((((/* implicit */int) (short)19689)) * (((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [i_1] [i_1] [i_1 + 4] = arr_6 [i_0] [13ULL] [i_1];
                    arr_8 [4] [i_1 - 1] [i_1 + 4] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)19668))) > (1350298031U)));
                }
            } 
        } 
    }
    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            for (unsigned int i_5 = 2; i_5 < 9; i_5 += 1) 
            {
                for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_22 [i_6 + 1] [i_4] [i_4 - 1] [i_6])) ? (arr_14 [i_4 + 1] [i_3]) : (arr_14 [i_4 + 1] [i_3]))) - (arr_14 [i_4 - 1] [i_3])));
                        var_14 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_16 [i_6 - 1] [i_3] [i_3] [i_3 - 1])) ? (arr_16 [i_6 - 1] [i_3] [i_3] [i_3 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19680))))), (((/* implicit */unsigned int) ((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_22 [7] [i_4] [i_4] [i_6])))) ^ (arr_18 [i_3] [i_4 - 1] [i_4 - 1]))))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) (_Bool)1);
                            arr_25 [i_3] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) arr_17 [i_5 - 2] [(unsigned char)9])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 - 1] [i_3] [i_3]))))) * (arr_13 [i_6 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) min((arr_19 [i_3]), (((/* implicit */unsigned short) (short)-29968))))) == ((((_Bool)1) ? (((/* implicit */int) arr_4 [i_4] [10LL])) : (-612859811))))))));
                            arr_26 [i_3] [i_3] [i_5] [i_6] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned short)22397)), ((+(((/* implicit */int) arr_22 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_4 - 1]))))));
                            arr_27 [i_3] [i_3] [i_4 - 1] [i_5 - 2] [i_6] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3 - 1] [i_4 + 1] [(_Bool)1] [i_6 + 1] [i_7])) ? (arr_20 [i_3] [i_3] [i_3] [i_6 - 2] [i_3]) : (arr_20 [i_3 - 1] [i_4 - 1] [i_4 - 1] [i_6 - 2] [i_7])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_3] [i_3] [i_5] [i_6 - 2] [i_7])) ? (arr_20 [i_6] [i_4] [2] [i_6 + 1] [2ULL]) : (arr_20 [i_3 - 1] [i_4] [i_5 + 1] [i_6 - 1] [i_7])))) : (((long long int) arr_20 [i_3] [i_4] [i_5 + 1] [i_6 - 1] [(signed char)4]))));
                        }
                        arr_28 [i_3] [i_3] [i_3 + 1] [i_3 + 1] [i_3] = ((/* implicit */unsigned int) max((max((((/* implicit */int) (short)-19698)), (arr_10 [i_3]))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 + 1] [i_6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-29961))))))))));
                    }
                } 
            } 
        } 
        arr_29 [i_3] [i_3] = ((/* implicit */unsigned int) arr_15 [i_3] [i_3]);
        arr_30 [i_3] = ((/* implicit */unsigned long long int) max((((/* implicit */int) var_7)), ((+(((/* implicit */int) arr_3 [i_3] [i_3 + 1] [i_3]))))));
        arr_31 [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_10 [i_3]) / (((/* implicit */int) arr_11 [3U]))))), (max((arr_9 [(_Bool)1]), (((/* implicit */unsigned long long int) arr_13 [i_3])))))))));
    }
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)3041))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (max((((/* implicit */unsigned int) var_6)), (var_3)))))) ? ((-(var_3))) : ((+(((var_6) ? (var_8) : (((/* implicit */unsigned int) var_4))))))));
}
