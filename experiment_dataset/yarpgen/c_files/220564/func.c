/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220564
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
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_10 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_0])) ? (((/* implicit */int) (short)-11672)) : (((/* implicit */int) (unsigned char)255))));
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 + 3])) ? (arr_3 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (short)16515)))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_12 -= ((/* implicit */signed char) (unsigned char)222);
                    arr_11 [i_0] [i_1] [i_1 + 1] [i_2] = ((/* implicit */unsigned short) (unsigned char)1);
                    var_13 ^= ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (signed char)-96)) : ((~(57344))));
                }
            } 
        } 
    }
    for (short i_3 = 4; i_3 < 9; i_3 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                {
                    arr_20 [i_3 - 4] [(unsigned char)1] = ((/* implicit */unsigned long long int) (unsigned char)104);
                    var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 - 4] [i_3 - 4])) ? (min((arr_7 [i_3]), (-2271723018789102677LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */int) arr_19 [i_3 - 4] [i_3 - 4] [i_4] [i_5])) : (((/* implicit */int) arr_18 [i_3 + 1])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551604ULL)) ? (((/* implicit */int) (short)29526)) : (((/* implicit */int) (short)11648))))) ? (arr_13 [i_5 - 1]) : (8191LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)11672))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-30048))) : (4072264849U)))))));
                    arr_21 [i_3] [i_4 - 2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) -6490777780204061417LL)) ? (min(((-(-57344))), (((/* implicit */int) (unsigned char)174)))) : (((arr_12 [i_3] [i_5 + 1]) ? ((+(arr_15 [i_4 - 2] [i_4] [i_4]))) : ((~(((/* implicit */int) (short)11672))))))));
                    var_15 = 2097152U;
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_6 = 2; i_6 < 9; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                for (unsigned char i_8 = 3; i_8 < 8; i_8 += 1) 
                {
                    {
                        var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)14))));
                        var_17 = ((/* implicit */_Bool) (-(0LL)));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (int i_9 = 3; i_9 < 7; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_18 &= ((/* implicit */unsigned long long int) 32767);
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_6 - 1] [i_3 - 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) arr_34 [i_6 - 1] [i_3 - 3] [i_3] [i_3])) : (((/* implicit */int) (unsigned short)65519))));
                            var_20 = ((/* implicit */short) (+(3415450852U)));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_3 - 4])))))));
                arr_38 [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-91))));
                arr_39 [i_3] [i_6 - 2] [i_6 - 2] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43135)) >> (0ULL)))) ? ((+(-6))) : (((/* implicit */int) (short)-11672))));
            }
            for (int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_13 = 1; i_13 < 8; i_13 += 4) 
                {
                    for (short i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        {
                            arr_48 [(signed char)4] [i_3] [i_3] [i_3] &= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-47)) ? (((/* implicit */long long int) 393216U)) : (arr_8 [i_3 - 1] [i_3 - 3])));
                            var_22 = arr_7 [i_14];
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (-2)));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) -2))));
                var_25 = ((/* implicit */short) (-(((/* implicit */int) arr_19 [i_3] [i_6 - 2] [i_3 + 1] [i_3]))));
            }
        }
        var_26 = ((/* implicit */int) (((_Bool)0) ? (max(((~(222702455U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)135))))))) : ((+(((((/* implicit */_Bool) arr_33 [i_3 - 2] [i_3 + 1])) ? (4294959104U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2669)))))))));
        arr_49 [i_3 - 2] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_7 [i_3 + 1])))) ? (((((/* implicit */_Bool) 8186U)) ? (arr_7 [i_3 - 3]) : (arr_7 [i_3 - 1]))) : ((-(arr_7 [i_3 + 1])))));
    }
    var_27 = ((/* implicit */short) (~(((/* implicit */int) var_6))));
}
