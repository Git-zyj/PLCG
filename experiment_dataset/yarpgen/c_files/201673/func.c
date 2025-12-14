/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201673
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
    /* LoopSeq 3 */
    for (short i_0 = 4; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                for (int i_3 = 1; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] [0] [i_0] [i_3] &= ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1038))) : (arr_2 [i_0] [(unsigned short)2])))));
                        var_17 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((long long int) var_5))))) - (((((/* implicit */long long int) (+(134217472U)))) + (var_10)))));
                        var_18 += ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_2])) || (((/* implicit */_Bool) (unsigned short)1199)))))) >= (((((/* implicit */_Bool) var_0)) ? (arr_3 [(short)1] [12] [12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))), (((((arr_1 [i_0] [i_1]) % (((/* implicit */unsigned long long int) var_1)))) > (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_1] [i_1])))))));
                    }
                } 
            } 
        } 
        arr_10 [i_0] [8U] |= var_1;
        arr_11 [i_0] = ((/* implicit */unsigned long long int) var_12);
        var_19 = ((/* implicit */int) (((+(arr_7 [i_0 - 4] [i_0] [i_0 - 2] [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64336)))));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 15; i_4 += 4) 
    {
        arr_14 [i_4] [i_4] = ((/* implicit */signed char) (((+(((/* implicit */int) (signed char)-13)))) | (((((/* implicit */int) arr_12 [i_4] [i_4])) ^ (((/* implicit */int) arr_13 [i_4]))))));
        arr_15 [i_4] = ((/* implicit */int) ((unsigned long long int) var_12));
    }
    for (signed char i_5 = 0; i_5 < 15; i_5 += 3) 
    {
        arr_18 [12] = ((/* implicit */unsigned long long int) ((((int) 123058209642524733LL)) != (((/* implicit */int) min(((unsigned short)1199), ((unsigned short)1199))))));
        var_20 = ((/* implicit */signed char) var_10);
    }
    var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */int) var_5)) : (min((var_2), (((/* implicit */int) var_0))))))) & (var_16))))));
}
