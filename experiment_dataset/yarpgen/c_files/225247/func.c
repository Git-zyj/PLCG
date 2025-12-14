/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225247
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) max((min((((/* implicit */int) ((unsigned short) var_14))), (var_9))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_1 [i_0]))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0])), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_7))))));
        var_19 = ((/* implicit */int) max((max((((/* implicit */long long int) arr_1 [i_0])), (arr_0 [i_0] [i_0]))), (((/* implicit */long long int) ((-1) ^ (((/* implicit */int) (signed char)64)))))));
        var_20 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_21 &= arr_1 [i_0];
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) ((unsigned char) ((int) var_5)));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((14942211129633944497ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))) ? (max((3504532944075607098ULL), (((/* implicit */unsigned long long int) 2147483647)))) : (3504532944075607127ULL)));
            var_23 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) (!(var_2)))), (max((((/* implicit */int) arr_8 [i_1])), (var_11)))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) var_3))))) & (max((((/* implicit */unsigned long long int) arr_9 [i_1] [i_2] [i_2])), (var_6))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_10 [i_1])))) / (((3504532944075607109ULL) >> (((/* implicit */int) (unsigned char)33))))))));
            arr_11 [i_1] = ((/* implicit */long long int) ((min((arr_6 [i_1]), (arr_6 [i_2]))) << ((((+(((/* implicit */int) arr_10 [i_1])))) - (20581)))));
            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_12))))) > (max((((/* implicit */unsigned long long int) arr_5 [i_1])), (var_6))))))));
            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) arr_10 [i_1])))), (((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) var_3))))) < (((/* implicit */int) var_13)))))))));
        }
        arr_12 [i_1] = ((((/* implicit */int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_12))))))) > (((/* implicit */int) arr_5 [i_1])));
    }
    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
    var_27 &= ((/* implicit */int) max((((_Bool) max((var_5), (((/* implicit */unsigned int) var_15))))), (((_Bool) ((var_5) / (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
    var_28 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */signed char) var_15)), (var_16))))), (var_6)));
}
