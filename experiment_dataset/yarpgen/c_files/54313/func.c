/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54313
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [4ULL])))));
                arr_4 [i_0] = ((/* implicit */signed char) (~(((max((arr_3 [2]), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)36)) + ((-(((/* implicit */int) var_3)))))))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
                {
                    var_13 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 301649285)) ? (((/* implicit */int) (signed char)-45)) : (((/* implicit */int) (short)-13652))))));
                    var_14 = ((/* implicit */unsigned char) var_2);
                    arr_8 [i_2 - 1] [i_0] [i_0] = ((/* implicit */unsigned short) var_7);
                }
                for (unsigned short i_3 = 1; i_3 < 9; i_3 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 12; i_4 += 2) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~((+(((/* implicit */int) (unsigned char)161)))))))));
                                var_16 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_1] [i_1] [i_3 - 1])), (var_7)))) ? (min((16482157353359777581ULL), (((/* implicit */unsigned long long int) (unsigned short)42021)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [(unsigned char)6] [i_4 + 1] [i_4 + 1] [i_3 + 2] [i_3 - 1])))));
                                arr_16 [1] [i_0] [2ULL] [1] [i_5] = ((/* implicit */unsigned long long int) ((((long long int) (~(((/* implicit */int) (unsigned short)32642))))) != (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) (unsigned char)44))) + ((+((-(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0] [(short)3] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) -945800546023390726LL)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)57929))))) ? ((+(1964586720349774045ULL))) : (var_2)))));
                                var_18 = ((/* implicit */long long int) ((unsigned char) arr_6 [(signed char)7] [i_0] [9LL] [i_1]));
                                var_19 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [i_3] [i_6] [1ULL] [i_0]))) / (945800546023390740LL))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */short) max((((((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_3] [i_3] [6ULL] [i_0] [i_0]))))) / (-5821069062220821710LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */int) var_6))))) ? (max((((/* implicit */unsigned int) var_1)), (var_5))) : (((/* implicit */unsigned int) max((-1533832360), (((/* implicit */int) arr_22 [i_3] [i_3] [(unsigned char)6] [i_0]))))))))));
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(var_2))) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_4)), (945800546023390725LL))))))) ? (var_0) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6)))), (((/* implicit */int) max(((short)-26059), (var_1)))))))));
}
