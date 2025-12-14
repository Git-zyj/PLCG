/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191281
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_16 = ((/* implicit */int) (short)17424);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (unsigned char)241))));
    }
    /* LoopSeq 2 */
    for (int i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((((((/* implicit */_Bool) arr_3 [i_1])) ? (17736431173019971883ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))) % (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max(((signed char)-125), (arr_2 [(_Bool)1] [i_1])))) << (((710312900689579739ULL) - (710312900689579721ULL))))))));
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned char) max((min((((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_3 [(_Bool)1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_3 [(_Bool)1])) : (((/* implicit */int) (unsigned short)3570))))))), (((/* implicit */long long int) arr_2 [i_1 + 4] [i_1]))));
    }
    for (int i_2 = 2; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 3005682948528650519LL)) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) var_9)))) / (((/* implicit */int) var_11)))) + (((/* implicit */int) (!(((/* implicit */_Bool) -782172763)))))));
        var_19 = ((/* implicit */_Bool) var_7);
        arr_8 [3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)61966)) + (((/* implicit */int) arr_2 [(short)9] [(short)9]))))) & (((4294967277U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(signed char)1] [(signed char)1])))))))) == (min((((/* implicit */long long int) max((2432743392U), (((/* implicit */unsigned int) var_13))))), (((8505479928929151197LL) | (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2] [i_2])))))))));
        var_20 = ((/* implicit */short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))))), (min((var_13), (arr_3 [i_2 + 4])))));
    }
}
