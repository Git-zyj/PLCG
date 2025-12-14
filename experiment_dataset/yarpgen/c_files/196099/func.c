/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196099
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
    var_16 = ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1])) / (var_6)))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)9359)), (2350774078U)))) : (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) / (arr_10 [i_4] [i_2] [i_2])))))) ? (((unsigned int) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) arr_3 [i_2] [(unsigned char)4]))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) var_8))))))));
                                var_18 = var_3;
                                var_19 ^= ((/* implicit */unsigned char) ((((long long int) arr_0 [i_0])) == (4294967295LL)));
                                var_20 = ((/* implicit */unsigned int) (+(max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) ((unsigned char) 2646431578U)))))));
                                arr_13 [i_4] [i_1] [16LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_1 - 2]))))) ? (((/* implicit */int) max((arr_0 [i_1 - 1]), (arr_0 [i_1 + 1])))) : (((/* implicit */int) min((arr_0 [i_1 - 2]), (arr_0 [i_1 + 1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_2] [i_2 + 1] &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) max((arr_9 [i_1 - 2]), (arr_9 [i_1 - 1]))))) + (max(((+(arr_12 [i_2] [i_2] [i_2 - 1] [i_1 - 1] [i_2] [(unsigned char)2] [i_0]))), (((/* implicit */long long int) arr_8 [i_0] [6ULL] [i_2] [i_2]))))));
                    var_21 = ((/* implicit */unsigned long long int) arr_10 [i_2 - 2] [i_1] [i_2]);
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_1 - 1] [i_0] [i_1 - 2] [(short)15]))));
                                var_23 &= ((/* implicit */_Bool) (~(arr_5 [i_0] [i_2])));
                                var_24 = ((/* implicit */long long int) min((var_24), (((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_15)))) ? (arr_17 [i_0] [i_0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_0]))))))) & ((~((+(arr_18 [i_0] [i_0] [i_1 + 1] [i_2] [i_5 - 2] [i_2])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (min((((/* implicit */unsigned int) var_7)), (1573038314U)))))) ^ (((((var_8) <= (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_13)) : (var_6))) : (((/* implicit */unsigned long long int) ((var_4) + (var_4))))))));
    var_26 *= ((/* implicit */_Bool) (+(min(((+(var_12))), (((/* implicit */unsigned long long int) var_7))))));
}
