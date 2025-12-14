/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241782
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (var_10)));
    var_14 = ((/* implicit */unsigned char) (~((-(((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_12)))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */int) min((((((/* implicit */int) (unsigned char)102)) >= (((/* implicit */int) arr_3 [i_1] [i_1] [(unsigned char)10])))), (((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])) > (((/* implicit */int) arr_3 [5ULL] [(_Bool)0] [i_2]))))))), (min(((~(1574110732))), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [4ULL]))) >= (arr_5 [i_0] [i_0] [i_1 - 1] [i_2])))))))))));
                    var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */short) (signed char)-103))))) ? (((/* implicit */unsigned long long int) (-(arr_2 [i_2] [i_0])))) : (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (3373852577140284004ULL)))))) ? (((/* implicit */long long int) ((int) (-(arr_2 [i_2] [i_0]))))) : (((((((/* implicit */int) arr_3 [i_0] [2LL] [i_2])) > (((/* implicit */int) arr_7 [i_2] [(unsigned short)1] [i_0])))) ? (((((/* implicit */_Bool) arr_5 [(unsigned short)14] [i_0] [i_1] [i_2])) ? (72057594037927935LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-68))))) : (((/* implicit */long long int) ((((/* implicit */int) var_2)) - (((/* implicit */int) (short)20732)))))))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = max((-2466313291627093833LL), (((/* implicit */long long int) (~(3708611746U)))));
                }
            } 
        } 
    } 
}
