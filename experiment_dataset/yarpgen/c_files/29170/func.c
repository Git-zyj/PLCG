/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29170
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 32767LL)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [16U] [i_0])) : (((/* implicit */int) var_9)))))))));
                        var_17 = ((/* implicit */unsigned int) ((arr_12 [i_0] [i_1 - 3] [17ULL] [i_3] [17ULL] [i_1]) == (min((arr_12 [i_0] [i_1 + 1] [i_2] [i_2] [i_3] [i_0]), (arr_12 [i_0] [i_1 + 1] [i_2] [i_3] [(short)8] [i_1])))));
                        arr_13 [i_3] [i_3] [i_2] [i_0] = var_13;
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */unsigned long long int) arr_2 [(unsigned char)13] [(unsigned char)13]);
    }
    for (long long int i_4 = 3; i_4 < 14; i_4 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_10 [i_4] [i_4] [i_4 - 2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65519)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62953)) || (((/* implicit */_Bool) var_11)))))) : ((~(arr_12 [i_4 + 2] [i_4 + 2] [i_4 - 3] [i_4] [i_4 - 1] [i_4 + 1]))))))));
        arr_16 [(short)10] = ((/* implicit */unsigned char) max((((/* implicit */short) ((((/* implicit */int) ((arr_6 [(_Bool)1]) >= (arr_6 [i_4])))) > (((/* implicit */int) min(((unsigned short)2596), (((/* implicit */unsigned short) (signed char)13)))))))), (var_2)));
    }
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? ((((+(var_4))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-12))) / (((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) 4294967295U))))))));
}
