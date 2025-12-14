/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3875
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)156)), (((((/* implicit */int) max(((short)30807), (((/* implicit */short) var_5))))) - (((/* implicit */int) arr_1 [i_0]))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) % (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) max(((unsigned char)156), ((unsigned char)99)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned long long int) arr_0 [i_0])) : (0ULL))) : (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */unsigned int) arr_1 [i_0]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) >= ((-2147483647 - 1)))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_4 [i_0] = var_5;
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_21 = ((long long int) (unsigned short)32767);
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((_Bool) arr_6 [i_1] [(unsigned char)3])))))));
        var_22 |= ((/* implicit */signed char) 2978089851239757108ULL);
    }
    for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        arr_10 [15] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_16)))) ? (((long long int) arr_9 [i_2] [i_2])) : (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_2])) + (((/* implicit */int) arr_9 [i_2] [i_2])))))));
        var_23 = ((/* implicit */signed char) max((((((/* implicit */int) arr_9 [i_2] [i_2])) | (((/* implicit */int) var_13)))), (((/* implicit */int) arr_9 [i_2] [i_2]))));
    }
    var_24 = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-11))));
}
