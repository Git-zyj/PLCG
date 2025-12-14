/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213934
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (arr_1 [i_0]))) ? (((((/* implicit */_Bool) 11641409288038562841ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4379404275867156705ULL))) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) <= ((-(((var_4) ? (14067339797842394895ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_14 |= ((/* implicit */unsigned long long int) ((signed char) 15901647674931266154ULL));
        var_15 ^= ((/* implicit */unsigned long long int) ((int) (_Bool)1));
        var_16 = ((/* implicit */signed char) ((min((arr_1 [i_0]), (((/* implicit */long long int) var_10)))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned char)220)) - (192))))))))))));
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) 6329725183491320515ULL)))))))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) var_12))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            arr_6 [i_1] [i_2] [(unsigned char)19] = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_0)))))));
            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((unsigned long long int) (_Bool)1)))));
            var_20 -= ((/* implicit */long long int) ((_Bool) arr_1 [i_1]));
            var_21 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11585)) ^ (((/* implicit */int) var_1))));
            arr_7 [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_0 [i_1]))));
        }
        var_22 &= ((/* implicit */unsigned long long int) ((_Bool) (-(((/* implicit */int) var_8)))));
        arr_8 [i_1] [i_1] = ((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? (((/* implicit */int) ((short) 43780549121130027ULL))) : (((/* implicit */int) (!(var_10)))));
    }
    var_23 = (~(((((/* implicit */_Bool) 4379404275867156679ULL)) ? (6329725183491320498ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
}
