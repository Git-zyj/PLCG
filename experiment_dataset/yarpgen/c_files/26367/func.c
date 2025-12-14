/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26367
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) < (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-21962))) : (-1566392449381144030LL))))) ? (arr_4 [i_2]) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_9 [i_0] [i_0])))))));
                    arr_10 [i_0] [(unsigned char)7] [i_1] [i_2] = ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_11))))), (min((((/* implicit */long long int) arr_2 [3ULL] [(unsigned short)2])), (1566392449381144030LL))))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1566392449381144036LL)) ? (arr_6 [i_2]) : (arr_6 [i_1])))) ? ((~(-8704453577171081015LL))) : (((/* implicit */long long int) 2041973942)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) ((signed char) var_12))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)23069)) < (((/* implicit */int) (unsigned short)21067))))) > (max((((/* implicit */int) var_5)), (1965886029))))))));
    var_21 |= ((/* implicit */int) var_12);
}
