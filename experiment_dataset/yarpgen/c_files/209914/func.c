/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209914
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
    var_17 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (var_7))), (((/* implicit */unsigned int) var_10))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)45))))), (8ULL)));
        var_19 = ((/* implicit */_Bool) (-(max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (signed char i_1 = 1; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                {
                    arr_14 [i_2] [i_1] [i_1] [(unsigned char)17] = ((/* implicit */unsigned long long int) min((((long long int) (signed char)28)), (((/* implicit */long long int) (-(arr_7 [i_3]))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) -9223372036854775787LL))));
                                arr_20 [i_1] [i_1] [i_1] [i_4] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (arr_3 [i_1 - 1]) : (arr_3 [i_1 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5])) ? (arr_9 [i_1]) : (((/* implicit */int) arr_2 [i_1]))))) ? (((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [i_1]))) : (arr_1 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_1 - 1])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_13 [(_Bool)1] [i_3] [i_5]), (((/* implicit */unsigned int) arr_19 [i_1 - 1] [i_1 + 1] [i_2] [i_1 - 1] [i_1 - 1] [i_5])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_21 += ((/* implicit */long long int) (+((-((~(((/* implicit */int) arr_0 [i_1] [i_1]))))))));
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((unsigned short) max((arr_6 [(short)0] [(short)0]), (min((arr_6 [i_1] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_19 [i_1] [i_1] [i_1] [(short)2] [i_1] [(short)2]))))))))));
    }
    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        arr_23 [i_6] [i_6] = ((/* implicit */long long int) (~(max((((((/* implicit */_Bool) arr_7 [i_6])) ? (arr_3 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_6]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_6])))))))));
        arr_24 [i_6] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(arr_10 [i_6] [i_6])))) ? (max((((/* implicit */int) arr_16 [i_6] [i_6] [i_6] [i_6] [i_6])), (arr_7 [i_6]))) : (((/* implicit */int) max((arr_16 [i_6] [i_6] [4U] [i_6] [i_6]), (((/* implicit */signed char) arr_18 [i_6])))))))));
    }
    var_23 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((int) (signed char)31))), ((~(-3481641117019349831LL)))));
    var_24 = (~((+((+(var_1))))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 1; i_7 < 7; i_7 += 1) 
    {
        for (long long int i_8 = 1; i_8 < 10; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_9 = 1; i_9 < 8; i_9 += 4) 
                {
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((short) arr_13 [i_8] [i_8 + 1] [i_8 + 1]))), (min((((/* implicit */unsigned long long int) 5U)), (arr_17 [i_7] [i_8 - 1] [i_8 - 1])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_7 + 4] [i_7 + 4])), (arr_10 [i_8] [i_7]))))))) : (((/* implicit */int) arr_8 [i_7] [i_8] [i_9 + 2]))));
                            arr_34 [i_7 + 1] [i_9] [4ULL] = ((/* implicit */short) min((((((/* implicit */_Bool) (-(arr_32 [i_7] [i_8] [i_9 + 3] [i_9 + 3])))) ? (min((((/* implicit */unsigned int) (unsigned char)24)), (3533506511U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_7 + 2] [i_9]))))))), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_1 [i_7 + 2])) ? (arr_7 [2LL]) : (((/* implicit */int) arr_15 [i_9] [i_9] [i_9 + 1] [i_10] [i_10] [i_7 - 1])))))))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) min((12554521110673995060ULL), (((/* implicit */unsigned long long int) (signed char)-67))));
                arr_35 [i_7 + 1] [i_8] = ((/* implicit */int) arr_30 [i_7] [i_7] [i_8] [i_8]);
                arr_36 [i_8 - 1] = ((/* implicit */unsigned long long int) (~(max((-3481641117019349821LL), (((/* implicit */long long int) (unsigned char)0))))));
                arr_37 [i_7] [i_7] = ((/* implicit */signed char) ((unsigned char) (~(((/* implicit */int) (signed char)-1)))));
            }
        } 
    } 
}
