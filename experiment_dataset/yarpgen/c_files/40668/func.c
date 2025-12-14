/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40668
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) ((short) var_10)))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((var_17) ? (min((((unsigned long long int) (_Bool)0)), (arr_0 [i_0] [i_1]))) : (((((/* implicit */unsigned long long int) var_8)) * (min((arr_0 [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) (_Bool)0))))))));
        }
        /* vectorizable */
        for (short i_2 = 2; i_2 < 8; i_2 += 3) 
        {
            var_20 = ((/* implicit */short) var_14);
            var_21 ^= ((/* implicit */unsigned char) ((unsigned int) var_5));
        }
        var_22 = ((/* implicit */unsigned short) arr_8 [i_0 - 2] [i_0 - 2]);
        var_23 ^= ((/* implicit */int) ((((/* implicit */long long int) min((var_11), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39865))) < (arr_8 [i_0] [i_0]))))))) + (var_15)));
    }
    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (unsigned char)127);
        arr_11 [11ULL] = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) 3705923755U)) : (((var_7) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))))))) * (((/* implicit */long long int) ((/* implicit */int) min((var_4), (var_17)))))));
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (unsigned short)62132))));
    }
    var_26 = ((/* implicit */signed char) ((short) ((((/* implicit */int) var_2)) == (((/* implicit */int) (_Bool)1)))));
}
