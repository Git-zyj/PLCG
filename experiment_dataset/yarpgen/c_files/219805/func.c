/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219805
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
    for (long long int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [0ULL] |= ((/* implicit */long long int) ((short) arr_1 [8U]));
        arr_3 [(short)10] &= ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_1 [(short)14]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_1 [4])) ? (arr_1 [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)18] [i_0])))))))) : ((~(((((/* implicit */_Bool) arr_0 [(short)12] [i_0 + 1])) ? (var_11) : (607506146029956199LL)))))));
        var_19 = ((/* implicit */long long int) var_0);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 16; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_1]))));
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 12; i_3 += 2) 
            {
                {
                    arr_14 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109))));
                    arr_15 [i_2 - 1] [i_1] = ((/* implicit */long long int) (unsigned char)6);
                    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [(unsigned short)10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_1] [1ULL] [i_1]))))) : (arr_13 [i_1] [i_2 + 1] [i_3])));
                }
            } 
        } 
        var_21 = var_3;
        arr_16 [i_1] = ((/* implicit */_Bool) ((long long int) arr_11 [i_1] [10LL] [i_1] [i_1]));
        var_22 |= ((/* implicit */int) ((_Bool) (short)22099));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_17 [i_4] [i_4]))));
        arr_20 [i_4] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) -368434711)) ? (2251799813681152LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (789731612) : (-789731612)))))));
    }
    for (short i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
    {
        var_24 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_5] [i_5]))));
        arr_23 [i_5] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_5] [i_5]))) : (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_5] [i_5] [i_5]))) ^ (arr_4 [i_5]))))));
    }
}
