/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206683
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
    var_12 = ((/* implicit */unsigned short) var_7);
    var_13 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(short)7]))))), (((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) var_0)) : (arr_5 [i_1] [i_1 - 3])))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_2 [i_1 - 2]) : (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) (_Bool)1)), (arr_3 [i_1]))), (((/* implicit */long long int) (unsigned char)207)))))));
                var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) max((max((((/* implicit */long long int) (unsigned char)10)), (min((4251494270651545618LL), (((/* implicit */long long int) (unsigned char)255)))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((((/* implicit */int) (short)3)) * (((/* implicit */int) (short)0))))) : (max((var_5), (((/* implicit */long long int) 7)))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) (unsigned char)236);
}
