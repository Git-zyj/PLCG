/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50125
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
    var_14 = ((/* implicit */long long int) max((var_1), (((((/* implicit */_Bool) -631952956)) ? (((/* implicit */int) (short)26695)) : (876308518)))));
    var_15 = ((/* implicit */signed char) var_2);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) var_4);
                    /* LoopSeq 3 */
                    for (short i_3 = 3; i_3 < 16; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [(unsigned char)4] [i_2] [i_3] &= (~(((((/* implicit */_Bool) (unsigned short)52420)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_0 + 1]))));
                        arr_11 [i_0] [i_0] [i_2] [i_1] = ((/* implicit */_Bool) (+(arr_7 [i_3 + 1] [i_0 - 2] [i_0])));
                        arr_12 [i_1] [(signed char)9] [i_0] [i_3] = ((/* implicit */unsigned char) ((var_2) != (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) >> (((876308502) - (876308461)))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_9 [i_0 - 1])))))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        arr_16 [i_0 - 2] [i_1] [i_1] [i_1] [(signed char)0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_10)), (arr_4 [i_0] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1760203962)), (3729320482285948990LL)))) : (((unsigned long long int) -1648347708594477918LL))))));
                        /* LoopSeq 1 */
                        for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (-876308521)))))))));
                            var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (((((-(min((((/* implicit */int) arr_18 [i_0] [i_1] [i_1] [i_1] [(short)3] [i_1])), (63))))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 33554431U)) || (((/* implicit */_Bool) var_0))))))))));
                            var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_8 [i_0 - 1] [i_0] [i_1] [i_0] [i_0]) ^ (((/* implicit */long long int) var_12)))))));
                            arr_21 [i_1] [i_0] [i_2] [(_Bool)1] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_5] [i_2] [10LL])) * ((+(((/* implicit */int) var_6))))));
                            var_19 = ((/* implicit */unsigned long long int) min(((unsigned short)47362), (((/* implicit */unsigned short) (unsigned char)1))));
                        }
                        arr_22 [i_0] [i_1] [i_0] = ((((((/* implicit */_Bool) var_8)) ? (arr_8 [i_0] [i_1 + 2] [i_1] [i_4] [i_1 + 2]) : (arr_8 [i_4] [i_2] [i_1] [i_0] [i_0]))) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_15 [i_0] [i_0 + 1] [13U] [i_0])))));
                    }
                    for (unsigned char i_6 = 0; i_6 < 18; i_6 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((min((((/* implicit */int) (short)-26685)), (-876308518))) / (((((/* implicit */int) var_3)) + (arr_17 [i_0 + 1] [i_1] [i_2] [i_2 + 1] [i_6] [i_7])))))) == ((((-(15461820168224232895ULL))) << (((min((var_11), (((/* implicit */unsigned int) (unsigned char)255)))) - (215U))))))))));
                            arr_29 [i_0] [i_1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) arr_3 [i_0] [i_1 + 3])))), (((((/* implicit */int) arr_20 [i_7] [i_2] [i_2] [i_6] [i_7] [i_2] [i_6])) << (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) != (var_11))))) : (((/* implicit */int) ((unsigned short) arr_8 [i_0] [i_0 + 1] [i_1] [i_0] [i_0])))));
                            var_21 = ((/* implicit */int) arr_27 [i_0] [i_1] [i_2] [i_6]);
                            var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_7] [i_1] [i_1] [i_1] [i_0]))))))))));
                        }
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-(4261412865U)))))))));
                    }
                    var_24 = ((/* implicit */signed char) ((unsigned char) (~(-13LL))));
                }
            } 
        } 
    } 
}
