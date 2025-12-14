/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49322
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
    var_12 = ((/* implicit */_Bool) min((((/* implicit */int) ((var_11) < (((/* implicit */long long int) ((((/* implicit */_Bool) 1035786640)) ? (var_10) : (((/* implicit */int) var_7)))))))), ((~(((/* implicit */int) ((var_6) > (var_0))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                arr_5 [i_1] [i_0] [i_0] &= ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) 1035786640)) | (max((var_4), (((/* implicit */unsigned int) var_5))))))), (var_3)));
                var_13 = ((/* implicit */unsigned char) max((min((arr_2 [i_1]), (((((/* implicit */_Bool) (unsigned short)0)) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)26629))))))), (min((((/* implicit */unsigned long long int) var_0)), (arr_3 [i_0])))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned int) min((((unsigned short) ((((/* implicit */unsigned long long int) -892403287)) ^ (7356979446318359134ULL)))), (((/* implicit */unsigned short) arr_0 [i_0]))));
            }
        } 
    } 
}
