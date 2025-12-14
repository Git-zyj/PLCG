/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31872
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
    var_12 += ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) > (((/* implicit */int) var_2))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_1 [i_0])), (((unsigned long long int) var_4))));
        arr_4 [(short)6] [(_Bool)1] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (_Bool)0))))));
        var_14 -= ((/* implicit */int) ((_Bool) ((_Bool) ((signed char) (short)-24273))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1] [i_1]))) ? ((+(arr_3 [i_1] [i_1]))) : (max((arr_3 [i_1] [i_1]), (arr_3 [i_1] [i_1]))))))));
        arr_8 [i_1] [i_1] &= ((/* implicit */_Bool) max((((/* implicit */int) var_7)), (min((((/* implicit */int) (short)-1)), (var_9)))));
    }
    /* LoopSeq 1 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_12 [(unsigned short)5] [i_2] = ((/* implicit */signed char) ((unsigned int) max(((short)-11638), (((/* implicit */short) (_Bool)1)))));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_2])) * (((/* implicit */int) arr_10 [i_2]))))) | (((((/* implicit */_Bool) -1LL)) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_2 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [(unsigned short)10])) <= (((/* implicit */int) var_3))))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) 6899691599325743532ULL);
        var_18 &= ((/* implicit */_Bool) var_7);
        var_19 += ((/* implicit */int) arr_14 [i_3] [i_3]);
    }
    /* vectorizable */
    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
    {
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((long long int) -533217602)) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_4] [i_4])) * (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)-10973)) : (((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    var_22 += ((/* implicit */int) 2305843009213693948LL);
}
