/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36488
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_7 [i_1 + 3] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)193))))), (((((/* implicit */int) arr_3 [i_1 - 1] [i_1 - 1] [i_0])) - (var_3))))), (min((((int) -96888075225973065LL)), (((/* implicit */int) (unsigned short)57850))))));
                var_10 |= ((/* implicit */unsigned char) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    for (short i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        {
                            var_11 *= ((/* implicit */_Bool) arr_1 [i_0] [i_1]);
                            arr_15 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_4 - 2] [i_1 + 3])) ? (((/* implicit */int) arr_1 [i_4 - 1] [i_1 + 2])) : (((/* implicit */int) (unsigned short)57366))));
                            var_12 = (!(((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_4 - 1] [(unsigned char)3])));
                        }
                    } 
                } 
                var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)2551)))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)107))) : (9223372036854775807LL)));
            }
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 3) 
            {
                var_15 += ((/* implicit */short) (signed char)-89);
                var_16 -= ((/* implicit */int) var_5);
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_17 = ((/* implicit */unsigned long long int) var_7);
                var_18 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (_Bool)1))))))));
                arr_20 [i_0] [i_7] [i_7 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_16 [i_1] [i_1] [i_1 - 1] [i_1]))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_7 - 1]))) : (arr_18 [i_0] [i_1] [i_1 + 1]))))) : (((/* implicit */int) min((arr_19 [i_7 - 1] [i_7 - 1] [i_7]), (((/* implicit */unsigned short) arr_10 [i_1 + 3] [i_1 + 2] [i_1 + 1] [i_1 - 1])))))));
                var_19 = ((/* implicit */long long int) (unsigned short)2568);
            }
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_17 [i_1 - 1])), (min((-2115463261743340375LL), (((/* implicit */long long int) arr_3 [i_0] [i_0] [(unsigned char)9]))))))) ? (max((max((14421647407868684332ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) arr_14 [(signed char)10] [(signed char)10] [i_1])))), (((/* implicit */int) arr_12 [i_1 + 1] [i_1] [i_1 + 2] [i_1 + 1] [i_1]))))))))));
        }
        var_21 *= ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1398733967))))), (var_1)))), (((unsigned long long int) arr_17 [i_0]))));
    }
    for (short i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
    {
        var_22 = 979935554562825382ULL;
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 12; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    var_23 |= ((/* implicit */_Bool) ((long long int) min((((/* implicit */unsigned long long int) 4053557196U)), ((-(1022890858678357695ULL))))));
                    var_24 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_24 [i_10] [i_9]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)35307))))), (arr_4 [i_8] [i_10])));
                }
            } 
        } 
    }
    for (unsigned short i_11 = 4; i_11 < 11; i_11 += 2) 
    {
        arr_35 [i_11 - 4] = ((/* implicit */int) arr_34 [11ULL]);
        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
    }
    var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 2279335467U))))))), (((unsigned int) var_4))));
}
