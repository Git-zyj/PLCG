/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20815
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
    var_10 = ((/* implicit */unsigned int) var_6);
    var_11 ^= ((/* implicit */_Bool) (~(var_7)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = (-(var_5));
        var_13 = max((max((min((9894261404520752115ULL), (((/* implicit */unsigned long long int) (signed char)-33)))), (((/* implicit */unsigned long long int) -7884624832362207498LL)))), (((/* implicit */unsigned long long int) var_4)));
    }
    for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_14 = max((max((((/* implicit */unsigned long long int) ((int) arr_1 [2ULL]))), (((((/* implicit */_Bool) var_3)) ? (3017585004574766095ULL) : (8552482669188799487ULL))))), (min((max((((/* implicit */unsigned long long int) var_8)), (arr_0 [i_1] [i_1]))), (((9894261404520752129ULL) << (((var_1) - (3333732207U))))))));
        var_15 ^= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_2 [i_1])))) ? (((/* implicit */unsigned int) ((((var_4) || (((/* implicit */_Bool) 3286250683465048474LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_6))))) : (((/* implicit */int) arr_2 [i_1]))))) : (((unsigned int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (var_1) : (((/* implicit */unsigned int) arr_3 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (short i_2 = 4; i_2 < 15; i_2 += 3) 
        {
            arr_6 [i_1] = ((/* implicit */short) var_0);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 4) 
            {
                for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    {
                        var_16 ^= ((/* implicit */short) ((arr_4 [i_2 - 4] [i_2 - 3] [i_2 + 3]) < (max((((/* implicit */unsigned int) var_9)), (var_1)))));
                        arr_12 [i_1] [i_1] = var_8;
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 18; i_5 += 2) /* same iter space */
                        {
                            arr_16 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_5)))) || (((((/* implicit */_Bool) (signed char)33)) && (((/* implicit */_Bool) var_0))))))), (max((((((/* implicit */long long int) ((/* implicit */int) (short)-29224))) | (-6542737364804472268LL))), (((((-3286250683465048475LL) + (9223372036854775807LL))) << (((arr_14 [i_1] [i_2 - 1] [i_1] [i_4] [i_1] [i_2 - 3]) - (1343180259)))))))));
                            var_17 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_9)), (((6824334563127831044ULL) * (7765823222187721798ULL)))));
                            arr_17 [i_3] = ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_6)), (var_8)))) % (var_3));
                            var_18 = ((((((/* implicit */_Bool) 2276300987U)) ? (9894261404520752124ULL) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-38)), (var_8)))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((2018666308U) | (((/* implicit */unsigned int) var_2)))) != (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))))))));
                            arr_18 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */unsigned int) max((8552482669188799487ULL), (((/* implicit */unsigned long long int) (unsigned char)233))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            arr_21 [i_1] [i_2 - 3] [i_3] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) + (arr_8 [i_2 - 3] [i_2 + 3] [i_2 + 3] [i_2 + 3]));
                            arr_22 [i_1] [i_2 - 4] [i_3] [i_1] [i_3] [i_1] |= ((/* implicit */_Bool) var_6);
                        }
                    }
                } 
            } 
        }
    }
}
