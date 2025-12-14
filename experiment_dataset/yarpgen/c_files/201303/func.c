/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201303
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
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 16; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */short) var_0);
                        arr_11 [i_0] = (-(((((/* implicit */int) (unsigned char)120)) - (((/* implicit */int) var_7)))));
                    }
                    for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */int) arr_13 [i_0] [i_1 + 1] [i_0] [i_4]);
                        arr_14 [i_0 - 2] [i_1 - 1] [i_0] [i_4] [16] [i_1] = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_0] [i_1])) ^ (((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) var_17)) : (var_4))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                        {
                            var_22 = ((/* implicit */signed char) arr_10 [i_0 - 2] [i_1] [i_2] [i_4]);
                            var_23 = ((/* implicit */int) var_2);
                            var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) max(((~((-(((/* implicit */int) arr_15 [i_5] [i_4] [i_2] [i_1] [i_0 - 2])))))), (((/* implicit */int) (signed char)-118)))))));
                            var_25 = ((/* implicit */short) (~(max((((/* implicit */int) arr_10 [i_1 - 3] [i_0 - 1] [i_0 - 2] [i_0 + 1])), (var_10)))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */_Bool) (+(4194303)));
                            var_27 = ((/* implicit */short) max((((/* implicit */int) (signed char)-16)), (423461875)));
                        }
                    }
                    arr_20 [i_0] = ((/* implicit */signed char) min(((unsigned short)0), (((/* implicit */unsigned short) max((((-4194317) >= (((/* implicit */int) var_19)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) >= (0ULL))))))));
                }
            } 
        } 
    } 
    var_28 = var_6;
    /* LoopSeq 1 */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_23 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((arr_21 [i_7]), (((/* implicit */unsigned int) -37882947)))) % (((/* implicit */unsigned int) arr_2 [i_7]))))) ? (min((((unsigned long long int) var_10)), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15)))))));
        var_29 = ((/* implicit */unsigned char) (-(567039062)));
        arr_24 [i_7] = ((/* implicit */unsigned char) (-(((((((/* implicit */int) (signed char)15)) >= (284865224))) ? (((/* implicit */int) ((signed char) var_11))) : (((((/* implicit */int) var_16)) / (((/* implicit */int) (_Bool)1))))))));
        arr_25 [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)135)) ? (max((((arr_21 [i_7]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_7] [i_7] [i_7]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_7] [i_7] [i_7] [i_7])) >= (arr_4 [i_7] [i_7])))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-87)) >= (((/* implicit */int) arr_1 [i_7] [i_7]))))) >= (((/* implicit */int) arr_9 [i_7] [i_7] [i_7] [i_7]))))))));
        arr_26 [i_7] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_7] [i_7])) ? (max((var_1), (arr_4 [i_7] [i_7]))) : (((((/* implicit */_Bool) var_8)) ? (arr_12 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */int) var_3)))))) + (((min(((-2147483647 - 1)), (-1923671031))) + (((/* implicit */int) (unsigned short)65535))))));
    }
}
