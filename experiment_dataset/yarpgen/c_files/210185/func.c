/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210185
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
    var_10 = ((/* implicit */long long int) (signed char)-113);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [(unsigned short)12] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0])) * (((/* implicit */int) arr_0 [i_0]))));
        var_11 -= ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((-(((/* implicit */int) var_0)))))))));
        var_13 -= ((/* implicit */short) ((((_Bool) var_8)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
    }
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (~(max((((/* implicit */unsigned int) (unsigned char)23)), (4294967293U)))));
        arr_7 [i_1] = ((/* implicit */signed char) ((unsigned short) ((unsigned int) ((((/* implicit */int) arr_2 [(unsigned char)22] [i_1])) <= (((/* implicit */int) (signed char)53))))));
        arr_8 [i_1] = (+(((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)245)))));
        arr_9 [i_1] = ((/* implicit */unsigned long long int) (+(min((((var_2) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1]))))), (((/* implicit */long long int) min((-3), (-1076302338))))))));
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)21))));
        arr_13 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) max(((unsigned char)233), (arr_10 [i_2])))) * (((/* implicit */int) (signed char)113))))), (((arr_0 [14U]) ? ((~(var_5))) : (((/* implicit */unsigned long long int) max((-1974616277513220439LL), (((/* implicit */long long int) (unsigned short)23640)))))))));
        arr_14 [(_Bool)1] = ((/* implicit */signed char) arr_1 [i_2]);
    }
}
