/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30803
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */_Bool) min((var_10), (((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (arr_2 [i_0]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1190122028)))) != (((1073741823ULL) % (18446744072635809809ULL)))))))))));
                var_11 -= ((/* implicit */unsigned char) arr_1 [i_1]);
                arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((arr_3 [i_1] [i_0] [i_0]) ? (((/* implicit */int) (unsigned short)58175)) : (11))), (((/* implicit */int) var_2))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) : (-38)))), (max((18446744072635809792ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1073741817ULL) <= (18446744072635809798ULL)))))));
                arr_7 [i_1] = ((/* implicit */signed char) ((2201227468U) == (((/* implicit */unsigned int) (-2147483647 - 1)))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) == (((((/* implicit */_Bool) -9092494702262112730LL)) ? (1073741805ULL) : (1073741806ULL))))))));
    var_13 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)156)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12115484963577484171ULL))));
    var_14 = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_9), (var_3)))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (((unsigned long long int) -12)))));
}
