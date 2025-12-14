/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195224
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
    var_15 = ((/* implicit */short) max((var_14), (((/* implicit */unsigned long long int) (signed char)28))));
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) max((((/* implicit */int) (signed char)17)), (min((((((/* implicit */int) var_13)) / (((/* implicit */int) var_10)))), (var_3))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_0] [(unsigned short)12] = ((/* implicit */signed char) ((long long int) ((max((((/* implicit */long long int) var_11)), (var_2))) + (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_6 [i_0] [i_1] [i_1]))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) -1)) / (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (var_9))) + (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-100)) + (2147483647))) >> (((((/* implicit */int) var_7)) - (12191)))))))))))));
                        arr_11 [i_2] [i_2] |= ((/* implicit */signed char) ((((((/* implicit */int) var_11)) != (((/* implicit */int) ((var_8) > (arr_10 [(signed char)13] [i_3] [(signed char)13] [(signed char)13] [i_3])))))) ? (var_9) : (((/* implicit */unsigned long long int) ((long long int) (unsigned char)175)))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((max((-1LL), (((/* implicit */long long int) (unsigned char)73)))) / (((/* implicit */long long int) var_8)))) / (((/* implicit */long long int) arr_9 [10LL] [i_1] [i_2] [i_2])))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) max((max((arr_6 [i_1 - 1] [i_2] [i_3]), (((/* implicit */short) (!(((/* implicit */_Bool) var_5))))))), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_4))))))))));
                            arr_15 [i_0] [i_1] [i_0] [i_2] [i_0] [i_4] [i_4] = ((/* implicit */long long int) arr_5 [i_0 + 2] [11LL] [i_3]);
                            var_20 -= ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), ((unsigned short)65522))))) | (max((((/* implicit */long long int) var_10)), (var_2))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) max(((unsigned short)13), (((/* implicit */unsigned short) arr_1 [i_4]))))) ? (((/* implicit */int) ((var_8) <= (((/* implicit */int) var_5))))) : (((1501008795) | (((/* implicit */int) (signed char)-1)))))))));
                            var_21 = max((((((/* implicit */unsigned long long int) ((var_2) % (((/* implicit */long long int) ((/* implicit */int) (short)1)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_6))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) arr_14 [i_0] [i_0] [i_2] [i_3] [i_4])) ^ (var_2)))) >= (((var_9) - (var_12)))))));
                        }
                        for (long long int i_5 = 3; i_5 < 12; i_5 += 2) 
                        {
                            var_22 = ((max((7054400040588519275ULL), (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)12)), (0)))))) + (((/* implicit */unsigned long long int) var_8)));
                            var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_8)) <= (arr_9 [i_0] [i_0 + 3] [i_0 + 3] [i_0])))), (var_9))));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
                    {
                        var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_2 [i_0] [i_1 + 3] [10U])))) ? (((var_6) << (((var_14) - (10237193430549752869ULL))))) : (((/* implicit */unsigned long long int) var_4))))) ? (((((/* implicit */_Bool) -472121813)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49152))))) : (((/* implicit */unsigned long long int) var_1)));
                        var_25 = ((/* implicit */long long int) ((var_4) / (((((/* implicit */int) ((((/* implicit */int) (unsigned short)11511)) > (((/* implicit */int) var_13))))) + (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (signed char)-100))))))));
                        var_26 += ((((/* implicit */_Bool) ((long long int) var_6))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((1501008792) / (var_8)))) == (((var_6) * (((/* implicit */unsigned long long int) var_0)))))))) : ((-(((((/* implicit */long long int) var_1)) ^ (-1LL))))));
                    }
                    var_27 = ((/* implicit */unsigned short) (unsigned char)0);
                }
            } 
        } 
    } 
}
