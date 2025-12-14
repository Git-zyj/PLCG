/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199051
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
    var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) min((((/* implicit */short) var_13)), (var_10))))))), ((~(min((((/* implicit */unsigned long long int) (short)31204)), (var_14)))))));
    var_16 ^= max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) max((((/* implicit */signed char) var_4)), (var_6)))), (max(((unsigned char)253), (((/* implicit */unsigned char) var_11))))))), (max((max((var_14), (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) (!(var_4)))))));
    var_17 = ((/* implicit */int) min((min((((/* implicit */long long int) (+(((/* implicit */int) var_1))))), ((~(-354188247679254489LL))))), (((/* implicit */long long int) (+(((/* implicit */int) max((var_10), (((/* implicit */short) (unsigned char)15))))))))));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min(((+((+(((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-31217))))))), (min(((~(1183950346388306494ULL))), (max((((/* implicit */unsigned long long int) var_9)), (arr_3 [i_0] [i_1] [i_2]))))));
                    var_19 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((var_12), (((/* implicit */int) var_13)))))))), (max((((/* implicit */long long int) (~(arr_5 [i_2] [i_1] [i_0])))), (min((((/* implicit */long long int) (unsigned short)58790)), (0LL)))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max(((_Bool)0), ((!(((/* implicit */_Bool) (signed char)-112))))))), (min(((+(arr_1 [i_2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])))))))));
                }
            } 
        } 
    } 
}
