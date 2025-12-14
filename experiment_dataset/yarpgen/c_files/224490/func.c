/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224490
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
    var_10 = (+(((((/* implicit */_Bool) var_7)) ? (max((var_6), (var_5))) : (((unsigned long long int) 13499151670774358763ULL)))));
    var_11 = ((((/* implicit */_Bool) var_2)) ? (((unsigned long long int) 11123476094865994167ULL)) : (var_0));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        var_12 = ((((3317384486803145470ULL) + (arr_0 [i_0 - 1]))) - ((-((+(0ULL))))));
        var_13 = ((((unsigned long long int) ((((/* implicit */_Bool) 5458321727393035137ULL)) ? (3317384486803145485ULL) : (15129359586906406114ULL)))) - (arr_1 [i_0 - 1]));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            {
                var_14 = max((max((var_8), (arr_6 [i_2 + 2]))), (var_2));
                var_15 = ((((/* implicit */_Bool) min(((+(15129359586906406134ULL))), ((-(6459517905292316880ULL)))))) ? (((unsigned long long int) 0ULL)) : (((((/* implicit */_Bool) 16988447247963427375ULL)) ? (max((13260975444056521578ULL), (0ULL))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (11751418448238193003ULL))))));
                arr_8 [10ULL] [i_2] [2ULL] = (-(3317384486803145485ULL));
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 9; i_3 += 3) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        {
                            var_16 &= ((unsigned long long int) (!(((/* implicit */_Bool) var_7))));
                            arr_13 [i_4] [i_2] [8ULL] [i_4] = 15573536706431038897ULL;
                        }
                    } 
                } 
            }
        } 
    } 
}
