/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218406
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
    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) var_0))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (short)15872);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                for (long long int i_3 = 2; i_3 < 18; i_3 += 3) 
                {
                    {
                        var_16 = ((/* implicit */short) (unsigned char)0);
                        var_17 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned char)0)) + (((/* implicit */int) var_13)))));
                        arr_10 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)255)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)245)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 596617231631698457LL)) * (((var_11) ? (15359726334410343078ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))));
                            arr_21 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                            arr_22 [i_6] [i_5] [(unsigned char)4] [i_1 - 4] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)155)) < (((/* implicit */int) (unsigned char)147))))) % (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (short i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
                        {
                            arr_26 [3LL] [i_1] [i_4] [i_0] [19LL] = ((unsigned long long int) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) -2175558292083326360LL))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)37))) * (11524092794287383103ULL));
                            var_19 = ((unsigned char) (unsigned char)255);
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-13)) && (((/* implicit */_Bool) (unsigned char)248))));
                        }
                        var_21 = ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)0))));
                    }
                } 
            } 
            var_22 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5))))));
        }
    }
    for (unsigned char i_8 = 3; i_8 < 21; i_8 += 3) 
    {
        arr_30 [i_8] [i_8] = ((/* implicit */_Bool) 0ULL);
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 0; i_10 < 25; i_10 += 4) 
            {
                {
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 3) 
                    {
                        arr_38 [i_11] [i_10] [i_10] [i_8] &= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)194)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16384))))));
                        var_23 = ((/* implicit */unsigned char) max((6ULL), (((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(0ULL)))) ? (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)245)))) : (((/* implicit */int) max((((/* implicit */short) (unsigned char)6)), ((short)0))))));
                        arr_42 [i_8] [i_9] [i_8] = ((/* implicit */_Bool) ((unsigned long long int) ((-4356832714974586741LL) <= (9223372036854775807LL))));
                        var_25 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)22))) * (288230376151711680ULL)))));
                        /* LoopSeq 3 */
                        for (unsigned char i_13 = 2; i_13 < 21; i_13 += 2) 
                        {
                            arr_45 [i_8] [19LL] [i_8] [i_12] [i_13 + 2] [i_12 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 288230376151711680ULL)) || (var_11))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 8057970915808696882LL))))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (_Bool)0))))))) ? (((/* implicit */int) ((((/* implicit */int) ((_Bool) (unsigned char)255))) <= (((/* implicit */int) (unsigned char)3))))) : (((/* implicit */int) (short)16597))));
                            arr_46 [i_8] [i_13] = (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) * (9251206013052541394ULL))));
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((0ULL) / (((/* implicit */unsigned long long int) 3701425605766568142LL)))) : (max((var_1), (((/* implicit */unsigned long long int) 9223372036854775807LL))))));
                            var_27 &= ((/* implicit */short) var_10);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 2; i_14 < 23; i_14 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)247)) >= (((/* implicit */int) (short)-1))))) + (((/* implicit */int) var_6))));
                            var_29 &= ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) - (5585916404389007292ULL));
                        }
                        for (unsigned long long int i_15 = 2; i_15 < 23; i_15 += 2) /* same iter space */
                        {
                            var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)73)) || (((/* implicit */_Bool) (short)4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_11)), ((unsigned char)32)))) || (((/* implicit */_Bool) (unsigned char)111))))) : (((/* implicit */int) (((_Bool)0) || ((_Bool)0))))));
                            arr_53 [i_8] [i_8] [i_8] = ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) 13002374202802680295ULL)));
                        }
                    }
                    for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) /* same iter space */
                    {
                        arr_56 [i_8] [i_8] [i_9] [i_10] [i_16] [i_16] = ((/* implicit */_Bool) min((6236945975807766989LL), (((/* implicit */long long int) (_Bool)1))));
                        var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551601ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (7LL)))) || (((/* implicit */_Bool) var_10)));
                    }
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
                    {
                        arr_60 [i_8] [(_Bool)1] [17ULL] [i_8] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) (short)-16597)) || (((/* implicit */_Bool) var_3))))))), (max((12145667750585881520ULL), ((+(18446744073709551601ULL)))))));
                        arr_61 [i_8] [i_8] [i_10] [i_8] [i_17] = ((short) ((_Bool) 18446744073709551615ULL));
                    }
                    var_32 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (unsigned char)178)) - ((~(((/* implicit */int) (unsigned char)223)))))));
                    var_33 = ((/* implicit */unsigned long long int) min((var_33), (((((/* implicit */unsigned long long int) ((long long int) (short)0))) & (max((((/* implicit */unsigned long long int) (unsigned char)9)), (((12145667750585881520ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))))));
                }
            } 
        } 
    }
    for (long long int i_18 = 0; i_18 < 23; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            arr_67 [i_18] = ((/* implicit */short) (((-(((/* implicit */int) (short)25476)))) < (max((((((/* implicit */int) (short)2047)) - (((/* implicit */int) (unsigned char)32)))), (((/* implicit */int) ((var_10) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))))));
            arr_68 [i_18] [i_18] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) (unsigned char)247))))) ? (((/* implicit */int) ((short) -4941482795161838681LL))) : (((/* implicit */int) ((unsigned char) ((unsigned char) (short)512))))));
        }
        var_34 += ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) ^ (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)63)))))) ^ ((~(((/* implicit */int) (short)-8192))))));
    }
}
