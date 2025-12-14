/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217985
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)3)) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) <= (((var_1) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) (short)12288);
                                var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((18446744073709551597ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)12287)) ^ (((/* implicit */int) arr_11 [i_2 - 1] [i_2] [i_2] [i_2 - 3] [i_2]))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)3)), (max((arr_7 [i_2] [i_2 - 1]), (arr_7 [i_2] [i_2 - 3])))));
                    arr_14 [i_0] [(signed char)1] [3U] [i_2] = ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_2])) + (((((var_11) ? (18446744073709551596ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-3))))));
                    arr_15 [i_0] [i_2] [i_2 - 1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) + (((/* implicit */int) ((signed char) 6875914438028176551LL)))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32756))) : (arr_2 [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-109)))));
                                arr_22 [i_0] [i_2] [i_2 - 1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned char)253)), (var_13)));
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
                {
                    arr_26 [19LL] [i_1] [19LL] [19LL] = ((/* implicit */long long int) arr_12 [(_Bool)1] [i_1] [i_0] [i_0] [i_0]);
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 20; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) var_14))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)48)) >= (((/* implicit */int) (unsigned short)32045))))) >> (((/* implicit */int) arr_0 [i_0] [i_0]))));
                                var_27 = ((/* implicit */_Bool) ((signed char) var_9));
                            }
                        } 
                    } 
                    arr_31 [i_0] [(signed char)19] [i_7] [i_0] = ((/* implicit */unsigned long long int) min((arr_19 [i_0] [i_0] [i_0] [i_1] [0ULL] [(unsigned short)20]), (((/* implicit */unsigned int) arr_17 [i_0] [(signed char)10] [(short)8] [(signed char)10]))));
                    arr_32 [i_1] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)33491))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)29782))) * (arr_23 [i_7] [i_0] [i_0]))))) >> (((arr_19 [i_0] [i_0] [i_1] [(unsigned char)12] [(unsigned short)4] [i_7]) - (1146847648U)))));
                }
                /* vectorizable */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 3) /* same iter space */
                {
                    arr_35 [i_0] [i_10] = ((/* implicit */unsigned short) 18446744073709551584ULL);
                    arr_36 [i_0] [i_0] [i_10] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (arr_2 [i_10]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-23)) / (((/* implicit */int) (signed char)-3)))))));
                    arr_37 [i_0] [i_10] = ((/* implicit */unsigned short) ((unsigned char) arr_27 [i_10] [i_10] [i_1] [i_0]));
                }
                arr_38 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)450)) > (((/* implicit */int) arr_16 [0U] [i_1])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-68)), (arr_16 [16ULL] [i_1])))) : (((((/* implicit */_Bool) arr_16 [(unsigned char)4] [i_1])) ? (((/* implicit */int) arr_16 [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (signed char)-4))))));
            }
        } 
    } 
}
