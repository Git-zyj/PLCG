/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40891
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
    var_20 = ((/* implicit */int) ((unsigned int) var_6));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 -= max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2118))) : (-7420431665464550582LL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (arr_5 [i_3] [i_1] [i_2]) : (((/* implicit */int) var_11))))) : ((((_Bool)0) ? (818119505891087114LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))))))), (((((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_3]))) : (arr_10 [(short)6] [i_2] [(short)6] [i_2] [i_4] [i_4] [10LL]))) & (((/* implicit */long long int) var_0)))));
                                var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) arr_2 [(_Bool)1]))))))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (arr_4 [i_0] [i_1] [i_2] [i_3]) : (((/* implicit */long long int) (+(arr_5 [i_0] [(signed char)20] [(signed char)20])))))) : (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_0] [i_0] [i_0]))), (arr_12 [i_1] [i_0] [i_2] [(short)6]))))));
                                arr_13 [i_0] [i_1] [i_1] [i_4] [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4])))) ? (((int) ((int) 818119505891087105LL))) : ((-(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(unsigned char)11] [i_0] [i_0] [i_0] [i_0])) ? (arr_1 [i_0]) : (var_18)))))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) -7420431665464550582LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_2] [(unsigned short)2] [(unsigned char)11]))))) : ((~(((/* implicit */int) arr_6 [i_0] [i_3] [i_2] [i_3] [i_3] [15]))))));
                                var_24 = ((/* implicit */unsigned int) (((!((_Bool)0))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))))), (arr_4 [i_0] [i_0] [i_2] [8LL]))) : (((/* implicit */long long int) arr_1 [i_2]))));
                            }
                        } 
                    } 
                } 
                var_25 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) - (var_19)))))) / (((((/* implicit */_Bool) (unsigned short)5147)) ? (2047LL) : (2047LL)))));
            }
        } 
    } 
}
