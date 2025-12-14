/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229879
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) var_8);
                    var_11 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1])) & (((/* implicit */int) var_4))))) : (var_2))));
                    arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)0))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0]))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_1])))) < (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (long long int i_3 = 0; i_3 < 20; i_3 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 1) 
                    {
                        for (int i_5 = 2; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_17 [i_4] [i_1] [i_1] = arr_1 [i_5];
                                arr_18 [i_5] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */short) var_0);
                                arr_19 [i_0] [(signed char)4] [i_0] |= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_10 [i_0] [i_5])), (var_0)))) ? (((/* implicit */int) (signed char)113)) : (arr_15 [i_0] [i_0] [i_3] [i_4] [i_4] [i_5 - 2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        for (int i_7 = 0; i_7 < 20; i_7 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) max(((+(arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */int) ((((((/* implicit */int) arr_22 [i_0])) - (((/* implicit */int) var_1)))) >= (((((/* implicit */int) (signed char)-113)) + (((/* implicit */int) var_3)))))))));
                                arr_25 [i_0] [i_1] [i_3] [i_0] [i_6] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_23 [i_6] [i_1] [i_1])))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */int) arr_6 [i_6] [i_6] [i_3] [i_6])) % (arr_23 [i_0] [i_1] [i_3])))));
                            }
                        } 
                    } 
                    arr_26 [10U] = ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))));
                }
                arr_27 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_20 [i_0]);
                arr_28 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98))) : (arr_24 [i_0])))) ? (((/* implicit */long long int) var_9)) : (((long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-68))) : (var_2)));
                arr_29 [i_0] [i_0] |= ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [12] [i_1] [i_1])) ? (var_8) : (((/* implicit */int) (signed char)-84)))), (((((/* implicit */_Bool) var_0)) ? (-1804993436) : (((/* implicit */int) (signed char)-74))))));
            }
        } 
    } 
}
