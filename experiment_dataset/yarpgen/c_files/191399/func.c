/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191399
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
                {
                    arr_8 [i_0] [(_Bool)1] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (short)7987)) : (((/* implicit */int) (short)-7979))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_4] [i_1] [i_2] [(_Bool)1] [i_1] [i_4] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (short)7987)) ? (((/* implicit */int) (signed char)118)) : (((/* implicit */int) (short)-7986)))), ((-(((/* implicit */int) (short)-10231))))));
                                var_15 &= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)1610)) ? (max((((((/* implicit */_Bool) (short)-7995)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7979))) : (3156353085U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2707958013U))))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)2] [(signed char)1] [(unsigned char)4] [(unsigned short)5] [i_3] [(short)3]))) < (2519840543U)))), (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                arr_15 [i_4] = ((/* implicit */short) min((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)53302)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_0] [i_1] [(unsigned short)5] &= ((/* implicit */short) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-3612)) && (((/* implicit */_Bool) 2189659766U)))), (((((/* implicit */_Bool) 1138614211U)) && (((/* implicit */_Bool) (signed char)45))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [(short)9] [i_2] [i_0])) && (((/* implicit */_Bool) (short)7987)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35089))) + (arr_3 [i_2] [i_0])))))));
                }
                arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)30446))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 3; i_5 < 23; i_5 += 2) 
    {
        for (unsigned short i_6 = 1; i_6 < 22; i_6 += 2) 
        {
            {
                arr_23 [i_6] [(_Bool)1] = ((/* implicit */long long int) (_Bool)1);
                var_16 = ((/* implicit */short) max((1792025367U), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)254)))))) == (((((/* implicit */_Bool) (short)7979)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [(_Bool)1]))) : (2147483648U))))))));
            }
        } 
    } 
}
