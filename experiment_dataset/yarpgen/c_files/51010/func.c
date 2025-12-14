/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51010
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
    var_11 = max((((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23990)) ? (18446744073709551615ULL) : (18446744073709551612ULL)))) && (((((/* implicit */_Bool) 2240594166372523077LL)) && (((/* implicit */_Bool) var_8))))))), (var_6));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((int) 18446744073709551615ULL));
        var_12 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0 - 3] [i_0])) : (((/* implicit */int) (_Bool)1))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-11)) ? (var_1) : (((/* implicit */long long int) arr_2 [(_Bool)1]))))) ? (arr_2 [i_0 - 2]) : (((/* implicit */int) (signed char)93))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((unsigned char) ((int) arr_4 [i_1]))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 2; i_2 < 22; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
                        {
                            arr_20 [i_4 + 3] [(unsigned short)2] [i_1] &= ((/* implicit */int) (((~(18446744073709551612ULL))) >> (((((((/* implicit */int) (unsigned short)4347)) >> (((/* implicit */int) (_Bool)1)))) - (2126)))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-18)) == (((((/* implicit */int) arr_19 [i_1] [i_2] [i_2] [i_3] [i_2] [i_5])) & (((/* implicit */int) arr_4 [i_3]))))));
                        }
                        var_16 = ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (15093176764164389369ULL)));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */_Bool) ((unsigned char) ((var_2) % (((/* implicit */unsigned long long int) 2147483647)))));
    }
}
