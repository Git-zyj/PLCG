/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210534
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
    var_16 |= min((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_13))) : (((/* implicit */unsigned long long int) max((-1236849338), (((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) max(((unsigned char)241), ((unsigned char)241)))) : ((+(((/* implicit */int) var_7))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */long long int) arr_7 [i_0] [i_1]);
                    arr_9 [4ULL] [4ULL] [i_0] [8] = min(((-(arr_1 [i_0] [i_0]))), (((unsigned long long int) ((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) : (var_10)))));
                    var_18 = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1])), (max((((/* implicit */unsigned long long int) var_6)), (arr_1 [i_0] [i_0 - 1]))))) >> (((((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((unsigned long long int) var_12)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)41), (((/* implicit */unsigned char) (_Bool)1)))))))) - (1990821804ULL)))));
                    var_19 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((15), (var_1)))), (var_2)))), (((arr_6 [i_1] [i_2]) ? (((/* implicit */unsigned long long int) max((-5068546150041724002LL), (((/* implicit */long long int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) (unsigned char)203)), (1349337283401657054ULL)))))));
                }
            } 
        } 
        var_20 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_1 [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned long long int) (unsigned char)241)))))));
    }
    /* vectorizable */
    for (long long int i_3 = 2; i_3 < 7; i_3 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) var_14);
                                var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [7ULL])) ? (((/* implicit */unsigned long long int) arr_5 [i_3])) : (arr_20 [4LL] [i_4] [i_5] [i_6] [i_3])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 72057594037927424LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))))));
                                var_23 -= (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)52)) <= (((/* implicit */int) var_14))))));
                                var_24 = ((/* implicit */long long int) ((1125899906842616ULL) + (((/* implicit */unsigned long long int) 717622750))));
                            }
                        } 
                    } 
                    arr_24 [i_3] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) 8138723805593002040LL);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) 
                    {
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 3) 
                        {
                            {
                                arr_30 [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_9] [i_5] [i_4] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_3 + 3] [i_3 + 1]))));
                                arr_31 [i_9] [(_Bool)1] [i_5] [i_3] [i_5] [i_3] [i_3] = ((/* implicit */unsigned long long int) 0LL);
                                arr_32 [i_9] [i_5] [i_9] [i_9] [i_9] = ((/* implicit */_Bool) arr_23 [i_3] [i_3] [i_3] [2ULL] [i_3 - 1] [i_3 - 1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_3] |= arr_1 [i_3] [i_3 + 2];
        var_25 = ((/* implicit */unsigned long long int) max((var_25), ((~(arr_27 [i_3 + 3] [i_3] [i_3 + 2] [(_Bool)0] [i_3] [i_3])))));
    }
    for (long long int i_10 = 2; i_10 < 7; i_10 += 4) /* same iter space */
    {
        var_26 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */_Bool) 714864782199154LL)) && (var_8)))) : (((/* implicit */int) var_6))))), (max((((/* implicit */unsigned long long int) var_15)), (0ULL))));
        var_27 &= ((/* implicit */long long int) (unsigned char)138);
        var_28 ^= ((/* implicit */unsigned char) ((((arr_27 [i_10 - 1] [0] [i_10] [i_10] [i_10] [i_10]) << (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_10 - 1] [i_10]))) : (var_0))))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_14)), (arr_8 [(_Bool)1] [(unsigned char)4])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), (var_7)))) : (((/* implicit */int) min(((unsigned char)127), ((unsigned char)81)))))))));
    }
}
