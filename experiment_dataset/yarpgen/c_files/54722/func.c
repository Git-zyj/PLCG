/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54722
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            var_19 *= ((/* implicit */unsigned int) min((max((arr_2 [i_1 + 1]), (max((arr_2 [i_0]), (((/* implicit */unsigned short) arr_0 [(unsigned short)14])))))), (((/* implicit */unsigned short) ((_Bool) arr_1 [i_1 - 1] [i_1 - 2])))));
            var_20 = ((/* implicit */short) min(((~(arr_1 [i_1 - 2] [i_1 - 1]))), ((~(arr_1 [i_1 - 2] [i_1 - 1])))));
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */long long int) (~(996166940259671619ULL)));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 2])) : (((/* implicit */int) var_3))))));
        }
        var_21 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) && (((/* implicit */_Bool) arr_4 [i_0] [i_0])))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) min((((/* implicit */unsigned int) (signed char)-16)), (415712373U)))))) : (arr_1 [(short)8] [i_0])));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] [16ULL] = min((((((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_4 [i_2] [i_2]) : (arr_7 [i_2]))) >> (((((((/* implicit */_Bool) 7931387812723543844ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) : (arr_4 [i_2] [i_2]))) - (173ULL))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_2]))))) % (((17450577133449879997ULL) * (((/* implicit */unsigned long long int) -3395358032130358282LL)))))));
        arr_12 [i_2] [i_2] = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (17450577133449879990ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) ((_Bool) 18446744073709551588ULL)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        var_23 = min((max((((/* implicit */unsigned long long int) arr_3 [i_3] [i_3])), (996166940259671618ULL))), (((/* implicit */unsigned long long int) min((arr_9 [i_3]), (arr_9 [i_3])))));
        arr_16 [i_3] [i_3] |= ((/* implicit */unsigned char) min(((-(arr_4 [i_3] [i_3]))), (((/* implicit */unsigned long long int) arr_0 [i_3]))));
    }
    var_24 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 17450577133449879970ULL))));
}
