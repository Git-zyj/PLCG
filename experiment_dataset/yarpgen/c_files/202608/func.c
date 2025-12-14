/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202608
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
    var_20 = max((((/* implicit */unsigned long long int) 4068844687U)), ((~(max((2439322871573485969ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 += ((short) var_9);
        arr_3 [(unsigned short)9] |= ((/* implicit */short) ((((/* implicit */_Bool) 226122611U)) ? ((~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (226122609U))))) : ((-(((4068844711U) % (4068844662U)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 226122555U)) ? (993161107U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10078)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        arr_7 [i_1] [i_1 - 1] = ((/* implicit */signed char) -2071570771);
        var_22 = ((/* implicit */short) ((int) min((arr_2 [i_1 + 1]), (arr_2 [i_1 - 2]))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 10; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 10; i_6 += 2) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_3] [i_3] [(unsigned short)1] [i_6] = ((arr_19 [i_2] [i_3] [i_5] [i_5] [i_6]) / (arr_19 [i_6] [i_3] [i_4] [i_5] [i_6]));
                                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_4 - 2] [i_4 - 2] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_21 [i_4 - 2]))));
                                arr_23 [i_3] [i_3] [i_3] = ((int) arr_20 [i_2] [6ULL] [i_6] [i_3] [i_4 - 2]);
                                var_24 = (+(arr_15 [i_2] [i_3] [i_4 + 1] [i_5]));
                                var_25 = ((/* implicit */short) arr_18 [i_5] [i_5] [i_4 - 1] [i_5] [(signed char)5] [(_Bool)1]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 4068844706U)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_14)))))));
                    arr_24 [i_2] [i_3] [(unsigned char)5] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_2] [i_3] [(short)9] [i_3] [(short)9])) ? (((/* implicit */int) arr_8 [i_4 - 2])) : (((/* implicit */int) (short)-966))));
                }
            } 
        } 
        arr_25 [(unsigned short)6] [i_2] |= ((unsigned long long int) 4068844699U);
        arr_26 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_17 [i_2] [i_2] [6U] [i_2] [6U]) | (arr_15 [(unsigned char)7] [(short)1] [i_2] [1]))))));
        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 226122609U))));
    }
    /* LoopSeq 1 */
    for (short i_7 = 4; i_7 < 7; i_7 += 3) 
    {
        var_28 = ((((/* implicit */_Bool) (~(-8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)10062)) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)99)))) != (((/* implicit */int) arr_27 [i_7 - 3])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_7] [(unsigned char)5])) ? (arr_6 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1))) : (arr_2 [i_7 + 2]))));
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (int i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_27 [i_7 - 4]))))))));
                        var_30 = ((/* implicit */unsigned char) max((max((226122572U), (((/* implicit */unsigned int) arr_38 [i_7 - 3])))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) var_17)))))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)231))));
}
