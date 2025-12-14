/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50665
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-253272106)))) ? (max((var_6), (var_0))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) var_15)))))))) ? (-6358732805360778892LL) : (min((((((/* implicit */_Bool) -8066547999916051768LL)) ? (7003299996255507065LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))), (var_6)))));
    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) % (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2))))))) >= ((+(((/* implicit */int) min(((signed char)112), ((signed char)112))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -7121201073783141588LL)) ? (-434166889) : (((/* implicit */int) var_3))))))))));
        arr_3 [i_0] [i_0] = ((long long int) var_5);
        arr_4 [i_0] = min((((/* implicit */long long int) (signed char)123)), (((((/* implicit */_Bool) 0LL)) ? (7367157956830649527LL) : ((-9223372036854775807LL - 1LL)))));
        var_19 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((((/* implicit */int) var_5)) * (8))) == (((/* implicit */int) ((signed char) var_14))))))));
        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) -8850940077046560017LL))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] |= ((/* implicit */unsigned char) arr_7 [i_1] [i_1]);
        arr_9 [(signed char)9] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) arr_6 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_12 [i_2]), (9223372036854775783LL)))) ? (((long long int) (-(-9223372036854775784LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
        var_22 = ((/* implicit */int) (signed char)-6);
    }
    var_23 = (~(((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (1048575LL)))) - (((/* implicit */int) var_10)))));
}
