/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235981
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (var_4)))) ? (18U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
        arr_3 [i_0] = ((/* implicit */int) ((var_7) | (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))) | (((/* implicit */int) var_10)))))));
        arr_4 [i_0] = ((/* implicit */_Bool) var_3);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_8 [i_1] = (+((+(((/* implicit */int) (unsigned char)70)))));
        var_16 = ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-37)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (signed char)78)))))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) var_1))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_4 = 3; i_4 < 22; i_4 += 4) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((var_8) - (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */unsigned int) var_4)) : (4294967278U))))))));
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        {
                            arr_21 [i_6] [i_4] [i_4] [21] [i_6] = ((/* implicit */unsigned short) var_3);
                            var_18 = ((/* implicit */unsigned int) 20);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    for (int i_8 = 3; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                            var_20 -= 1356799516U;
                            var_21 = ((/* implicit */_Bool) var_3);
                        }
                    } 
                } 
            }
            for (int i_9 = 1; i_9 < 23; i_9 += 2) 
            {
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) var_3))));
                var_23 ^= ((/* implicit */unsigned long long int) var_4);
            }
            arr_29 [i_2] = ((/* implicit */unsigned short) (+(var_8)));
            /* LoopSeq 1 */
            for (int i_10 = 0; i_10 < 24; i_10 += 2) 
            {
                var_24 &= ((/* implicit */unsigned int) var_6);
                var_25 ^= ((/* implicit */unsigned long long int) -2138620484);
            }
        }
        for (int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_12 = 3; i_12 < 20; i_12 += 2) 
            {
                var_26 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (max((2026605574), (((/* implicit */int) (_Bool)0))))));
                var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned long long int) var_2)) : (0ULL)))) ? (((/* implicit */int) var_13)) : (-356458671)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * ((-(var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    for (short i_14 = 0; i_14 < 24; i_14 += 2) 
                    {
                        {
                            var_28 = (~(var_3));
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) var_3))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 9223372036854775796LL)) ? (11486356402920318832ULL) : (((/* implicit */unsigned long long int) var_8))))));
                arr_46 [i_2] [i_2] [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
            }
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                for (long long int i_17 = 0; i_17 < 24; i_17 += 2) 
                {
                    {
                        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) != (var_7))) ? (((((/* implicit */_Bool) -307881903)) ? (((((/* implicit */_Bool) (short)17531)) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) (unsigned char)236)))) : (((/* implicit */int) var_6)))) : (((/* implicit */int) (unsigned short)15180)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) var_13))));
                            arr_56 [i_2] = ((/* implicit */long long int) (signed char)105);
                        }
                        for (unsigned short i_19 = 1; i_19 < 21; i_19 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (-(var_2))))));
                            var_34 = ((/* implicit */unsigned char) (-((-(((var_13) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) var_10))))))));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) var_9))));
                            var_36 &= ((/* implicit */_Bool) var_12);
                        }
                    }
                } 
            } 
            arr_61 [i_11] [i_11] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))));
        }
        /* LoopNest 3 */
        for (int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            for (int i_21 = 0; i_21 < 24; i_21 += 2) 
            {
                for (unsigned short i_22 = 1; i_22 < 22; i_22 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_37 = ((/* implicit */_Bool) var_2);
                            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))));
                        }
                        arr_73 [i_22] [i_22] [i_20] [i_20] [i_20] [i_2] &= ((((/* implicit */int) (signed char)11)) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (14156084082607233383ULL)))));
                        var_39 -= ((/* implicit */signed char) var_6);
                    }
                } 
            } 
        } 
        arr_74 [i_2] &= ((/* implicit */int) var_12);
        var_40 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
    }
    var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((var_6) ? ((~(((/* implicit */int) (short)-17525)))) : (((var_5) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6))))))) ? (var_0) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_1)))))));
}
