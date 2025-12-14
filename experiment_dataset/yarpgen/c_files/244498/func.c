/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244498
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
    var_20 = (~(min((((/* implicit */unsigned int) var_18)), (var_13))));
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) var_8))));
    var_22 = ((/* implicit */int) var_8);
    var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7105992370209012027LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_16), ((short)-1))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (1919495113) : (63)))), (min((var_2), (((/* implicit */unsigned int) var_19))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        var_24 = ((/* implicit */unsigned char) (~(min((((unsigned int) -85)), (arr_0 [i_0 + 1] [i_0 + 1])))));
        var_25 = ((/* implicit */unsigned int) arr_1 [i_0]);
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_7 [i_1] [i_0] [i_0] = ((/* implicit */int) (+(max((((/* implicit */unsigned int) -1467722261)), (3365744008U)))));
            var_26 = ((/* implicit */signed char) -1043657695);
            var_27 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-5))));
            arr_8 [13U] [i_0] = ((/* implicit */unsigned short) min((4277341145U), (4294967294U)));
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_0] [i_1])) - (((/* implicit */int) ((arr_5 [i_0] [i_1]) && (((/* implicit */_Bool) 0)))))));
        }
        for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
        {
            var_29 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_0])), (arr_3 [0U] [0U]))))) < (min((((/* implicit */unsigned long long int) var_18)), (626677260774734030ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)13))))) : (max((((unsigned int) 1602811808)), (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) arr_11 [i_0])))))))));
            arr_12 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */unsigned int) (+((~(max((arr_10 [i_0]), (((/* implicit */unsigned long long int) -888209985))))))));
            var_30 -= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_7)), (min(((-(arr_2 [(signed char)18]))), (((/* implicit */long long int) min(((unsigned short)61387), (((/* implicit */unsigned short) (unsigned char)7)))))))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 3) /* same iter space */
        {
            arr_16 [i_0] = ((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_0 + 2])), (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 441890361)) ? (2147483618) : (((/* implicit */int) (signed char)-24)))))));
            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) 17626167U))));
        }
        for (int i_4 = 0; i_4 < 22; i_4 += 3) /* same iter space */
        {
            arr_19 [i_0] [i_4] = ((/* implicit */signed char) (unsigned short)8455);
            arr_20 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)124)) ? (4294967295U) : (8191U)));
            arr_21 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) ((unsigned long long int) 15U))))));
        }
    }
}
