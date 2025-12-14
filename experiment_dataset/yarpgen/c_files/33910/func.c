/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33910
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
    var_14 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_13))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] [21LL] = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (((/* implicit */int) arr_1 [i_0 + 1] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) (-(var_10)))) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_0] [i_0 - 3]))))), ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [(unsigned char)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 -= ((/* implicit */unsigned short) var_2);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (signed char i_4 = 3; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_1 [i_0] [i_0 + 3]))))));
                                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(var_12))), (((/* implicit */int) min((((/* implicit */short) var_8)), (var_6))))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (arr_3 [i_1])))) ? (((/* implicit */int) max((var_7), (((/* implicit */short) var_9))))) : (((((/* implicit */_Bool) arr_8 [i_0 + 3] [i_1] [i_2] [i_3] [(signed char)14] [i_1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_2] [i_2])))))) : (((/* implicit */int) var_0))));
                                var_18 ^= ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] = (~((+((-(arr_10 [i_1] [i_4 - 1] [(unsigned char)12]))))));
                                var_19 = ((/* implicit */unsigned long long int) (-(min((arr_3 [i_0 - 1]), (((/* implicit */long long int) var_0))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 4])) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_1] [11U] [i_5] [11U])) ? ((-(var_4))) : (((/* implicit */unsigned long long int) (+(var_1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_6] [i_1] [i_0] [i_5]))))) ? ((+(((/* implicit */int) arr_17 [i_1] [i_2] [i_1] [i_1] [i_6])))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_7)))))))));
                                arr_18 [i_0] [i_1] [i_2] [i_5] [i_6] = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_3 [i_0]) : (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (var_11))));
                                arr_19 [i_0] [(_Bool)0] [i_2] [i_5] [i_6] = ((/* implicit */unsigned long long int) var_6);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_10 [i_1] [i_1] [i_1])))) ? (((/* implicit */int) arr_17 [i_0] [24] [i_0] [i_2] [i_0])) : ((+(((/* implicit */int) var_7))))))), (arr_0 [i_0] [i_0])));
                    var_22 = ((/* implicit */int) arr_10 [i_0 + 3] [i_0] [i_0]);
                }
            } 
        } 
    }
    for (signed char i_7 = 0; i_7 < 23; i_7 += 4) 
    {
        arr_22 [i_7] = ((/* implicit */unsigned long long int) var_5);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_3 [4U])))) ? (max((arr_3 [(unsigned char)23]), (arr_7 [i_7] [i_7] [i_7] [i_7]))) : (((((/* implicit */_Bool) arr_6 [i_7] [i_7] [i_7] [i_7])) ? (arr_6 [i_7] [i_7] [i_7] [i_7]) : (arr_6 [i_7] [i_7] [i_7] [i_7])))));
        var_24 ^= ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_7] [i_7])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_7] [i_7] [i_7]))))) : (((unsigned int) var_3))))) / ((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7] [i_7] [16ULL]))) : (var_1)))))));
        var_25 = ((/* implicit */signed char) (-((-((-(arr_15 [i_7] [(short)17] [i_7] [i_7] [(signed char)17] [i_7] [i_7])))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_8 = 1; i_8 < 24; i_8 += 4) 
    {
        for (long long int i_9 = 0; i_9 < 25; i_9 += 3) 
        {
            for (signed char i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    var_26 = ((/* implicit */short) (-(min((arr_3 [i_8 + 1]), (arr_3 [i_8])))));
                    arr_30 [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_16 [i_8] [i_8] [i_8]))) ? (((((/* implicit */_Bool) arr_4 [i_8] [i_8] [i_10])) ? (((/* implicit */int) arr_12 [i_8] [i_9] [5] [11ULL])) : (var_12))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8 - 1] [i_9] [i_9] [i_10])))))))) ? ((+(((/* implicit */int) min((((/* implicit */short) var_9)), (var_7)))))) : (((((/* implicit */_Bool) arr_23 [i_8 - 1])) ? (((/* implicit */int) arr_25 [i_8 - 1])) : (((/* implicit */int) arr_23 [i_8 + 1]))))));
                    arr_31 [i_9] [i_8] [i_8] = ((/* implicit */short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_8] [i_9] [i_8]))))))), (((/* implicit */int) ((var_13) == (((/* implicit */unsigned int) var_12)))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-(((/* implicit */int) var_7)))) : (((/* implicit */int) var_3))))), (min(((-(var_5))), (((/* implicit */long long int) ((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
}
