/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190490
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
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((((/* implicit */int) (unsigned char)218)) == (-1859341417)))))) >= (((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_11))))) ? (min((1816244480), (826194163))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) / (var_10))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) arr_0 [i_2 + 2] [i_1])) : (((/* implicit */int) arr_0 [i_0] [i_1])))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_1])), (arr_5 [i_0])))))))) : (max((((((/* implicit */_Bool) arr_3 [i_0 - 3] [i_1] [i_2])) ? (((/* implicit */long long int) arr_5 [1])) : (arr_3 [9ULL] [i_1] [i_2]))), (((/* implicit */long long int) arr_0 [i_0 - 2] [i_1]))))));
                    var_16 = ((/* implicit */short) max(((+(((/* implicit */int) ((short) arr_4 [i_0] [i_1]))))), (((/* implicit */int) arr_4 [(unsigned short)5] [i_0]))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
    var_18 = ((/* implicit */short) (-(max((((/* implicit */long long int) (short)-1046)), (((((/* implicit */_Bool) (short)-14686)) ? (-10LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
}
