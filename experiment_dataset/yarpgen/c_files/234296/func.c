/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234296
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) var_5)) ^ (arr_7 [i_1 + 1] [i_2] [i_2] [i_3] [i_3] [i_3]))) >> (((max((arr_7 [i_1 + 1] [i_1] [i_2] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) arr_6 [i_1 + 1] [i_1])))) - (6802003697519340228ULL)))));
                            var_18 = ((/* implicit */unsigned short) ((((unsigned long long int) ((((/* implicit */_Bool) 7429651828142775443LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (var_5)))) >> (((max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (unsigned char)161)))) - (3664190338U)))));
                            arr_9 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) + (arr_1 [(short)8])))) ? (((/* implicit */int) (short)-311)) : ((-(((/* implicit */int) var_8))))))));
                            arr_10 [i_1] [i_0] [i_2] [i_1] = ((/* implicit */signed char) (~(386056344)));
                            /* LoopSeq 2 */
                            for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
                            {
                                var_19 = ((/* implicit */unsigned short) ((max((arr_7 [i_0] [i_4 - 1] [i_0] [i_4] [i_4] [i_2]), (((/* implicit */unsigned long long int) (unsigned char)7)))) < (arr_7 [i_3] [i_4 + 1] [i_2] [i_3] [i_4] [i_2])));
                                var_20 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_4 + 1] [i_1 - 1])))));
                            }
                            for (unsigned long long int i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                            {
                                var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [i_1 - 1]))) / (((unsigned long long int) arr_15 [i_1 - 2] [i_1 + 1]))));
                                var_22 = ((/* implicit */int) max((max((((/* implicit */unsigned char) (_Bool)1)), (var_11))), (var_11)));
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */short) (~(((/* implicit */int) (signed char)-101))));
                var_24 = ((/* implicit */unsigned char) min((((var_10) ? (var_0) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))), (((/* implicit */int) (_Bool)1))));
                var_25 -= ((/* implicit */unsigned char) (~((((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_12 [8ULL] [i_1 - 1] [i_1] [(signed char)6] [i_1] [i_1 - 2])))) / (((/* implicit */int) min(((unsigned short)6), (arr_8 [i_1] [i_1] [(signed char)4] [i_1]))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (unsigned short i_7 = 2; i_7 < 20; i_7 += 4) 
        {
            {
                var_26 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_22 [i_7 + 2] [i_7 - 2] [i_7])) ? (((int) arr_23 [i_7 - 2] [i_7 - 2] [i_6])) : (((((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7 + 1] [(signed char)3])) ? (((/* implicit */int) arr_23 [i_7 - 2] [i_7 - 1] [i_6])) : (((/* implicit */int) arr_22 [i_7 + 2] [i_7 - 1] [i_7 - 1]))))));
                var_27 -= ((/* implicit */short) max((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)229))))));
                arr_24 [i_7] = ((/* implicit */unsigned int) ((signed char) arr_18 [i_7]));
            }
        } 
    } 
    var_28 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (((((/* implicit */_Bool) 1039019942U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-7429651828142775449LL))))))));
    var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_0))));
}
