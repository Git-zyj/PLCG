/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223868
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
    for (int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((var_6), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_4 [i_1] [i_2] [i_1] [i_4]))) ? (-4550891642112092592LL) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_9);
                                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_4 + 4] [i_4] [i_4 + 1] [i_2] [i_2] [i_2 + 1])) ? (min((((/* implicit */long long int) arr_10 [i_0] [i_1] [i_2] [i_1] [i_4])), (-4550891642112092592LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) && (((/* implicit */_Bool) arr_3 [i_0]))));
                                arr_14 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */short) var_5);
                                var_16 -= ((/* implicit */unsigned long long int) -4550891642112092606LL);
                            }
                        } 
                    } 
                } 
                var_17 = (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (arr_7 [i_0] [i_1] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (+(arr_3 [i_0]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_5 = 1; i_5 < 19; i_5 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [i_6] [i_5 + 3] [i_1] [i_0] &= ((/* implicit */unsigned char) (~(((long long int) arr_20 [i_0] [i_0] [i_0] [i_6] [i_7]))));
                                var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) var_12))));
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_20 [20ULL] [i_1] [i_7] [i_6] [i_7]) == (((/* implicit */long long int) arr_2 [i_1] [(short)15] [(unsigned char)12])))))) + (-3709498200833651720LL)));
                                var_20 = ((/* implicit */int) (+(arr_1 [i_1] [i_1])));
                            }
                        } 
                    } 
                    var_21 &= ((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0]);
                    arr_24 [i_0] [i_0] [i_5] = ((/* implicit */long long int) (~(arr_17 [i_0])));
                    /* LoopNest 2 */
                    for (short i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
                        {
                            {
                                arr_31 [i_0] [i_1] [i_5] [i_1] [i_9] [18ULL] [i_1] = ((/* implicit */signed char) ((unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]));
                                var_22 = ((/* implicit */unsigned int) var_0);
                            }
                        } 
                    } 
                }
                for (short i_10 = 1; i_10 < 19; i_10 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((18014398509481984ULL) / (((/* implicit */unsigned long long int) (+(((int) 3ULL)))))))));
                    var_24 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_26 [i_0] [i_1] [i_1])))))) & ((+((-(((/* implicit */int) (signed char)49))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */int) max((((/* implicit */long long int) arr_28 [(unsigned short)15] [i_1])), (max((((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_10] [i_0])) ? (((/* implicit */long long int) arr_2 [i_11] [i_10 + 2] [11])) : (var_12))), (((/* implicit */long long int) arr_21 [i_0] [i_10 + 1] [i_10 + 3] [i_0]))))));
                                arr_40 [i_10 + 3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_10 - 1])) ? (((/* implicit */unsigned long long int) arr_3 [i_10 + 3])) : (18014398509481977ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0] [i_11])))))) : (((((/* implicit */_Bool) 5ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)5423))) : (2242116125U)))));
                                var_26 = ((/* implicit */long long int) max((var_26), (((((/* implicit */_Bool) 3709498200833651723LL)) ? (((/* implicit */long long int) max((arr_21 [i_0] [i_0] [i_0] [i_12]), (((((/* implicit */_Bool) 1370112599)) ? (arr_32 [i_12] [i_11] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))) : (((long long int) max((-4550891642112092582LL), (((/* implicit */long long int) (short)-24399)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */_Bool) min((var_27), ((_Bool)0)));
                    var_28 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (+(arr_33 [i_0] [i_1] [i_10 + 1] [i_10])))) || (((430003713U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))) ^ (((/* implicit */int) ((signed char) (_Bool)1)))));
                }
                arr_41 [i_0] = ((/* implicit */signed char) 18014398509481990ULL);
                var_29 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)13753)) ? (((/* implicit */unsigned long long int) -2139167297258247143LL)) : (10ULL)));
            }
        } 
    } 
    var_30 = max((((signed char) max((((/* implicit */unsigned int) var_11)), (var_8)))), (var_5));
    var_31 = ((/* implicit */unsigned int) ((short) (+(((/* implicit */int) (signed char)55)))));
    var_32 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 1863578209133964367ULL)) || (((/* implicit */_Bool) (signed char)69))))) % (((/* implicit */int) var_5))))) && (((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))));
}
