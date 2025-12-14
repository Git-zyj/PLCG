/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35943
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) (-((+(2068181157))))));
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_11))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) ((_Bool) 2068181157));
            arr_7 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) ((_Bool) 3241220401U)))));
        }
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))));
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)15))) % (var_13))))))) >= (max((((/* implicit */int) ((1053746895U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((+(((/* implicit */int) (unsigned char)112))))))));
        arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)238))))) < (((arr_9 [i_2]) ? (((/* implicit */long long int) 1053746891U)) : (var_13)))));
    }
    var_19 += ((/* implicit */long long int) (((!(((/* implicit */_Bool) (~(3241220401U)))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((((var_4) - (((/* implicit */long long int) 3241220401U)))) + (6992179727259255948LL))))))));
    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(var_13))) : (var_10)));
    /* LoopSeq 1 */
    for (int i_3 = 1; i_3 < 22; i_3 += 3) 
    {
        var_21 = ((/* implicit */_Bool) (~((-(9223372036854775805LL)))));
        var_22 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((arr_14 [i_3 - 1]), (arr_14 [i_3 - 1])))) ? (((((/* implicit */_Bool) 1053746914U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_3 - 1]))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 - 1]))) - (4294967295U))))));
        arr_15 [i_3] = ((/* implicit */_Bool) var_5);
    }
}
