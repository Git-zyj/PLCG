/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40310
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
    var_13 = ((/* implicit */int) ((_Bool) (~((+(var_5))))));
    var_14 &= ((/* implicit */signed char) var_6);
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)840))) : (7936U)))) ? (((/* implicit */int) ((signed char) 2347902363U))) : (((((/* implicit */_Bool) 1372711651)) ? (((/* implicit */int) (short)-841)) : (-855465106))));
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (855465097) : (-855465106)))) ? (((((/* implicit */_Bool) 1048064LL)) ? (536870848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3836))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)12137)))))) ? (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) var_7)))))) : (((/* implicit */int) (!(arr_0 [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            arr_5 [i_1] = max((((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_0 - 1]))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (short)-8450))))) ? (((((/* implicit */_Bool) var_2)) ? (arr_2 [i_0] [i_1] [6]) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6)))))));
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (short)840))));
        }
    }
    for (short i_2 = 1; i_2 < 21; i_2 += 3) 
    {
        /* LoopSeq 4 */
        for (long long int i_3 = 4; i_3 < 21; i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_18 [i_6] [i_6] [i_6] [i_4] [i_3 - 3])) ? (((/* implicit */int) arr_11 [i_3 - 1] [i_2 - 1] [i_2] [i_2])) : (((/* implicit */int) arr_11 [i_3 + 3] [i_2 + 3] [i_2] [i_2 - 1]))))));
                            arr_20 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_3 - 3] [i_6 - 1]))))) ? ((+(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) max((arr_9 [i_3 + 1] [i_6 + 2]), (arr_9 [i_3 + 2] [i_6 + 1]))))));
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(1169892017835210309LL)))))))) : ((~(arr_18 [i_5] [i_5] [i_5] [i_5] [(_Bool)1])))));
                            arr_21 [i_2] [i_2] [i_3] [i_4] [i_5] [(signed char)22] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_16 [i_2 - 1] [i_3 + 1] [i_3 + 1] [i_6 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_13 [i_2 + 1] [i_3 - 2] [i_6 + 2]), (arr_13 [i_2 + 1] [i_3 - 4] [i_6 - 1]))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_6 + 1] [i_5]))))) ? (arr_18 [i_6] [i_6] [i_6] [i_6 - 1] [15U]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        }
                        /* LoopSeq 4 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_4] [18ULL] [i_7] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)832)) ? (((/* implicit */int) arr_16 [i_2 - 1] [i_3 + 3] [i_7] [i_7])) : (((/* implicit */int) arr_16 [i_2 + 1] [i_3 + 1] [i_7] [i_7]))))), (max((arr_24 [i_2 - 1] [i_2] [i_2] [(signed char)13] [i_3] [i_7]), (((/* implicit */unsigned int) arr_12 [i_3] [i_3 - 2] [4] [(signed char)21]))))));
                            var_20 += ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_9 [i_2 - 1] [i_3 - 4])), (((((/* implicit */_Bool) arr_10 [i_3] [(short)2] [i_5])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [(_Bool)1] [i_3] [i_4] [i_5]))))))), (((/* implicit */long long int) min(((~(295247570))), ((+(((/* implicit */int) (short)840)))))))));
                            var_21 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_2 + 2] [i_2 + 2] [i_3 + 1] [i_3] [i_3 + 2])))))));
                            var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((arr_10 [i_3 + 1] [i_2 - 1] [21ULL]), (arr_10 [i_3 - 3] [i_2 + 2] [i_4])))), (min((arr_18 [(signed char)3] [i_2 + 3] [i_7] [3] [i_7]), (arr_18 [i_2] [i_2 + 3] [11] [i_5] [i_5])))));
                            var_23 -= ((/* implicit */unsigned int) ((((/* implicit */int) (short)-848)) - ((~((-(((/* implicit */int) (signed char)54))))))));
                        }
                        /* vectorizable */
                        for (short i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                        {
                            var_24 *= ((/* implicit */signed char) (+(1702705562U)));
                            var_25 -= ((/* implicit */short) (+(4294967267U)));
                        }
                        for (short i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
                        {
                            var_26 += ((/* implicit */long long int) ((((/* implicit */int) min((arr_7 [i_5] [i_3 + 1]), (arr_7 [i_9] [i_9])))) + (((arr_7 [i_2 + 1] [i_9]) ? (((/* implicit */int) arr_12 [i_9] [i_5] [i_3 - 3] [i_2 + 2])) : (((/* implicit */int) arr_12 [i_3 - 2] [i_4] [i_4] [i_9]))))));
                            arr_31 [i_2] [17LL] [i_3] [i_4] [i_5] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 855465097)) ? (855465097) : (-855465098)));
                            var_27 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2 + 3] [i_3]))))) ? (7477638021590809944LL) : (((/* implicit */long long int) 1702705560U)));
                            arr_32 [i_2] [i_3] [i_5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_9] [i_4] [i_3] [i_9])) ? (((/* implicit */int) (signed char)27)) : (((/* implicit */int) (_Bool)1))))) ? (((arr_7 [i_2 + 3] [i_2 + 1]) ? ((-(arr_6 [(_Bool)1] [i_5]))) : (((/* implicit */long long int) arr_30 [(_Bool)1] [i_5] [(signed char)8] [i_3] [(signed char)6])))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 855465104))))));
                        }
                        for (short i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                        {
                            var_28 = ((/* implicit */long long int) ((short) ((unsigned int) ((((/* implicit */_Bool) arr_24 [i_10] [i_3] [i_3] [i_3] [i_3] [i_10])) ? (var_2) : (((/* implicit */int) arr_29 [i_10] [i_4] [i_4] [i_3] [i_3 + 1] [i_3] [i_2]))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) 4294959330U))) ? (((/* implicit */unsigned int) ((arr_16 [i_2 + 3] [i_2 + 2] [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_16 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2 + 1])) : (((/* implicit */int) arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3 + 1]))))) : (var_4)));
                        }
                        arr_36 [i_4] [i_4] [i_3] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)98))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)6928)), (arr_27 [i_5] [(signed char)16] [i_4] [i_4] [i_3] [2LL] [2LL])))) : (((long long int) arr_7 [i_3] [i_5])))))));
                        var_30 -= ((/* implicit */unsigned int) ((long long int) ((int) arr_26 [i_2 + 2] [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2] [i_2] [i_2])));
                    }
                } 
            } 
            arr_37 [i_2] [i_3 + 3] = ((/* implicit */short) max((arr_19 [i_3 - 4] [i_2 + 1]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_2 + 2] [i_2 - 1])) - (max((var_5), (((/* implicit */int) var_0)))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                for (signed char i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    {
                        arr_43 [i_2] [i_3] [i_11] [i_12] [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_41 [i_2] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) & (arr_23 [6U] [i_11] [i_2] [6U])))))));
                        arr_44 [0U] [i_11] [0U] [0U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_42 [i_2 - 1] [i_2] [i_2] [i_3 - 2] [i_11 - 1]))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_2 + 3] [i_2 + 3] [i_3 - 4] [i_3 + 3] [i_11 - 1] [i_12] [i_12])))));
                    }
                } 
            } 
        }
        for (long long int i_13 = 4; i_13 < 21; i_13 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((((((/* implicit */_Bool) (~(arr_39 [(_Bool)1] [i_14] [i_2])))) ? (max((var_4), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))))), ((~(arr_18 [i_2] [i_2] [i_2 + 1] [i_2] [i_13 - 3]))))))));
                        var_32 *= ((/* implicit */signed char) max((((long long int) ((long long int) arr_14 [(signed char)11] [i_13] [(short)7] [i_13] [(signed char)11]))), (((/* implicit */long long int) ((arr_45 [i_2 - 1]) ? (max((((/* implicit */unsigned int) (_Bool)1)), (arr_27 [i_15] [i_15] [i_14] [i_14] [i_13] [i_13 - 4] [i_2]))) : (min((2592261727U), (2592261741U))))))));
                    }
                } 
            } 
            var_33 -= ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_40 [i_2 + 2] [i_13 - 1] [i_13 - 4]))))));
            var_34 = ((/* implicit */int) (~(var_4)));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 2) 
        {
            arr_57 [i_2] = ((/* implicit */short) arr_49 [(_Bool)1] [i_2 + 1] [i_16 - 1] [(signed char)4]);
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (-(arr_14 [i_2] [i_2 + 1] [i_16 + 1] [i_16 + 1] [i_16]))))));
        }
        for (signed char i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            arr_60 [i_17] [i_17] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((~(arr_14 [i_2] [17LL] [i_2] [i_17] [i_17])))))) ? ((~(((2592261721U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_2] [i_2] [i_2]))))))) : ((((_Bool)1) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(signed char)20] [14] [i_17])))))));
            var_36 *= ((/* implicit */signed char) ((short) 1702705566U));
        }
        var_37 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 1702705575U)) ? ((-(2688512869U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
        var_38 *= ((arr_39 [i_2 + 1] [i_2] [i_2]) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
        arr_61 [i_2] [i_2] |= ((/* implicit */unsigned int) var_5);
    }
    var_39 = ((/* implicit */_Bool) ((((_Bool) 13482526468962431664ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) (signed char)-108)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) : (var_12)));
    var_40 += ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-77))));
}
