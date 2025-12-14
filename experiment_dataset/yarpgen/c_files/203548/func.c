/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203548
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [(_Bool)1] [i_1 + 1] = ((/* implicit */short) 6850737231587274788ULL);
                arr_8 [(unsigned char)12] [(short)12] [i_1] &= ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */_Bool) 11622607908735173237ULL)) ? (arr_1 [i_1]) : (6824136164974378361ULL))), (arr_1 [i_0 + 1]))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 15; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_13 -= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-79)), (4294967295U)))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_3]))))) : (var_4))));
                            /* LoopSeq 2 */
                            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                            {
                                arr_15 [i_0] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (signed char)-60)))), (((/* implicit */int) arr_9 [i_2] [7] [i_2])))) * ((-(((/* implicit */int) arr_11 [i_0] [i_1 - 2]))))));
                                var_14 += ((/* implicit */unsigned char) (~(max((((/* implicit */unsigned long long int) (~(arr_3 [4ULL])))), (((((/* implicit */_Bool) var_10)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) var_8))))))));
                                arr_16 [i_3] [i_1] [i_1] [i_1 - 3] [i_1 + 1] [i_1 - 1] &= ((/* implicit */signed char) ((((arr_4 [i_2 - 2]) + (max((((/* implicit */unsigned long long int) var_4)), (arr_14 [(signed char)4] [(signed char)12] [(signed char)12] [i_0] [i_4 + 1]))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                            }
                            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                            {
                                arr_20 [i_0] [i_1 - 1] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_8);
                                var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((var_5) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) (unsigned short)64397)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 6824136164974378375ULL))))))))));
                                var_16 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) (signed char)126)))) / (((/* implicit */int) (signed char)-57))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_1 + 2]), (((/* implicit */unsigned short) (unsigned char)19)))))) : ((((-(var_4))) | (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-79)), ((unsigned short)31)))))))));
                                var_17 -= ((/* implicit */signed char) ((((/* implicit */_Bool) 11622607908735173237ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0]))))) < ((~(((/* implicit */int) arr_11 [i_0] [i_0])))))))) : (((arr_4 [i_0 - 2]) % ((~(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) (signed char)39)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) >> (((var_0) - (161246988))))))));
}
