/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205642
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
    var_10 -= ((/* implicit */unsigned char) var_6);
    var_11 &= ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? ((-(11446046227739224568ULL))) : (min((((/* implicit */unsigned long long int) var_5)), (7000697845970327043ULL))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    var_12 = ((/* implicit */int) min((var_12), (((((/* implicit */_Bool) min((arr_1 [i_2]), (((/* implicit */short) arr_2 [i_2] [i_1 - 2]))))) ? (((/* implicit */int) ((signed char) min((arr_2 [i_2] [i_1 - 2]), (((/* implicit */signed char) var_8)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 - 3])) ^ (((/* implicit */int) arr_4 [i_2] [i_1 - 1] [i_2] [i_0 - 1]))))) != (((((/* implicit */_Bool) 11446046227739224568ULL)) ? (17581299961885038311ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [11LL]))))))))))));
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) max((var_9), (((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_1 [i_2])))) / (((/* implicit */int) ((signed char) arr_1 [i_2])))))))))));
                    var_14 -= ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (unsigned char)15))));
                    var_15 += ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_1 - 2]))) : (865444111824513304ULL))))) << (((((unsigned int) ((int) arr_0 [i_0]))) - (4294949430U)))));
                }
                var_16 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_5)), (arr_4 [8] [10ULL] [8] [i_0 + 1])))), (min((17581299961885038311ULL), (((/* implicit */unsigned long long int) (signed char)-70))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) arr_7 [i_3] [i_3 + 1]))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (short)-15343)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (11446046227739224568ULL))) : (max((((/* implicit */unsigned long long int) var_1)), (17581299961885038311ULL)))))))))));
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 865444111824513302ULL))));
        var_20 -= ((/* implicit */int) ((unsigned short) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_8)))), (arr_9 [i_4 - 1]))));
        var_21 += ((/* implicit */unsigned char) ((max((((/* implicit */int) ((unsigned char) arr_8 [(_Bool)1] [i_4]))), (((((/* implicit */_Bool) arr_8 [i_4 - 1] [i_4])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0)))))) / (((/* implicit */int) ((signed char) arr_6 [i_4 + 1] [(unsigned short)2])))));
    }
    for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
    {
        arr_13 [i_5] |= ((/* implicit */long long int) ((int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)26))))));
        var_22 += ((/* implicit */long long int) ((((/* implicit */_Bool) (short)15340)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_11 [i_5])) ? (((/* implicit */int) arr_6 [19] [19])) : (((/* implicit */int) (short)-30176))))))) : (max((arr_12 [i_5]), (max((((/* implicit */unsigned long long int) (short)30173)), (var_9)))))));
        var_23 ^= var_6;
        /* LoopSeq 2 */
        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_24 -= ((/* implicit */short) ((long long int) max((((/* implicit */signed char) var_8)), (arr_14 [i_6]))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
            {
                var_25 -= ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_10 [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_6] [i_5])) : (((/* implicit */int) arr_10 [i_7])))));
                /* LoopSeq 1 */
                for (short i_8 = 3; i_8 < 11; i_8 += 4) 
                {
                    var_26 -= ((/* implicit */unsigned short) min((var_9), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_5] [i_8 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_4) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_8 - 2])) ^ (((/* implicit */int) arr_10 [i_8 + 1]))))) : (min(((~(var_9))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)237))))))))))));
                }
            }
            for (short i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
            {
                var_28 -= ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) min((364407570U), (((/* implicit */unsigned int) var_8))))) > ((~(var_4))))));
                arr_26 [i_5] [i_5] [12ULL] [i_9] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_5] [i_6] [i_9])) ? ((+(((/* implicit */int) var_2)))) : (((/* implicit */int) min((var_7), (var_7))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_11 [i_5])));
            }
            for (short i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                var_29 ^= ((((/* implicit */_Bool) var_7)) ? (var_9) : (max((min((var_4), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_0)))));
                var_30 += ((/* implicit */signed char) arr_10 [i_6]);
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_9 [i_6])) : (arr_12 [i_10]))))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) ((short) 801785796))))))));
                var_32 += ((/* implicit */short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [9ULL] [9ULL]))))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5] [i_6] [i_10])) | (((/* implicit */int) var_1))))) : (4246975912U))))));
                var_33 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */unsigned long long int) 1617828388)) > (865444111824513302ULL))))), (((unsigned long long int) arr_19 [i_5] [i_6]))));
            }
            arr_29 [i_6] [i_6] &= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (1617828382)))) ? (arr_8 [i_5] [i_6]) : (arr_8 [i_6] [i_5])))));
            var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_8)), (var_9)))) || (((/* implicit */_Bool) ((unsigned short) (signed char)-116)))))));
        }
        for (signed char i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            arr_33 [i_5] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_5] [i_5]))))) ? (max((var_6), (((/* implicit */unsigned long long int) (unsigned short)32866)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_17 [i_5] [i_5]), (arr_17 [i_5] [i_11])))))));
            var_35 &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) arr_20 [i_5] [i_5] [i_11])) / (1617828404))));
            /* LoopNest 3 */
            for (short i_12 = 3; i_12 < 10; i_12 += 4) 
            {
                for (short i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 4) 
                    {
                        {
                            var_36 += ((/* implicit */short) (~(((/* implicit */int) min((arr_16 [i_5] [i_11] [i_12 - 2]), (arr_16 [(signed char)8] [(signed char)10] [i_12 - 1]))))));
                            var_37 = ((/* implicit */int) var_6);
                            arr_43 [i_11] |= ((/* implicit */long long int) max((((/* implicit */short) arr_17 [(short)13] [i_5])), (min((arr_22 [i_13 - 1] [i_13 - 1] [i_13 - 1] [i_14]), (var_0)))));
                            var_38 += ((/* implicit */signed char) (((+(arr_8 [i_5] [i_12 - 2]))) >> ((((+(arr_8 [i_5] [i_5]))) - (110946653284228062LL)))));
                        }
                    } 
                } 
            } 
        }
    }
}
