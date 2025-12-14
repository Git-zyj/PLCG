/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24225
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
    var_12 = ((/* implicit */long long int) min((var_12), (var_9)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((int) min((((/* implicit */long long int) ((var_7) < (((/* implicit */long long int) 2845047774U))))), (arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */signed char) 6201224585329817269ULL);
        var_14 *= ((/* implicit */signed char) ((unsigned int) ((min((((/* implicit */long long int) arr_1 [8ULL] [i_0])), (var_7))) & (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [(signed char)16]) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))));
    }
    /* LoopSeq 2 */
    for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_7 [i_1] = ((((/* implicit */_Bool) 18ULL)) ? (((/* implicit */long long int) ((((/* implicit */int) ((arr_4 [i_1] [i_1]) > (-8153983468734800423LL)))) >> (((((unsigned int) arr_5 [i_1])) - (873313205U)))))) : (max((((/* implicit */long long int) 1232526418)), (max((-34107982235169110LL), (((/* implicit */long long int) arr_2 [i_1] [i_1])))))));
        var_15 += ((/* implicit */short) max((((/* implicit */long long int) (_Bool)0)), (((((/* implicit */_Bool) 6079373830530793338ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (8153983468734800422LL)))));
        var_16 ^= ((/* implicit */unsigned int) (-(((0ULL) & (((/* implicit */unsigned long long int) ((unsigned int) 3813036848U)))))));
        arr_8 [i_1] = ((/* implicit */long long int) max((((((/* implicit */int) ((arr_5 [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) % (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) != (((/* implicit */int) (signed char)-21))))))), ((-(((/* implicit */int) (signed char)43))))));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) 1247283208U);
        arr_13 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16383))) : (min((arr_11 [i_2] [i_2]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (0U))))))));
        arr_14 [i_2] [i_2] = ((/* implicit */_Bool) arr_11 [i_2] [i_2]);
    }
    var_17 = ((/* implicit */long long int) max((var_17), (-3515077369866362014LL)));
}
