/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249864
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19; i_3 += 3) 
                    {
                        var_19 = ((/* implicit */short) ((var_7) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_0))) != (arr_4 [17U] [(signed char)13] [i_3])))))));
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) ^ (29)));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_12 [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)0)) - (((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) (unsigned char)21))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (short)2130))))))) ? (max((23ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) / (((/* implicit */int) (short)-1249))))))) : (((/* implicit */unsigned long long int) max((-27), (((/* implicit */int) var_16)))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                        {
                            var_23 = 29;
                            var_24 = ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(arr_1 [i_1] [i_0])))), (arr_5 [i_1] [i_2 + 3] [i_1])))) && (((/* implicit */_Bool) ((var_7) ? (((((/* implicit */_Bool) var_14)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2130))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)116), (((/* implicit */unsigned char) var_8))))))))));
                        }
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_20 [i_2] [i_1] [(short)13] [i_7] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_7] [i_2 + 4])) != (((/* implicit */int) var_8)))))));
                        var_25 = ((/* implicit */unsigned short) (((((((~(((/* implicit */int) var_15)))) + (2147483647))) >> (((arr_6 [i_2 + 4] [i_2 + 1] [i_2 + 1]) + (750979242))))) != (((1032597542) + (-1190303661)))));
                    }
                    arr_21 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_16);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_3))))))))));
    var_27 |= ((/* implicit */_Bool) var_17);
}
