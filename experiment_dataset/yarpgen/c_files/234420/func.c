/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234420
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (long long int i_1 = 3; i_1 < 21; i_1 += 2) 
    {
        var_13 = min((((unsigned char) arr_3 [i_1 + 1] [i_1 - 3])), (((/* implicit */unsigned char) ((((arr_5 [i_1] [i_1]) + (((/* implicit */long long int) ((/* implicit */int) var_8))))) == ((+(var_3)))))));
        arr_6 [i_1] = ((((/* implicit */_Bool) var_4)) ? ((-(max((1239523773), (1239523773))))) : ((-(((/* implicit */int) arr_4 [i_1 - 2])))));
        var_14 -= ((/* implicit */signed char) var_5);
        var_15 = ((/* implicit */signed char) -1239523784);
    }
    for (unsigned char i_2 = 2; i_2 < 14; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_16 *= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_8 [i_3 + 1]), (arr_8 [i_2 - 2]))))));
            arr_12 [i_2 - 1] [i_3] = ((/* implicit */short) min((((/* implicit */int) min((arr_4 [i_3 + 1]), (arr_4 [i_3 + 1])))), (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_4 [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) 0U)) && (((/* implicit */_Bool) 66584576))))) : (((/* implicit */int) arr_7 [i_2 - 2]))))));
        }
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (short i_5 = 2; i_5 < 12; i_5 += 2) 
            {
                for (int i_6 = 1; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_17 |= ((/* implicit */signed char) 1239523783);
                        arr_22 [(short)10] [i_6] [i_5] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                        var_18 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_4])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_19 [i_2])) : (1239523783))))))) ? (((/* implicit */int) arr_17 [i_4])) : (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_3))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((unsigned short) arr_15 [i_6] [i_5 + 2] [i_5])))));
                            var_20 = ((/* implicit */signed char) -1239523760);
                            var_21 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2 - 1]))) | (arr_15 [i_2 - 1] [i_5 - 1] [i_6 - 1])));
                            var_22 = ((/* implicit */int) (~(3416661589027960656LL)));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_18 [(short)14] [i_5 - 1] [i_6])) < (((/* implicit */int) arr_24 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [(unsigned char)6])))) ? (min((((/* implicit */unsigned int) (signed char)76)), (4U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5 + 3])))))) && (((/* implicit */_Bool) arr_9 [i_2]))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_8 = 2; i_8 < 14; i_8 += 3) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned char) arr_1 [i_8 + 1]);
        var_25 = ((/* implicit */long long int) arr_15 [i_8 - 2] [i_8 + 1] [i_8 - 2]);
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_4 [i_9]))));
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (long long int i_12 = 2; i_12 < 17; i_12 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_13 = 0; i_13 < 19; i_13 += 2) 
                        {
                            arr_40 [5LL] [5U] [i_9] [16LL] [5U] [i_13] = ((/* implicit */unsigned short) (+((~(arr_34 [i_9] [i_10] [i_11])))));
                            var_27 = ((/* implicit */int) arr_37 [i_9] [i_10] [(short)15] [(unsigned short)16] [i_12 + 1] [14U]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            var_28 = arr_31 [i_9] [i_12 - 1];
                            arr_43 [i_9] [(unsigned char)4] [i_9] [(unsigned char)4] [2] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_9])) % (((/* implicit */int) var_8))));
                            arr_44 [i_9] [i_9] [i_9] [(short)1] [i_14] = ((/* implicit */_Bool) (-(arr_34 [i_12 + 2] [i_12] [i_14])));
                            var_29 -= ((1966080) == (((/* implicit */int) (unsigned char)92)));
                        }
                        arr_45 [i_9] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_30 [i_9]) : (arr_31 [i_9] [i_9])))));
                    }
                } 
            } 
        } 
    }
    for (int i_15 = 1; i_15 < 15; i_15 += 4) 
    {
        arr_49 [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 536870904)) ? (((int) var_10)) : (((/* implicit */int) (signed char)127))))) ? (((((/* implicit */_Bool) 1239523773)) ? (((/* implicit */int) ((((/* implicit */int) arr_38 [i_15] [i_15] [i_15 + 1] [i_15 - 1] [i_15] [i_15])) >= (((/* implicit */int) (signed char)112))))) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (_Bool)1))));
        var_30 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_15 + 1] [i_15 + 2] [i_15 + 1])) ^ (((/* implicit */int) ((_Bool) 0)))))) || (((/* implicit */_Bool) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) arr_31 [10LL] [i_15])), (1403348989072599216LL))))))));
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 17; i_16 += 1) 
        {
            for (unsigned char i_17 = 3; i_17 < 16; i_17 += 3) 
            {
                {
                    arr_58 [i_15] [i_16] [i_15] = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_3)))));
                    var_31 |= ((/* implicit */short) ((long long int) (!(((/* implicit */_Bool) var_5)))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (long long int i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            arr_61 [i_18] = ((/* implicit */long long int) (-(((int) arr_59 [i_15 + 2] [i_15 + 1]))));
            var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [(signed char)11] [(signed char)11] [i_15 + 1] [i_15 + 2] [i_15] [i_15 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) & (arr_56 [i_15 + 1] [i_15 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))));
            var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_48 [i_15 + 1])))))));
            arr_62 [i_15] [i_15] |= ((/* implicit */_Bool) ((arr_38 [(unsigned char)14] [(unsigned char)14] [(_Bool)1] [(unsigned char)14] [(unsigned char)14] [(unsigned char)14]) ? ((+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_18])) : (((/* implicit */int) (signed char)-112)))))) : (((/* implicit */int) (signed char)-111))));
        }
        for (unsigned short i_19 = 0; i_19 < 17; i_19 += 2) /* same iter space */
        {
            arr_65 [i_15] = ((/* implicit */unsigned char) min(((~(((((/* implicit */_Bool) arr_54 [i_15 - 1] [i_15 - 1] [i_19])) ? (arr_34 [i_19] [i_19] [i_15]) : (((/* implicit */int) arr_3 [i_15] [i_15])))))), (((/* implicit */int) (short)1920))));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) min(((short)1920), (((/* implicit */short) (unsigned char)251)))))));
        }
        /* vectorizable */
        for (unsigned short i_20 = 0; i_20 < 17; i_20 += 2) /* same iter space */
        {
            arr_70 [i_15] [i_15] = ((/* implicit */signed char) var_8);
            /* LoopNest 2 */
            for (signed char i_21 = 1; i_21 < 16; i_21 += 2) 
            {
                for (unsigned char i_22 = 0; i_22 < 17; i_22 += 3) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) arr_33 [i_22]);
                        var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_15 - 1])) ? (((/* implicit */int) arr_4 [i_15 - 1])) : (((/* implicit */int) arr_4 [i_15 - 1])))))));
                    }
                } 
            } 
            var_37 -= ((/* implicit */short) ((unsigned int) arr_54 [i_15 - 1] [i_15 + 2] [i_15 + 2]));
        }
    }
    var_38 |= var_1;
    var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (7676271923935738765LL)))))) ? (((max((var_3), (((/* implicit */long long int) (signed char)19)))) + (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_40 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1998391659U) : (var_10)))) ? (min((((/* implicit */unsigned int) (unsigned char)45)), (3337471528U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
}
