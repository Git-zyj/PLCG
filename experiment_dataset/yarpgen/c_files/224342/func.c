/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224342
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
    var_17 ^= ((/* implicit */unsigned long long int) (unsigned short)54650);
    var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((int) arr_4 [(unsigned short)21])) >= (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2])) : (((/* implicit */int) (signed char)-38)))))))));
                    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [9] [i_1] [(unsigned short)1]))))) ? (min((((/* implicit */unsigned long long int) var_8)), (arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_4 [i_0])) << (((((/* implicit */int) ((unsigned short) arr_0 [i_0] [i_0]))) - (14728))))))));
                }
                var_21 += ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])))), (max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)17986))))), (((((/* implicit */_Bool) 14015199396652002633ULL)) ? (((/* implicit */int) arr_4 [4LL])) : (((/* implicit */int) var_4))))))));
                /* LoopNest 3 */
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    for (signed char i_4 = 1; i_4 < 19; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 22; i_5 += 3) 
                        {
                            {
                                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) 14015199396652002643ULL))) != (((int) ((14015199396652002633ULL) / (((/* implicit */unsigned long long int) var_11)))))));
                                arr_14 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_13 [i_4 - 1] [i_4 + 3] [i_4 + 1] [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) arr_10 [i_4] [i_4 + 1] [i_3 - 1] [i_1]))))) ? (((/* implicit */int) max((arr_9 [i_3] [i_3 - 1] [i_4 - 1] [i_4 + 2] [i_4 + 3] [i_4]), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_4)))))))) : ((~(((/* implicit */int) ((signed char) 18307532659423180609ULL)))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_4))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_3])), (arr_13 [i_0] [i_0] [i_3] [i_0] [i_5])))) ? (((unsigned int) var_2)) : ((+(4174813119U)))))) : (((max((14015199396652002633ULL), (arr_13 [i_4] [i_4] [i_4] [i_4] [i_4]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 789102626218127978LL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)17723))))))))))));
                                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [13ULL] [13ULL] [i_1] [i_1] [i_5])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_8)) : (2027248355))) : (((((/* implicit */_Bool) arr_12 [i_5] [i_0] [i_3 - 1] [i_1] [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (unsigned short)35454))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) < (max((arr_13 [i_0] [i_0] [i_0] [i_0] [(unsigned char)19]), (((/* implicit */unsigned long long int) 2624004369142749956LL)))))))) : (((((/* implicit */_Bool) (unsigned short)30857)) ? (((/* implicit */unsigned long long int) max((2027248348), (arr_8 [10U] [i_1] [i_3])))) : (var_2))))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */unsigned short) max((arr_12 [(unsigned short)17] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */long long int) ((((var_11) + (2147483647))) >> ((((-(((/* implicit */int) arr_4 [i_0])))) + (16287))))))));
            }
        } 
    } 
}
