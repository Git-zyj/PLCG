/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211112
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (min((((/* implicit */int) ((short) arr_1 [i_0]))), (((((/* implicit */_Bool) arr_1 [(signed char)0])) ? (((/* implicit */int) (unsigned short)46625)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) ((unsigned char) 4680109710144031966ULL))));
        var_16 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) & ((((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : ((~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (arr_0 [i_0] [i_0])))))));
        var_17 = ((/* implicit */unsigned short) (!(((_Bool) ((int) (unsigned short)10968)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            var_18 = ((/* implicit */short) (_Bool)1);
            arr_8 [i_1] [6ULL] = ((/* implicit */unsigned int) (+(arr_6 [i_1] [i_1])));
            arr_9 [i_1] [i_1] = ((/* implicit */int) ((unsigned char) arr_4 [i_2 + 1]));
            var_19 = ((/* implicit */signed char) (_Bool)1);
        }
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_20 = ((/* implicit */int) (+(arr_10 [i_1])));
            arr_14 [(unsigned short)10] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(var_9)))) ? (arr_12 [i_3] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [(unsigned short)10] [(short)6])))));
            arr_15 [i_1] = ((/* implicit */int) ((arr_10 [i_3]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1] [i_3])))));
        }
        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_21 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) 18U))));
        }
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (unsigned char)221))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
        var_25 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) arr_5 [i_5] [i_5])))));
        var_26 = ((/* implicit */short) (_Bool)1);
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        var_27 &= ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_6] [i_6])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1888)) ? (arr_11 [i_6] [(unsigned short)20] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))), ((-(((/* implicit */int) arr_23 [i_6] [i_6]))))));
        arr_25 [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [6LL] [i_6])) >= (((((/* implicit */int) (unsigned short)40264)) << (((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) var_8))));
    }
    var_28 = ((/* implicit */signed char) var_1);
}
