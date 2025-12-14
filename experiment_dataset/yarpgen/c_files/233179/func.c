/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233179
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233179 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233179
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = max((max((((/* implicit */unsigned short) var_11)), ((unsigned short)65513))), (((/* implicit */unsigned short) ((unsigned char) arr_3 [i_0 + 3] [i_1 + 1]))));
            arr_6 [i_1] = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)11)) : (((/* implicit */int) var_5))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (var_9)))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)65525)));
            var_15 = ((((((/* implicit */int) arr_1 [i_0 + 2])) - (((/* implicit */int) arr_1 [i_0 + 2])))) - (((/* implicit */int) (short)-18998)));
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_3 = 1; i_3 < 13; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    {
                        arr_15 [i_4] [i_3] [i_2] [i_2] [i_3] [(short)2] = ((/* implicit */unsigned short) ((arr_0 [i_0] [i_0]) ? (((arr_8 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1094163241U))) : (((/* implicit */unsigned int) ((var_2) ? (arr_4 [i_0] [11U]) : (((/* implicit */int) var_12)))))));
                        var_16 &= ((/* implicit */short) arr_14 [(short)15] [i_2] [(short)15] [i_0]);
                        arr_16 [i_3] = ((/* implicit */unsigned char) 3200804045U);
                        arr_17 [i_0] [i_3] [i_2] [i_0] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))));
                        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) -1LL))));
                    }
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) var_5);
        }
        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_19 ^= ((/* implicit */int) var_7);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) | (max((1094163240U), (((/* implicit */unsigned int) arr_11 [i_0 + 1] [i_0] [i_0 + 1]))))));
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)14)), (var_13)))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)-95)))))), (((/* implicit */int) (signed char)64)))))));
                var_22 = ((/* implicit */unsigned short) max(((((-(((/* implicit */int) arr_20 [i_0] [i_5] [i_5])))) - (((/* implicit */int) var_11)))), ((+(((/* implicit */int) arr_0 [i_0] [i_6]))))));
                var_23 &= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((var_2) ? (5) : (((/* implicit */int) (unsigned char)235))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) arr_2 [i_0] [i_0])), (1148167649)))) : (min((0U), (((/* implicit */unsigned int) (short)-17279)))))), (((/* implicit */unsigned int) (unsigned char)14))));
            }
            for (unsigned char i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                arr_25 [i_5] [(signed char)15] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)40012)) == (((/* implicit */int) (_Bool)1))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-122))))));
            }
            for (short i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                var_25 = ((/* implicit */unsigned long long int) var_8);
                var_26 &= ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */int) ((_Bool) arr_9 [i_5] [i_5]))) != (((/* implicit */int) min(((unsigned short)8971), ((unsigned short)7094))))))), (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_5))))));
            }
            /* LoopNest 3 */
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
            {
                for (signed char i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    for (signed char i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */short) ((_Bool) -1LL));
                            var_27 = ((/* implicit */signed char) arr_12 [i_5] [i_10] [i_5]);
                        }
                    } 
                } 
            } 
            arr_36 [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_0)))) ? (((-3470066235996788095LL) ^ (((/* implicit */long long int) arr_30 [i_0] [i_5] [i_0] [i_5] [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12743)) && (var_11)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1])) * (((/* implicit */int) var_2)))))));
            arr_37 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_19 [i_5])))) ? ((+(9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_19 [i_5]))))));
        }
        for (long long int i_12 = 0; i_12 < 16; i_12 += 3) 
        {
            var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-117)))) ? (((/* implicit */int) arr_12 [i_12] [i_0 + 1] [i_0 + 3])) : (((/* implicit */int) arr_40 [i_0] [i_0]))))), ((-(var_9)))));
            var_29 *= ((/* implicit */short) max((((/* implicit */unsigned int) ((signed char) arr_32 [i_0] [i_12] [i_12] [(short)14] [i_0 + 1]))), (var_9)));
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 15; i_13 += 3) 
        {
            for (unsigned short i_14 = 4; i_14 < 14; i_14 += 4) 
            {
                {
                    var_30 = ((/* implicit */_Bool) ((int) arr_3 [i_13] [i_13]));
                    var_31 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) max(((short)18816), (((/* implicit */short) (_Bool)1))))) > (((/* implicit */int) (_Bool)1))))) ^ (((((((/* implicit */_Bool) arr_21 [i_0] [i_13] [i_13] [i_14])) ? (((/* implicit */int) arr_24 [i_13])) : (((/* implicit */int) var_5)))) * (((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_4)))))))));
                    var_32 = ((/* implicit */unsigned short) max((((long long int) arr_45 [i_13 - 1] [i_13 - 1] [i_13] [i_0 + 3])), (((/* implicit */long long int) arr_7 [i_13 - 2] [i_13]))));
                }
            } 
        } 
        var_33 &= ((/* implicit */signed char) ((int) ((arr_21 [(_Bool)1] [i_0 - 1] [i_0] [i_0]) - (arr_21 [i_0] [i_0 + 2] [5U] [i_0]))));
        var_34 += ((/* implicit */unsigned long long int) arr_48 [(signed char)8] [(signed char)14] [(signed char)14]);
    }
    var_35 = ((/* implicit */unsigned char) var_4);
    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (_Bool)1)))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((unsigned int) (short)6439)) > (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))));
}
