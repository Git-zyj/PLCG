/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227120
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
    var_16 = var_6;
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))), (min((((/* implicit */int) arr_0 [i_0] [i_0])), ((-(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_3 [i_1] [i_1])), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_5 [i_1] [i_1] [i_0])), (arr_2 [i_0]))))))) ? ((-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : (((/* implicit */int) arr_1 [i_1] [i_2])))))) : (arr_4 [i_0] [i_1 + 2] [i_1 + 2])));
                    var_19 = ((((arr_1 [i_0] [i_0]) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) arr_0 [i_0] [i_2]))))) : (max((arr_2 [i_0]), (((/* implicit */long long int) arr_4 [i_0] [6ULL] [i_0])))))) >= (((/* implicit */long long int) ((((/* implicit */int) ((-1279453641) == (((/* implicit */int) arr_5 [i_2] [i_1] [i_0]))))) % (((((/* implicit */_Bool) (signed char)126)) ? (744394505) : (((/* implicit */int) arr_1 [i_0] [i_0]))))))));
                    arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                    var_20 += ((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2]);
                    var_21 = ((/* implicit */_Bool) max((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-5200962844091447963LL))), (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (arr_2 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2]))))))), ((+(min((((/* implicit */long long int) arr_4 [i_2] [i_2] [i_2])), (arr_2 [i_0])))))));
                }
            } 
        } 
    }
    var_22 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_0), (var_13)))) << ((((+(((/* implicit */int) var_7)))) - (40233)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_11)) && (var_6)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (var_1)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((signed char) var_7)))))));
}
