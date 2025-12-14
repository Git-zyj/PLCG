/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19841
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) (+(((unsigned long long int) (-(((/* implicit */int) var_0))))))))));
    var_12 &= ((unsigned char) var_0);
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_13 = ((((((unsigned int) arr_1 [i_0])) <= (((/* implicit */unsigned int) ((/* implicit */int) ((1955096151920622765LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((arr_0 [4ULL]) == (var_2)))))))));
        var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)144)) ? (14100896596457299050ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)133)))))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((arr_5 [i_1]) - (arr_5 [i_1]))))));
            arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [(_Bool)1]))) / (arr_6 [i_2] [(unsigned char)8] [i_1])))) ? (((/* implicit */unsigned long long int) arr_5 [i_2])) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_2] [i_2]))))));
            arr_8 [i_1] = ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (arr_5 [i_1]));
            var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_2]))) * (var_6))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) && (((/* implicit */_Bool) 2038278895U))))))));
        }
        var_17 ^= ((/* implicit */unsigned char) arr_5 [i_1]);
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 3; i_3 < 20; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    var_18 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 1231508748451670505ULL)) ? (3303566545U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-12227)))))));
                    arr_14 [i_4] [i_3] [i_3 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)25888)) ? ((+(18354835174409982639ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1] [i_3 - 2])))))));
                }
            } 
        } 
        arr_15 [i_1] = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_1] [(short)8] [0ULL])) | (((/* implicit */int) ((_Bool) 91908899299569000ULL)))));
    }
}
