/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221841
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)992)) ? (1129684539) : (((/* implicit */int) (short)-992)))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 -= min((((/* implicit */long long int) (~(((/* implicit */int) (short)982))))), (((long long int) var_4)));
            arr_8 [4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0] [i_1])), ((short)-992)))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_1]))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */long long int) 2130706432)) : (arr_6 [i_0])))))));
        }
        /* LoopSeq 1 */
        for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_4)))) % (min((((/* implicit */unsigned long long int) var_0)), (576460752303423488ULL)))))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [i_2])) != (((/* implicit */int) arr_5 [i_2 - 1] [i_2 + 1] [(signed char)7]))))) : (((/* implicit */int) (signed char)1)))))));
            var_17 ^= ((/* implicit */int) arr_6 [i_0]);
            var_18 = ((((/* implicit */_Bool) (signed char)96)) ? (min((-1660912153), (((/* implicit */int) arr_5 [i_0] [i_2] [i_0])))) : (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])));
            var_19 -= ((/* implicit */unsigned char) arr_3 [5LL] [i_0]);
            arr_11 [i_2 - 1] [7U] = ((/* implicit */unsigned char) ((int) max((((arr_7 [i_0] [3U]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (341255081U))), (((/* implicit */unsigned int) arr_9 [i_2 - 1] [i_2 + 1] [i_2 - 1])))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) /* same iter space */
    {
        var_20 = ((_Bool) (short)1006);
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((int) arr_2 [i_3])))));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) (short)-1010))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_13 [i_3]) >= (((/* implicit */long long int) arr_3 [0] [0])))))) : (((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (((/* implicit */long long int) 4294705152U)) : (arr_6 [i_3])))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_23 ^= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) var_13)), (3248033531743114215ULL)));
        arr_19 [i_4] = ((/* implicit */unsigned int) 3248033531743114215ULL);
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */int) (signed char)15)), ((-(((/* implicit */int) (short)-32577))))));
    }
}
