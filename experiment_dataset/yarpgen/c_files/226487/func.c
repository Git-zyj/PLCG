/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226487
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
    var_13 = ((/* implicit */unsigned long long int) (signed char)-93);
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) min((2305843009213693952ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)31893), (((/* implicit */unsigned short) (signed char)91)))))) ^ (var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 1; i_2 < 19; i_2 += 2) 
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)31461)) ? (1967358332U) : (0U)));
                    var_15 *= ((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) max((var_4), (((/* implicit */long long int) (unsigned short)31893))))))), (((((arr_0 [i_0] [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)61))))) || ((!(((/* implicit */_Bool) 593099156U))))))));
                    var_16 = ((/* implicit */unsigned char) max((max((var_6), (arr_2 [i_2 - 1] [i_2 + 1]))), (((/* implicit */unsigned long long int) (unsigned short)31899))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (short i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = min((((/* implicit */unsigned int) (unsigned char)135)), (3701868115U));
                                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((4443988218125299440ULL), (arr_5 [i_2] [i_4 + 1] [i_2])))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)92))))) : (arr_14 [i_4] [i_2] [i_2] [i_2 + 2])));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */unsigned char) (-(608447771U)));
                                var_19 = ((/* implicit */unsigned char) var_4);
                            }
                        } 
                    } 
                }
                arr_16 [i_1] [i_1] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) (signed char)99))))));
                var_20 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) var_11)))), (((((/* implicit */_Bool) 4239373581635667744ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31893))) : (arr_13 [i_1] [i_0] [i_1]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (((~(max((17627201994342643128ULL), (((/* implicit */unsigned long long int) var_1)))))) << (((((((/* implicit */_Bool) (~(753953801U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)133)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)92))) : (var_5)))) : (var_12))) - (74ULL)))));
}
