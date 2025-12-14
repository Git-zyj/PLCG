/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238976
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
    var_15 = ((/* implicit */short) (unsigned char)184);
    var_16 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((2257941401547294646ULL) | (2257941401547294646ULL)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -135900509)) ? (((/* implicit */unsigned long long int) 7828118278556788568LL)) : (2257941401547294646ULL)))) ? (((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */short) (~(var_0)));
        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_0)) ? (15816383424757199154ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))))) ? (max((((unsigned long long int) arr_1 [i_0] [i_0])), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))))) : (((/* implicit */unsigned long long int) (~(-7828118278556788568LL))))));
        arr_2 [i_0] = ((/* implicit */long long int) min((((short) var_2)), (((/* implicit */short) arr_0 [i_0] [i_0 + 2]))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) ((var_8) ? (arr_1 [i_0 - 1] [3ULL]) : (((/* implicit */unsigned long long int) 7828118278556788568LL)))))))) >= ((~(((/* implicit */int) min((((/* implicit */short) arr_0 [i_0] [i_0])), (var_4))))))));
    }
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) var_10))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-14129)), (0ULL)))) && (((/* implicit */_Bool) 24ULL))))));
    }
}
