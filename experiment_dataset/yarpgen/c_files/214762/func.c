/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214762
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
    var_17 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_2), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (((-9223372036854775784LL) & (((/* implicit */long long int) ((/* implicit */int) var_10))))))) ^ (((/* implicit */long long int) ((/* implicit */int) var_2)))));
    var_18 = ((/* implicit */long long int) var_9);
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) * (((/* implicit */int) (unsigned short)11813))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_5))))) : (arr_2 [i_0] [i_0 - 2])))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0] [i_0 - 2])), (var_0)))) * (((var_16) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))))) : (-9223372036854775784LL)));
        var_19 = (!(((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_3 [i_0]))))) <= (((/* implicit */int) ((_Bool) 9223372036854775784LL))))));
        var_20 = ((/* implicit */_Bool) (unsigned short)56551);
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0])) < (((/* implicit */int) arr_5 [i_0 - 1]))));
            var_21 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_1] [i_0])) > (((/* implicit */int) var_0))))) : ((~(((/* implicit */int) var_2))))));
            var_22 = ((/* implicit */_Bool) (+(arr_3 [i_0 - 2])));
        }
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_23 = ((arr_1 [i_0 - 2] [i_0 - 2]) ? (((((/* implicit */_Bool) max((arr_6 [i_0] [3LL] [i_2]), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)849)) && (arr_1 [i_0] [i_2]))))) : (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0]))) : (var_12))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_2])))));
            var_24 = 2299324493176241806LL;
            arr_10 [i_0] = ((((/* implicit */_Bool) -1343753486135767226LL)) ? ((~(-9223372036854775776LL))) : ((((!(((/* implicit */_Bool) arr_0 [i_0] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34077))) : (((((/* implicit */_Bool) 1343753486135767234LL)) ? (var_8) : (arr_0 [i_0] [i_2]))))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_16)) << (((/* implicit */int) (_Bool)1)))))) ^ (((/* implicit */int) arr_1 [i_0] [i_3])))))));
            arr_13 [i_0] [i_0] = ((/* implicit */long long int) var_1);
            var_26 &= ((/* implicit */long long int) var_0);
            arr_14 [i_0] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_3])) ^ (((/* implicit */int) arr_5 [i_0 - 2]))))) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [(unsigned short)1]))) : (-2793454208583354385LL))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (-9223372036854775784LL) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775784LL))))) : (((/* implicit */int) var_5))))));
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (min((-3252693289955869705LL), (((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_0] [(unsigned short)5] [i_3]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_8 [(unsigned short)2] [i_0 - 2] [(unsigned short)16])) : (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)65523)))))))));
        }
    }
    for (long long int i_4 = 1; i_4 < 13; i_4 += 2) 
    {
        var_28 = var_10;
        arr_19 [i_4] = ((((arr_0 [i_4 + 3] [i_4 - 1]) | (arr_0 [i_4 + 3] [i_4 - 1]))) > (max(((-(arr_16 [i_4]))), (var_15))));
        arr_20 [i_4] = ((/* implicit */long long int) ((_Bool) var_0));
    }
}
