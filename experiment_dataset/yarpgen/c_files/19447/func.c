/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19447
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) arr_0 [i_0 + 1]))));
            var_18 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (_Bool)1))))));
        }
        for (unsigned int i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_7 [(signed char)18] [i_0] [i_2] = ((/* implicit */_Bool) (~(638094394985182291ULL)));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_10 [i_3] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? ((+(((/* implicit */int) var_13)))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_0]))));
                var_19 = ((/* implicit */int) ((unsigned short) arr_6 [i_2] [i_0 - 2] [i_2 - 2]));
                var_20 -= ((/* implicit */unsigned char) (unsigned short)12169);
            }
            arr_11 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)12169))));
        }
        for (unsigned int i_4 = 3; i_4 < 19; i_4 += 3) /* same iter space */
        {
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0 - 2] [i_4 + 1])) ? (arr_12 [i_0] [i_0 + 1] [i_4 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            arr_14 [i_0] [i_0] = ((/* implicit */int) var_7);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0] [18U])))))));
        }
        arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)12182)))))) < (var_16)));
        var_23 = ((/* implicit */long long int) (-(var_11)));
    }
    var_24 = ((((/* implicit */_Bool) (unsigned short)12182)) ? (-2147483647) : (536862720));
    var_25 = ((/* implicit */int) min((max((min((var_5), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) max((var_15), (var_6)))))), (((/* implicit */unsigned int) var_8))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_5 = 1; i_5 < 19; i_5 += 3) 
    {
        var_26 -= ((/* implicit */short) arr_16 [i_5 + 1] [i_5]);
        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((var_0) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5 + 1]))))))));
        arr_20 [i_5] [i_5] &= ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_16 [i_5] [(signed char)17])) == (((/* implicit */int) var_2))))));
    }
    var_28 = ((/* implicit */short) var_4);
}
