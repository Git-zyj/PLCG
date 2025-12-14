/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30913
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
    var_16 = ((unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)1790)) ? (2147483641) : (((/* implicit */int) var_6)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)63745))))));
    var_17 = ((/* implicit */int) var_8);
    var_18 -= ((/* implicit */_Bool) (-(((long long int) var_13))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)1790)) ? (((/* implicit */int) ((((/* implicit */_Bool) 6464355047211292355ULL)) || (((/* implicit */_Bool) -1LL))))) : (((/* implicit */int) (unsigned short)63745))));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) max(((unsigned short)43091), ((unsigned short)63755)))) >= (((/* implicit */int) arr_5 [i_0] [i_1])))))) - (((((/* implicit */_Bool) arr_12 [i_4] [i_1])) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_4] [i_2] [i_3] [i_0])) : (arr_12 [i_4] [i_1])))));
                                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) arr_4 [i_3] [(unsigned char)6])) ? (arr_12 [i_3] [i_1]) : (6464355047211292355ULL))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6464355047211292360ULL)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)6] [i_3] [1] [1] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)69)) < (((/* implicit */int) (unsigned short)58713)))))) : (((((/* implicit */_Bool) arr_0 [(signed char)0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_0]))) : (arr_6 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)235))))))));
                                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) arr_2 [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_13 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_0])) ^ (((((/* implicit */_Bool) arr_2 [i_0])) ? (((arr_12 [(unsigned char)4] [i_1]) | (((/* implicit */unsigned long long int) arr_6 [i_1])))) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]))))));
            }
        } 
    } 
}
