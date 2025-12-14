/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50645
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
    var_15 = ((/* implicit */long long int) ((13437413402420112703ULL) >= (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) var_8))));
        var_17 = ((/* implicit */unsigned int) var_1);
        var_18 = ((/* implicit */unsigned int) min((var_18), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6910786610345503435LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5))))) ? ((-(((/* implicit */int) (unsigned char)71)))) : (((/* implicit */int) ((short) (signed char)-112)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_1 [i_0]))))) ? (min((16U), (((/* implicit */unsigned int) arr_1 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))))))));
    }
    for (int i_1 = 4; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) (((~((~(var_8))))) >> (((((((/* implicit */_Bool) -9223372036854775804LL)) ? (7557137308811083911LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-14)) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) (unsigned short)45808))))))) - (7557137308811083880LL)))));
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_2 [i_1 + 2] [i_1]))) ? ((+(((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) ((signed char) arr_1 [i_1]))))))));
    }
    for (int i_2 = 4; i_2 < 17; i_2 += 2) /* same iter space */
    {
        var_21 *= (_Bool)1;
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((3U), (((/* implicit */unsigned int) max((arr_6 [i_2 - 1]), (((/* implicit */unsigned char) var_10)))))))) && (((/* implicit */_Bool) ((long long int) ((unsigned short) -539634805))))));
        arr_7 [i_2] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) arr_0 [i_2] [i_2])) & (((/* implicit */int) max((var_9), (((/* implicit */signed char) var_3))))))));
        var_23 = ((/* implicit */unsigned int) min((var_11), (min((((/* implicit */unsigned long long int) ((short) arr_2 [i_2 - 2] [i_2]))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (9822721882158617416ULL)))))));
        arr_8 [i_2] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 3U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_2 + 2])))));
    }
}
