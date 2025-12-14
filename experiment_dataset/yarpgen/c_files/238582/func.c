/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238582
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = arr_5 [i_0] [i_0] [i_0];
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) (unsigned char)0);
            }
        } 
    } 
    var_20 += ((/* implicit */int) ((unsigned short) min((var_11), (((/* implicit */long long int) (short)-32414)))));
    var_21 = ((/* implicit */unsigned int) var_6);
    var_22 ^= ((/* implicit */short) var_10);
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned short) ((min((((arr_9 [i_2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))))), ((-(arr_9 [i_2 + 1]))))) << (((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1]))));
        arr_11 [i_2 + 1] [i_2] = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) max((arr_8 [i_2]), (((/* implicit */signed char) arr_10 [(_Bool)1] [(short)13]))))), (((((/* implicit */_Bool) arr_9 [i_2])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_10 [i_2 + 1] [i_2 - 1])), ((+(arr_9 [i_2]))))))));
        var_24 = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(signed char)1] [(signed char)1]))))))) % (((/* implicit */unsigned long long int) arr_9 [i_2]))));
    }
    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (unsigned char i_5 = 3; i_5 < 8; i_5 += 1) 
            {
                {
                    var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (short)-32395)) ? (((/* implicit */int) arr_10 [i_3] [i_4])) : (((/* implicit */int) (signed char)14)))), (((/* implicit */int) ((unsigned short) arr_9 [i_4])))))), (arr_13 [i_5] [i_4])));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 4; i_6 < 7; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) (short)-32409);
                                arr_28 [i_4] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) arr_27 [i_5])), ((short)-32406)))) ? (((/* implicit */int) arr_1 [i_3] [i_6])) : (((((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_6] [i_6])) / (((/* implicit */int) var_16))))))) ? (((/* implicit */int) ((((/* implicit */int) ((signed char) var_15))) <= (((((/* implicit */int) arr_26 [i_3] [i_3] [i_5] [i_3] [i_7])) | (arr_15 [i_3])))))) : (((/* implicit */int) arr_20 [i_4] [i_5] [i_6]))));
                                var_27 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_11))) <= (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)32406))) != (2207350331U)))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [11ULL]))) != (var_12)))))))));
                                arr_29 [(signed char)2] [i_7] [i_6] [i_6] [i_6] = ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_9 [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_8 [i_3])) : (((/* implicit */int) arr_16 [(_Bool)0]))))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5 - 3]))))));
                            }
                        } 
                    } 
                    var_28 = ((((/* implicit */_Bool) ((int) ((arr_4 [i_5] [i_5] [i_5 - 3]) == (((/* implicit */int) arr_25 [i_3] [i_4] [i_3])))))) ? (((((((/* implicit */_Bool) arr_15 [i_3])) ? (arr_15 [i_3]) : (((/* implicit */int) arr_18 [i_4] [i_4])))) / (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3]))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (short)32414))))) ? ((+(arr_15 [i_5]))) : (((/* implicit */int) arr_18 [i_3] [i_5])))));
                    arr_30 [(short)7] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_3] [10U])) ? (((/* implicit */int) arr_25 [i_3] [i_3] [i_5])) : (((/* implicit */int) arr_17 [i_3] [i_4] [(signed char)4]))))) ? (min((var_11), (((/* implicit */long long int) arr_10 [i_4] [i_4])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [9ULL] [i_5])) != (((/* implicit */int) arr_0 [i_4] [i_5])))))))))));
                }
            } 
        } 
        var_29 *= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) + (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_3] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_3])) == (((/* implicit */int) arr_10 [i_3] [i_3]))))) : (((((/* implicit */_Bool) arr_3 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-32395)))))))));
        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) max((arr_17 [i_3] [i_3] [i_3]), (arr_17 [(unsigned char)1] [i_3] [i_3])))) != (((/* implicit */int) max(((short)8616), ((short)-8617))))));
        var_31 = ((/* implicit */int) arr_3 [i_3] [i_3] [i_3]);
        /* LoopNest 2 */
        for (unsigned short i_8 = 2; i_8 < 8; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    arr_37 [i_3] [i_8 + 2] [i_9] [(short)5] = ((/* implicit */unsigned short) max((arr_2 [i_8 + 2] [i_8 + 1]), (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)59996), (((/* implicit */unsigned short) arr_0 [(signed char)2] [(signed char)2])))))) / (((3419604745U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64)))))))));
                    var_32 -= ((((/* implicit */_Bool) arr_23 [i_8] [i_9])) ? (((/* implicit */int) arr_26 [i_9] [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_0)));
                    arr_38 [i_9] [(unsigned char)0] [i_9] [i_3] = ((/* implicit */short) ((arr_2 [i_8] [i_8]) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2046)) / (((/* implicit */int) (short)32405)))))));
                    arr_39 [i_3] [i_8 - 1] [(unsigned short)3] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_3] [i_3] [(short)1] [i_9])) | (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_33 [i_8 - 1])))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)8609)) : (((/* implicit */int) arr_25 [i_3] [i_8] [2U]))))))));
                    arr_40 [i_3] [i_8 + 1] [i_9] [0U] = ((/* implicit */unsigned int) (short)8624);
                }
            } 
        } 
    }
}
