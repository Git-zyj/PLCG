/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192305
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
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_13 = ((/* implicit */short) max((((unsigned long long int) arr_3 [i_0 - 1])), (((/* implicit */unsigned long long int) max(((!(((/* implicit */_Bool) arr_4 [i_0 - 1] [(signed char)12] [(signed char)12])))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) <= (566257832038131174LL))))))));
                    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max((((((/* implicit */_Bool) -566257832038131174LL)) ? (566257832038131174LL) : (0LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_6 [i_0 + 1]), (((/* implicit */unsigned char) (_Bool)1))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_2])))))))))))));
                    var_15 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 1]))))) + (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 1]))) ^ (-566257832038131175LL))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)31562)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)182)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)97)) != (1613002384))))))) : ((~(-5528814027969003376LL)))));
    var_17 *= ((/* implicit */int) (!(((/* implicit */_Bool) 64638916))));
}
