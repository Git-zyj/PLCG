/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29488
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
    var_18 = ((/* implicit */unsigned long long int) var_0);
    var_19 *= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        arr_2 [(_Bool)1] = (~(((/* implicit */int) (signed char)63)));
        var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)60))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3610859556112454964ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (arr_0 [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) + (((/* implicit */int) arr_1 [i_1]))))) : (max(((~(3610859556112454983ULL))), (((/* implicit */unsigned long long int) arr_3 [15] [i_1])))));
        var_22 = ((/* implicit */long long int) ((_Bool) (~(((((/* implicit */_Bool) arr_0 [12U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (14835884517597096652ULL))))));
        var_23 = ((long long int) 3610859556112454985ULL);
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */unsigned long long int) 3552898269U)) >= (8565141453681850681ULL)))) | (((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_3])) ? (arr_9 [(signed char)2] [6ULL] [i_4 + 1]) : (((/* implicit */int) arr_12 [(_Bool)1] [i_3] [i_3])))))), (((/* implicit */int) ((((/* implicit */int) max((arr_7 [i_4]), (((/* implicit */unsigned char) arr_1 [(_Bool)1]))))) != (((/* implicit */int) ((_Bool) 3610859556112454991ULL))))))));
                        arr_13 [i_1] [(_Bool)1] [i_2] [(_Bool)1] [i_3] = (~(((/* implicit */int) (_Bool)1)));
                        var_25 -= ((((((/* implicit */int) (signed char)63)) ^ (((/* implicit */int) (_Bool)0)))) - ((~(((/* implicit */int) arr_12 [i_4 - 1] [8ULL] [i_3 + 1])))));
                        arr_14 [i_3] [i_2] [i_3] [i_4 - 2] [18ULL] = ((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((2261300670495806497ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))));
                        var_26 *= max((8105604677169545110ULL), (((((_Bool) -8762162499897546422LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -6721689028200299065LL)))))) : (min((8105604677169545110ULL), (((/* implicit */unsigned long long int) arr_10 [13ULL] [i_3] [16ULL] [i_1])))))));
                    }
                } 
            } 
        } 
        arr_15 [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_7 [i_1])) - (87)))))));
    }
}
