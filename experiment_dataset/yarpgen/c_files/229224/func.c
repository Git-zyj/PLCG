/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229224
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
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_7 [12] [12] |= ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)-58))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    var_20 += ((/* implicit */unsigned long long int) (!(((var_19) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                    arr_11 [i_1] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0]);
                }
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_14 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 + 1])) + (((/* implicit */int) var_8))));
                    var_21 = ((/* implicit */signed char) var_3);
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + (arr_8 [i_0] [i_1] [i_1] [i_3]))))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_4 = 1; i_4 < 7; i_4 += 1) 
    {
        for (short i_5 = 3; i_5 < 8; i_5 += 2) 
        {
            {
                arr_23 [2ULL] [2ULL] &= ((/* implicit */int) (+(((((2010706359747940335LL) * (((/* implicit */long long int) ((/* implicit */int) var_15))))) / (max((2010706359747940346LL), (((/* implicit */long long int) (unsigned char)231))))))));
                /* LoopNest 3 */
                for (long long int i_6 = 1; i_6 < 7; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                arr_32 [i_4] [i_5 - 1] [i_6] [i_4] = ((/* implicit */long long int) (((+(((var_19) % (((/* implicit */unsigned long long int) var_5)))))) % (((/* implicit */unsigned long long int) ((unsigned int) arr_26 [i_4 - 1] [i_5 - 3] [i_6 + 3] [i_8] [i_8])))));
                                var_23 = ((/* implicit */short) max((var_23), (var_6)));
                                arr_33 [6] [i_5 + 1] [i_6] [i_7] [4U] [4U] &= ((/* implicit */unsigned int) arr_13 [i_7] [i_5 - 2]);
                                arr_34 [(signed char)4] [i_5] [(signed char)4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [0ULL] [i_8]))) : (var_13))) >> (min((((/* implicit */unsigned int) arr_24 [2U] [i_7])), (var_5)))))) ? (((/* implicit */long long int) arr_10 [i_8] [i_7] [i_5])) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_7] [i_6]))) / (arr_4 [i_4])))) ? ((-(arr_6 [i_7]))) : (((/* implicit */long long int) var_1))))));
                                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) + (((((/* implicit */_Bool) -9223372036854775798LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_0)))))) != (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_3))), (((/* implicit */unsigned long long int) max((arr_25 [i_5]), (((/* implicit */int) var_14)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(9223372036854775807LL)))))))) : (var_19)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            {
                var_26 += ((/* implicit */int) min((((/* implicit */long long int) (+(arr_8 [5ULL] [i_9 - 1] [i_9 - 1] [i_9 - 1])))), (max((((/* implicit */long long int) var_2)), (var_4)))));
                /* LoopNest 2 */
                for (short i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((unsigned char) ((arr_5 [i_9] [(unsigned char)20]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                            var_28 -= ((/* implicit */unsigned int) var_3);
                            arr_46 [i_9 - 1] [18LL] [i_11] [i_9] [20U] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_0))))) ? (var_12) : (arr_4 [7]))) : (((/* implicit */long long int) ((unsigned int) 2010706359747940345LL)))));
                            var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((int) ((var_12) | (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_9 - 1])))))))));
                            arr_47 [i_9] [i_10] [i_9] [i_12] = ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) arr_40 [i_9 - 1])), (arr_6 [5]))) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)186))))))));
                var_31 = var_4;
            }
        } 
    } 
    var_32 = ((/* implicit */_Bool) ((short) (+(min((((/* implicit */unsigned long long int) var_8)), (var_19))))));
}
