/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44516
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
    var_10 = ((/* implicit */signed char) var_5);
    var_11 = var_4;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            arr_6 [i_0] = ((unsigned short) ((int) 4610560118520545280LL));
            var_12 = ((/* implicit */int) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [4])))))));
        }
        for (signed char i_2 = 2; i_2 < 8; i_2 += 4) 
        {
            var_13 |= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [(signed char)2])) : (((/* implicit */int) arr_9 [i_0]))))) ? ((-(var_0))) : (4610560118520545280LL))));
            arr_10 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((((/* implicit */int) arr_1 [i_0])), (arr_2 [i_0])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2]))) & (4610560118520545280LL))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))))), (((/* implicit */long long int) var_7))));
            arr_11 [i_0] &= ((/* implicit */int) (short)16380);
            var_14 -= ((/* implicit */short) ((((((/* implicit */int) ((unsigned char) arr_5 [i_0]))) < (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_2 + 2])) ? (((/* implicit */int) (unsigned char)255)) : (var_1))))) ? (((((/* implicit */int) arr_8 [i_2] [i_2] [i_2 - 2])) << ((((((-(((/* implicit */int) arr_3 [i_2] [i_2] [i_2])))) + (10044))) - (15))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
            {
                arr_14 [i_2] [(short)0] [i_2] [i_2] &= ((int) var_5);
                var_15 ^= (-(((/* implicit */int) ((signed char) arr_3 [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned short)15360)) ? (((/* implicit */long long int) var_9)) : (var_2))));
            }
        }
        var_17 = ((/* implicit */unsigned short) (!((!(((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) < (var_6)))))));
    }
    for (short i_4 = 0; i_4 < 15; i_4 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_15 [i_4] [i_4])) ? (var_2) : (arr_15 [i_4] [i_4]))) < ((-(var_0)))));
        arr_17 [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */int) arr_16 [i_4]))))), (max((var_3), (((/* implicit */long long int) arr_16 [i_4])))))))));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_18 [4] [i_5])) : (((/* implicit */int) arr_18 [i_5] [i_5]))));
        var_20 *= ((/* implicit */_Bool) (+(((/* implicit */int) arr_19 [i_5]))));
        arr_20 [(short)7] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned short)54485)) < (((/* implicit */int) var_8)))) ? (((/* implicit */int) arr_18 [i_5] [i_5])) : (((int) var_7))));
    }
    var_21 = ((((((/* implicit */long long int) (+(((/* implicit */int) var_4))))) & (var_6))) + (var_2));
}
