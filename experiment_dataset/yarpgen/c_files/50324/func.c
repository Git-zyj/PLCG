/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50324
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (var_10) : ((+(var_2))))) >= (((/* implicit */long long int) ((/* implicit */int) var_0)))));
    var_13 = ((((/* implicit */_Bool) max((var_11), (var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-13))) : (var_2));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_14 = ((((/* implicit */long long int) ((/* implicit */int) (short)798))) / (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 - 1]))) : (var_2))));
                arr_4 [i_0] = ((/* implicit */short) arr_1 [i_1] [i_1 + 2]);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        var_15 = ((/* implicit */unsigned short) -97928587892013682LL);
                        arr_10 [i_0] [i_3] [i_2] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned char) -97928587892013663LL))), (((long long int) -188478184237709427LL)))))));
                    }
                    arr_11 [7LL] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */int) ((_Bool) (-(3319675822U))))), ((((((+(((/* implicit */int) var_9)))) + (2147483647))) << (((((min((97928587892013681LL), (((/* implicit */long long int) (signed char)-15)))) + (28LL))) - (13LL)))))));
                }
                for (short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    arr_16 [i_0] [i_0] [i_1] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))))) : (((((/* implicit */_Bool) arr_1 [i_1 + 3] [i_1 + 1])) ? (arr_1 [i_1 + 3] [i_1 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [(signed char)4] [(signed char)4])))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((97928587892013701LL), (((/* implicit */long long int) arr_9 [(unsigned char)10] [i_1] [(unsigned short)11] [i_0])))), (((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4] [i_1] [i_0])))))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)143)), (((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(signed char)5] [(signed char)5])) ? (((/* implicit */unsigned long long int) -120584278251252718LL)) : (arr_6 [i_0]))))) : (arr_2 [i_1 - 1])));
                }
                arr_17 [i_0] = ((/* implicit */unsigned int) (~((~(((((/* implicit */_Bool) arr_13 [i_1] [14LL] [i_0] [5U])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) : (-97928587892013656LL)))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) var_8))));
}
