/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43671
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        var_17 += ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))), ((+(((((/* implicit */_Bool) arr_0 [i_0])) ? (0ULL) : (((/* implicit */unsigned long long int) 1803694532U))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            var_18 += ((/* implicit */unsigned long long int) ((long long int) 0ULL));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (unsigned char)8);
            arr_6 [i_0] = ((/* implicit */short) var_0);
            var_19 &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) % (2ULL)));
            /* LoopSeq 2 */
            for (unsigned char i_2 = 4; i_2 < 9; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 9; i_4 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) var_14);
                            var_21 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_2 - 1])) > (((/* implicit */int) arr_2 [i_2 - 1]))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_22 = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2 - 4]))) * (0ULL));
                    var_23 = (((+(((/* implicit */int) (signed char)78)))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (var_2)))));
                }
                for (unsigned char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    arr_18 [i_0] [i_1] [i_2] [i_6] = ((/* implicit */long long int) (_Bool)1);
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((long long int) (!(arr_13 [0] [(unsigned char)2])))))));
                }
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                    {
                        var_25 &= ((/* implicit */long long int) ((short) arr_19 [i_1] [i_7]));
                        var_26 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_2 [i_0]))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                    {
                        var_27 = (unsigned char)31;
                        arr_26 [i_0] [2ULL] [i_0] [i_2] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_14 [i_2 - 4] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (((((/* implicit */_Bool) arr_8 [i_2] [(_Bool)1] [i_9])) ? (4611686018427387904ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187)))))));
                        arr_27 [6LL] [i_2] [6LL] [i_9] = ((/* implicit */unsigned char) arr_2 [i_7]);
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_2 - 2])) ? (((/* implicit */int) arr_23 [i_2 + 1])) : (((/* implicit */int) arr_23 [i_2 - 4]))));
                    }
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                    {
                        arr_30 [i_7] [i_7] [i_2 - 1] [i_7] [i_2] [i_10] = ((/* implicit */unsigned long long int) ((3505722716960277671ULL) == (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
                        var_29 = ((/* implicit */unsigned char) arr_12 [(short)2] [i_0] [i_1] [i_2] [i_2] [i_10]);
                        var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)76)) << (((9699650071235609620ULL) - (9699650071235609600ULL)))));
                        var_31 = ((/* implicit */long long int) ((arr_17 [i_2 - 1] [i_2 - 1]) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)37)))));
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12197))) / (arr_24 [i_2 + 1] [i_2 - 1] [i_2 - 1] [i_7] [i_10]))))));
                    }
                    var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_29 [(unsigned char)4] [i_1] [i_7] [i_7] [i_1] [4LL]))))) ? (4971839181739501364LL) : (((/* implicit */long long int) ((arr_12 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0]) ^ (((/* implicit */int) (unsigned char)236))))))))));
                    var_34 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)201)) == (((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 3]))));
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    for (long long int i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) var_10);
                            var_36 -= (short)-1;
                            var_37 += ((/* implicit */short) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_11])) == (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])))))));
                            var_38 -= ((/* implicit */unsigned char) (+(((((-3381779538623283519LL) + (9223372036854775807LL))) << (((((/* implicit */int) (_Bool)1)) - (1)))))));
                            var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (short)3072))));
                        }
                    } 
                } 
            }
            for (long long int i_13 = 1; i_13 < 8; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_40 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) -647556872873541147LL)))));
                    var_41 = ((/* implicit */short) (unsigned char)236);
                    arr_40 [i_0] [i_0] [i_0] [i_13] = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_13] [i_14]);
                }
                for (short i_15 = 1; i_15 < 9; i_15 += 2) 
                {
                    var_42 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)248)) * (((/* implicit */int) (short)0))));
                    var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_2 [i_0])) - (26080))))) << (((((/* implicit */int) var_8)) - (39))))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
                {
                    for (signed char i_17 = 2; i_17 < 7; i_17 += 2) 
                    {
                        {
                            arr_47 [i_13] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3071)) ? (arr_43 [i_13] [(signed char)9]) : (9223372036854775807LL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0)))))));
                            var_44 = ((/* implicit */unsigned int) arr_32 [i_13]);
                            var_45 = ((/* implicit */unsigned char) var_0);
                        }
                    } 
                } 
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_13] [i_13] [i_13] [i_0]))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0])) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (short)-4559))));
                var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_13 + 1])) && (((/* implicit */_Bool) 17231722177188067146ULL)))))));
            }
        }
    }
    var_48 = ((/* implicit */long long int) min((var_48), (((/* implicit */long long int) (signed char)-71))));
    var_49 = ((/* implicit */short) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (_Bool)1)))), ((+(((/* implicit */int) (unsigned char)224))))))) ? (max((((/* implicit */unsigned long long int) 5838922555949709592LL)), (var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((long long int) 0LL)) != (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
}
