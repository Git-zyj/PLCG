/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245045
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) 5595331148409298452LL)) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [1U]))))))));
                arr_5 [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (((+(arr_2 [i_1] [i_0] [i_0]))) / (((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) ? (arr_2 [i_0] [(short)9] [(short)9]) : (((/* implicit */long long int) var_7))))))) ? ((((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((/* implicit */int) (short)-1))))) : (((((arr_0 [5LL]) != (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (min((-1239827072857390344LL), (((/* implicit */long long int) arr_1 [i_0] [i_1]))))))));
                arr_6 [9U] [9U] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) var_1))))))))) ? (7628022970331171234ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    var_14 ^= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))) : (((((/* implicit */_Bool) 1078810834173084625LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25186))) : (-1239827072857390344LL)))))));
                    var_15 += ((/* implicit */short) ((max((((/* implicit */long long int) ((_Bool) arr_9 [i_0] [i_1]))), (-5595331148409298452LL))) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
                    var_16 &= ((/* implicit */short) max((((((/* implicit */_Bool) min((-1239827072857390344LL), (((/* implicit */long long int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193)))))) : ((+(-1239827072857390344LL))))), (arr_9 [i_0] [i_0])));
                }
                for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    var_17 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_4 [i_1 + 1] [i_1 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)250)))))) | ((+(var_9)))));
                    arr_15 [i_3] [10U] [i_0] |= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((6225974208934342152LL) - (6225974208934342174LL)))) ? (((/* implicit */unsigned long long int) max((arr_13 [i_1] [i_0]), (((/* implicit */int) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) arr_13 [i_3] [i_0])) ? (arr_14 [1] [i_1 - 1] [i_1] [(signed char)3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_3]))))))), (((/* implicit */unsigned long long int) (+(arr_9 [(unsigned short)4] [i_1]))))));
                    var_18 -= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_0]);
                    arr_16 [i_0] = ((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) var_3);
}
