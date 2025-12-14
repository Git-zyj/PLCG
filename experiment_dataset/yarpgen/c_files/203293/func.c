/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203293
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1))))), ((+(14980803480424583921ULL))))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) max(((unsigned char)144), (var_16))))))))))));
    var_19 = ((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)233))));
    var_20 = ((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) 2147483648U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))));
    var_21 = ((/* implicit */unsigned char) min(((~(((/* implicit */int) (signed char)104)))), (((/* implicit */int) (unsigned char)144))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)1))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)152))))))));
        var_22 = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)144)) ? (0U) : (((/* implicit */unsigned int) (-2147483647 - 1)))))) * (((((/* implicit */_Bool) arr_1 [(signed char)17])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (4380866641920LL)))));
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [(unsigned char)12]))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)45)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83))) : (((arr_1 [i_0]) ^ (arr_1 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_1])) >= (((/* implicit */int) var_1)))))) <= (max((3275028561702512377LL), (((/* implicit */long long int) var_13))))))))))));
        var_25 += ((/* implicit */unsigned long long int) (-(((arr_2 [i_1]) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1]))))));
        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) (_Bool)0)), (((/* implicit */long long int) var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)93)) - (((/* implicit */int) (unsigned short)13399))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9530093513167092870ULL)) ? (((/* implicit */int) (unsigned short)65523)) : (((/* implicit */int) (unsigned char)64))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75))) * (3465940593284967687ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)162)))));
    }
}
