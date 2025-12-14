/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31055
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
    for (unsigned short i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_2 [0ULL]))));
                /* LoopSeq 3 */
                for (long long int i_2 = 4; i_2 < 10; i_2 += 2) 
                {
                    var_20 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_0] [i_2] [i_2])) ? (9LL) : (((/* implicit */long long int) ((/* implicit */int) (short)3699))))))) - (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) -986518430)) : ((+(var_12)))))));
                    arr_9 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (var_6)))) ? (arr_5 [i_0] [i_0] [i_1] [i_2]) : (arr_0 [i_0])));
                }
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    var_21 = arr_3 [i_0 + 2] [i_3 - 1];
                    arr_13 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)121)) ? (16924479015202983318ULL) : (((/* implicit */unsigned long long int) 8940448895231119694LL))));
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)12288)) ? (3730567807034669116LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)227)))));
                }
                /* vectorizable */
                for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) 
                {
                    var_23 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((3730567807034669116LL) >> (((arr_8 [i_0] [8ULL] [i_1 + 1] [i_4]) + (7011750385937425748LL)))))) ? (((/* implicit */int) arr_16 [8LL] [i_0 - 2] [i_1 - 2] [i_4 + 3])) : (((/* implicit */int) ((unsigned short) var_14)))));
                    arr_17 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_3 [i_4] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_2))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) 
                        {
                            {
                                var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_22 [i_5 + 2])) ? (((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_21 [i_4 + 1] [i_4 + 1] [i_4 + 3] [i_4 - 1] [i_4 + 2] [i_4 + 3]))));
                                arr_23 [i_0] [i_0] [i_4 + 3] [i_4 + 3] [i_0] = ((/* implicit */long long int) var_17);
                            }
                        } 
                    } 
                }
                var_25 |= ((/* implicit */signed char) ((_Bool) (signed char)-108));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (long long int i_8 = 2; i_8 < 10; i_8 += 4) 
                    {
                        {
                            arr_28 [i_7] [i_0] [i_1 - 1] [i_0] [(signed char)0] [i_0 + 3] = ((/* implicit */signed char) ((0ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)108)))));
                            var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((70368744046592LL), (((/* implicit */long long int) (unsigned char)31))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 1048575)), (2768493514U)))) : (var_11)));
                            arr_29 [9] [9] [i_7] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_1] [i_7] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))) + (((arr_11 [i_1] [i_0]) >> (((((/* implicit */int) arr_6 [i_0] [i_0] [9])) - (47322)))))))));
                            arr_30 [(_Bool)1] [i_1 + 1] [i_1] [i_8] [i_0] [i_1] = ((/* implicit */int) arr_11 [i_0] [i_0]);
                            arr_31 [i_0] = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 1]);
                        }
                    } 
                } 
                var_27 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_24 [8U] [i_1 - 2]))))) || (((/* implicit */_Bool) arr_7 [i_0] [i_1 + 1]))));
            }
        } 
    } 
    var_28 = ((/* implicit */int) ((((_Bool) 6455649540101048557ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) (short)-3700))))) : (((((long long int) (-2147483647 - 1))) & (9223372036854775807LL)))));
}
