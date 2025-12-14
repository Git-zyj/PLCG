/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2758
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
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 1; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_0] &= max((((/* implicit */long long int) var_1)), (max((arr_6 [i_1 + 1] [i_0 - 1] [i_0 + 1]), (((/* implicit */long long int) 2193714259U)))));
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((8201847340159287708LL), (((/* implicit */long long int) var_9))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))) : ((+(arr_5 [i_0 + 1] [i_1 + 2] [i_1 + 2])))));
            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_6 [i_0 - 1] [i_0 - 1] [i_1]), (((/* implicit */long long int) ((var_2) >= (var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)26)) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) (unsigned char)255))))) : (min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))) : (2101253033U))), (((/* implicit */unsigned int) arr_2 [i_0 + 1]))))));
            var_17 = ((/* implicit */unsigned char) 2193714265U);
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [i_0])), (arr_5 [i_0] [(short)2] [i_2])))) ? (max((4871367551488340585ULL), (((/* implicit */unsigned long long int) 2101253058U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0])) ? (2101253034U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ? (((long long int) arr_5 [i_0] [i_2] [i_2])) : (((/* implicit */long long int) max(((-(arr_5 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)77)) % (((/* implicit */int) var_13))))))))));
            /* LoopSeq 1 */
            for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                arr_14 [i_0] [i_2] [i_3] = ((/* implicit */short) ((((((/* implicit */int) var_9)) > (((/* implicit */int) arr_2 [i_0 + 1])))) && (((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1])))))));
                var_19 = ((/* implicit */unsigned char) max(((~(8201847340159287708LL))), (((/* implicit */long long int) arr_4 [i_0 - 1]))));
            }
            var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))));
            var_21 -= ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (unsigned char)253)), (((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_2] [i_2])) : (16021212670420952218ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) * (((/* implicit */int) var_8)))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
        {
            var_22 = ((/* implicit */unsigned int) arr_17 [i_0] [i_0 - 1] [i_0 - 1]);
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) ? ((~(((/* implicit */int) (unsigned char)248)))) : (((/* implicit */int) ((short) arr_5 [i_0] [i_0 + 1] [i_0 + 1])))));
        }
        var_24 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)248)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_0])))))))), (arr_11 [i_0] [i_0] [i_0])));
        var_25 = ((/* implicit */unsigned char) ((((var_2) + (2147483647))) >> ((((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0]))))))) + (13)))));
        var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) var_12))));
    }
    for (unsigned short i_5 = 0; i_5 < 12; i_5 += 4) 
    {
        var_27 = ((/* implicit */short) min((-8201847340159287708LL), (((/* implicit */long long int) (unsigned char)3))));
        var_28 = ((/* implicit */signed char) (+(min((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)33)), ((unsigned char)0)))), (((((((/* implicit */int) (signed char)-34)) + (2147483647))) << (((((/* implicit */int) arr_3 [i_5] [i_5] [i_5])) - (252)))))))));
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((_Bool)0) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6))))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) arr_12 [i_5] [i_5])) ? (arr_18 [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))))))));
        /* LoopSeq 3 */
        for (unsigned char i_6 = 2; i_6 < 10; i_6 += 1) 
        {
            var_30 = (~(3830804300U));
            var_31 -= ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_16 [i_6 + 2] [i_6]) ? (((/* implicit */int) arr_17 [i_6 + 1] [i_6 - 1] [i_6 - 2])) : (((/* implicit */int) arr_16 [i_6 - 2] [i_6]))))), (max((arr_1 [i_6 + 1]), (((/* implicit */unsigned int) (short)25473))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6 - 2] [i_6] [i_6])) || (((/* implicit */_Bool) arr_22 [i_5] [i_9 - 1])))))));
                            var_33 = ((((/* implicit */_Bool) (-(arr_6 [i_5] [i_5] [(short)6])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 + 1]))) - (arr_13 [i_9 - 1] [i_7] [i_6] [i_5]))) : (((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_12)))) % (((2147483636) - (((/* implicit */int) var_8))))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_34 += ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))), (((int) arr_13 [i_5] [i_5] [i_5] [i_10]))));
            var_35 = ((/* implicit */signed char) min((var_35), (max(((signed char)(-127 - 1)), ((signed char)106)))));
        }
        for (long long int i_11 = 2; i_11 < 9; i_11 += 1) 
        {
            var_36 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_22 [i_5] [i_11 + 1]))))))) ? (((((/* implicit */_Bool) arr_23 [i_5] [i_11 + 2] [i_11 + 2] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_9), (arr_20 [i_5]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_5]))) * (var_14))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) min(((short)0), (((/* implicit */short) var_0))))))))));
            /* LoopNest 2 */
            for (unsigned long long int i_12 = 3; i_12 < 11; i_12 += 1) 
            {
                for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    {
                        var_37 -= ((/* implicit */unsigned char) arr_25 [(unsigned char)1] [(short)4] [i_11 + 1] [i_12 - 1] [i_12] [i_13]);
                        arr_40 [i_11] [i_11] [i_12] [i_11] [i_5] [i_5] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) ((unsigned char) (short)-1490))))), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)243))) & (var_7)))) ? (((((/* implicit */_Bool) arr_15 [i_5])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_2 [i_13])))) : (((((/* implicit */_Bool) (unsigned short)6982)) ? (((/* implicit */int) arr_26 [i_5] [i_13] [i_13] [i_13])) : (((/* implicit */int) arr_15 [i_13]))))))));
                        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_11 [i_5] [i_11] [i_12])), (((((/* implicit */_Bool) var_13)) ? (10211818343488277152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)224))))))))));
                        arr_41 [i_5] [i_5] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_13 [i_11] [i_11 + 2] [i_11 + 2] [i_11 + 1]), (((/* implicit */unsigned int) max((((/* implicit */short) var_13)), (var_6))))))) ? (((((((/* implicit */_Bool) arr_19 [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5] [i_11 - 1]))) : (10211818343488277152ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_13]))))) : (((/* implicit */unsigned long long int) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) arr_39 [i_12 - 1] [i_11 - 2])))))));
                        var_39 = ((/* implicit */int) (+((((!(arr_0 [i_12]))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_31 [i_5] [(signed char)3]))))) : (min((((/* implicit */unsigned long long int) var_3)), (10211818343488277152ULL)))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (~(-2151320646063807394LL))))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_41 = ((/* implicit */_Bool) arr_45 [i_14]);
        var_42 = ((/* implicit */short) min((((((/* implicit */_Bool) 8201847340159287708LL)) ? (18027869350267829151ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)109)))))));
        var_43 = ((/* implicit */signed char) min((var_43), (((/* implicit */signed char) ((((/* implicit */int) arr_44 [i_14] [i_14])) >> (((max((var_7), (((/* implicit */long long int) (~(var_4)))))) - (7317213673188133135LL))))))));
        var_44 = ((/* implicit */short) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)-12075))))))), (max((((-8201847340159287708LL) / (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_14]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_9)))))))));
    }
    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) var_5))));
    var_46 = ((/* implicit */signed char) max((var_46), (((signed char) max((((/* implicit */long long int) var_12)), (var_7))))));
}
