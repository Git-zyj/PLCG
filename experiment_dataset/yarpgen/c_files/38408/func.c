/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38408
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0]))))) : ((-(((((/* implicit */_Bool) 1635383005U)) ? (((/* implicit */unsigned int) var_1)) : (1635383005U)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((signed char) 2493935595U));
            var_11 ^= ((/* implicit */unsigned char) (~(min((((/* implicit */long long int) ((signed char) (unsigned short)31553))), (532754581994988257LL)))));
            var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5330289049052168876LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_2 [i_0] [i_1 + 1] [i_1]), (((/* implicit */short) arr_1 [i_0] [i_1])))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (arr_4 [i_0] [(signed char)17]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [(_Bool)1])))))))) ? ((-((-(arr_4 [i_0] [(short)21]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
        }
        arr_7 [i_0] = (i_0 % 2 == 0) ? (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (18851)))))) : (((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) - (18851))) + (20946))) - (16))))));
    }
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)31553)) - ((-(((/* implicit */int) var_4))))))) ? (min((((6478650198694492919ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) min(((unsigned short)26270), ((unsigned short)33989)))))) : (((/* implicit */unsigned long long int) var_1))));
}
