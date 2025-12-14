/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197613
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
    var_14 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)14] [i_2 - 3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63974))) : ((+(2164760357U)))))) ? (max((((/* implicit */int) arr_8 [18LL] [i_0 - 2] [i_1 + 3] [i_2 - 1])), (((((/* implicit */int) (short)29503)) << (((((/* implicit */int) arr_6 [i_0])) - (23))))))) : (((/* implicit */int) (short)-29488))))));
                            arr_11 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */unsigned char) max(((-(((var_1) ? (((/* implicit */int) var_1)) : (1018861135))))), (((/* implicit */int) min((((/* implicit */unsigned char) ((var_6) > (((/* implicit */long long int) arr_3 [i_2]))))), (max(((unsigned char)23), ((unsigned char)197))))))));
                            arr_12 [(signed char)9] [i_1 - 2] [i_2 + 2] [i_0] = ((/* implicit */unsigned short) (~(arr_9 [i_1] [(unsigned char)7] [i_1 - 4] [i_1] [i_1])));
                            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (-1018861125) : (((((/* implicit */int) arr_5 [i_0 + 1])) + (((/* implicit */int) arr_5 [i_0 + 1])))))))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((max(((+(((/* implicit */int) (short)-29488)))), (((/* implicit */int) max((arr_8 [12LL] [i_0] [i_1] [i_1 + 1]), (var_0)))))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1 - 3])) : (arr_3 [i_0])))) ? (((/* implicit */int) arr_8 [4LL] [i_1] [(_Bool)1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0])) || (((/* implicit */_Bool) arr_3 [i_0]))))))))))));
                var_18 |= ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) arr_3 [(unsigned char)0]))) >= (-1018861117)));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (short i_6 = 1; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~(max((1018861108), (((/* implicit */int) (unsigned char)0))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_4 + 1] [i_5] [i_6 + 3]))))) ? ((~(((/* implicit */int) arr_16 [i_0] [i_1 - 4])))) : (((((/* implicit */_Bool) arr_16 [i_0] [i_4 + 1])) ? (((/* implicit */int) arr_18 [i_0 + 1] [i_0] [(unsigned char)7] [i_5 + 4])) : (((/* implicit */int) (unsigned char)255))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
