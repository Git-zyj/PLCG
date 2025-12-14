/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215509
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((((3402022587743597502ULL) | (15029096815354293878ULL))) & (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) (_Bool)1))))))))))));
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (var_3)))))) : ((+(max((3417647258355257737ULL), (((/* implicit */unsigned long long int) var_14))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))))), (((unsigned char) 882254988))))))))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) ((signed char) max((arr_5 [i_1 - 2]), ((_Bool)1))));
                var_18 ^= ((/* implicit */_Bool) 3417647258355257737ULL);
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) (((+((+(var_14))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (15029096815354293879ULL)))) ? (((/* implicit */int) arr_3 [i_0] [i_1 + 2] [i_0])) : (((/* implicit */int) ((signed char) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */long long int) var_0);
    var_20 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1535869581)) ? (((/* implicit */int) var_9)) : (max(((~(((/* implicit */int) var_0)))), ((-(((/* implicit */int) var_13))))))));
}
