/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35238
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
    var_11 = ((/* implicit */unsigned char) var_2);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) <= (6573436355585065248ULL)))), (((unsigned char) arr_8 [i_1 + 1] [i_1 + 3] [i_1 - 1] [i_1 - 1]))));
                    var_13 = ((/* implicit */int) arr_1 [i_0] [(signed char)21]);
                }
            } 
        } 
        var_14 = ((/* implicit */unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [7ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (6573436355585065250ULL))) >= (((/* implicit */unsigned long long int) var_2)))))));
    }
    var_15 = ((/* implicit */short) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) == (((((/* implicit */_Bool) 17513901522479210760ULL)) ? (15553164662174488630ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 1) 
    {
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1])) || ((((~(arr_18 [i_3]))) < (((/* implicit */long long int) var_5)))))))));
                        arr_23 [i_3] [i_4] [i_3] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_4 - 2] [i_4 + 2])) - (((((/* implicit */_Bool) 5559663700540035058ULL)) ? (((/* implicit */int) arr_12 [i_3] [i_4 - 1])) : (((/* implicit */int) arr_12 [i_3] [i_4 + 1]))))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (((((/* implicit */_Bool) arr_0 [i_4 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_4 + 1]))) : (11873307718124486366ULL))) : (min((((/* implicit */unsigned long long int) (short)17781)), (11873307718124486366ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned short) 6573436355585065248ULL);
                            var_19 = ((/* implicit */long long int) ((((((var_6) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_3] [i_4]))))) % (((/* implicit */unsigned long long int) arr_1 [i_3] [i_4 - 2])))) ^ (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (6573436355585065249ULL)))));
                            var_20 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_3] [i_3] [1ULL]))) & ((~(648005667201646562ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((17513901522479210764ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))))))) : (((unsigned long long int) min((((/* implicit */unsigned long long int) arr_3 [i_5] [i_3])), (7060615212243376018ULL)))));
                            var_21 = ((/* implicit */signed char) arr_22 [i_8] [i_4] [i_5] [i_7]);
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned short) min(((!(((/* implicit */_Bool) var_0)))), (((((/* implicit */_Bool) arr_2 [i_4 + 2])) && (((/* implicit */_Bool) var_6))))));
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_9))));
                            arr_31 [i_3] [i_3] [i_5] [i_7] [i_9] [i_5] [i_5] = ((/* implicit */unsigned short) ((unsigned int) (-(arr_30 [i_4 - 2] [i_4 + 1]))));
                            var_24 = ((/* implicit */short) arr_20 [(unsigned short)3] [i_9] [i_9] [i_9] [i_9]);
                        }
                        for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((var_5) & (arr_9 [i_4 - 1] [i_4 + 1])))) ? (((/* implicit */int) min((arr_19 [i_4 + 2] [3LL] [i_5] [i_7] [9ULL] [i_5]), (((/* implicit */short) arr_14 [i_4 - 1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) > (var_6)))))))));
                            arr_34 [i_3] [i_3] [i_3] [3ULL] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) ^ (min((((/* implicit */unsigned long long int) (unsigned char)225)), (8355207240823775442ULL)))));
                        }
                    }
                    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_3] [i_4] [4ULL] [i_3] [i_3] [i_5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_28 [(short)1] [i_4] [i_4] [i_4 - 2] [i_4 - 1] [(short)8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_4] [i_4 - 2] [i_5] [i_4 - 1] [i_5] [i_3]))) : (4294967294U)))) : (((((/* implicit */unsigned long long int) ((arr_5 [i_5]) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_4] [i_3])))))) + ((~(11873307718124486369ULL)))))));
                }
            } 
        } 
    } 
}
