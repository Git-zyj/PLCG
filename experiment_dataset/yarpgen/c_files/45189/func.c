/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45189
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) arr_1 [i_1 - 1] [i_1 + 2]));
                arr_6 [i_0] [i_0] = ((/* implicit */int) ((short) min((arr_3 [i_1 + 2] [i_1 + 2]), (arr_3 [i_1 - 2] [i_1 + 2]))));
                arr_7 [i_1 + 2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191))))) : (max((((/* implicit */int) var_10)), (1584378600)))))) : (((arr_1 [i_1 - 2] [i_1 + 2]) ^ (min((16901964411631718308ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) == (min((((((/* implicit */unsigned long long int) 2147483647)) ^ (16901964411631718308ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-25652))) == (var_2)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        for (short i_6 = 1; i_6 < 13; i_6 += 3) 
                        {
                            {
                                arr_21 [i_2] [3LL] [i_4] [i_6] [i_6 + 1] = var_10;
                                var_15 -= ((/* implicit */unsigned long long int) arr_16 [(_Bool)1] [(_Bool)1] [(signed char)8]);
                                arr_22 [i_6] [i_6] [(unsigned short)13] [i_6 - 1] = ((/* implicit */long long int) min((((/* implicit */int) var_10)), (((((((((/* implicit */int) (signed char)-114)) + (2147483647))) << (((2147483647) - (2147483647))))) & (((/* implicit */int) var_6))))));
                                arr_23 [(_Bool)1] [(unsigned char)12] [i_4] [i_5] [i_5] [i_4] [i_3] &= ((/* implicit */int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_12)), (arr_19 [i_6 - 1] [i_6] [i_6] [(_Bool)1] [i_6] [(_Bool)1] [(_Bool)1])))), (max((var_0), (((/* implicit */unsigned int) arr_19 [i_6 - 1] [i_6 - 1] [i_6] [i_6] [(unsigned char)12] [8LL] [i_6 - 1]))))));
                            }
                        } 
                    } 
                } 
                arr_24 [i_3] = ((/* implicit */unsigned long long int) ((unsigned int) (+(13081197680063558377ULL))));
                arr_25 [i_3] [i_2] = ((((/* implicit */_Bool) 1479142784)) && ((!(((/* implicit */_Bool) 2315041416U)))));
                var_16 = ((/* implicit */int) max((var_16), ((+(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_2] [9ULL])) || (((/* implicit */_Bool) (unsigned char)221)))))))));
                arr_26 [i_2] = (-((-(((/* implicit */int) arr_11 [i_3])))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        for (signed char i_8 = 2; i_8 < 16; i_8 += 3) 
        {
            for (unsigned long long int i_9 = 1; i_9 < 14; i_9 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (unsigned short)65519))));
                    var_18 = -1479142784;
                    arr_34 [(unsigned short)10] [12LL] &= ((/* implicit */int) ((((/* implicit */int) arr_33 [i_7])) <= ((-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)65))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        for (long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            {
                arr_41 [4] [(short)7] |= ((/* implicit */unsigned int) min((((((((/* implicit */_Bool) arr_33 [i_11])) || (((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_11])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_8 [i_11]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))), (((/* implicit */int) min(((short)-30157), (((/* implicit */short) arr_11 [i_10])))))));
                arr_42 [i_11] = ((unsigned int) min(((_Bool)1), ((_Bool)1)));
                var_19 *= ((/* implicit */unsigned char) (-(((long long int) min((((/* implicit */unsigned long long int) var_4)), (18446744073709551602ULL))))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) arr_39 [7LL] [i_11])) ? (((/* implicit */long long int) -1381308568)) : (6414722626123110697LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_6)))))))))));
            }
        } 
    } 
}
