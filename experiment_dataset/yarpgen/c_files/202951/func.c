/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202951
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
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)37099))))) : ((-(arr_1 [i_0 + 2])))));
                var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((1773471159) % (1773471159))))));
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) 1617144222U)) ? (17001063397543666390ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 15080987494190600244ULL)) ? (((/* implicit */unsigned int) var_4)) : (arr_6 [i_3] [i_3 + 1] [i_3] [i_3])))))))));
                            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? ((~(var_8))) : (max((arr_5 [i_0 + 1] [i_0 + 1] [i_3 - 1] [(unsigned short)6]), (-1323530518))))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0 - 2])))) / ((+(((/* implicit */int) (signed char)-39)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_12))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_1))));
    var_24 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((long long int) var_14))))) ? (2677823046U) : (((/* implicit */unsigned int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned int) arr_17 [i_7] [i_7 - 1] [i_7] [i_7]);
                                var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) max(((+(((((/* implicit */_Bool) arr_16 [19] [i_7] [i_7])) ? (-1937617349) : (((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_17 [i_8] [i_7 + 3] [i_6] [i_4])) : (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((841957833U) + (((/* implicit */unsigned int) arr_15 [i_6] [i_5] [i_4]))))) - (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_4] [i_6])) % (((/* implicit */int) arr_16 [i_4] [i_5] [i_6]))))) : (var_16)))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        for (unsigned char i_10 = 2; i_10 < 17; i_10 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned long long int) (((+(arr_12 [i_10 + 3]))) + (((/* implicit */int) arr_20 [i_10 - 1]))));
                                var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_10)) ? (var_9) : (arr_15 [i_10 + 3] [i_4] [i_4])))))));
                                var_30 = ((/* implicit */unsigned int) arr_19 [i_4] [i_5]);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_11 [i_6])), ((unsigned char)0)))), (((((/* implicit */_Bool) arr_11 [i_5])) ? (var_9) : (((/* implicit */int) arr_11 [i_4])))))))));
                    arr_27 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((((unsigned long long int) var_8)) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1617144250U)) ? (((/* implicit */int) arr_21 [i_5] [i_6])) : (((/* implicit */int) arr_21 [i_5] [i_6])))))));
                }
            } 
        } 
    } 
}
