/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220999
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
    var_18 = (+(((2397228011557844821LL) / (2397228011557844806LL))));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) var_0))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(var_7)))) % (2397228011557844806LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            var_21 = ((long long int) -1200675505);
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)117)) / (((/* implicit */int) (short)32767))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 9; i_2 += 4) 
        {
            var_22 = (((-(arr_3 [i_0]))) == (((/* implicit */int) arr_7 [i_0] [i_2] [i_2 - 1])));
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) 1200675503);
            var_23 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)62158)) : (((/* implicit */int) (unsigned char)138)))) + (((/* implicit */int) ((2397228011557844815LL) > (var_8))))));
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            arr_14 [i_3] [i_3] [i_0] = ((/* implicit */unsigned int) ((-1LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-31187)))));
            /* LoopSeq 2 */
            for (short i_4 = 4; i_4 < 9; i_4 += 4) 
            {
                var_24 = ((/* implicit */unsigned short) arr_3 [i_0]);
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 10; i_5 += 4) 
                {
                    var_25 += (~(((/* implicit */int) arr_9 [i_4 + 1] [i_5] [i_5 - 1])));
                    var_26 -= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_4 - 2] [i_5 - 1]))));
                    var_27 = ((((/* implicit */int) arr_7 [i_0] [i_3] [i_4])) != ((+(arr_18 [i_3]))));
                }
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    arr_22 [i_0] [i_3] [i_4] [i_6] = ((/* implicit */long long int) (signed char)9);
                    arr_23 [i_6] [i_4] [i_3] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? ((~(((/* implicit */int) arr_5 [i_4])))) : (((/* implicit */int) arr_7 [i_6] [i_3] [i_3])));
                    arr_24 [i_3] [i_6] &= (((~(-5))) >> (((((/* implicit */int) ((unsigned short) arr_8 [i_4]))) - (57785))));
                }
                var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_4] [i_4] [i_4 - 3] [i_4])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) > (1869739862U)))) : (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) arr_21 [i_0] [i_3] [i_4] [i_4])))))));
            }
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                var_29 &= ((((/* implicit */_Bool) arr_25 [i_3] [i_3] [i_7])) ? (-5114790587790983606LL) : (((/* implicit */long long int) ((/* implicit */int) var_17))));
                var_30 = ((/* implicit */int) var_11);
                var_31 ^= ((/* implicit */signed char) ((arr_15 [i_7] [i_3] [i_0]) & ((~(6434715648613116864LL)))));
            }
            /* LoopNest 2 */
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) var_12);
                        arr_32 [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
                        arr_33 [i_0] [i_3] [i_8] [i_9] = ((/* implicit */unsigned int) arr_4 [i_0]);
                        var_33 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (short)-31187)))) + ((-(((/* implicit */int) (signed char)103))))));
                        /* LoopSeq 1 */
                        for (short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_34 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (short)-32746)) : (-1073741824)));
                            arr_36 [i_0] [i_3] [i_9] [i_9] [i_10] [i_10] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5114790587790983605LL)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_9])) : ((~(-452512466)))));
                            var_35 = var_0;
                            var_36 = ((/* implicit */long long int) var_2);
                        }
                    }
                } 
            } 
        }
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
        {
            var_37 -= ((((((var_1) + (2147483647))) >> (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (var_17)))))) / (var_7));
            /* LoopNest 2 */
            for (unsigned char i_12 = 2; i_12 < 9; i_12 += 4) 
            {
                for (signed char i_13 = 2; i_13 < 8; i_13 += 4) 
                {
                    {
                        var_38 ^= ((/* implicit */int) var_0);
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) (signed char)127))), (9223372036854775793LL)))) ? (((/* implicit */int) ((signed char) arr_19 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (short)-22620)), (arr_1 [i_0])))))))));
                        var_40 = ((/* implicit */unsigned char) ((short) arr_17 [i_13 + 1] [i_12] [i_12 - 1] [i_12] [i_12] [i_11]));
                    }
                } 
            } 
        }
        var_41 ^= ((/* implicit */unsigned int) ((unsigned char) ((1869739862U) > (((/* implicit */unsigned int) 5)))));
    }
    for (unsigned char i_14 = 2; i_14 < 24; i_14 += 4) /* same iter space */
    {
        var_42 &= ((/* implicit */_Bool) ((((/* implicit */int) var_17)) * (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-7607)) == (((/* implicit */int) (short)29741))))))));
        arr_46 [i_14] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || (((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_45 [i_14] [i_14])), (var_16)))))) ? ((~(((var_13) + (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_14] [i_14]))))))) : (((/* implicit */long long int) (+(((((/* implicit */int) arr_44 [i_14])) >> (((/* implicit */int) var_14)))))))));
        arr_47 [i_14] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_44 [i_14 - 2])) - (10654))))));
    }
    for (unsigned char i_15 = 2; i_15 < 24; i_15 += 4) /* same iter space */
    {
        var_43 ^= ((/* implicit */long long int) (short)-1);
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 25; i_16 += 4) 
        {
            for (int i_17 = 1; i_17 < 24; i_17 += 4) 
            {
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    {
                        var_44 += ((/* implicit */long long int) arr_44 [i_15 - 2]);
                        var_45 += var_14;
                        /* LoopSeq 2 */
                        for (unsigned char i_19 = 3; i_19 < 24; i_19 += 4) 
                        {
                            var_46 = ((/* implicit */short) min((((/* implicit */long long int) (~(((/* implicit */int) arr_54 [i_19] [i_17] [i_18]))))), (((var_0) >> (((var_15) - (5949261074793867702LL)))))));
                            var_47 = ((/* implicit */int) var_0);
                            var_48 = ((/* implicit */unsigned char) -9223372036854775794LL);
                        }
                        for (unsigned short i_20 = 2; i_20 < 24; i_20 += 4) 
                        {
                            arr_64 [i_15] [i_17] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_54 [i_17 + 1] [i_17] [i_17]))) + (((((/* implicit */int) arr_53 [i_20 - 2] [i_17 - 1])) >> (((var_0) - (4252331185605623645LL)))))));
                            var_49 -= ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_44 [i_15 - 2])))))));
                            var_50 = ((/* implicit */unsigned int) ((((((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (var_16)))) ^ (((((/* implicit */_Bool) arr_62 [i_16] [i_17] [i_18] [i_18] [i_20] [i_15] [i_16])) ? (((/* implicit */int) var_9)) : (264482728))))) > (((var_11) ? (((((var_1) + (2147483647))) >> (((arr_63 [i_15] [i_16] [i_20] [i_18] [i_20] [i_17] [i_18]) - (4300515295600133369LL))))) : (((/* implicit */int) arr_50 [i_15] [i_15 + 1] [i_15 - 1]))))));
                        }
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 25; i_21 += 4) 
                        {
                            var_51 = ((/* implicit */int) ((unsigned char) (signed char)3));
                            var_52 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 264482728)) ? (-1073741827) : (((/* implicit */int) (short)-1))))) & (arr_63 [i_21] [i_21] [i_21] [i_18] [i_18] [i_17] [i_15 - 2])));
                        }
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_22 = 2; i_22 < 24; i_22 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_23 = 2; i_23 < 24; i_23 += 4) 
        {
            arr_73 [i_23] [i_23] = ((/* implicit */long long int) (~(((((/* implicit */int) var_3)) % (((/* implicit */int) var_16))))));
            arr_74 [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((short) 204420637))) : (((/* implicit */int) arr_54 [i_22] [i_22] [i_22]))));
        }
        arr_75 [i_22] [i_22] = ((/* implicit */int) (+(var_15)));
    }
}
