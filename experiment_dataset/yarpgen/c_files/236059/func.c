/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236059
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((var_6) && (var_8))))));
    var_16 = ((/* implicit */unsigned int) ((min((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))), (var_11))) ^ (((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (-1303316635)))) ? (var_1) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_14)), (var_0))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))))) / (((unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_0) : (9014789958074841003ULL))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (-(var_4)))))) <= (max((arr_8 [i_2]), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_8 [i_2])))))));
                    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)6] [(unsigned char)6] [i_0]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2] [10LL])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_9)) ? (235750648543142542ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((18210993425166409082ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))))))));
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? ((-(((/* implicit */int) arr_9 [i_2] [i_1] [i_2])))) : (((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned short)59040)) : (((/* implicit */int) (_Bool)1))))));
                    arr_10 [(_Bool)1] [i_1] [i_2] = min((((((/* implicit */_Bool) arr_5 [i_1])) ? (min((arr_8 [i_2]), (arr_8 [i_2]))) : ((~(arr_5 [i_1]))))), (((/* implicit */unsigned long long int) arr_9 [i_2] [(unsigned char)13] [i_2])));
                }
            } 
        } 
    } 
}
