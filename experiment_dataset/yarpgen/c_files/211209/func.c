/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211209
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
    var_10 = ((/* implicit */unsigned char) ((signed char) var_0));
    var_11 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) (unsigned char)12)) << (((((/* implicit */int) (unsigned char)241)) - (234))))) : (((/* implicit */int) (signed char)(-127 - 1))))) | (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-31)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)33)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)223)) ^ (((/* implicit */int) (unsigned char)32))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) (unsigned char)223))))) : (arr_2 [i_0 + 1] [i_0 - 1])));
    }
    for (signed char i_1 = 2; i_1 < 13; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = -140737488355328LL;
        arr_7 [i_1 - 1] |= ((((/* implicit */_Bool) (signed char)113)) && (((/* implicit */_Bool) (unsigned char)50)));
        arr_8 [4U] |= ((/* implicit */unsigned long long int) ((int) (+(((/* implicit */int) ((unsigned char) -5487856951424477383LL))))));
    }
    for (signed char i_2 = 2; i_2 < 13; i_2 += 4) /* same iter space */
    {
        var_13 += ((unsigned long long int) ((var_9) > (arr_1 [i_2 - 1] [i_2 - 2])));
        /* LoopNest 3 */
        for (long long int i_3 = 1; i_3 < 11; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    {
                        arr_18 [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((short) 9223372036854775807LL)))));
                        arr_19 [i_3] = ((/* implicit */signed char) 6825779836286684380LL);
                        var_14 = max((((/* implicit */unsigned long long int) (signed char)-13)), (16111050425898740969ULL));
                    }
                } 
            } 
        } 
    }
    var_15 = ((/* implicit */unsigned long long int) var_1);
}
