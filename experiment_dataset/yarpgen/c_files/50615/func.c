/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50615
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50615 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50615
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
    var_12 -= var_5;
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_0 [4])) ? (((((/* implicit */_Bool) arr_0 [8])) ? (((/* implicit */int) arr_1 [(short)8] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((/* implicit */int) arr_1 [(signed char)13] [i_0]))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_0] = ((signed char) arr_3 [i_0]);
            var_14 = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned short)6775))))));
            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) ((unsigned short) (unsigned short)58773))) : (((/* implicit */int) var_3))));
        }
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_16 = ((/* implicit */short) (((~(((/* implicit */int) var_11)))) < (((/* implicit */int) ((-1424342132) >= (((/* implicit */int) arr_6 [i_2])))))));
        var_17 |= ((/* implicit */signed char) ((arr_6 [i_2]) ? (((((/* implicit */_Bool) ((signed char) (unsigned short)58755))) ? (((/* implicit */int) ((unsigned short) var_10))) : (((1424342102) - (1424342102))))) : ((+((-(((/* implicit */int) arr_6 [9]))))))));
        arr_8 [i_2] = ((/* implicit */int) arr_7 [i_2] [i_2]);
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_18 |= ((/* implicit */int) var_10);
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            var_19 |= arr_4 [8] [i_4] [6U];
            var_20 = ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)58773)), (var_9)))) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)6775)) && (((/* implicit */_Bool) 1424342102))))));
        }
        for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            arr_17 [i_3] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) max((1424342131), (((/* implicit */int) (unsigned short)6775))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50628))) / (4289808548U)))));
            arr_18 [16] [(signed char)9] [(signed char)9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) ? (((int) 87773040)) : ((~(-1424342103)))));
        }
    }
    for (short i_6 = 4; i_6 < 13; i_6 += 1) 
    {
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (arr_11 [i_6 + 2] [i_6 - 3] [i_6])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((((/* implicit */int) var_11)) == (((/* implicit */int) var_11))))) : (arr_11 [i_6 - 4] [i_6 - 4] [i_6 - 2])))) : (((((/* implicit */long long int) ((int) (short)32756))) | (((long long int) (signed char)-81))))));
        arr_23 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_6 - 3]))))) ? (((((/* implicit */unsigned int) arr_10 [i_6 + 3])) / (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
        /* LoopSeq 1 */
        for (unsigned int i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            arr_27 [i_6] [i_6] = (~(((/* implicit */int) var_5)));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((int) -1424342102))) >= ((~(arr_12 [i_6] [i_6]))))))));
        }
        arr_28 [i_6] [i_6] = ((/* implicit */signed char) min((((/* implicit */long long int) 1785690210)), (2531348585083298882LL)));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((((/* implicit */_Bool) max((var_6), (((/* implicit */int) (signed char)-75))))) ? (max((var_1), (((/* implicit */unsigned int) var_2)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))))) << (((-1116501339) + (1116501350))))))));
    var_24 |= ((/* implicit */signed char) var_8);
}
