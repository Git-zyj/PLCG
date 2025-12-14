/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201356
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
    var_11 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_7))));
    var_12 = var_4;
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((268435456U) / (268435456U))))));
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(max((((/* implicit */int) arr_2 [i_1] [i_2] [i_1])), (arr_8 [i_2])))))) & (var_9)));
                        var_15 = ((((/* implicit */_Bool) 7213802716008161702ULL)) ? (((/* implicit */unsigned int) -734784456)) : (268435456U));
                        var_16 = ((/* implicit */unsigned char) -734784456);
                        var_17 = ((/* implicit */unsigned short) arr_5 [i_0]);
                    }
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 3; i_5 < 20; i_5 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (+(max((7145798854764479316ULL), (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 - 2] [i_0 - 2] [i_0] [(short)1]))))));
                                var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_1] [i_2] [i_0] [i_0 - 1])) <= (((/* implicit */int) arr_12 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_0] [i_0 - 2]))))), (min((max((1150669704793161728ULL), (0ULL))), (((/* implicit */unsigned long long int) var_5))))));
                            }
                        } 
                    } 
                    var_20 = max((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3888))) - (1150669704793161728ULL))), (((((/* implicit */_Bool) 3484169973U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0 - 3]))) : (arr_4 [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)-3911))))), (max((arr_13 [(signed char)7] [(signed char)7] [(signed char)7] [i_0] [i_0 + 1]), (arr_13 [i_0] [i_1] [i_2] [i_0] [i_0 - 3])))));
                    var_22 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) (unsigned short)5846)), (min((((/* implicit */unsigned int) (unsigned short)6124)), (127U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5245929069077654460LL)) ? ((-(734784450))) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (734784436) : (((/* implicit */int) (signed char)1)))))) == (((((/* implicit */int) (unsigned char)6)) >> (((((/* implicit */int) (short)3888)) - (3887)))))));
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-(((/* implicit */int) arr_16 [i_0 - 1] [i_0 - 2] [i_0])))) : (((/* implicit */int) arr_16 [i_0] [i_6] [i_6]))));
                            var_25 = ((/* implicit */unsigned long long int) var_7);
                        }
                    } 
                } 
                var_26 = arr_0 [i_0];
                var_27 = ((/* implicit */signed char) ((max((((/* implicit */unsigned long long int) arr_6 [i_0 - 1])), (arr_4 [i_0] [i_0 + 1]))) & (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-3)))))));
            }
        } 
    } 
}
