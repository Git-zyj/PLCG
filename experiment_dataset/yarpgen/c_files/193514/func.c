/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193514
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */int) ((unsigned int) ((5872226419331518148ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        var_14 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) % (-1688862574))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((-(arr_0 [i_0]))) >= (((/* implicit */int) ((arr_6 [16LL]) != (((/* implicit */int) (!(var_5))))))))))));
                    arr_8 [i_0] [i_1] [i_2] = ((min((arr_3 [i_2] [i_1] [(unsigned short)0]), (arr_3 [i_0] [i_1] [i_2]))) > ((+(arr_3 [i_0] [i_1] [i_2]))));
                    var_16 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((12574517654378033465ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3693))))))));
                    var_17 = ((/* implicit */long long int) var_2);
                }
            } 
        } 
    }
    var_18 = ((/* implicit */unsigned short) ((unsigned int) var_3));
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_2)), (var_7)))) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) var_3)) : ((~(((var_10) ? (9223372036854775790LL) : (((/* implicit */long long int) var_12))))))));
    var_20 -= ((((/* implicit */_Bool) (((((_Bool)1) ? (9223372036854775791LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-10494))))) << (((var_9) - (272559965)))))) || (var_11));
}
