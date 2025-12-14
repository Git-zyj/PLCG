/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232245
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
    var_17 = (-((((!(((/* implicit */_Bool) var_16)))) ? ((-(((/* implicit */int) (unsigned char)49)))) : (((/* implicit */int) var_12)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (short i_3 = 1; i_3 < 10; i_3 += 3) 
                {
                    {
                        arr_10 [2] [(signed char)6] [(signed char)6] [i_3] [i_3] = ((/* implicit */unsigned char) (!(((((/* implicit */int) var_14)) == (((/* implicit */int) ((unsigned short) arr_5 [i_0] [i_1] [(short)4] [i_3 - 1])))))));
                        var_18 -= ((/* implicit */long long int) (signed char)69);
                    }
                } 
            } 
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) min((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-120))))) ? ((~(var_6))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)-49)), (var_4)))))), (((/* implicit */unsigned long long int) (((_Bool)0) ? (((((/* implicit */_Bool) arr_1 [1] [i_1 - 2])) ? (((/* implicit */long long int) var_10)) : (arr_2 [i_0 + 2] [i_0] [i_1]))) : (((/* implicit */long long int) (-(var_4))))))))))));
        }
        arr_11 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0] [i_0 - 1]))))) != (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))))));
    }
    for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-49)) == (((/* implicit */int) (unsigned char)25)))))));
        var_21 *= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_12 [i_4])) ? ((~(1257611454100257452LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_4]))))) != (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */int) (unsigned char)62)) : (((/* implicit */int) arr_12 [i_4])))))))));
        var_22 = (~(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_12 [(short)5])), (var_5)))) ? ((~(var_5))) : (3693786145U))));
        var_23 -= ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)32))));
        arr_14 [i_4] = ((/* implicit */unsigned char) (~(arr_13 [0LL])));
    }
    for (short i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_6 = 1; i_6 < 10; i_6 += 3) 
        {
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_12 [i_5])) & (((/* implicit */int) (unsigned char)77)))))))))));
            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_16 [i_6 - 1])))) ? (((/* implicit */unsigned long long int) (~(arr_16 [i_6 - 1])))) : (7439242911356640662ULL))))));
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147418112LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6 + 2] [i_6 - 1])) ? (arr_17 [i_6 - 1] [i_6 + 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24)))))))))));
        }
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)65535))))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (arr_18 [i_5] [i_5]))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)39))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)9415))))))))));
    }
    for (unsigned short i_7 = 4; i_7 < 10; i_7 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_8 = 1; i_8 < 10; i_8 += 3) /* same iter space */
        {
            arr_25 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_12 [i_8 - 1])) == (((((/* implicit */_Bool) arr_4 [i_7] [i_8] [i_8])) ? (((/* implicit */int) arr_6 [i_8] [i_7 - 4] [i_7 - 4] [i_7])) : (((/* implicit */int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 3) 
                {
                    {
                        var_28 = ((/* implicit */long long int) (signed char)-36);
                        var_29 = ((/* implicit */unsigned char) (-(var_4)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned char i_11 = 4; i_11 < 10; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) var_12)))))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) > (arr_0 [i_7])))))))));
                            arr_39 [i_13] [i_8] [(unsigned char)9] [i_8] [i_7] = ((/* implicit */unsigned char) ((2130783099U) << (((/* implicit */int) (_Bool)1))));
                            var_32 = ((/* implicit */int) max((var_32), ((~(((/* implicit */int) arr_24 [i_11] [i_11]))))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned int) (+(arr_9 [i_7 - 2] [i_8 - 1] [i_7 - 2] [i_8 + 1])));
        }
        for (long long int i_14 = 1; i_14 < 10; i_14 += 3) /* same iter space */
        {
            arr_42 [i_14 + 1] = ((/* implicit */unsigned int) (((!(((arr_9 [i_7] [i_7] [i_14] [i_14]) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)-90)))))))) : (((((/* implicit */int) ((((/* implicit */_Bool) arr_37 [i_7] [i_7] [i_7] [2] [i_7] [8LL])) || (((/* implicit */_Bool) arr_4 [i_7] [i_7] [i_7]))))) >> (((((((/* implicit */_Bool) 1632615780312015188LL)) ? (var_15) : (((/* implicit */int) (unsigned char)24)))) + (2098670814)))))));
            arr_43 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_18 [i_7 + 1] [i_7 + 1])))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)24047)) : (((/* implicit */int) var_14)))) : ((~(((/* implicit */int) arr_12 [i_7 - 3]))))));
            arr_44 [i_7] = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(arr_21 [i_7 + 1] [i_7])))) & (((((/* implicit */_Bool) 1188937653)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49728))) : (4194304LL)))));
        }
        for (long long int i_15 = 1; i_15 < 10; i_15 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_16 = 3; i_16 < 8; i_16 += 4) 
            {
                var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) ((long long int) var_16)))));
                /* LoopNest 2 */
                for (int i_17 = 2; i_17 < 10; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_16 + 3])) ? (((/* implicit */int) arr_12 [i_16 + 2])) : (((/* implicit */int) (unsigned char)179))));
                            arr_54 [i_15] = ((/* implicit */long long int) (~(2592385578U)));
                            var_36 ^= ((/* implicit */unsigned char) ((-4296739867447402127LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
            }
            var_37 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) arr_5 [i_7 - 3] [i_15] [i_7 + 1] [i_15 - 1]))))));
        }
        var_38 = ((/* implicit */unsigned char) (-(var_2)));
        /* LoopNest 3 */
        for (long long int i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            for (long long int i_20 = 1; i_20 < 9; i_20 += 2) 
            {
                for (signed char i_21 = 4; i_21 < 9; i_21 += 3) 
                {
                    {
                        arr_61 [(short)5] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_16))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((_Bool) ((arr_53 [i_7]) ? (((/* implicit */int) arr_53 [i_7])) : (((/* implicit */int) var_16))))))));
                        var_40 = ((/* implicit */signed char) (~((+(((/* implicit */int) arr_59 [i_7 - 2] [5LL] [i_7] [3LL] [i_20 + 1] [i_21]))))));
                    }
                } 
            } 
        } 
    }
    var_41 -= ((/* implicit */short) ((((2454628834639149984LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5800429426444542705LL)))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)220)))));
}
