/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246799
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
    for (unsigned short i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 1])), ((-(1708877950)))))) ? ((+((~(((/* implicit */int) arr_2 [(short)8])))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_1 [i_0] [(unsigned short)3])))) : (((/* implicit */int) arr_1 [12] [i_0])))))))));
        arr_3 [(unsigned char)12] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 2] [i_0 - 1]))) ^ (-7506291105095942981LL))) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), (((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_0 + 1]))))))));
    }
    var_13 = ((/* implicit */unsigned int) -1757218733932744592LL);
    var_14 |= ((/* implicit */unsigned short) var_7);
    var_15 = ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        arr_7 [10U] |= ((/* implicit */unsigned long long int) arr_6 [10ULL]);
        var_16 += ((/* implicit */_Bool) (unsigned char)85);
    }
    for (unsigned short i_2 = 4; i_2 < 6; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_13 [i_2] [(unsigned char)5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-18776))))) ? (var_8) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (unsigned char)96))))))) ? (((((var_8) != (-25567867))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            arr_14 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (max((max((((/* implicit */long long int) arr_6 [i_2])), (var_0))), (((/* implicit */long long int) ((unsigned char) var_8)))))));
            arr_15 [4ULL] = (!(((/* implicit */_Bool) ((long long int) 5429991725002962678ULL))));
        }
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            var_17 = ((/* implicit */long long int) var_7);
            var_18 = ((/* implicit */long long int) var_3);
        }
        for (short i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (_Bool)1)), (-2147483644)));
            arr_21 [i_2] = ((/* implicit */_Bool) 25567867);
        }
        var_20 ^= ((/* implicit */unsigned long long int) ((6136778625175256841LL) != (((/* implicit */long long int) -2016171073))));
    }
}
