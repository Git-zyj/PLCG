/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193805
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
    var_11 = (!(max(((_Bool)1), ((_Bool)1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 2; i_0 < 6; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 += ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_0) ? (2910226616738741690ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) min(((_Bool)0), (arr_1 [i_0])))) : (((/* implicit */int) min((arr_5 [i_0] [i_1] [i_2]), (var_1))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1))))), (min((7375984503151593393ULL), (arr_2 [i_2])))))));
                    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_9))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1] [i_2]))) ^ (14040763376988578513ULL))))))) << ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_4] = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) && (var_7))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14040763376988578513ULL)) || (arr_8 [i_4])))) : (((/* implicit */int) ((var_7) && ((_Bool)1))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) max(((_Bool)0), (var_5)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                                var_14 += ((/* implicit */_Bool) ((((min((arr_0 [i_0] [i_0]), (var_5))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3] [(_Bool)1])), (var_8))))) >> (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (max((arr_9 [i_0] [i_1] [i_2] [i_1]), (var_10)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
}
