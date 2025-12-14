/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212717
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
    var_16 = ((/* implicit */short) ((max((((((/* implicit */int) (_Bool)1)) < (var_0))), (var_4))) ? (min(((-(((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_4)))))) : (((/* implicit */int) max(((!(((/* implicit */_Bool) var_3)))), (min((var_10), ((_Bool)1))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 8; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) ((var_2) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)114)), (-9223372036854775781LL)))) ? (((((/* implicit */_Bool) (unsigned char)63)) ? (var_8) : (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) ? (15728640) : (((/* implicit */int) arr_0 [9U]))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned long long int) max((6813109755443255617LL), (7141122364953432118LL)));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) >> ((((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 + 1])))) + (8561)))))) : (((/* implicit */unsigned short) ((((/* implicit */int) var_10)) >> ((((((-(((/* implicit */int) arr_6 [i_0] [i_1] [i_1 + 1])))) + (8561))) - (19444))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (long long int i_4 = 1; i_4 < 6; i_4 += 4) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 8; i_6 += 1) 
                {
                    {
                        var_18 *= ((/* implicit */_Bool) (-(((/* implicit */int) ((short) (!(arr_19 [i_0] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1])))))));
                        arr_21 [i_0 - 1] [i_5] [i_5] [i_6] = min((((var_4) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_5] [6U] [i_5] [i_6 + 1])))), (((/* implicit */int) var_6)));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_7 = 1; i_7 < 8; i_7 += 4) /* same iter space */
    {
        arr_24 [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
        var_19 = (-(((/* implicit */int) var_3)));
        arr_25 [i_7 - 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned char)132)) % (arr_4 [i_7] [i_7] [i_7 - 1])))));
        var_20 = ((/* implicit */long long int) ((_Bool) (signed char)114));
    }
    var_21 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((unsigned char) var_0)), (((/* implicit */unsigned char) (signed char)103)))))) : ((+(1545747975U)))));
}
