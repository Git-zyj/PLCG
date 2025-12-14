/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230203
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) max((var_2), (((/* implicit */short) var_17)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 0; i_2 < 19; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) min((arr_4 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_0])))) : (max((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_0] [i_0] [13ULL]))))) : (((/* implicit */unsigned long long int) arr_0 [13U]))));
                    arr_9 [i_0] [i_0] [(signed char)18] [i_1] &= ((/* implicit */unsigned char) ((_Bool) ((arr_4 [i_0] [i_0] [i_0]) <= (arr_4 [i_0] [i_0] [i_1]))));
                    arr_10 [i_0] [i_1] [i_0] [i_0] = max((max((max((((/* implicit */unsigned long long int) var_15)), (arr_7 [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) arr_5 [i_2] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) arr_3 [i_0] [i_1]))))) ? (arr_7 [i_2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_7)))));
                }
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) var_9);
                    var_21 = ((/* implicit */long long int) var_17);
                    arr_14 [i_0] [i_0] [i_3] = ((/* implicit */signed char) (+(var_7)));
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 2; i_4 < 17; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_1] [i_1] [6LL] [i_1] = ((/* implicit */long long int) ((((unsigned long long int) max((var_14), (((/* implicit */long long int) var_8))))) >= (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [15U] [i_4 + 2] [15U])))))));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_13))))))) ? ((-((+(arr_7 [i_0] [i_0] [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0])))));
                                var_23 = max((var_14), (((/* implicit */long long int) max((arr_5 [i_4] [i_0] [i_3] [i_4 - 1]), (((/* implicit */unsigned int) var_8))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((((/* implicit */int) var_3)) > (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_4 + 1] [i_5])))) || (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (arr_7 [i_0] [i_0] [1LL])))) && (((/* implicit */_Bool) arr_5 [i_4] [i_5] [i_4] [i_4])))))))));
                            }
                        } 
                    } 
                }
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_20 [i_0] [i_1])), (arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [8ULL] [i_1])) && (((/* implicit */_Bool) var_4)))))))) ? (var_7) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))) : (arr_6 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((_Bool) var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])) && (arr_18 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
}
