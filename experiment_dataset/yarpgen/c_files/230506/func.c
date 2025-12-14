/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230506
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
    for (short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        arr_10 [i_3] = ((/* implicit */int) (~(min((arr_7 [i_1 + 1] [i_1] [i_2]), (((/* implicit */long long int) arr_2 [i_1 - 3] [i_1]))))));
                        arr_11 [i_0] [i_1] &= arr_4 [i_0] [i_0] [i_0];
                        arr_12 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */short) var_3);
                    }
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                    {
                        for (int i_5 = 1; i_5 < 15; i_5 += 4) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) min((arr_15 [i_0]), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))))) ? ((-(var_11))) : (4194303)))));
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_0 [i_0])), (arr_2 [i_0] [i_0])))) ? (((long long int) arr_13 [i_5 + 1] [i_1 + 2] [i_1 + 2] [i_2] [i_5] [i_2 - 1])) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 3] [i_1] [i_1] [i_5]))) != (((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))) : (var_4)))))))));
                                arr_18 [i_0] [i_1] [i_2] &= ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2]))) == (arr_13 [i_0] [(signed char)4] [i_2 - 1] [i_0] [i_4] [i_0])))) : (((/* implicit */int) var_7))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_6 = 2; i_6 < 16; i_6 += 3) 
                    {
                        var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_6 - 1] [i_2 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44291))) : (arr_21 [i_6 + 2] [i_2 + 1])));
                        var_18 = ((/* implicit */int) arr_3 [i_6]);
                        var_19 &= ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        var_20 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (arr_8 [i_6 - 2] [i_0] [i_6 - 2]) : (arr_8 [i_6 - 2] [i_0] [(signed char)0])));
                    }
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_7 = 0; i_7 < 10; i_7 += 3) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 2) 
        {
            {
                arr_29 [i_7] [i_7] = ((/* implicit */int) var_1);
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 8; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                    {
                        {
                            var_21 ^= ((((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_7] [i_7] [i_9]))) ? (((((/* implicit */_Bool) arr_2 [i_8] [i_9])) ? (((/* implicit */unsigned long long int) var_14)) : (var_8))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)3))))))) | (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(4194301)))), (35184372088831LL)))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) < (var_8)))))) : ((+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_9] [i_9]))) : (arr_15 [15ULL])))))));
                            arr_35 [i_7] [i_8] [i_7] [(unsigned short)3] [i_10] [i_10] = (!(((/* implicit */_Bool) var_4)));
                            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((1924476666910756445LL), (((/* implicit */long long int) (~(var_11))))))) ? ((-(((/* implicit */int) ((short) (unsigned short)51101))))) : (((/* implicit */int) (unsigned short)12488))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) var_0);
}
