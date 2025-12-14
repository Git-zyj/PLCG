/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190376
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
    var_14 = ((/* implicit */int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_4)) : (max((((/* implicit */unsigned int) var_7)), (4178706714U))))))));
    var_15 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) ((18446744073709551605ULL) * (((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */int) (_Bool)0)) : (var_4))))))) ? (var_0) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0]))))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] [(signed char)5] = ((/* implicit */long long int) 134217664ULL);
                        arr_12 [i_0] [i_2] [i_1] [i_3] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) ((3241507632416538591LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))), (((((/* implicit */_Bool) 18446744073575333951ULL)) ? (arr_10 [i_0] [15LL] [i_1] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_3])))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned int) arr_6 [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_0] [i_4] [i_5 - 2] [i_5 - 2] [i_5 - 1])) ? (((unsigned int) arr_2 [i_0])) : (((/* implicit */unsigned int) -1)))))));
                            var_19 = ((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5 + 1] [i_5] [i_5 + 1])) || (((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_5 - 2] [i_5 + 1] [i_5])));
                            arr_18 [i_1] [i_1] [i_1] [i_4] [i_5] = ((/* implicit */unsigned char) ((unsigned long long int) arr_7 [i_5 + 2] [i_5] [i_5] [i_5 - 2]));
                        }
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0])) ? (arr_4 [i_0] [i_2] [i_7]) : (arr_4 [i_6] [(unsigned short)7] [i_0]))))));
                            arr_24 [i_0] [i_0] [(signed char)4] [i_0] [(signed char)11] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_7] [i_1] [i_2] [i_6])) : (((/* implicit */int) var_9))));
                        }
                        var_21 |= ((((/* implicit */_Bool) 330771463U)) ? (((/* implicit */unsigned long long int) 3241507632416538591LL)) : (11671051772637920083ULL));
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) (unsigned char)251)))));
                        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_2] [(signed char)0])) : (var_3)));
                    }
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) /* same iter space */
                    {
                        var_24 |= var_2;
                        arr_27 [i_1] = ((/* implicit */signed char) arr_0 [4ULL] [i_2]);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) var_7))));
                            arr_31 [(unsigned short)3] [i_1] [i_1] [i_2] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) var_9))));
                            var_26 *= ((/* implicit */short) arr_8 [i_0]);
                        }
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 3) /* same iter space */
                    {
                        arr_34 [i_1] [i_1] [i_0] [i_10] = ((/* implicit */_Bool) ((((unsigned long long int) var_5)) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) arr_28 [i_0] [i_1] [i_2] [i_1])) : (3241507632416538569LL)))) ? (((/* implicit */int) arr_32 [i_10] [i_1] [i_2] [i_10])) : (((/* implicit */int) var_2)))))));
                        arr_35 [i_1] = ((/* implicit */int) -2723795720391448053LL);
                        var_27 -= ((/* implicit */_Bool) (signed char)119);
                    }
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_11] = ((/* implicit */_Bool) var_3);
                        arr_40 [i_1] = ((/* implicit */short) (~((-(arr_28 [i_0] [i_1] [i_2] [i_1])))));
                    }
                }
            } 
        } 
    } 
    var_28 |= ((/* implicit */unsigned short) ((short) ((unsigned int) (unsigned char)242)));
}
