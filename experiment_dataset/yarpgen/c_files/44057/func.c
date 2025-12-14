/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44057
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
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_4 [(signed char)8] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((var_2), (var_1)))), ((+(((((/* implicit */_Bool) arr_3 [(short)3])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
        var_11 ^= min((((/* implicit */int) max((min(((short)(-32767 - 1)), ((short)26437))), ((short)-29144)))), (((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */int) (short)-26422)) : (max((((/* implicit */int) var_7)), (var_9))))));
        var_12 += ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_7))))) != (arr_0 [i_0 + 1]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 14; i_2 += 2) 
        {
            var_13 -= ((/* implicit */unsigned short) ((signed char) max((arr_5 [i_1]), (((/* implicit */unsigned char) var_2)))));
            arr_9 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) (+(arr_8 [i_1] [i_2] [i_1])))))));
        }
        for (int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_14 -= ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (short)-21978)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19))) : (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26))))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) ((signed char) var_0))) : (((/* implicit */int) var_7)))))));
            var_15 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) (unsigned char)155)), (15ULL))), (((/* implicit */unsigned long long int) ((int) arr_5 [i_3])))));
        }
        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
            {
                arr_18 [i_1] [i_4] [i_5] &= ((/* implicit */unsigned int) (short)26413);
                var_16 &= ((/* implicit */signed char) arr_10 [i_1] [i_4]);
            }
            for (int i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_7 = 2; i_7 < 13; i_7 += 3) 
                {
                    var_17 = (short)-26132;
                    arr_24 [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((int) max((((/* implicit */int) (short)-31123)), (2147483520)))));
                    arr_25 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_10 [i_7 - 1] [i_4]) - (((/* implicit */int) arr_5 [i_7 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_7 + 1] [i_4])) ? (((/* implicit */int) arr_5 [i_7 + 1])) : (((/* implicit */int) arr_5 [i_7 + 1]))))) : (((((/* implicit */_Bool) arr_5 [i_7 + 1])) ? (18446744073709551615ULL) : (18362143922772647919ULL)))));
                    var_18 = ((/* implicit */signed char) min(((+(arr_20 [i_6] [i_7 - 2] [i_7] [i_7 - 2]))), ((((~(((/* implicit */int) var_10)))) % ((-(((/* implicit */int) (unsigned char)195))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned short) (short)-9953)), ((unsigned short)60369))), (((/* implicit */unsigned short) (short)-10305))))) ? (arr_22 [i_7] [i_6] [(unsigned char)4] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_6])))));
                }
                arr_26 [i_6] [i_4] [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_5 [i_1])), (((max((84600150936903696ULL), (18446744073709551615ULL))) - (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (short)-21130))))))));
            }
            /* vectorizable */
            for (signed char i_8 = 3; i_8 < 12; i_8 += 3) 
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 14; i_9 += 3) 
                {
                    for (short i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_20 [i_10 - 1] [i_9] [i_8] [(signed char)1]))));
                            arr_35 [i_1] [i_4] [i_8] [i_9] [5U] = ((/* implicit */short) arr_8 [i_1] [i_1] [i_10]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) var_0);
                arr_36 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_4]);
                var_22 = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_19 [7U] [(short)1] [(signed char)10]))))));
            }
            arr_37 [i_1] [i_1] = ((unsigned long long int) max((((/* implicit */int) ((short) var_4))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)62648)) : (((/* implicit */int) arr_16 [i_4] [i_1]))))));
        }
        arr_38 [i_1] |= ((/* implicit */int) (unsigned short)60681);
    }
    var_23 = ((/* implicit */unsigned int) ((short) var_0));
    var_24 = ((/* implicit */long long int) var_2);
}
