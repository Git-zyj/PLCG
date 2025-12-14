/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222503
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (6363630640787362764LL) : (((/* implicit */long long int) arr_6 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)40)) ? (4249136444U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (arr_0 [i_0]) : (((((((/* implicit */int) (signed char)-80)) + (2147483647))) >> (((51657007983719385LL) - (51657007983719360LL))))))) : (((((/* implicit */_Bool) 875880471U)) ? (-22908987) : (-2)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    arr_10 [19] = ((/* implicit */unsigned char) 0ULL);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        var_21 = ((/* implicit */long long int) ((arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (1023) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (_Bool)1))))));
                        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((var_8) - (((/* implicit */unsigned int) -1968813529)))) + (((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_4 = 1; i_4 < 18; i_4 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_4] [i_4 + 1] [16LL] [i_4 + 2])) + (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) (short)14855)))))));
                    var_24 = ((/* implicit */int) ((unsigned char) (signed char)8));
                    var_25 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (1058794308)));
                    var_26 = ((/* implicit */long long int) arr_0 [4]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 4) 
        {
            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65524)) || (((/* implicit */_Bool) (unsigned char)255))));
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 1801387323)) - (10906871324193215053ULL)));
        }
        var_29 = ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])) : (arr_18 [i_5] [i_5]));
    }
}
