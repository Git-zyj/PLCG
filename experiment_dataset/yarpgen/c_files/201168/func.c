/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201168
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
    for (signed char i_0 = 3; i_0 < 22; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned char)6])) ? ((~(-2141076948))) : (((((/* implicit */int) (unsigned char)245)) ^ (((/* implicit */int) (signed char)-90))))));
                    var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_4 [i_0] [i_0] [i_0 - 3]), (arr_4 [i_2] [i_0] [i_0 - 2]))))));
                    var_15 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((arr_6 [i_2 + 1] [i_2] [i_2 + 2]), (arr_6 [i_2 + 1] [i_2] [7ULL])))), (((unsigned int) (signed char)89))));
                    var_16 = ((/* implicit */unsigned short) min((arr_0 [i_1]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((signed char)-90), (var_3)))))))));
                }
            } 
        } 
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-63)) - (((/* implicit */int) (signed char)62))))) ? (((((/* implicit */int) (signed char)80)) | (((/* implicit */int) (signed char)81)))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_1 [4ULL]))))));
        var_18 *= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> ((((-(((/* implicit */int) var_1)))) - (29098)))))) - (min((((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_3))))));
        var_19 = ((/* implicit */unsigned short) ((arr_5 [i_0 - 3] [i_0 - 3] [i_0] [i_0]) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) arr_2 [i_0 - 2]))))) ? (((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) : ((+(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (signed char i_3 = 1; i_3 < 11; i_3 += 4) 
    {
        var_20 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-63)))), (((/* implicit */int) min((var_12), (((/* implicit */unsigned short) (signed char)80)))))))) ? (arr_3 [i_3] [4U]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)94)))));
        var_21 = ((/* implicit */signed char) arr_10 [i_3 + 2]);
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 3; i_4 < 11; i_4 += 3) 
        {
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                {
                    arr_18 [i_3] [i_4] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_15 [i_4] [i_3 + 2] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_3] [i_3 - 1] [i_3])) : (((/* implicit */int) arr_15 [i_4] [i_3] [i_3 + 1] [i_4])))), (min((((((/* implicit */_Bool) (signed char)-63)) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (signed char)-90)))), (((/* implicit */int) (signed char)86))))));
                    arr_19 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) ((signed char) (signed char)90))))) : (((/* implicit */int) arr_8 [i_3 + 2] [i_4 - 2]))));
                    arr_20 [i_3] [i_4] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(arr_3 [i_3 + 2] [i_4])))), (((((/* implicit */_Bool) arr_3 [i_3 + 3] [i_4])) ? (var_7) : (((/* implicit */unsigned long long int) arr_3 [i_3 + 2] [i_4]))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 4; i_6 < 13; i_6 += 4) 
                    {
                        var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        arr_24 [i_3] [i_3] [i_4] [i_6] = (signed char)-81;
                        var_23 = ((/* implicit */long long int) ((unsigned short) arr_15 [i_4] [i_6] [i_5] [i_4]));
                        var_24 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (max((((/* implicit */unsigned int) var_5)), (var_6))))))));
                        arr_25 [i_4] [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)90)) << (((((((((/* implicit */_Bool) (signed char)-86)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)73))))) >> (((((/* implicit */int) (signed char)59)) - (54))))) - (82025629U)))));
                    }
                    arr_26 [i_4] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3 + 1] [i_3 + 3] [i_3 + 2] [i_3 + 3])) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) arr_1 [i_4])))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 2) 
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */int) (signed char)-80)) : (((/* implicit */int) arr_6 [i_7] [i_7] [i_7])))), (((/* implicit */int) (signed char)-73))))) ? (max((((((/* implicit */_Bool) (signed char)-53)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((((/* implicit */_Bool) (signed char)-81)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)89))))))) : (((/* implicit */unsigned long long int) max((((arr_6 [i_7] [i_7] [i_7]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)71)))), ((~(((/* implicit */int) var_3)))))))));
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 18; i_8 += 2) 
        {
            arr_32 [i_7] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)59)) ? (((/* implicit */int) (signed char)-81)) : (((((/* implicit */int) arr_30 [i_8])) - (((/* implicit */int) (signed char)-86))))))) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_7]))))) - (((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))) : (((((/* implicit */_Bool) arr_0 [i_7])) ? (arr_5 [i_7] [i_8] [i_8] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7] [i_7] [i_7])))))));
            var_26 = ((/* implicit */int) arr_5 [i_7] [i_7] [i_7] [i_8]);
        }
        for (unsigned int i_9 = 4; i_9 < 15; i_9 += 3) 
        {
            arr_35 [i_9] = ((/* implicit */unsigned short) (signed char)-94);
            var_27 = ((/* implicit */signed char) arr_4 [i_7] [i_9] [i_7]);
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) var_0))));
            var_29 = ((/* implicit */signed char) min((((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) arr_29 [i_9 - 4] [(unsigned short)12] [(unsigned short)4])) : (((/* implicit */int) arr_29 [i_9 - 4] [(unsigned short)6] [i_9])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_29 [i_9 - 4] [i_9] [i_9 - 4])) && (((/* implicit */_Bool) var_1)))))));
            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (signed char)-86)) : (((/* implicit */int) (signed char)-103))));
        }
        var_31 = ((/* implicit */unsigned int) var_1);
    }
    var_32 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((max((var_2), (((/* implicit */short) (signed char)-63)))), (((/* implicit */short) min(((signed char)106), ((signed char)62)))))))) <= (var_11)));
    var_33 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-103)) : (((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) var_2)) : ((-(((/* implicit */int) (signed char)-81))))))));
    var_34 = ((/* implicit */unsigned short) (signed char)-79);
}
