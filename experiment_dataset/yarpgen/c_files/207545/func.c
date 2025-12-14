/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207545
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (short)-27085)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) / (8776330598721192313ULL))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_15))) << (((((arr_3 [i_0] [i_0]) >> (((var_9) - (2026472148805910685LL))))) - (13738077)))))))) : (((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (short)-27085)) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) / (8776330598721192313ULL))), (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_15))) << (((((((arr_3 [i_0] [i_0]) >> (((var_9) - (2026472148805910685LL))))) - (13738077))) + (426147))))))));
                arr_7 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (((((/* implicit */_Bool) 400915088)) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (short)24086)), (9007198180999168LL)))) : (max((((/* implicit */unsigned long long int) var_14)), (12372365805123227615ULL)))))));
            }
        } 
    } 
    var_18 |= ((/* implicit */long long int) min((((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_11)))) ? (min((((/* implicit */unsigned long long int) 0LL)), (var_10))) : (((/* implicit */unsigned long long int) (~(1259303952)))))), (var_15)));
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (short i_3 = 3; i_3 < 19; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                {
                    arr_14 [i_3] [i_3] [i_4] = 7417159606825101626ULL;
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_19 = (short)27674;
                        arr_18 [i_3] [i_5] [i_4] [i_4] [i_3] [i_3] = ((unsigned char) min((arr_16 [i_3] [i_3] [i_3] [i_3 + 2]), (((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_3] [i_3] [i_2])) <= (((/* implicit */int) var_12)))))));
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            arr_23 [i_3] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 64U)))) == (18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3 - 1] [i_3])))))) : ((~(max((arr_15 [i_2] [i_3] [i_4] [i_6]), (((/* implicit */unsigned long long int) var_9)))))));
                            arr_24 [i_3] [i_3] = ((/* implicit */unsigned int) var_14);
                        }
                        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((-(var_14)))))) ? (var_14) : ((~(((/* implicit */int) var_7))))));
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))) + (min((((/* implicit */unsigned long long int) arr_21 [i_3 + 1] [i_3 - 3])), (((((/* implicit */_Bool) arr_11 [i_2] [i_3] [i_2])) ? (2730231391623502937ULL) : (19ULL)))))));
                            arr_27 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_3 - 1] [i_3])))))));
                        }
                    }
                }
            } 
        } 
    } 
}
