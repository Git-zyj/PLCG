/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36769
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
    var_18 = var_11;
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_16)) : (var_4))))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) -1141472620)) > (((((/* implicit */_Bool) (short)3960)) ? (((/* implicit */unsigned long long int) var_9)) : (3480912003311456224ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) <= ((+(var_16)))));
        var_21 = ((/* implicit */int) ((((arr_1 [i_0]) << (((((/* implicit */int) (unsigned short)34447)) - (34433))))) - (arr_1 [i_0])));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) 774787286U)) <= (-6520154219716519594LL)));
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_4 [i_1]), (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (1411497730681227293ULL) : (((/* implicit */unsigned long long int) 3933233774U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(17035246343028324299ULL))))))));
        var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_4 [i_1]) | (arr_4 [i_1])))) ? (max((var_12), (((/* implicit */long long int) arr_4 [i_1])))) : (((/* implicit */long long int) (+(arr_4 [i_1]))))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) arr_5 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_9))) ? (((1411497730681227280ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) (-(var_3)))) ? ((-(6633059014749594952ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_1 [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)237)))))))))));
        var_24 = ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_3)))));
        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (arr_3 [i_2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 1411497730681227296ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) : (var_12)))))))) : (arr_10 [i_2])));
    }
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_26 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) + ((-(var_4)))))));
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (7353356988151046710ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 13256132487852575459ULL)) ? (1411497730681227337ULL) : (17035246343028324317ULL))))));
    }
    var_28 = ((/* implicit */unsigned int) max((((unsigned long long int) (short)-14419)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_5))))));
    var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((((-533738647) + (2147483647))) << (((var_3) - (5449980120538992296LL)))))), (((long long int) (unsigned char)233)))))));
}
