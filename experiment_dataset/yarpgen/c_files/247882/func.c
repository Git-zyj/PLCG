/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247882
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
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 131071U)) ? (4294836226U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 2])))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) - ((+(arr_2 [(signed char)11] [11] [14LL]))))) : (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 4294836211U)) ? (131094U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19988))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_2 [(unsigned short)12] [(unsigned char)6] [8U])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_11 [(unsigned short)0] [(unsigned char)5] [i_0] [16LL] [2U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-17721))) < (3908234129U)));
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */int) ((short) arr_8 [i_3]))) / (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_17 = ((signed char) (-(386733168U)));
                    /* LoopSeq 1 */
                    for (int i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        arr_19 [i_0] = (~(min((arr_2 [i_0 - 2] [i_4] [15U]), (((/* implicit */unsigned int) (_Bool)1)))));
                        var_18 = ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (~(-1LL)))))));
                    }
                    arr_20 [(unsigned char)14] [i_0] [(signed char)8] = arr_12 [(signed char)7] [(unsigned char)3] [9U] [(signed char)14];
                    arr_21 [i_0] [8LL] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_0 [i_0 - 2] [(unsigned char)6]))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        arr_24 [(_Bool)1] = ((/* implicit */short) ((unsigned char) 2527519726163973351LL));
        arr_25 [(short)10] |= ((/* implicit */_Bool) arr_16 [i_6] [(unsigned short)16] [(_Bool)1] [i_6] [(short)13]);
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 1) 
    {
        arr_29 [(short)3] = ((/* implicit */unsigned char) (short)-1974);
        var_19 = ((((/* implicit */_Bool) ((((/* implicit */int) (short)17720)) - ((+(((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */unsigned int) ((((_Bool) (short)-17721)) ? (((/* implicit */int) min((((/* implicit */short) arr_18 [0U])), ((short)6254)))) : (((/* implicit */int) arr_28 [(signed char)13]))))) : ((~(arr_2 [i_7] [(unsigned short)0] [i_7]))));
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_9 = 0; i_9 < 10; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_10 = 2; i_10 < 8; i_10 += 3) 
            {
                for (short i_11 = 0; i_11 < 10; i_11 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) arr_15 [(_Bool)1] [i_9] [(_Bool)0] [(_Bool)0]))))))));
                        /* LoopSeq 2 */
                        for (signed char i_12 = 3; i_12 < 8; i_12 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned int) min((var_21), ((+(arr_46 [0ULL] [1U] [(signed char)5] [0U] [(short)8])))));
                            arr_48 [3] [3U] [4LL] [i_9] [3] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_30 [i_10 - 2])) ? (((/* implicit */int) arr_16 [i_10 + 2] [i_10 + 2] [(short)14] [i_10 + 1] [i_10 + 1])) : (((/* implicit */int) (_Bool)1))))));
                            var_22 |= ((/* implicit */short) max((((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10 + 2]))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) | (var_13))))), (((/* implicit */unsigned int) var_11))));
                            arr_49 [i_9] [3U] [4U] [6U] [(short)7] [0U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_10 + 1])))))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            arr_52 [i_9] [(unsigned char)7] [9] [1U] [5LL] [(short)0] [(signed char)9] = (-((((+(4294967277U))) | (arr_13 [i_10 + 1] [i_10 - 2] [i_10 + 2]))));
                            arr_53 [i_9] [5LL] [7ULL] [i_9] = ((/* implicit */long long int) min((((unsigned long long int) (+(((/* implicit */int) arr_43 [6LL] [(_Bool)1] [(short)2] [9ULL] [(_Bool)1] [3U]))))), (((/* implicit */unsigned long long int) ((arr_2 [i_10 - 1] [i_10 - 1] [i_10 - 1]) ^ (arr_2 [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
                        }
                        arr_54 [(_Bool)1] [i_9] [(short)4] [4LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-79)) ? ((-(((/* implicit */int) arr_10 [(unsigned char)14] [(short)17] [(short)1] [i_9] [(signed char)7])))) : (((((/* implicit */_Bool) 2339365216U)) ? (((((/* implicit */int) (signed char)31)) + (((/* implicit */int) (signed char)(-127 - 1))))) : (((/* implicit */int) arr_47 [i_8] [i_9]))))));
                        arr_55 [(signed char)3] [5U] [(signed char)5] [4ULL] [i_9] [(_Bool)1] = ((/* implicit */unsigned int) min(((~(3789727685490206246ULL))), (min((arr_4 [(signed char)2]), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1973)) <= (((/* implicit */int) (_Bool)1)))))))));
                    }
                } 
            } 
            arr_56 [i_9] = ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) (signed char)46)))));
            var_23 &= ((/* implicit */short) max((((/* implicit */long long int) (-(((/* implicit */int) arr_30 [4LL]))))), (((long long int) ((((/* implicit */_Bool) 1023110284U)) ? (140737488355327ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17736))))))));
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 10; i_14 += 2) 
        {
            var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [(unsigned char)9]))));
            var_25 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */int) (short)-20168)) : (((/* implicit */int) (short)-17721))));
            var_26 = ((/* implicit */long long int) ((signed char) -2211646730619538083LL));
            arr_60 [3U] [(short)9] = arr_9 [(short)10] [(short)17] [(signed char)6] [(_Bool)1] [(signed char)12] [i_14];
        }
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 1; i_16 < 6; i_16 += 1) 
            {
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        arr_68 [(_Bool)1] [i_16] [(signed char)7] [(_Bool)1] = ((/* implicit */short) ((_Bool) (~(((((((/* implicit */int) (short)-21316)) + (2147483647))) >> (((/* implicit */int) var_1)))))));
                        /* LoopSeq 2 */
                        for (short i_18 = 0; i_18 < 10; i_18 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) var_12))))));
                            var_28 = ((/* implicit */short) (~((~(((/* implicit */int) (signed char)-31))))));
                            arr_72 [i_18] [(short)2] [8U] [(short)0] [(_Bool)1] [4U] |= (!(((/* implicit */_Bool) 386733167U)));
                        }
                        for (signed char i_19 = 3; i_19 < 9; i_19 += 2) 
                        {
                            arr_75 [(signed char)8] [0U] [i_16] [5] [8U] = ((/* implicit */signed char) ((unsigned int) ((unsigned int) ((((/* implicit */_Bool) (short)-20180)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (131077U)))));
                            var_29 -= ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)11539))));
                            arr_76 [8LL] [4U] [i_15] |= ((/* implicit */unsigned int) arr_15 [(_Bool)1] [i_15] [6U] [(_Bool)1]);
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_2 [i_16 + 1] [i_19 - 3] [i_19 - 2])))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_64 [(unsigned char)0] [i_16] [(unsigned char)5]))))));
                        }
                        arr_77 [5U] [(short)8] [(unsigned char)2] [i_16] = ((unsigned char) (+(3030167192U)));
                        var_31 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 140737488355302ULL)) ? (1556086185768168961LL) : (((/* implicit */long long int) 4294836223U)))) ^ (((/* implicit */long long int) ((((/* implicit */int) (signed char)108)) & ((~(((/* implicit */int) (short)28539)))))))));
                    }
                } 
            } 
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_17 [(unsigned char)8] [12U] [8U] [(signed char)10])) : ((-(((/* implicit */int) (short)-22949)))))))));
            var_33 = ((/* implicit */long long int) ((_Bool) arr_31 [i_8] [(short)2]));
        }
        var_34 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [(signed char)11] [(short)4] [(short)2]))));
        arr_78 [(signed char)3] |= ((/* implicit */unsigned int) (!(((_Bool) arr_27 [i_8] [i_8]))));
    }
    var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
}
