/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192266
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
    var_16 = ((/* implicit */signed char) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_2 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_0]))))) >= (3113801319103802184LL));
        arr_3 [i_0] = ((/* implicit */long long int) (((!(arr_1 [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_1 [i_0]))) : (((/* implicit */int) var_8))));
        var_17 = ((/* implicit */unsigned long long int) var_4);
        /* LoopNest 3 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_13 [i_3] [i_2] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */short) ((_Bool) (!(((/* implicit */_Bool) arr_10 [i_1] [i_1] [3ULL] [i_2])))));
                        arr_14 [i_0] [i_1 - 1] [i_2] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -3113801319103802168LL)) ? (3113801319103802187LL) : (-4954188044492904584LL)))) ? (-3113801319103802189LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [18LL] [i_3])) >> (((/* implicit */int) arr_1 [i_1])))))));
                    }
                } 
            } 
        } 
        arr_15 [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0]))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        var_18 += ((/* implicit */short) (-(((((long long int) -5935517095148184399LL)) - (((/* implicit */long long int) ((((/* implicit */_Bool) -3113801319103802189LL)) ? (arr_18 [i_4]) : (((/* implicit */int) (_Bool)0)))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!((!(((/* implicit */_Bool) ((-1) ^ (((/* implicit */int) (unsigned short)42322))))))))))));
            arr_22 [i_5] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) arr_20 [i_4])) / (8582179378699171144ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_5]))))), (((/* implicit */unsigned long long int) 3021699809532251598LL))));
        }
    }
    for (signed char i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        arr_25 [i_6] [i_6] |= ((/* implicit */signed char) arr_19 [i_6] [i_6]);
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_18 [i_6])) || (var_14))), (((((/* implicit */_Bool) (unsigned short)42322)) && ((_Bool)1))))))));
        var_21 = ((/* implicit */int) ((unsigned long long int) min(((short)-3529), (((/* implicit */short) (_Bool)0)))));
    }
    var_22 = (!(((/* implicit */_Bool) var_2)));
}
