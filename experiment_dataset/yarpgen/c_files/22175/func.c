/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22175
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */short) ((((((((/* implicit */int) (signed char)64)) << (((((/* implicit */int) (short)-20272)) + (20294))))) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (168))))) | (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_11 ^= (-(((/* implicit */int) arr_1 [i_0 + 1])));
        var_12 = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))))), (arr_1 [i_0 + 1])))) / ((-(((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_0 + 1])), (arr_0 [i_0 + 1]))))))));
    }
    var_13 = ((/* implicit */unsigned short) (-((+(((((/* implicit */int) (signed char)64)) / (var_9)))))));
    var_14 = ((/* implicit */unsigned char) (signed char)42);
    var_15 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */_Bool) 549755813887ULL)) || (((/* implicit */_Bool) var_1))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) 1910990843)) || (((/* implicit */_Bool) var_6))))))), (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)23)) <= (((/* implicit */int) var_3))))) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) != (2340178670U)))))))));
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 549755813894ULL))));
        var_16 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) | ((-(18446743523953737728ULL)))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_8 [i_2] [i_2] = ((/* implicit */short) arr_6 [i_2] [i_2]);
        var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((min(((~(549755813894ULL))), (((/* implicit */unsigned long long int) 1198431861)))) & (((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_0 [i_2])) ^ (((/* implicit */int) arr_6 [i_2] [i_2])))), (((/* implicit */int) ((arr_7 [(unsigned short)10]) < (arr_7 [4LL]))))))))))));
        var_18 = ((/* implicit */unsigned long long int) (!(((min((1845390023U), (((/* implicit */unsigned int) arr_1 [i_2])))) != (min((1006632960U), (822248565U)))))));
    }
    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        var_19 = ((/* implicit */unsigned short) (((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))) | (1733493547U))))) >> (((((((/* implicit */_Bool) ((arr_3 [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (unsigned short)13509))))) : (arr_7 [i_3]))) - (4294967248U)))));
        var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-121)) * (((/* implicit */int) arr_6 [i_3] [i_3]))))) ? (((/* implicit */int) max(((unsigned short)32788), (((/* implicit */unsigned short) (unsigned char)2))))) : (((/* implicit */int) arr_0 [i_3])))), ((((+(((/* implicit */int) (signed char)-84)))) % (((/* implicit */int) ((18446743523953737725ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))))))));
    }
}
