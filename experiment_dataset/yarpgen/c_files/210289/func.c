/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210289
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((int) ((arr_0 [i_0]) ^ (((/* implicit */long long int) 1230402851)))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_10)) / (arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = min((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_1] [i_1]))))) ? ((-(arr_4 [i_1] [i_1]))) : ((-(((/* implicit */int) (_Bool)0)))))), (((min((arr_4 [i_1] [i_1]), (((/* implicit */int) (_Bool)1)))) << (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (4090529758U))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_4 [3ULL] [i_1])) ? (var_8) : (arr_1 [i_1]))), (min((-878495096), (((/* implicit */int) (signed char)112))))))), ((~(4090529787U)))));
        var_11 += ((/* implicit */unsigned short) arr_4 [i_1] [(short)11]);
    }
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                arr_13 [i_2] [i_2] = ((/* implicit */unsigned short) ((arr_0 [(unsigned short)17]) - (((/* implicit */long long int) (-(((/* implicit */int) arr_10 [i_2] [i_2])))))));
                arr_14 [i_2] = ((/* implicit */unsigned long long int) ((4090529758U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 22; i_4 += 3) 
    {
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 3) 
        {
            {
                arr_21 [i_5] [i_4] [(_Bool)1] = ((/* implicit */unsigned int) arr_17 [(unsigned short)14] [i_5] [19LL]);
                var_12 -= ((/* implicit */long long int) (((((!(((/* implicit */_Bool) 878495113)))) ? (((var_9) ? (arr_18 [i_4]) : (((/* implicit */unsigned long long int) 3295480202U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -878495096)) || (((/* implicit */_Bool) (unsigned char)139)))))))) >= (((arr_19 [18] [i_5]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_16 [i_4])))))))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_26 [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 14ULL)) ? (((/* implicit */unsigned long long int) 204437537U)) : (9711617668466680707ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_6] [10U] [i_4])) ? (((/* implicit */int) (short)24826)) : (((/* implicit */int) arr_15 [i_4])))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-4722155389311401138LL));
                            var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((int) max((arr_18 [i_4]), (arr_18 [i_4])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
                    {
                        for (long long int i_10 = 0; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_36 [i_4] [i_5] [i_8] [i_8] [(unsigned char)5] [i_10] = ((((/* implicit */_Bool) arr_24 [i_9] [(short)21] [17ULL] [i_4])) || (var_9));
                                var_14 = ((/* implicit */int) (-(max((((/* implicit */unsigned long long int) arr_31 [16] [i_8] [i_9] [i_10])), ((+(1626225558583700838ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
