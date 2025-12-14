/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207539
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */int) (short)10176))))) ? (((/* implicit */int) arr_4 [i_0])) : (((((/* implicit */_Bool) arr_2 [(_Bool)1] [14])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned short)53625)))))));
                var_18 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) 5801608033691451135ULL)) ? (((/* implicit */int) (unsigned short)23885)) : (((/* implicit */int) (short)3181)))) << (((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (short)-20539)))) - (1854))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)37412)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)45157))))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) 3660620901U)) && (((/* implicit */_Bool) (unsigned short)23858))));
        arr_8 [i_2] = ((/* implicit */unsigned int) var_8);
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)29826)) ? (max((13944640645527683285ULL), (((/* implicit */unsigned long long int) 1976755387U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2])) && (((/* implicit */_Bool) arr_5 [i_2] [i_2])))))))))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((1953442338288692761ULL) - (((/* implicit */unsigned long long int) 429222008U))))) ? (((/* implicit */int) arr_6 [i_2] [1LL])) : ((+(((/* implicit */int) (short)7771)))))) ^ (((((((/* implicit */int) arr_7 [i_2])) >= (((/* implicit */int) var_13)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [(unsigned char)22] [(unsigned char)22])), ((unsigned short)41678)))) : (((/* implicit */int) max(((short)-8842), (((/* implicit */short) var_2)))))))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 3) 
    {
        arr_11 [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)65519))));
        arr_12 [5ULL] = max((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23898)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) : (15099528129154148999ULL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_3] [i_3])) ? (((/* implicit */int) arr_1 [11LL])) : (((/* implicit */int) (unsigned char)127)))))))), ((~(994079304))));
        arr_13 [i_3 - 1] = ((/* implicit */signed char) ((int) (+(((/* implicit */int) arr_0 [i_3 + 2])))));
    }
}
