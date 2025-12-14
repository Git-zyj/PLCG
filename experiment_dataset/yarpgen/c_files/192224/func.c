/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192224
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
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((var_9) > (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_3))))))) / (var_3)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (long long int i_3 = 1; i_3 < 19; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned char) ((unsigned int) (+(5771232007983154324LL))));
                            var_16 ^= ((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) != (var_0)));
                            var_17 = ((/* implicit */signed char) arr_7 [5ULL] [i_1]);
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_1] [(unsigned short)3] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) - (((/* implicit */int) (signed char)-23))));
                        }
                        arr_16 [(unsigned char)13] [8] [(unsigned char)13] [(unsigned char)4] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) < (arr_13 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) max((4294967294U), (21U)))) ? (arr_15 [i_1] [i_1] [i_1] [i_3 + 1] [i_3 - 1] [(short)7]) : (((/* implicit */long long int) (-(var_5))))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [8LL] [i_0])), (arr_14 [18LL] [18LL] [i_0 + 1] [18LL] [(unsigned short)2])))) ? (min((((/* implicit */long long int) arr_6 [(_Bool)1])), (var_4))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -5771232007983154325LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)30))) : (4294967264U))))))) + (min((((((/* implicit */_Bool) arr_8 [i_0] [10ULL] [(short)10] [i_0])) ? (arr_0 [9LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) (-2147483647 - 1)))))));
    }
    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) 
    {
        arr_21 [i_5] = ((((/* implicit */_Bool) (unsigned char)225)) ? (min((((((/* implicit */long long int) 2147483647)) / (5771232007983154324LL))), (((/* implicit */long long int) 4294967271U)))) : (((/* implicit */long long int) (~(((/* implicit */int) min((((/* implicit */short) arr_3 [i_5])), (var_12))))))));
        var_20 = ((/* implicit */unsigned char) arr_3 [i_5]);
    }
    /* LoopSeq 3 */
    for (short i_6 = 1; i_6 < 9; i_6 += 4) 
    {
        var_21 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)-48)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))))) >= (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_6] [i_6])))))), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_6 + 1] [i_6]))))), (arr_8 [i_6] [i_6] [i_6] [i_6 + 2]))));
        arr_25 [(signed char)3] [i_6] = ((/* implicit */unsigned char) (short)-23053);
        /* LoopNest 2 */
        for (unsigned char i_7 = 2; i_7 < 7; i_7 += 4) 
        {
            for (unsigned int i_8 = 2; i_8 < 9; i_8 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) var_5)), (18446744073709551609ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_6 - 1] [i_6 + 2]) > (((/* implicit */long long int) ((/* implicit */int) var_12))))))))))));
                    arr_31 [(unsigned short)6] [i_6] = ((/* implicit */int) min((-216980754265843792LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((((/* implicit */_Bool) (unsigned char)219)) && (((/* implicit */_Bool) arr_2 [i_8] [i_7])))))))));
                    var_23 ^= ((/* implicit */unsigned long long int) min(((unsigned char)252), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) && (((/* implicit */_Bool) arr_28 [i_8])))))));
                    arr_32 [i_6] [i_7] [i_7] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_7 + 3] [i_6 + 2] [i_8] [i_8 + 2])) ? (((/* implicit */int) var_8)) : (-1776926345)))) ? (((/* implicit */unsigned long long int) min((var_10), (5939913202153482224LL)))) : (((unsigned long long int) arr_7 [i_7 + 3] [i_6 + 2]))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) ((1ULL) + (1ULL)));
    }
    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 2) 
    {
        /* LoopSeq 2 */
        for (signed char i_10 = 0; i_10 < 19; i_10 += 2) /* same iter space */
        {
            var_25 ^= ((/* implicit */unsigned long long int) var_1);
            var_26 += ((/* implicit */long long int) var_2);
            var_27 = ((/* implicit */unsigned char) max((var_27), (var_2)));
        }
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
        {
            var_28 &= var_10;
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (int i_13 = 3; i_13 < 18; i_13 += 4) 
                {
                    {
                        arr_43 [i_13] [i_11] [i_12] [i_13 + 1] = ((/* implicit */unsigned char) var_10);
                        var_29 = (~(((/* implicit */int) (_Bool)1)));
                        var_30 = ((/* implicit */unsigned int) (-(2147483647)));
                    }
                } 
            } 
        }
        var_31 -= ((/* implicit */unsigned char) (~(8ULL)));
        arr_44 [18ULL] [i_9] = ((/* implicit */unsigned long long int) 54U);
        arr_45 [i_9] = ((((((18446744073709551608ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) && (((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned char) var_11))))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_9 [i_9] [i_9] [(unsigned short)12] [i_9] [i_9] [i_9])), (var_2)))) ? (min((var_3), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) arr_2 [i_9] [i_9])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
    }
    for (int i_14 = 0; i_14 < 13; i_14 += 1) 
    {
        arr_48 [i_14] = ((/* implicit */unsigned char) var_10);
        arr_49 [i_14] [2U] &= ((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)13)))) > ((~(((/* implicit */int) var_8))))));
        var_32 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((13ULL) != (((/* implicit */unsigned long long int) min((arr_41 [(signed char)3] [(signed char)3] [i_14] [(signed char)3] [(signed char)3] [i_14]), (((/* implicit */long long int) (signed char)1)))))))), (-32LL)));
    }
    var_33 = ((/* implicit */int) ((var_10) | (((/* implicit */long long int) 4294967274U))));
}
