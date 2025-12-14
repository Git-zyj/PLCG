/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245203
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
    var_13 -= ((/* implicit */unsigned short) ((((var_5) < (((((/* implicit */unsigned long long int) var_12)) * (var_3))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))));
    var_14 = var_10;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-8293))))) ? (((/* implicit */unsigned long long int) 2147483647)) : (((((/* implicit */_Bool) 9211489763777601914LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (18446744073709551615ULL)))));
        var_15 |= ((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ^ (arr_0 [i_0] [i_0])));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_6 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 2147483647)) < ((-(var_6)))));
            arr_7 [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) != (((long long int) 782512994))));
        }
    }
    for (unsigned char i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        var_16 = ((/* implicit */short) min((2147483647), (2147483647)));
        var_17 = min((((/* implicit */long long int) var_7)), (((long long int) -2147483647)));
        arr_12 [i_2] = ((/* implicit */unsigned char) ((long long int) max(((-(var_5))), (min((((/* implicit */unsigned long long int) -782512995)), (6ULL))))));
    }
    var_18 = ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned int) 2147483618)) <= (2850776082U))) ? (-782512990) : (max((((/* implicit */int) (short)0)), (-782512994)))))));
}
