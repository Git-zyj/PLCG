/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198987
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */int) var_10);
                    var_12 = ((/* implicit */unsigned int) ((var_8) <= (((/* implicit */int) max((var_10), (arr_4 [(unsigned char)17] [i_1]))))));
                    var_13 = ((/* implicit */int) 3578336894U);
                    var_14 |= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 2] [4U]))) : (-1LL))) != (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) > (arr_0 [i_2]))) ? (((/* implicit */int) (((_Bool)1) && ((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (short)32767))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (-(var_1)));
    var_16 = ((/* implicit */signed char) 15135347097061894497ULL);
    var_17 = ((/* implicit */unsigned char) var_7);
    var_18 = ((/* implicit */signed char) (unsigned char)26);
}
