/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239489
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
    var_18 = ((/* implicit */unsigned long long int) (-((+(max((((/* implicit */long long int) (unsigned char)38)), (4754151650839428736LL)))))));
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(0))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 22; i_3 += 1) 
                {
                    {
                        arr_11 [(_Bool)1] [20U] [15U] [i_0] [i_2] [i_3] = (~(((((/* implicit */_Bool) 6591214414597553533ULL)) ? (((/* implicit */unsigned long long int) 4149673091U)) : (14670006660112513697ULL))));
                        arr_12 [i_0] [(short)4] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) arr_9 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [(_Bool)1])), (((-4295807172125039008LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)217))))))), (((/* implicit */long long int) max(((unsigned char)239), ((unsigned char)57))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_2 + 1] [i_2])) : (((/* implicit */int) arr_3 [i_2 + 1] [i_2 + 1])))) - ((+(((/* implicit */int) ((unsigned char) var_2))))))))));
                    }
                } 
            } 
        } 
        arr_13 [i_0] = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned short)7] [(unsigned char)0] [i_0]))) : (14670006660112513697ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [(signed char)16] [i_0] [i_0]))) : ((+(var_0)))))));
    }
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_16 [i_4] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4] [i_4] [10])) ? (((((/* implicit */unsigned long long int) var_3)) / (18446744073709551609ULL))) : (14670006660112513712ULL))));
        /* LoopSeq 1 */
        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) 
        {
            var_21 ^= ((/* implicit */int) (!(var_15)));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)5096))))) - ((~(arr_19 [(_Bool)1] [(_Bool)1] [(unsigned char)12]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
            /* LoopNest 2 */
            for (long long int i_6 = 4; i_6 < 12; i_6 += 3) 
            {
                for (int i_7 = 3; i_7 < 13; i_7 += 3) 
                {
                    {
                        arr_25 [i_7] [i_6] [i_6] [i_4] = ((/* implicit */short) arr_9 [i_4] [i_5 + 1] [i_6] [i_7] [i_7]);
                        arr_26 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)128)) ? (1ULL) : (((/* implicit */unsigned long long int) 52641461)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_22 [i_4] [i_4] [i_6] [i_7 + 2])) : (((/* implicit */int) arr_22 [(short)5] [(short)5] [i_6] [(short)5])))))))) ? (((((/* implicit */unsigned long long int) ((int) (signed char)77))) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7] [i_7] [i_7 + 1] [i_7]))) - (var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_4])))));
                    }
                } 
            } 
            var_23 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned int) 967430993)), (((((/* implicit */_Bool) arr_22 [i_4] [2ULL] [i_5] [i_4])) ? (731905507U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26334)))))))));
        }
        var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8ULL)) ? (((/* implicit */int) (unsigned short)65517)) : (((/* implicit */int) (short)-7731))))), (max((arr_5 [i_4] [i_4]), (arr_5 [i_4] [i_4])))));
        var_25 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_2)) ? (arr_1 [i_4]) : (arr_1 [i_4]))));
    }
}
