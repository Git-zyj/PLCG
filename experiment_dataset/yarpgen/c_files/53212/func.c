/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53212
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
                {
                    var_10 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_7)) ? (12210986841576978512ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)121)))))));
                    var_11 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 12210986841576978512ULL)) ? (((/* implicit */int) ((6235757232132573103ULL) == (6235757232132573103ULL)))) : (((/* implicit */int) var_1)))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0] [(unsigned char)6])) <= (arr_3 [i_0 + 1] [i_0]))))));
                }
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */short) max((arr_13 [i_0] [3ULL] [i_3] [i_1] [(unsigned short)1]), (min((min((12210986841576978512ULL), (((/* implicit */unsigned long long int) (signed char)-32)))), (((/* implicit */unsigned long long int) ((long long int) var_4)))))));
                        arr_14 [i_0] [i_1] [i_1] [i_1] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_0] [i_0 - 1] [(short)6] [i_1 - 3] [i_0 - 1])))) * (max((((/* implicit */unsigned long long int) (unsigned short)4817)), (((var_6) / (var_5)))))));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */short) 5140183272313136621LL);
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)29995)), ((~(var_5)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)29170)) ? (arr_2 [i_5] [5ULL] [i_0]) : (arr_13 [i_0] [i_1 - 2] [i_3] [1ULL] [i_5])))))) : ((~(arr_13 [i_0] [i_1] [3ULL] [3ULL] [i_0])))));
                    }
                    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (6235757232132573103ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))))))));
                }
                for (signed char i_6 = 0; i_6 < 11; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 1) 
                    {
                        for (int i_8 = 1; i_8 < 8; i_8 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) ((signed char) ((var_8) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_15 [i_0] [i_6] [i_7 + 4] [i_7 + 4])))));
                                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2641707184640735491ULL))));
                                var_18 = ((/* implicit */int) ((unsigned long long int) arr_25 [i_0] [i_1] [i_0] [i_7] [4LL]));
                                arr_26 [i_0] [i_8 + 2] [(unsigned short)0] [i_0] [i_8] [i_0 - 1] [i_0 - 1] = (-(((/* implicit */int) ((((arr_2 [i_8 + 2] [i_7] [i_0]) * (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_0] [i_8])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 15805036889068816149ULL))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_0] [i_1] [i_0] [i_9]))))) / (var_0)));
                                var_20 = ((/* implicit */int) (~(14335783799016742658ULL)));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12210986841576978516ULL)) ? (15805036889068816149ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 6235757232132573103ULL)))))) : (((((/* implicit */unsigned long long int) var_0)) & ((-(var_6))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) max((arr_9 [i_0] [i_1 + 2] [i_1 + 1] [i_6]), (((/* implicit */int) arr_24 [i_6] [(short)2] [i_1] [9] [(unsigned char)7]))));
                }
                var_23 = (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-1)), (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_28 [i_0] [i_1 + 2] [i_0] [i_0])) : (((/* implicit */int) arr_19 [(unsigned short)6] [i_1] [i_1]))))) ? (arr_13 [i_0] [i_0 - 1] [i_1 + 2] [i_1] [i_1]) : (((unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || ((_Bool)1))))))));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_28 [i_1] [i_1 + 1] [i_0] [i_1])), (508349183474878226ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) arr_28 [i_1 - 1] [i_1 - 2] [i_0] [i_1])))))) : (((((/* implicit */_Bool) 7245484632587460256ULL)) ? (((/* implicit */unsigned long long int) -445449881)) : (var_9)))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_7);
}
