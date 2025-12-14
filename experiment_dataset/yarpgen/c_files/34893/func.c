/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34893
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
    var_15 = ((/* implicit */signed char) (~(((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) var_4)))) % (((var_7) - (((/* implicit */unsigned long long int) var_9))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (((+(274877906943ULL))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)22)))))))))) < (((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_6)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (!(var_11)))) >= (((/* implicit */int) ((arr_0 [i_0]) > (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))) >= ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) <= (2774121866U))))))));
        var_17 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_0))))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_0 [i_0]))) - (3626437854U))))) | (((/* implicit */int) ((((/* implicit */unsigned int) (-(-1997050014)))) >= (((arr_0 [i_0]) - (1520845430U))))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) var_0))))) >> (((((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (arr_0 [i_0]))) - (3626437854U))) - (3128758427U))))) | (((/* implicit */int) ((((/* implicit */unsigned int) (-(-1997050014)))) >= (((arr_0 [i_0]) - (1520845430U)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) / (arr_0 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))))) : ((-(2147483633)))))) <= (((((/* implicit */_Bool) (+(17092404255994819952ULL)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) << (((/* implicit */int) (_Bool)1))))) : ((+(arr_0 [i_0])))))));
        var_18 |= ((((((((/* implicit */int) (short)0)) >> (((/* implicit */int) (unsigned char)31)))) >= ((-(var_4))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [(unsigned char)6])) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) -736996645)) : (15964881775990935330ULL))))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 4095))))))));
    }
    var_19 |= ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_0)) : (2147483647)))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) | (15964881775990935328ULL)))))));
}
