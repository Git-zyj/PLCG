/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215813
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] = ((/* implicit */unsigned char) var_0);
                arr_7 [8] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [6])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) ((_Bool) var_12)))))) ? ((~(((((/* implicit */int) var_5)) + (((/* implicit */int) (short)-1)))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) < (((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 1])))))));
                var_16 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (unsigned char)145)) : (((/* implicit */int) arr_2 [6ULL] [6ULL]))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_15 [i_4] [i_3] [i_1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (~(min((arr_9 [i_0] [(_Bool)1] [i_1]), (((/* implicit */unsigned long long int) -823731875)))))));
                                var_17 = ((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 1])))))));
                                arr_16 [i_0] [i_1] [1U] = ((/* implicit */_Bool) max((max((((/* implicit */int) arr_4 [i_1 - 1] [8LL] [i_2 + 1])), (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_14 [i_4] [i_1] [8ULL] [i_1] [i_0 + 2])) : (((/* implicit */int) var_11)))))), (((/* implicit */int) arr_4 [6LL] [i_2] [7]))));
                                var_18 = ((/* implicit */unsigned int) min((((/* implicit */int) arr_8 [i_0])), ((+(((/* implicit */int) (short)-32762))))));
                                arr_17 [i_0] [i_0] [0U] [i_1] [(_Bool)1] [0ULL] = ((/* implicit */_Bool) ((unsigned short) arr_4 [i_1 - 1] [i_3] [(_Bool)1]));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 7; i_5 += 4) 
                {
                    arr_20 [i_5] [i_1] [i_1] [(unsigned char)9] = ((/* implicit */unsigned char) max((min((((/* implicit */long long int) var_11)), (arr_11 [i_1 - 1] [i_0 - 2]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_14 [(unsigned short)8] [i_1] [(_Bool)1] [i_1] [i_1 - 1])))))));
                    arr_21 [i_1] = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_1]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_14))));
    var_20 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)(-32767 - 1)))))) ? (min((var_14), (((/* implicit */unsigned long long int) (short)-32762)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)2770))))))));
    var_21 = ((/* implicit */long long int) var_3);
}
