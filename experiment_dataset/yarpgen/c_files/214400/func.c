/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214400
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 22; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 *= ((/* implicit */short) max((((var_1) ? (arr_5 [i_1 - 3] [i_0]) : (arr_5 [i_0] [i_1 - 1]))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)199)) : (arr_5 [i_0] [i_1 + 1])))));
                    var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_6 [i_2] [i_1])) ? (var_5) : (((/* implicit */long long int) 3100321446U)))) / (((/* implicit */long long int) arr_7 [i_1 - 2] [i_1 - 1] [i_1 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)197))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)241)))) : ((+(((/* implicit */int) (unsigned char)48))))))))))));
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((+(((/* implicit */int) arr_2 [i_0]))))))) ? ((+((+(((/* implicit */int) arr_6 [i_1] [i_2])))))) : (min(((~(((/* implicit */int) (signed char)-31)))), (((/* implicit */int) arr_6 [i_2] [i_1 - 1]))))));
                    var_14 = ((/* implicit */unsigned int) ((min((var_4), (((int) arr_5 [i_1] [i_0])))) + (((((/* implicit */int) min(((unsigned char)31), ((unsigned char)29)))) << ((((((~(((/* implicit */int) (short)13848)))) + (13876))) - (2)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */int) (unsigned char)224)) % (2147483647))), (((/* implicit */int) min((((/* implicit */short) var_1)), (var_2))))))))))));
    var_16 = ((/* implicit */short) min((var_4), (((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) (short)27361)) << (((((((/* implicit */int) (short)-27362)) + (27382))) - (7))))) : (((/* implicit */int) var_0))))));
    var_17 = ((/* implicit */signed char) max((min((((var_4) * (((/* implicit */int) (unsigned char)0)))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */int) (unsigned char)48)))))), (((/* implicit */int) ((((/* implicit */int) (short)-30873)) == (((/* implicit */int) (short)-27366)))))));
}
