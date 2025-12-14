/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196677
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((3091469386581997331ULL) << (((((/* implicit */int) (short)-11141)) + (11182)))));
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> (((((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0])))) + (12667)))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (15355274687127554259ULL)));
        var_21 = ((/* implicit */long long int) (-(min((((3091469386581997356ULL) << (((((/* implicit */int) arr_4 [i_1])) + (30917))))), (((/* implicit */unsigned long long int) (-(var_4))))))));
        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (((((/* implicit */_Bool) var_17)) ? (3091469386581997381ULL) : (((/* implicit */unsigned long long int) arr_5 [i_1]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 15355274687127554256ULL)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_1])))) < (((/* implicit */int) var_16)))))) : (((var_5) >> (((((((/* implicit */_Bool) (unsigned char)245)) ? (213468600634908304ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))))) - (213468600634908294ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 19; i_3 += 1) 
            {
                {
                    arr_11 [i_3] [i_2] [i_1] &= ((min((arr_5 [i_2]), (arr_5 [i_2]))) & (((/* implicit */long long int) ((unsigned int) ((_Bool) 11683679429556713198ULL)))));
                    var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7342467523642202283LL)) ? (-9LL) : (arr_5 [i_1])));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_15 [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((-2680814396073618684LL) & (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))) || (((/* implicit */_Bool) ((short) arr_4 [i_2])))));
                        arr_16 [i_4] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)27356))) & (var_17))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2] [i_1])))));
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_5)));
                    }
                }
            } 
        } 
    }
    for (short i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) (((-((-(17531755299198487016ULL))))) != (((/* implicit */unsigned long long int) arr_6 [i_5] [i_5]))));
        arr_20 [i_5 - 1] = max((var_1), (((/* implicit */long long int) 3644328237U)));
    }
    var_25 = max((var_8), (((((914988774511064599ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) ? (2680814396073618685LL) : (min((var_15), (((/* implicit */long long int) 501582135U)))))));
}
