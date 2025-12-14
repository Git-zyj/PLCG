/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49885
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
    var_12 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((((/* implicit */unsigned int) var_3)) == (343592954U)))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)12)) << (((((/* implicit */int) (signed char)32)) - (27)))))) ? (min((var_3), (((/* implicit */int) var_9)))) : (((/* implicit */int) var_9))))));
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (1377201136U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) < (max((((/* implicit */unsigned int) var_7)), (1131524334U)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_2)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 1377201106U)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_14 = ((((/* implicit */int) (signed char)-32)) & (((/* implicit */int) (signed char)71)));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) / (var_3)))) : ((~(6298672644102312731LL)))));
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) 15164683525348720151ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_1] [i_1]))))) + (max((((/* implicit */long long int) arr_3 [i_1] [i_1])), (var_5)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                for (int i_4 = 3; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_17 = ((/* implicit */signed char) max((((/* implicit */int) (signed char)-35)), (((((/* implicit */_Bool) arr_13 [i_4] [i_3] [i_3] [i_3] [i_1] [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(signed char)5] [(unsigned char)1] [i_1]))))));
                        var_18 = ((/* implicit */unsigned char) var_7);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) min((min((var_5), (((/* implicit */long long int) 3163442954U)))), ((((_Bool)1) ? (-9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))))))))));
    }
}
