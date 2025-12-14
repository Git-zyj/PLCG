/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190842
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) var_7))));
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 4) 
        {
            var_11 ^= ((/* implicit */unsigned char) var_4);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) (+(var_0)));
                        var_13 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                        var_14 += ((/* implicit */short) (((((((~(2147483647))) + (2147483647))) + (2147483647))) >> (((((/* implicit */_Bool) var_7)) ? (5U) : (((/* implicit */unsigned int) arr_9 [i_2]))))));
                        var_15 = ((/* implicit */unsigned char) 0);
                        arr_13 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) (short)-9042);
                    }
                } 
            } 
            var_16 = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_11 [i_0] [i_0] [i_1] [i_1 - 2])) + (2147483647))) >> (((((/* implicit */int) (unsigned char)49)) - (39)))))));
        }
        var_17 |= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_5 [i_0 - 3]), (((/* implicit */unsigned char) var_1))))) ? ((+(((/* implicit */int) (unsigned char)209)))) : (((/* implicit */int) var_3))));
        /* LoopSeq 2 */
        for (unsigned long long int i_4 = 1; i_4 < 22; i_4 += 4) 
        {
            arr_16 [i_4 + 2] [9ULL] [i_0] = ((/* implicit */short) var_0);
            var_18 = ((/* implicit */_Bool) (unsigned short)11114);
            var_19 += ((/* implicit */int) max((((/* implicit */long long int) max((arr_6 [i_0] [11ULL]), (min((((/* implicit */int) arr_11 [i_4] [i_4] [(_Bool)1] [(_Bool)1])), (1705559633)))))), ((((!(((/* implicit */_Bool) (unsigned char)0)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)15))))) : (min((((/* implicit */long long int) (unsigned char)0)), (var_8)))))));
        }
        /* vectorizable */
        for (signed char i_5 = 2; i_5 < 21; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
            {
                for (short i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    {
                        arr_26 [i_7] [i_0] = ((/* implicit */int) (unsigned short)11105);
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            var_20 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) var_4)) ? (-539748852) : (((/* implicit */int) var_6))))));
                            var_21 = ((/* implicit */signed char) var_9);
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
                        }
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)15))))) <= (((((/* implicit */_Bool) 0)) ? (arr_1 [i_0]) : (((/* implicit */int) (unsigned char)252)))))))));
        }
        var_23 += ((/* implicit */unsigned long long int) arr_5 [i_0 + 2]);
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        arr_32 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (~(3278911686U)))) & ((-(var_2)))));
        /* LoopNest 2 */
        for (signed char i_10 = 2; i_10 < 18; i_10 += 3) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    arr_39 [i_9] [i_10] |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)55835), (arr_21 [i_9] [i_9] [21U])))))))));
                    var_24 &= ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)6)), (var_7)))) : (2ULL)))));
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        for (int i_13 = 0; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */_Bool) (unsigned char)191);
                                var_26 &= ((/* implicit */unsigned long long int) var_1);
                                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_9])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)54422)) ? (((/* implicit */int) var_6)) : (0))) < (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)46)), ((unsigned short)54437)))))))) : (max((((/* implicit */unsigned long long int) ((5012985044586668317LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40398)))))), (((((/* implicit */_Bool) arr_19 [10ULL] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_27 [i_9] [(short)10] [i_11] [i_12] [i_13])))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_34 [i_9] [i_10 - 1] [i_11])))))));
                }
            } 
        } 
        var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)25138)))))));
        arr_46 [i_9] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_9 [(signed char)13]), (((/* implicit */int) ((((/* implicit */int) (signed char)109)) < (var_7))))))), ((+(min((11593535221320435967ULL), (((/* implicit */unsigned long long int) var_1))))))));
    }
    var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) var_6))));
}
