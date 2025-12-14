/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205696
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
    var_16 = ((/* implicit */_Bool) var_11);
    var_17 = ((/* implicit */long long int) var_7);
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2014645710)) ? (arr_2 [i_0 + 4]) : (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_1 [i_0])) - (55694)))))) : (arr_2 [i_0 + 4]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 3]))) != (4294967278U))))));
        arr_4 [i_0 - 1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((1124868868U), (((/* implicit */unsigned int) (unsigned short)65521))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : ((-(18446744073709551608ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (2147483647) : (-978252506)))) || (((/* implicit */_Bool) 3991337102U)))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (+(arr_6 [i_0 + 1] [i_1 + 2] [i_0]))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (+(arr_7 [i_0 + 3] [i_1 + 1])));
                        var_20 = ((/* implicit */unsigned long long int) 4294967294U);
                        var_21 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((-8399677838390502338LL) >= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3]))))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [i_0 + 1] [i_0 + 3])))))));
                    }
                } 
            } 
        }
        for (unsigned int i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */long long int) (-2147483647 - 1)))))))), (((((/* implicit */_Bool) arr_8 [i_0 + 4] [i_4] [0] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (((unsigned long long int) (_Bool)1))))))));
            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11)))))) ? (((/* implicit */unsigned int) ((2147483647) & ((-2147483647 - 1))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3675381525417683424LL)) ? (-431529234) : (((/* implicit */int) arr_14 [i_0] [i_0 + 2] [6]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_4]))) : (((((/* implicit */_Bool) 424953331)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2231681492U))))));
            arr_16 [i_0] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0 + 3] [i_0 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3853189285832421348ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_12)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (18446744073709551596ULL)))))) ? (max((var_0), (((/* implicit */int) arr_13 [i_0 - 1])))) : (((/* implicit */int) var_5)));
            arr_17 [i_0] [i_0] = ((_Bool) (unsigned short)11);
        }
        /* vectorizable */
        for (int i_5 = 2; i_5 < 18; i_5 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) arr_19 [i_0]);
            var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_9 [i_5 - 1] [i_0 + 3] [i_0 + 4]));
        }
        /* vectorizable */
        for (signed char i_6 = 1; i_6 < 16; i_6 += 1) 
        {
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) arr_0 [i_0 + 3]))));
            arr_26 [i_6] [i_6] = ((/* implicit */unsigned short) arr_24 [i_6] [i_0]);
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                        {
                            arr_33 [i_0 + 2] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_6] [i_6 + 1])) ? (arr_27 [i_6] [(signed char)15] [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [1])) ? (((/* implicit */long long int) arr_29 [i_0] [i_0])) : (arr_2 [i_9]))))));
                            var_28 = ((/* implicit */unsigned char) (-(arr_21 [i_0] [i_6 + 3] [i_6 + 3])));
                        }
                        for (int i_10 = 1; i_10 < 17; i_10 += 1) 
                        {
                            arr_36 [i_8] [i_6 - 1] [i_6] [i_6 - 1] [(_Bool)1] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -311755744)))) ? (((/* implicit */int) (!(var_8)))) : ((((_Bool)1) ? (1732162938) : (-978252506)))));
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        arr_37 [i_8] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((_Bool) (-(((/* implicit */int) (unsigned char)105)))));
                        var_30 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_19 [i_6 + 1]))));
                        /* LoopSeq 4 */
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            var_31 = ((/* implicit */unsigned int) (unsigned short)10);
                            var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) 9223372036854775807LL))))))));
                        }
                        for (long long int i_12 = 0; i_12 < 19; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_8])) ? (var_15) : (var_12)));
                            var_34 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) % (2147483647)))) ? (((/* implicit */int) arr_42 [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 + 2])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_12] [(_Bool)1] [i_7] [i_0] [i_0]))) == (arr_15 [i_7]))))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_6 + 1] [i_7] [i_13])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)198)) != (var_0)))))));
                            var_36 = ((/* implicit */_Bool) ((var_6) | (var_13)));
                        }
                        for (unsigned char i_14 = 0; i_14 < 19; i_14 += 4) 
                        {
                            arr_50 [i_8] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-59)) ? (885568480) : (((/* implicit */int) (_Bool)1))));
                            arr_51 [(unsigned char)17] [i_6] [i_8] [i_7] [i_6] [3LL] = ((/* implicit */unsigned long long int) ((_Bool) var_9));
                            var_37 -= ((/* implicit */unsigned short) var_6);
                        }
                        var_38 *= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_6] [i_7]))));
                    }
                } 
            } 
        }
        arr_52 [i_0] = ((/* implicit */_Bool) var_6);
    }
}
