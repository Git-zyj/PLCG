/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25400
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_17 = (-(min(((-(((/* implicit */int) arr_0 [i_1] [i_2])))), (((/* implicit */int) arr_3 [i_1] [i_1])))));
                    arr_8 [8] [i_2] [i_1] [(unsigned char)14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1079794765925132955LL))));
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_1 [i_1 - 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) 268435455U)) ? (1100023665146512238ULL) : (17346720408563039377ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_0 [i_0] [i_1])))), (((/* implicit */int) var_6)))))));
                                var_20 = ((/* implicit */int) var_1);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_20 [i_0] [i_1] [(unsigned char)9] [(unsigned char)9] [i_1] [(_Bool)1] [i_6]))));
                                var_22 = ((/* implicit */int) min((((/* implicit */unsigned int) (unsigned char)38)), (arr_17 [i_1 + 1] [i_1 - 1])));
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_1] [i_2] [i_5] [i_5]) == (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_2] [i_2] [i_1] [15ULL] [i_6])))) ? (((/* implicit */int) ((1304124264105696276LL) < (((/* implicit */long long int) ((/* implicit */int) arr_19 [19ULL] [i_0] [i_1] [i_2] [12U] [(unsigned char)18] [i_1])))))) : (((/* implicit */int) (unsigned char)218))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned char) var_12);
    var_25 *= ((/* implicit */int) var_16);
    /* LoopNest 2 */
    for (unsigned char i_7 = 0; i_7 < 13; i_7 += 1) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                arr_27 [i_7] [i_7] |= ((((/* implicit */_Bool) ((17346720408563039377ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251)))))) ? (min((arr_21 [i_7] [i_7] [i_7] [i_8] [i_8] [i_8]), (((/* implicit */unsigned long long int) (unsigned char)17)))) : (((((/* implicit */unsigned long long int) arr_17 [i_7] [i_7])) + (arr_7 [i_8] [(_Bool)1] [(_Bool)1] [i_7]))));
                var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_10)) ? (2835919533537723320ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_7] [9LL] [i_8]))))), (((/* implicit */unsigned long long int) max((arr_6 [i_7] [i_7] [i_8]), (arr_6 [i_7] [i_8] [i_8]))))));
                var_27 = ((/* implicit */unsigned long long int) min((arr_14 [i_7] [i_8]), (arr_14 [i_7] [i_8])));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((1100023665146512238ULL) != (((/* implicit */unsigned long long int) 2102294822)))))))) ^ (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_16 [i_7] [i_8] [i_7] [i_7]))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_7] [i_8]))) + (arr_21 [i_7] [(unsigned char)10] [i_7] [i_7] [i_7] [i_7])))))));
                var_29 = -844184799;
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            {
                var_30 -= ((/* implicit */unsigned char) arr_29 [i_9 + 1]);
                /* LoopNest 3 */
                for (unsigned long long int i_11 = 1; i_11 < 20; i_11 += 4) 
                {
                    for (int i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            {
                                arr_39 [i_9] [i_10] [i_11] [7LL] [7LL] = ((/* implicit */unsigned long long int) var_14);
                                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (unsigned char)0)), (1100023665146512238ULL)));
                                var_32 = ((/* implicit */unsigned long long int) (unsigned char)0);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 21; i_15 += 3) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) 3381573278U);
                            var_34 |= ((/* implicit */int) arr_41 [i_9] [i_9] [i_14] [i_15]);
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */int) ((((/* implicit */_Bool) 1100023665146512238ULL)) && (((/* implicit */_Bool) var_9)))))))), ((-(arr_38 [i_9] [i_9] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1]))))))));
                            var_36 = ((/* implicit */unsigned short) min((arr_32 [i_9]), (((/* implicit */unsigned long long int) (~(var_14))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
