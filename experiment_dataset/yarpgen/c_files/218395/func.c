/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218395
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_11), (arr_0 [i_0])))) || (((/* implicit */_Bool) arr_1 [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_1 [i_0])))) || (((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0])), (-1778666774005694360LL)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) (~(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)208))) : (arr_1 [i_0]))))), (max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_6))), (((/* implicit */long long int) var_7))))));
        var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) max(((unsigned short)4677), (((/* implicit */unsigned short) arr_0 [i_0]))))) || (((((/* implicit */_Bool) (unsigned char)49)) || (((/* implicit */_Bool) var_12)))))))));
    }
    for (long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */int) var_11);
        arr_8 [i_1] = (!(((/* implicit */_Bool) (-((~(((/* implicit */int) var_0))))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((unsigned short) var_10)))));
            arr_11 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 1378313011869483060ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)126))) : (8115618419046461989LL)));
        }
        arr_12 [i_1] = max((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_1]))))) || (((/* implicit */_Bool) var_2))))));
    }
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (~(min((arr_9 [i_3 + 1] [i_3 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_3 - 1]))))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) max(((unsigned char)65), (((/* implicit */unsigned char) (signed char)36)))))));
        arr_15 [i_3] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) -1044028436))))) || (((/* implicit */_Bool) (unsigned char)165))))), (max((min((((/* implicit */unsigned int) arr_4 [i_3])), (arr_5 [i_3]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0)))))))));
    }
    var_17 = min((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_11))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-60)) || (((/* implicit */_Bool) var_6))))), (var_10))));
    var_18 = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 1778666774005694363LL)) || (((/* implicit */_Bool) var_3))))), (max((max((var_9), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) var_5))))));
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) min((((/* implicit */short) var_7)), (var_1)))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) var_5)))))))) || (((/* implicit */_Bool) var_2))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(min((12602887759876124247ULL), (((/* implicit */unsigned long long int) 3354889579U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_2)))) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)23))))) : (((/* implicit */int) var_4))))) : (min((var_10), (((/* implicit */unsigned long long int) (short)32767))))));
}
