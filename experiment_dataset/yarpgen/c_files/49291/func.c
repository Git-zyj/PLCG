/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49291
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
    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((short) min((var_10), (((/* implicit */long long int) var_2)))))) : (((int) min((-2873322973942531242LL), (((/* implicit */long long int) -63272699))))))))));
    var_16 |= ((/* implicit */_Bool) (~((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && ((_Bool)1))))) : (var_8)))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((-7320719662805253480LL), (2873322973942531242LL)))) ? (((((/* implicit */_Bool) 2873322973942531241LL)) ? (((/* implicit */unsigned long long int) var_3)) : (var_14))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_3) : (((/* implicit */int) var_0))))))) < (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) == (17687403424397179252ULL))) ? (((/* implicit */unsigned long long int) max((5856630768276531908LL), (((/* implicit */long long int) (unsigned short)22366))))) : (var_14)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_18 *= ((/* implicit */short) min(((+(arr_3 [i_1]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) == (arr_3 [i_0]))))));
                var_19 = ((/* implicit */signed char) (-((-(2910147832U)))));
                arr_4 [(signed char)12] [i_0] = ((/* implicit */short) ((unsigned char) min((arr_0 [i_0]), (((/* implicit */long long int) (unsigned char)76)))));
                arr_5 [i_1] [i_0] = ((/* implicit */short) (~(((/* implicit */int) max((arr_1 [i_0]), (var_13))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((var_6) << (((var_14) - (514217216634736652ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((signed char) var_1)))))));
}
