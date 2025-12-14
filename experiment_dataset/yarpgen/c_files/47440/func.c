/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47440
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47440 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47440
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
    var_20 = ((/* implicit */signed char) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = 1625354300U;
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
        {
            arr_8 [i_0] = ((/* implicit */short) max((((/* implicit */long long int) (short)(-32767 - 1))), (min((arr_5 [i_1]), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_18)))))))));
            arr_9 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) || (((((/* implicit */int) (short)8918)) == (((/* implicit */int) arr_6 [(short)11] [i_1] [i_0]))))));
            arr_10 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
            arr_11 [i_1 - 1] [(short)14] = ((/* implicit */unsigned char) (-(var_10)));
        }
        for (short i_2 = 2; i_2 < 23; i_2 += 4) /* same iter space */
        {
            arr_15 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 578396640132259415LL)) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (short)-11748))));
            arr_16 [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_2 - 2])), (var_13)));
            arr_17 [i_0] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */int) var_7)) ^ (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_1))))))));
        }
        for (short i_3 = 2; i_3 < 23; i_3 += 4) /* same iter space */
        {
            arr_21 [(signed char)12] = ((/* implicit */unsigned int) var_6);
            arr_22 [i_0] [i_0] &= ((/* implicit */short) var_15);
        }
        arr_23 [(signed char)17] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_18)) ? (arr_1 [i_0]) : ((~(((/* implicit */int) arr_19 [i_0])))))) < (((/* implicit */int) (signed char)96))));
        arr_24 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_17))));
        arr_25 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (arr_14 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32756)))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_0))))) : (-5592829428810840284LL));
    }
    var_21 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (578396640132259393LL))))))) : (((/* implicit */int) var_7))));
    var_22 = ((/* implicit */short) -578396640132259395LL);
    var_23 = ((/* implicit */signed char) (short)-11748);
}
