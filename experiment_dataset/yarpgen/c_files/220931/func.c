/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220931
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 21; i_1 += 3) 
        {
            {
                arr_7 [i_0] [20LL] [i_0] = ((/* implicit */unsigned long long int) (-(var_8)));
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        {
                            var_16 = ((/* implicit */short) (!(((((((/* implicit */int) (unsigned short)54828)) + (((/* implicit */int) (signed char)127)))) >= (((/* implicit */int) (signed char)109))))));
                            arr_14 [i_0] [i_3] [i_3] [i_2 + 2] [i_3] = var_9;
                            /* LoopSeq 3 */
                            for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                            {
                                var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_12 [(_Bool)1] [(_Bool)1] [i_2 + 2] [i_3 - 1] [(_Bool)0]), (var_7)))) >> (((((/* implicit */int) arr_16 [(unsigned short)21] [i_2 + 1] [(unsigned short)21] [i_0])) + (7216))))))));
                                arr_17 [i_0] [5LL] [i_0] [i_3] [i_0] = ((/* implicit */long long int) (+((~(((var_11) / (((/* implicit */unsigned int) var_8))))))));
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) / (min((var_9), (((/* implicit */long long int) var_6)))))) <= (max(((~(arr_5 [i_1] [i_2] [i_4 + 1]))), (((((/* implicit */long long int) ((/* implicit */int) var_6))) | (var_10)))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((arr_9 [i_3 - 1] [(signed char)10] [2U] [i_0]) == (((/* implicit */long long int) arr_6 [i_0] [i_0] [20])))) && (((/* implicit */_Bool) var_7)))))) % ((+((+(arr_13 [i_0] [i_1 - 2] [(unsigned char)19] [(short)10])))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 1) 
                            {
                                arr_22 [16] [i_3] [i_1 - 3] [i_3] [9LL] = ((((((/* implicit */_Bool) arr_9 [7LL] [i_2] [i_2] [i_2])) ? ((-(arr_5 [i_2] [i_1 + 1] [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-126)))))))) == (((/* implicit */long long int) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_7)) ? (arr_9 [i_0] [i_1 - 3] [i_1 - 3] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3]))))) + (3426952034604448419LL)))))));
                                var_20 |= ((/* implicit */unsigned char) ((((var_5) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-126))))))) > ((((+(5ULL))) << (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                                arr_23 [i_0] [i_3] [i_2 + 2] [i_3] [i_5] = ((/* implicit */unsigned char) (((+((~(var_1))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_5])) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((arr_13 [i_0] [i_0] [i_1 - 1] [i_0]) + (9223372036854775807LL))) >> (((arr_9 [i_0] [i_0] [i_0] [1LL]) + (3426952034604448436LL))))))))))));
                            }
                            for (unsigned short i_6 = 0; i_6 < 22; i_6 += 3) 
                            {
                                arr_28 [i_3] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_1]))))) || ((!(((/* implicit */_Bool) (+(var_14))))))));
                                var_21 = ((/* implicit */int) var_12);
                            }
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3]))) % (var_14))) : (((/* implicit */long long int) (-(arr_11 [i_3 - 1])))))))));
                            var_23 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((var_9) / (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (-(arr_0 [i_0]))))))), (((((((/* implicit */unsigned long long int) var_9)) / (var_1))) / (((((/* implicit */unsigned long long int) 3380111706U)) / (3ULL)))))));
                        }
                    } 
                } 
                arr_29 [(short)11] [i_1 - 1] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1] [i_1] [i_1 + 1])) || (((/* implicit */_Bool) arr_9 [i_1 - 3] [i_1 - 2] [i_1 + 1] [i_1 - 2]))))) < (((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_13)))) ? (((/* implicit */int) ((var_0) != (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1 - 3])))))) : (((((/* implicit */int) var_7)) / (((/* implicit */int) var_15))))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (~(((var_0) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_12)) >= (arr_32 [i_0] [i_0] [i_7] [i_8])))))))));
                            var_24 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(arr_34 [i_0] [i_1 - 3] [i_7] [i_8] [i_8])))) ? ((+(arr_20 [i_8] [i_8] [i_8] [i_8] [i_7] [i_1] [i_0]))) : (((/* implicit */long long int) arr_6 [i_1 + 1] [i_1 - 2] [i_1 - 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_25 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((var_9) + (9223372036854775807LL))) << (((var_3) - (3398340437U))))) < (((((var_9) + (9223372036854775807LL))) << (((((var_0) + (1571795049993334192LL))) - (32LL))))))))) : (((((/* implicit */_Bool) var_4)) ? ((-(var_14))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)47531))))))));
}
