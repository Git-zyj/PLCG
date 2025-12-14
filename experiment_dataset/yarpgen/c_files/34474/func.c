/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34474
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
    var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_6))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)49791)), (2141368299U)));
        arr_3 [i_0] &= ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (min((((/* implicit */int) var_7)), ((-2147483647 - 1))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 24; i_1 += 3) /* same iter space */
        {
            arr_7 [i_1 + 1] [i_0] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) -1418750436))) >= (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (short)7688))))))));
            var_15 = arr_0 [i_1];
        }
        for (int i_2 = 1; i_2 < 24; i_2 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27050)) ? (((/* implicit */int) (_Bool)1)) : (1418750426)));
            var_17 &= ((/* implicit */int) ((2676778604120207115ULL) << (((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))))), (9223372036854775805LL))) - (9223372036854775751LL)))));
            arr_10 [i_2] [i_2] [i_2] = ((/* implicit */short) (~(1082142715)));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_12 [i_0]))))) >= (((/* implicit */int) ((unsigned char) (signed char)0))))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
            {
                arr_16 [i_0] [i_0] [i_3] [i_4] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-62))));
                var_19 = ((/* implicit */_Bool) (~((~(((/* implicit */int) arr_12 [i_3]))))));
            }
            for (long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
            {
                arr_19 [i_0] [i_5] [i_5] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : ((-(-8171488058511556253LL)))));
                var_20 = ((/* implicit */unsigned int) ((((long long int) var_2)) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)117)) >> (((((/* implicit */int) (unsigned char)190)) - (176))))))));
            }
        }
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_20 [i_0] [i_0] = ((/* implicit */_Bool) (+(var_1)));
    }
    var_22 = ((/* implicit */_Bool) var_7);
    var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_12)))) + (max((((((/* implicit */unsigned long long int) 1418750467)) + (9793806682273738061ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))))))));
    var_24 &= ((/* implicit */short) var_7);
}
