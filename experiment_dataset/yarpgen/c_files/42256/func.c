/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42256
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
    var_15 |= 567453553048682496LL;
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] = ((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-94)), (arr_10 [i_0 - 1] [i_1 - 1] [(unsigned char)13] [(unsigned char)13]))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_1 [i_2] [i_2])) : (var_4)))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */short) arr_7 [i_0] [7ULL]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) 567453553048682496LL);
    /* LoopNest 3 */
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        for (unsigned int i_6 = 1; i_6 < 19; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
            {
                {
                    arr_24 [i_5] [i_5] [i_7] [15U] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 2116920606)))) || (((/* implicit */_Bool) max((arr_10 [i_5 - 1] [i_5 - 1] [i_5] [i_5]), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_5] [i_5])) || (((/* implicit */_Bool) arr_19 [i_6]))))))))));
                    var_19 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) -567453553048682497LL)) ? (arr_6 [i_5] [i_5] [i_5] [i_7]) : (((/* implicit */int) var_1)))), ((-(arr_6 [i_5] [i_6] [i_5] [i_7]))))) * (((arr_4 [i_5 + 2]) ? (((/* implicit */int) arr_4 [i_5 + 2])) : (((/* implicit */int) arr_4 [i_5 + 2]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 2) 
    {
        arr_27 [i_8] = ((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_8])), (arr_8 [i_8] [i_8] [i_8])))) ? (((/* implicit */int) arr_2 [i_8])) : (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) var_1))))) == (arr_19 [i_8])))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)193)) * (((/* implicit */int) arr_10 [i_8] [i_8] [i_8] [i_8]))))) : (((((/* implicit */_Bool) -532045451)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)123))) : (2479522704U))))))))));
        /* LoopNest 2 */
        for (long long int i_9 = 1; i_9 < 10; i_9 += 4) 
        {
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_11 = 3; i_11 < 11; i_11 += 1) 
                    {
                        var_21 |= ((/* implicit */unsigned char) arr_6 [i_8] [i_8] [i_10] [i_8]);
                        var_22 = ((3655889352U) + (((/* implicit */unsigned int) -834221049)));
                    }
                    for (short i_12 = 1; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 1; i_13 < 10; i_13 += 3) 
                        {
                            var_23 |= ((/* implicit */int) ((max((arr_31 [i_12 + 1] [i_13]), (((/* implicit */long long int) arr_7 [(signed char)5] [(signed char)5])))) != (((((/* implicit */_Bool) arr_12 [i_8])) ? (arr_31 [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned short) ((((arr_37 [8U] [i_9] [i_9] [i_9] [i_13]) >= (((/* implicit */long long int) ((/* implicit */int) arr_30 [(_Bool)1] [i_9] [(_Bool)1]))))) ? (17719448659660276840ULL) : (((((/* implicit */_Bool) (short)24576)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) : (36028797018439680ULL))))));
                            arr_39 [i_12] [i_13] [i_12] [i_12] [i_9] [i_12] [i_12] = arr_6 [i_8] [i_9] [i_9] [i_12];
                            var_25 = -4124535064605464633LL;
                        }
                        arr_40 [i_12] [i_10] [i_10] [i_8] &= ((/* implicit */long long int) min(((unsigned char)123), (((/* implicit */unsigned char) (_Bool)0))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_25 [i_8] [i_9 + 1]))))) ? (((/* implicit */long long int) arr_28 [0])) : ((~(((((/* implicit */_Bool) 12677628341334117688ULL)) ? (-567453553048682496LL) : (-4124535064605464633LL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) var_7))));
                                var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */int) arr_30 [i_8] [(signed char)7] [3LL])) : (((/* implicit */int) (short)-1024))))) ? (((/* implicit */long long int) min((1815444574U), (2479522722U)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_8]))) ^ (var_3)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_16 = 4; i_16 < 18; i_16 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((int) arr_47 [i_16 + 2])))));
        arr_49 [(unsigned short)0] [i_16] &= ((/* implicit */int) ((((((/* implicit */int) (unsigned char)190)) == (1610612736))) || (((/* implicit */_Bool) ((4294443008U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [10U] [i_16]))))))));
        arr_50 [i_16] [i_16] = ((/* implicit */short) 396796712);
    }
}
