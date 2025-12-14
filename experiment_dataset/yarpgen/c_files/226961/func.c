/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226961
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
    var_10 = ((/* implicit */_Bool) max(((unsigned short)32512), (((/* implicit */unsigned short) (signed char)0))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0 + 1] [i_0 + 1])))) >= (((/* implicit */int) arr_1 [i_0]))));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((min(((+(var_6))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_0 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)98)) - (((/* implicit */int) arr_0 [i_0])))))));
        arr_5 [i_0] |= ((/* implicit */long long int) ((_Bool) ((((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) (signed char)-11)))) || (((/* implicit */_Bool) (~(((/* implicit */int) (short)-32767))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 14; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) ((arr_0 [i_1]) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned char) (short)32767)))));
        arr_9 [5LL] = ((/* implicit */int) max((min((4294967295U), (((/* implicit */unsigned int) 1528506261)))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)-32767)))))));
        arr_10 [(signed char)15] = ((/* implicit */short) ((unsigned short) max((arr_2 [i_1] [i_1 + 1]), ((signed char)-89))));
    }
    var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) (((-(max((((/* implicit */unsigned int) (-2147483647 - 1))), (var_3))))) >> (((((/* implicit */int) var_4)) - (31))))))));
}
