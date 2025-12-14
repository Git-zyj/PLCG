/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248603
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
    var_19 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? ((~(3726653648930988828ULL))) : (((7406288141220721093ULL) >> (((var_15) + (440921989485279548LL))))))), (((/* implicit */unsigned long long int) var_1))));
    var_20 = ((/* implicit */unsigned char) (+(var_0)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                arr_12 [i_2] [i_2] = ((/* implicit */int) ((unsigned short) var_13));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_11)), (var_8))) * (14380786126530861841ULL)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_10 [i_0]) : (min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_3])), (arr_10 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) || (((/* implicit */_Bool) arr_10 [i_0]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_5 - 2] [i_2] [(unsigned short)19] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */int) var_16)) + (var_6))), ((+((-(-1833595575)))))));
                                arr_20 [i_0] [i_6] [i_2] [i_5 - 1] [i_6] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) arr_6 [i_6] [i_2] [i_2] [i_6])), (((var_17) % (((/* implicit */unsigned long long int) ((-2784346222776267804LL) / (((/* implicit */long long int) arr_11 [3U] [i_5 - 2] [i_5 - 2])))))))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)79)), (arr_7 [i_2] [i_1] [i_2])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_12))) / (var_15))) : (((/* implicit */long long int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_2] [i_5 - 1] [i_5] [i_5] [2] [i_2])))) : (((((/* implicit */_Bool) (~(4316793666599370173ULL)))) ? (((((/* implicit */_Bool) 14129950407110181443ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_1] [i_1])) : (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 11040455932488830547ULL)) || (((/* implicit */_Bool) (signed char)126))))))))));
                                arr_21 [i_2] [(short)11] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (arr_9 [i_2] [i_5 + 1] [i_5] [11U] [3] [i_2])))) ? (((/* implicit */int) (unsigned char)15)) : (((((/* implicit */int) ((289399845620507326ULL) > (((/* implicit */unsigned long long int) arr_15 [i_0] [i_1] [i_1] [i_5 - 2] [i_6] [i_5 - 2]))))) & (((((/* implicit */_Bool) var_14)) ? (arr_14 [i_0] [i_0] [0LL] [i_2]) : (((/* implicit */int) var_1))))))));
                                arr_22 [i_0] [i_2] [i_5 - 2] [i_5] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 12303336024910975498ULL)) ? (((/* implicit */int) ((6143408048798576110ULL) > (var_17)))) : (arr_14 [i_2] [i_1] [i_2] [i_2]))), (((/* implicit */int) arr_17 [i_0] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (long long int i_8 = 0; i_8 < 20; i_8 += 3) 
                        {
                            {
                                arr_28 [i_1] [i_1] [i_2] [i_7] [i_1] [16] &= ((((arr_16 [i_7 + 2] [i_7] [i_7 + 3] [i_7 + 3] [i_8]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_16 [i_7 + 1] [i_7] [i_7 + 1] [i_7 - 1] [i_8])))) >> (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [19ULL] [i_1]))) > (min((16255229819860300593ULL), (((/* implicit */unsigned long long int) (unsigned char)255))))))));
                                var_23 = (~(((((/* implicit */_Bool) ((var_17) * (11101319458866971460ULL)))) ? (((((/* implicit */_Bool) var_3)) ? (14129950407110181457ULL) : (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 - 1] [i_7 + 2] [i_7] [i_7 - 1] [i_7 - 1]))))));
                                var_24 = 44763570;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
