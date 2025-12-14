/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195403
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
    var_15 = ((/* implicit */unsigned long long int) ((max((((((/* implicit */int) var_2)) << (((var_10) - (156253863))))), (((/* implicit */int) var_2)))) >> (((((((((/* implicit */_Bool) -1769696098)) ? (((/* implicit */unsigned long long int) 2863340730U)) : (3741603266223233328ULL))) | (((/* implicit */unsigned long long int) var_6)))) - (2931760556ULL)))));
    var_16 = ((/* implicit */signed char) (-((-(var_6)))));
    var_17 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) ((unsigned char) var_8))))) ? (((/* implicit */int) (!(var_12)))) : (((/* implicit */int) max((var_9), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */unsigned int) 1769696087)) | (((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
        arr_3 [3ULL] = ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) var_11)));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) -8561909150109489651LL)) <= (3741603266223233328ULL)));
        var_20 = ((/* implicit */_Bool) arr_5 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) (+(((int) var_1))));
            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_3] [11U])) && (((/* implicit */_Bool) ((arr_7 [i_3]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [6ULL] [6ULL])))))))))));
            arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [13ULL]))));
        }
        arr_14 [(unsigned short)6] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)217)) * (((/* implicit */int) arr_9 [i_2]))));
    }
}
