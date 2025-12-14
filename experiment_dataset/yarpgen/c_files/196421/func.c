/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196421
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196421 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196421
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_13)), (5682876477740139644ULL)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)254)), (var_5)))) : ((-(((/* implicit */int) (short)-19216))))))) : (((unsigned int) var_11)))))));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) 1822334813U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(12763867595969411963ULL))))))) : ((-(((/* implicit */int) ((unsigned char) 18446744073709551615ULL))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (5682876477740139644ULL))))), (((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */unsigned long long int) var_1)), (var_11)))))));
                var_17 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)0)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) max((((/* implicit */short) var_8)), (var_2))))))) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (12U)))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (3939040829528196602LL)))) ? (min((var_4), (((/* implicit */int) var_12)))) : (((/* implicit */int) min(((unsigned char)229), (((/* implicit */unsigned char) var_8)))))));
                arr_5 [i_0 + 2] = ((/* implicit */short) min((min((((/* implicit */int) var_8)), (133693440))), (((/* implicit */int) min((var_7), (var_2))))));
            }
        } 
    } 
}
