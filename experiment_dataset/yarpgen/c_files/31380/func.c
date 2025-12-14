/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31380
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
    var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_10))) ? (var_12) : (((/* implicit */long long int) ((((/* implicit */int) ((-429692458) <= (((/* implicit */int) var_15))))) ^ (((((/* implicit */_Bool) (unsigned short)1943)) ? (var_6) : (var_6))))))));
    var_18 = ((/* implicit */short) (unsigned short)63601);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned short) arr_2 [i_0])))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            var_20 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_11)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) >= (arr_6 [i_0] [i_0])))))));
            var_21 = ((/* implicit */unsigned int) (signed char)-8);
            var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)1960)) : (((/* implicit */int) arr_0 [i_1])))))))));
            var_23 = ((/* implicit */long long int) ((int) (~(arr_5 [i_1] [i_0] [i_0]))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_24 ^= ((/* implicit */_Bool) ((arr_5 [i_0] [i_0] [i_2]) | (arr_5 [i_0] [i_0] [i_2])));
            arr_9 [i_2] [i_2] [i_0] = ((/* implicit */signed char) ((((int) arr_5 [i_0] [i_0] [i_0])) <= (((/* implicit */int) (signed char)80))));
            var_25 = ((/* implicit */unsigned short) (-(arr_3 [i_2])));
            var_26 = ((/* implicit */int) ((_Bool) arr_0 [i_2]));
            arr_10 [i_0] [i_2] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32767)) ? (arr_6 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        }
        var_27 = ((/* implicit */short) (unsigned short)1937);
    }
    for (unsigned short i_3 = 2; i_3 < 19; i_3 += 3) 
    {
        var_28 = ((int) (+(((/* implicit */int) arr_12 [i_3] [i_3 - 1]))));
        var_29 &= ((/* implicit */short) ((int) min((((/* implicit */int) arr_12 [i_3 + 2] [i_3 - 1])), (((arr_11 [16]) - (((/* implicit */int) (signed char)0)))))));
        /* LoopSeq 1 */
        for (int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_30 = ((/* implicit */short) ((int) ((int) ((((/* implicit */_Bool) (short)20014)) || (((/* implicit */_Bool) arr_11 [i_3]))))));
            arr_17 [i_4] [i_3] [i_4] = ((/* implicit */int) arr_14 [i_3 - 2] [i_4] [i_4]);
        }
    }
    var_31 = ((/* implicit */int) var_13);
}
