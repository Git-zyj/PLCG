/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238349
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
    var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) var_1)))))) & (((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_11 [12ULL] [12ULL] [i_1] [i_1] [i_2] [i_3] [i_4] = ((((/* implicit */_Bool) min((var_16), (((/* implicit */long long int) arr_2 [i_1 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_15)), (arr_2 [i_4])))))))) : (((((/* implicit */_Bool) arr_7 [i_2 + 2] [i_2] [i_2 + 2] [i_2] [i_2])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [i_1]) : (var_5))) : (arr_6 [i_2 + 1] [i_1] [i_1] [i_1 - 1]))));
                                arr_12 [(signed char)9] [i_1] [8LL] [i_1] [8LL] = ((/* implicit */signed char) arr_5 [i_0] [i_1] [i_2] [i_2]);
                                var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) var_14)), (var_6))), (arr_1 [i_1 - 1])))), (((((/* implicit */_Bool) (~(arr_7 [i_0] [i_1 - 1] [i_2 - 2] [i_1 - 1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_15))))) : (arr_7 [i_1] [i_1 - 1] [i_1] [i_2 + 1] [i_4]))))))));
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) ((arr_7 [i_0] [6ULL] [i_1] [(signed char)5] [(unsigned char)7]) + ((-(((((/* implicit */_Bool) var_0)) ? (arr_4 [i_1]) : (var_5)))))));
                var_20 = ((/* implicit */unsigned short) (-(min((arr_3 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [5ULL] [i_1] [i_1])))));
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_10)), (var_6)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_15)) ^ (var_4)))) : (min((arr_8 [i_1] [i_1]), (((/* implicit */unsigned int) var_2))))))));
            }
        } 
    } 
}
