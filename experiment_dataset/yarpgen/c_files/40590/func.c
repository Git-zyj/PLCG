/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40590
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
    var_10 *= ((/* implicit */unsigned int) var_7);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) max((((unsigned int) ((_Bool) var_6))), (((/* implicit */unsigned int) ((_Bool) ((13950444311509614009ULL) & (var_0))))))))));
            var_12 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 3751146773U))))), (((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_13 += ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */unsigned long long int) ((unsigned int) 6891711712108921355ULL))) / (var_1))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) var_9));
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */long long int) (((_Bool)1) ? (512126422U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (min((3986150386655515525LL), (-3525962015370554624LL))))), (((long long int) ((unsigned long long int) (unsigned char)59)))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_6);
        var_14 = min((((/* implicit */unsigned char) ((_Bool) var_5))), (var_2));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((unsigned int) var_6))) : (3299087375289607611ULL))))));
            var_16 = ((/* implicit */unsigned char) max((var_16), (((unsigned char) 536854528U))));
            arr_16 [i_3] [i_3] = ((((/* implicit */unsigned long long int) 3412574721U)) | (var_9));
        }
        var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((long long int) 0U))))) / (((unsigned int) 24U)));
        arr_17 [i_3] |= ((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) 2U)), (var_3))));
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_18 = min((max((((unsigned long long int) 1855396308U)), (((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))), (min((((/* implicit */unsigned long long int) ((_Bool) var_1))), (max((var_1), (((/* implicit */unsigned long long int) (unsigned char)255)))))));
        arr_20 [i_5] [i_5] = ((_Bool) min((((/* implicit */unsigned long long int) ((long long int) var_8))), (((unsigned long long int) (_Bool)1))));
        arr_21 [i_5] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2418921017U)))) / (var_3))), (((/* implicit */long long int) var_4))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 1; i_6 < 21; i_6 += 2) /* same iter space */
    {
        arr_24 [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))) : (((((/* implicit */_Bool) 6891711712108921355ULL)) ? (((/* implicit */unsigned long long int) 908261395U)) : (var_9)))));
        arr_25 [i_6] = (_Bool)1;
    }
    for (unsigned int i_7 = 1; i_7 < 21; i_7 += 2) /* same iter space */
    {
        arr_29 [i_7] = ((/* implicit */_Bool) ((unsigned long long int) ((_Bool) var_3)));
        arr_30 [i_7 - 1] = ((/* implicit */unsigned int) min((((long long int) min((var_0), (var_5)))), (((/* implicit */long long int) var_4))));
    }
    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((unsigned long long int) 11555032361600630260ULL)) : (max((((/* implicit */unsigned long long int) 2184484948603401480LL)), (var_0)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (6451502699781406473LL)))) : (min((((unsigned long long int) var_8)), (var_9)))));
}
