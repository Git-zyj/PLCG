/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38328
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
    var_15 = ((signed char) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_16 = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) max((var_10), (((/* implicit */unsigned char) var_3))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
                    {
                        var_17 ^= ((unsigned long long int) arr_8 [i_3] [(_Bool)1] [10U] [10U] [(unsigned char)4] [i_0]);
                        arr_10 [i_3] [i_1] [5U] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((arr_1 [(signed char)2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_3] [i_1])))))))));
                    }
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) /* same iter space */
                    {
                        /* LoopSeq 4 */
                        for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) (((~(((/* implicit */int) min((var_10), (((/* implicit */unsigned char) arr_9 [i_1] [14] [i_1]))))))) ^ (((/* implicit */int) (unsigned char)0))));
                            arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_4] = ((signed char) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [(unsigned char)2] [i_0])) == (((/* implicit */int) (_Bool)1))));
                            var_19 ^= ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) arr_1 [i_0])))));
                            arr_18 [i_5] [i_1] [i_2 + 1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_1]);
                            var_20 ^= ((/* implicit */unsigned char) (-(max((arr_1 [i_0]), (arr_1 [i_0])))));
                        }
                        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 4) /* same iter space */
                        {
                            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (-(min((((var_0) & (((/* implicit */unsigned long long int) var_7)))), (min((((/* implicit */unsigned long long int) 2794629215U)), (1500257406914517600ULL))))))))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_6 [i_6 - 2] [i_0] [i_1] [i_0]))));
                        }
                        for (short i_7 = 3; i_7 < 19; i_7 += 3) /* same iter space */
                        {
                            arr_27 [i_0] [(signed char)17] [i_2] [i_1] = ((/* implicit */signed char) arr_20 [i_0]);
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) var_12))));
                        }
                        /* vectorizable */
                        for (short i_8 = 3; i_8 < 19; i_8 += 3) /* same iter space */
                        {
                            arr_31 [i_1] = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))));
                            arr_32 [i_8] [i_1] [i_2 - 2] [i_4] [i_8] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) arr_29 [10] [i_1] [i_2 - 1] [i_4] [i_2 - 1] [i_1])))));
                        }
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((_Bool) (-(((/* implicit */int) var_2))))) ? (((unsigned long long int) ((arr_11 [i_4]) >> (((arr_28 [i_0]) - (2842386718043390782ULL)))))) : (((/* implicit */unsigned long long int) ((max((arr_13 [i_0] [i_0] [7U] [i_0]), (((/* implicit */unsigned int) var_3)))) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)85)))))))))))));
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 20; i_10 += 4) 
                        {
                            var_25 |= ((/* implicit */unsigned char) (-(((/* implicit */int) ((arr_14 [i_2 + 1] [i_2] [i_2 - 1] [(_Bool)1] [(_Bool)1]) < (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                            var_26 *= (-(((/* implicit */int) var_14)));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) ((unsigned long long int) max((arr_12 [i_0] [i_2 + 1] [i_10] [i_10]), (arr_12 [8U] [i_2 + 3] [i_10] [i_10])))))));
                        }
                        for (unsigned int i_11 = 4; i_11 < 19; i_11 += 2) 
                        {
                            var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)20)))));
                            var_29 ^= ((/* implicit */_Bool) (((((~(((/* implicit */int) var_5)))) ^ (((/* implicit */int) ((9107659942497571771ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))))))) & (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_1] [(short)4] [(short)4])))) && (((/* implicit */_Bool) arr_21 [i_2 + 3] [i_2] [i_2 - 1] [i_2 + 3] [i_11 - 1])))))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) var_7);
                            var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_13) * (var_0)))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)187)) == (((/* implicit */int) (short)29472))))) : (((int) arr_33 [i_11] [i_2] [i_9] [i_2])))) / (var_11))))));
                            arr_42 [i_1] [i_1] [9U] = ((/* implicit */int) (-(arr_33 [i_1] [(_Bool)1] [i_2] [i_1])));
                        }
                        var_31 |= ((/* implicit */signed char) (~(((((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_1] [i_2 - 1] [(signed char)1] [i_9])) * (((/* implicit */int) ((unsigned char) arr_14 [i_0] [i_1] [2U] [i_9] [i_2 - 1])))))));
                        arr_43 [i_1] [i_2] [18U] [i_1] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (unsigned char)161)) ? ((-(15594818273585222837ULL))) : (((/* implicit */unsigned long long int) 2794629227U)))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)-8)), ((unsigned char)3))))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) arr_12 [i_1] [i_1] [i_2 + 2] [i_1]))));
                    }
                    for (unsigned long long int i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        var_33 = ((/* implicit */int) max((var_33), ((-((-(((/* implicit */int) var_9))))))));
                        arr_48 [i_1] = ((/* implicit */_Bool) arr_1 [13U]);
                        arr_49 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) (short)32584)), (-2147483643)));
                        arr_50 [(signed char)18] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned char)1] [i_0]);
                    }
                    var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_7 [(signed char)2] [i_0] [i_0] [(signed char)2] [(_Bool)1]))) ? ((+(arr_21 [i_2 + 3] [i_2 - 2] [i_2] [i_2 + 2] [i_2 + 2]))) : (((/* implicit */int) max((arr_36 [i_2 - 2] [(unsigned char)10] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]), (arr_9 [i_1] [i_2] [i_1]))))));
                }
            } 
        } 
    } 
}
