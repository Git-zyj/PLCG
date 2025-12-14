/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219441
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
    var_11 = ((/* implicit */short) (!((((!(((/* implicit */_Bool) 0)))) || (((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_8))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned short) min((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_13 = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_0 [i_0] [i_0])) >> ((((+(((/* implicit */int) arr_0 [i_0] [i_0])))) - (86)))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) var_1))));
    }
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_8 [i_1] = ((/* implicit */long long int) ((((((/* implicit */int) arr_6 [i_1])) ^ (((/* implicit */int) arr_0 [i_1] [i_2])))) + (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)6)) && (((/* implicit */_Bool) arr_7 [i_1] [i_1 - 1] [i_1])))))));
            /* LoopNest 2 */
            for (long long int i_3 = 1; i_3 < 18; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_12 [i_1] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [18ULL] [i_4]))) : (arr_1 [i_3 + 1] [i_1]))) > (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) * (arr_5 [i_3])))))))));
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((((((/* implicit */unsigned int) ((/* implicit */int) (short)-11491))) - (arr_5 [i_4]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_1] [i_4] [i_2] [i_3 - 1])))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) (short)-9128)) && (((/* implicit */_Bool) arr_1 [i_1 + 1] [i_2])))))));
            arr_14 [i_1] [i_2] = arr_11 [i_1] [4ULL] [i_1 + 1] [9U] [9U] [i_2];
        }
        var_18 += (+(((((unsigned int) arr_1 [i_1] [i_1 - 1])) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))))));
    }
    var_19 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) max((-7950102519523123232LL), (((/* implicit */long long int) (+(((/* implicit */int) (short)7404))))))))));
    var_20 ^= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) != (2999501856U))))) % (((var_0) % (2048U)))))));
}
