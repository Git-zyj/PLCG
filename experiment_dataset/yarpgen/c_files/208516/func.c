/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208516
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */int) ((unsigned int) (unsigned short)52701));
                    arr_9 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_10))))) || (((/* implicit */_Bool) max(((unsigned short)12827), ((unsigned short)12834)))))) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)52708)) || (((/* implicit */_Bool) arr_6 [i_1]))))), (3051358161638621000LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) (unsigned short)12834))))))));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned short)52709)) : ((-(((/* implicit */int) var_9))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_2] = ((/* implicit */int) max((min((((/* implicit */long long int) max((((/* implicit */unsigned short) (signed char)62)), ((unsigned short)52702)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))) : (var_4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (((/* implicit */int) min((var_0), (((/* implicit */short) arr_5 [i_3]))))))))));
                        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) arr_7 [i_1] [i_2] [i_3])))), ((+(((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [(unsigned short)2] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)13852)))))))))));
                    }
                    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) | (9223372036854775807LL)))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            for (unsigned short i_5 = 0; i_5 < 16; i_5 += 3) 
            {
                {
                    arr_20 [i_4] [i_4] [i_0] [i_0] &= ((/* implicit */int) max((min((((/* implicit */long long int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) 0))))), (min((((/* implicit */long long int) (short)13856)), (-9223372036854775801LL))))), (((/* implicit */long long int) (unsigned short)2686))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_4] [i_0])) ? (-1273205438) : (((((/* implicit */int) (signed char)7)) * (((/* implicit */int) arr_18 [i_0] [i_5] [i_0]))))))));
                                arr_28 [i_5] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)43072)) / (((/* implicit */int) arr_19 [i_4] [i_7]))))) > (((((/* implicit */_Bool) max((arr_0 [i_5]), (((/* implicit */unsigned long long int) var_7))))) ? (max((16117578006323961154ULL), (((/* implicit */unsigned long long int) (_Bool)0)))) : (((/* implicit */unsigned long long int) 2452867820U))))));
                                arr_29 [i_0] [i_0] [i_5] [i_6] [11U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(arr_11 [i_4] [i_7]))), (((/* implicit */long long int) arr_25 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_6] [i_5] [i_4] [i_0]))) : (min((((/* implicit */long long int) ((((((/* implicit */int) arr_7 [i_0] [i_4] [i_5])) + (2147483647))) >> (((/* implicit */int) arr_22 [(signed char)12] [(signed char)12]))))), (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3202162715U))))))));
                                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) (unsigned short)65535)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
        {
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_1 [i_8]) & (1452115375U))))));
            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) ((unsigned short) ((unsigned short) 2329166067385590462ULL)))) : (((/* implicit */int) max((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_0]))))));
            var_23 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)246))));
            arr_32 [i_0] [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68))) ^ (arr_0 [i_0]))) >> (((((/* implicit */_Bool) arr_19 [i_0] [i_8])) ? (((/* implicit */int) arr_19 [i_8] [i_0])) : (((/* implicit */int) arr_19 [i_0] [i_0]))))));
        }
    }
    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_4))));
    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) var_7)), (((var_2) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-13848))))))))))));
    /* LoopSeq 1 */
    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            arr_39 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */long long int) 3ULL);
            var_26 |= ((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_10]))));
            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (!(((/* implicit */_Bool) 6798487619145674886LL)))))));
        }
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */int) (unsigned short)12288)) : (((/* implicit */int) (signed char)-108))));
                        var_29 = ((/* implicit */signed char) (+(2329166067385590461ULL)));
                    }
                } 
            } 
            arr_49 [i_9] [i_9] |= ((/* implicit */unsigned char) (+((-(32760U)))));
        }
        var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (arr_25 [(_Bool)1] [i_9] [i_9] [i_9]) : (((/* implicit */int) (signed char)54))))) ? (((/* implicit */unsigned long long int) (~(((unsigned int) (unsigned short)65515))))) : (((((/* implicit */_Bool) arr_34 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_9])) <= (((/* implicit */int) (short)13852)))))) : (max((18446744073709551613ULL), (((/* implicit */unsigned long long int) (signed char)-64))))))));
        var_31 &= ((/* implicit */int) 3363099774U);
    }
    var_32 = ((/* implicit */signed char) max((((/* implicit */unsigned short) ((unsigned char) min((var_2), (((/* implicit */unsigned int) var_7)))))), (var_9)));
}
