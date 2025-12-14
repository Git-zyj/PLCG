/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 18974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=18974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/18974
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
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 4; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_3))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (var_5))))))) ? (max((4294967295U), (5U))) : (min((0U), (arr_0 [i_0] [i_1 + 3]))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) var_0);
                        var_12 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) % (110205316U)));
                    }
                    for (unsigned int i_4 = 4; i_4 < 20; i_4 += 2) 
                    {
                        arr_12 [i_0 - 1] [i_0] [i_2 - 3] [i_4 - 2] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_3 [i_0] [20LL])) ? ((~(arr_8 [i_0 + 2] [i_1] [i_1] [i_1]))) : (((((/* implicit */_Bool) 4184761980U)) ? (((/* implicit */long long int) 15U)) : (arr_10 [i_0] [i_0 - 1] [(short)1] [i_0 - 1] [i_0]))))), (((/* implicit */long long int) ((4184761980U) % (((/* implicit */unsigned int) ((/* implicit */int) (short)-31286))))))));
                        var_13 = ((/* implicit */unsigned long long int) max((((/* implicit */short) var_1)), (((short) 13867575213247381931ULL))));
                        var_14 = ((/* implicit */int) ((13867575213247381931ULL) + (((/* implicit */unsigned long long int) 4294967295U))));
                    }
                    arr_13 [i_0] [i_2] = ((/* implicit */unsigned char) (!((_Bool)1)));
                    arr_14 [i_0] = ((/* implicit */short) arr_11 [i_0] [i_1 + 3]);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((max((((/* implicit */long long int) (~(((/* implicit */int) var_6))))), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (6919575992725782597LL))))) >> (((/* implicit */int) var_6)))))));
    var_17 = ((/* implicit */unsigned long long int) var_0);
}
