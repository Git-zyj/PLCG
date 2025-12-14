/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223835
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
    var_12 = ((/* implicit */unsigned int) var_11);
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0 - 1] = var_7;
        var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (unsigned short i_1 = 2; i_1 < 17; i_1 += 3) /* same iter space */
    {
        var_14 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))))) << (((/* implicit */int) (!(var_11))))))), (((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (13086909441924961873ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))))))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)172)))))) != ((-(4594992884448743751ULL)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2))) != (((/* implicit */unsigned long long int) var_0)))))));
    }
    for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned long long int) var_6);
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (var_2))))) < (8514345022633780661ULL))))) != (min((((unsigned int) var_7)), (((((/* implicit */_Bool) var_0)) ? (arr_7 [1U] [(short)6]) : (498910556U))))))))));
        arr_9 [i_2] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)20507)) ? (((/* implicit */int) arr_1 [i_2])) : (arr_2 [i_2])))), ((-(1662295721U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (var_2)))) ? (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) (unsigned char)135))))) : (min((var_2), (((/* implicit */unsigned long long int) arr_0 [14LL]))))))));
    }
}
