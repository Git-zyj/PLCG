/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200553
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
    var_15 = ((/* implicit */unsigned int) var_8);
    var_16 = ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) var_0)), (((unsigned long long int) var_13))))));
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (signed char)-43))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                {
                    var_18 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 - 3] [i_2 - 3] [i_2 - 3])) ? (((/* implicit */long long int) arr_4 [i_2 - 3] [i_2 + 1] [i_2 + 1])) : (arr_2 [i_2 - 1] [i_2 - 1] [i_2 + 1])))) ? (((((/* implicit */_Bool) 14063901023192872286ULL)) ? (arr_4 [i_2 - 2] [i_2 - 1] [i_2 - 3]) : (arr_4 [i_2 - 3] [i_2 - 1] [i_2 - 2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) <= (((/* implicit */int) var_14))))))));
                    var_19 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) / ((((!(var_11))) ? (arr_2 [i_1 + 2] [i_1 + 1] [i_2 - 2]) : (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))));
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_9) < (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)38)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned char)18)))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_2 + 1] [i_1 + 2])))))));
                    var_21 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 0U)), (((((/* implicit */_Bool) 14063901023192872263ULL)) ? (((((/* implicit */_Bool) (signed char)46)) ? (14063901023192872298ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))))) : (4047175050177797192ULL)))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_22 ^= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 70368744177663LL)) < (arr_6 [i_5]))))) < (((var_9) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_7] [i_6] [i_4]))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_3] [i_7 + 2] [i_3] [i_6] [i_7 + 3]))) < (arr_17 [i_3] [i_7 - 1] [i_5] [i_6] [i_7] [i_6] [i_7])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) arr_9 [(signed char)6] [i_5] [i_4])) : (((/* implicit */int) var_2))))))));
                                var_23 = ((/* implicit */unsigned short) min((((arr_17 [i_3] [i_4] [i_5] [i_6] [i_7 + 4] [(signed char)15] [i_4]) | (((/* implicit */long long int) ((/* implicit */int) arr_16 [(short)15] [i_6] [i_5] [(unsigned char)13] [i_7 - 1]))))), (((/* implicit */long long int) min((var_7), (var_14))))));
                            }
                        } 
                    } 
                    arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_5) ? (var_4) : (((/* implicit */unsigned long long int) 3101313821U)))), (max((arr_6 [i_4]), (arr_11 [i_5])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (var_1))))) : (((var_3) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 23; i_8 += 3) 
                    {
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            {
                                var_24 *= ((((((/* implicit */_Bool) (short)-12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))) : (1173374817U))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_20 [i_8 + 1] [i_8 + 1] [i_8 - 2] [i_8 + 1] [i_8 - 2] [i_8 - 2])))));
                                var_25 *= ((/* implicit */short) (-(3666738902U)));
                                var_26 *= ((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_5] [i_8 - 2]);
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_8 - 1] [i_5] [i_5])) ? (((/* implicit */int) arr_8 [i_8 - 2] [i_8 + 1] [i_8 - 2])) : (((/* implicit */int) var_8))))) + (arr_20 [i_3] [i_4] [(unsigned char)19] [i_8] [i_4] [i_8])));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
