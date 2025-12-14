/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30270
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_2] [i_2] [19LL] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_1 + 4]), (arr_0 [(short)16] [i_1 + 1]))))) * ((-((-(4294967295U)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 19; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((unsigned char) (short)-32753))), (max((((/* implicit */long long int) arr_10 [i_2] [i_0])), (var_12))))))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_5 [i_1] [i_1 + 4] [i_4 + 1] [(unsigned char)1]))));
                                var_15 = ((/* implicit */short) (+(((((/* implicit */_Bool) min((arr_10 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)255))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_4 + 2]))))));
                                var_16 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_9 [i_0] [(unsigned short)17] [i_2] [i_3] [1U])), (((((/* implicit */_Bool) (short)32767)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((arr_6 [i_0] [i_1] [(_Bool)1] [i_0]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
                                var_17 = ((/* implicit */unsigned short) ((((((((-9223372036854775807LL) + (((/* implicit */long long int) arr_6 [i_0] [i_1] [i_1] [i_3])))) / (((arr_4 [9LL] [i_3] [i_3]) ? (9223372036854775807LL) : (arr_11 [(short)13] [11LL] [i_2] [i_2] [i_3] [i_4]))))) + (9223372036854775807LL))) >> (((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])), (var_1))))) ^ (((arr_3 [i_4]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4 + 2] [i_1]))))))) - (2295935813718582387LL)))));
                            }
                        } 
                    } 
                    arr_12 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) min(((+(((/* implicit */int) (signed char)112)))), (((/* implicit */int) min(((unsigned short)11), (var_5))))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (long long int i_5 = 1; i_5 < 17; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 18; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_18 [i_5] [i_6] [i_7]))) || (((/* implicit */_Bool) min((min((arr_19 [i_5] [i_6] [(short)2] [i_5]), (arr_19 [i_5] [i_6] [i_6] [i_7]))), (((/* implicit */long long int) arr_0 [i_6] [i_7])))))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) ^ (-8417498297267570111LL)))) ? (((/* implicit */int) arr_10 [i_5 - 1] [i_6])) : (((/* implicit */int) ((1108020017968453350LL) != (var_3))))))) ? (arr_19 [(short)16] [4] [i_6] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65517)))))));
                    /* LoopNest 2 */
                    for (signed char i_8 = 3; i_8 < 15; i_8 += 2) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (-4815158295262054127LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_9 [i_5 + 1] [i_5 + 1] [i_7] [i_5 + 1] [i_6])))))))));
                                var_21 |= ((/* implicit */int) min((min((min((9223372036854775807LL), (((/* implicit */long long int) arr_21 [i_5] [i_5 + 1] [i_5 + 1] [i_7] [i_8] [i_7])))), (((/* implicit */long long int) arr_8 [i_5] [i_6] [(short)9] [i_9 - 1] [i_8])))), (((/* implicit */long long int) arr_18 [i_5 + 1] [i_5] [i_5 - 1]))));
                                var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((arr_5 [i_5] [i_8 - 1] [i_8] [i_8 - 1]) / (288230376143323136LL)))) : (max((((/* implicit */unsigned long long int) 134217724LL)), (9135398433223700178ULL)))));
                                var_23 += ((/* implicit */unsigned int) var_3);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned int) (signed char)127);
    }
    for (unsigned short i_10 = 3; i_10 < 9; i_10 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 2; i_11 < 6; i_11 += 4) 
        {
            for (signed char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    var_25 |= ((/* implicit */unsigned int) ((unsigned long long int) min((4873745373944786513LL), (((/* implicit */long long int) var_4)))));
                    var_26 *= (!(arr_4 [i_12] [i_11] [i_11 - 1]));
                }
            } 
        } 
        arr_32 [i_10] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_10 - 2] [i_10 - 1]))))), ((signed char)-6)));
    }
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 16; i_13 += 2) 
    {
        var_27 -= ((/* implicit */long long int) (-(((((/* implicit */_Bool) (short)16376)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_35 [i_13] [i_13]))))));
        arr_37 [i_13] |= ((/* implicit */long long int) (unsigned char)255);
        /* LoopNest 3 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
        {
            for (unsigned short i_15 = 0; i_15 < 16; i_15 += 4) 
            {
                for (short i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    {
                        arr_48 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)-32422))));
                        arr_49 [i_16] [i_16] [(unsigned char)11] [2ULL] = ((/* implicit */signed char) arr_15 [i_14]);
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
    {
        var_28 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4873745373944786511LL)) ? (((/* implicit */int) (short)48)) : (2147483647)))) && ((!(((/* implicit */_Bool) arr_0 [i_17] [i_17]))))));
        var_29 = ((/* implicit */short) min((((arr_2 [i_17]) + (((/* implicit */long long int) arr_51 [9LL] [i_17])))), (((/* implicit */long long int) (unsigned short)9762))));
        var_30 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) < (579154550)))) % (((/* implicit */int) (unsigned char)2)))))));
    }
    var_31 = ((/* implicit */unsigned short) 1125898833100800LL);
    var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) (-(((min((-4873745373944786513LL), (((/* implicit */long long int) var_1)))) & (((/* implicit */long long int) var_8)))))))));
}
