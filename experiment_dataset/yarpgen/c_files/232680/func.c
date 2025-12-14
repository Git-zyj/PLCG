/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232680
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
    var_10 = ((/* implicit */unsigned int) 1439876434645527201LL);
    var_11 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_7))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((long long int) min((max((-2209124608345842029LL), (((/* implicit */long long int) 754090563U)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 2199023251456ULL))))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 754090542U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3540876732U))));
    }
    for (unsigned int i_1 = 3; i_1 < 21; i_1 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_4 [i_1 + 1]) >> (((/* implicit */int) (!(((/* implicit */_Bool) 3540876732U)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_1 + 1])))))) : (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 2])) ? (arr_5 [i_1 - 2] [17U]) : (((/* implicit */long long int) arr_4 [i_1 - 2]))))));
        /* LoopSeq 1 */
        for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
        {
            arr_8 [i_2] = ((/* implicit */unsigned short) ((unsigned char) var_3));
            arr_9 [(unsigned char)9] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))) == (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_2])) && (((/* implicit */_Bool) (signed char)-105))))))) ? (min((((/* implicit */unsigned int) (unsigned char)167)), (arr_2 [i_1 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_5 [i_1 - 2] [i_2 - 1]))))));
        }
        arr_10 [i_1 - 2] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36516))) : (3144725484U))));
        var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned char)220), (((/* implicit */unsigned char) (signed char)-106))))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 + 1])))))));
    }
    var_16 = ((/* implicit */long long int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
}
