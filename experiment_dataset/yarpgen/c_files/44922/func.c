/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44922
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_0] [i_1]))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_0]))))));
                var_20 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 3462936549U)) || (((/* implicit */_Bool) 832030749U))))), (13LL)));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_1] [i_2] [2] = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) var_0)))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_1)) : (var_2))))));
                    var_21 &= ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (3505962505U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [5ULL])))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) (signed char)111))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2871973750U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (var_6)))) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) ((var_7) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
        {
            for (short i_5 = 0; i_5 < 23; i_5 += 1) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) (-(arr_14 [20U] [20U])))), (((((/* implicit */_Bool) 247789980)) ? (1440824882U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-119)))))))));
                    var_25 = min((((/* implicit */int) ((unsigned short) 1596033815))), (arr_14 [i_4 - 2] [i_4 + 1]));
                }
            } 
        } 
    } 
}
