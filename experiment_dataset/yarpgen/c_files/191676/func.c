/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191676
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14531427856663432285ULL)) ? (((((/* implicit */_Bool) 7851306648576306000ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_13)))) : (((/* implicit */int) var_13))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned short) (signed char)-1);
        var_17 = ((/* implicit */long long int) ((10415394112704690500ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-4)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((((/* implicit */unsigned long long int) (short)15177)), (((((/* implicit */_Bool) (signed char)4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) var_5)))))) : (var_14))))))));
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)22)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) ? (min((((/* implicit */unsigned long long int) 564624807)), (var_14))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_11))))))))))));
            arr_9 [i_2] [i_3] = ((/* implicit */unsigned short) ((int) (~(var_3))));
            var_20 = ((/* implicit */short) ((((/* implicit */int) ((min((var_14), (((/* implicit */unsigned long long int) (unsigned short)51185)))) <= (((/* implicit */unsigned long long int) var_7))))) * ((-(((/* implicit */int) (_Bool)1))))));
        }
        for (long long int i_4 = 3; i_4 < 23; i_4 += 1) 
        {
            var_21 = ((/* implicit */_Bool) ((((max((var_14), (((/* implicit */unsigned long long int) var_3)))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (signed char)-4)))) : (((/* implicit */int) max(((signed char)104), (var_12))))))) : (((1305663948977067033ULL) % (((/* implicit */unsigned long long int) min((var_3), (-8294494347913676079LL))))))));
            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((min((var_8), (((/* implicit */int) (signed char)-1)))) == (((/* implicit */int) (signed char)0))))) & (min((((((/* implicit */_Bool) 7974102874602320175LL)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)-83)))), (((((/* implicit */_Bool) -5554928456485227466LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (signed char)-13))))))));
        }
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((-1907933013337152507LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-3462))))))) ^ (max((4294967295U), (((/* implicit */unsigned int) (signed char)-1)))))))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)-13)), ((short)27848)))) != (((/* implicit */int) (!(((/* implicit */_Bool) -8968165844872890936LL))))))))));
    }
    var_25 = ((/* implicit */_Bool) 35050593008599644LL);
}
