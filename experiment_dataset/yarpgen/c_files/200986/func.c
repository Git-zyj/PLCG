/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200986
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (signed char i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 - 4])) & (-4719748627352574882LL)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 4] [i_1 - 1]))) : (arr_3 [i_1 - 4] [i_1]))) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 3])) ? (arr_3 [i_1 - 4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 4])))))));
                                arr_12 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)1])) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)240)) / (2134587249)))) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) arr_3 [i_3 - 1] [i_1])) : (arr_8 [(unsigned short)10] [i_1] [(unsigned short)10] [i_3] [i_4]))) : (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))) : (arr_8 [i_0] [i_1] [i_0] [i_3] [i_4]))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_0]))))))))));
                                var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1 - 1] [i_1 - 2]))) ? (((/* implicit */long long int) (+(arr_0 [i_1 - 1] [i_1 - 2])))) : (((long long int) 5422491910847606906ULL))));
                                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) 2251799813652480LL))));
                                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32758)) ? (((/* implicit */int) (short)32757)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_10 [i_1 + 2] [i_1] [i_1 + 2] [i_3 - 1] [i_4] [i_3 - 1] [i_0])) : (((((/* implicit */int) arr_7 [i_0])) * (((/* implicit */int) arr_10 [i_0] [i_0] [i_1] [i_1 - 4] [i_2] [i_3] [i_4])))))) >= (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */int) 5422491910847606906ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 11; i_5 += 4) 
                    {
                        for (signed char i_6 = 0; i_6 < 12; i_6 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) max(((~(((11143118909926165417ULL) << (((arr_1 [i_0]) - (8156180893038316499LL))))))), (((/* implicit */unsigned long long int) ((_Bool) ((signed char) arr_2 [i_0]))))));
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2] [i_5] [i_5] [i_5] [i_6])) || (((/* implicit */_Bool) min((((/* implicit */long long int) arr_3 [i_1] [i_1])), (arr_15 [i_0] [6U] [i_5])))))))) % (arr_0 [i_0] [i_1])));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_0] [i_5 + 1] [i_1 - 1])) % (((/* implicit */int) arr_16 [10LL] [10LL] [i_1 - 2] [i_1] [i_1])))) != (((/* implicit */int) (short)-32749)))))));
                                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_5 - 1]))));
                                var_19 = ((/* implicit */_Bool) (~(((arr_1 [i_0]) + (-6062321516505251993LL)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            {
                                arr_21 [i_8] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1] [i_1] [i_1 - 2] [i_1 + 2]))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_17 [i_0] [i_0]))))));
                                var_20 = 14154289607045457415ULL;
                                arr_22 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (((((_Bool)1) && (arr_9 [i_1] [i_7] [i_2] [i_1]))) ? (arr_11 [i_8] [i_7] [i_2] [i_2] [i_1 - 4] [i_0]) : (arr_14 [i_8] [(unsigned char)10] [(unsigned char)10] [i_0] [i_0])))) || (((/* implicit */_Bool) min((-1296194974), (((/* implicit */int) arr_9 [i_8] [i_7] [(signed char)4] [i_1])))))));
                                arr_23 [i_1] [i_1 + 1] = ((/* implicit */long long int) ((((arr_13 [0LL] [i_2] [i_1] [i_1] [i_1] [i_1]) + (((/* implicit */unsigned long long int) arr_2 [i_0])))) % (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) / (-9223372036854775804LL))))))))));
                                var_21 = (short)32758;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)230))))));
    var_23 = ((/* implicit */unsigned long long int) var_2);
}
