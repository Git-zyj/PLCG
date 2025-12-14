/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48699
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
    var_16 ^= ((/* implicit */_Bool) ((13760314717260081943ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3886)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (signed char i_1 = 4; i_1 < 6; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (((-(arr_0 [i_0 + 1] [i_1 - 4]))) - (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])) > (arr_1 [i_0])))), (((639297063157951220ULL) % (((/* implicit */unsigned long long int) var_2))))))));
                arr_6 [i_1 - 3] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(4110263227495962249ULL)))) ? ((-(min((var_15), (2618609519U))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) 8688463111416218985ULL))) * ((+(((/* implicit */int) (_Bool)1)))))))));
                var_17 = ((/* implicit */short) ((unsigned long long int) (((_Bool)0) ? (3611568585426419632ULL) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)57))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) ((((((_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) ((3568533926U) < (((/* implicit */unsigned int) -1441583363)))))) : ((~(var_2))))) - (((/* implicit */long long int) ((unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (7959117916231516564ULL)))))));
    var_19 = 1398546164U;
}
