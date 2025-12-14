/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221944
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) / ((-(var_16)))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)606);
        arr_3 [i_0] = ((/* implicit */long long int) (unsigned short)65532);
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) (-(arr_4 [i_1 - 1] [i_1 - 1])));
        var_21 = ((/* implicit */unsigned short) ((1225650598) ^ (((/* implicit */int) (unsigned short)600))));
    }
    var_22 = ((/* implicit */unsigned long long int) ((min((var_16), (((/* implicit */unsigned int) var_1)))) * (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
    /* LoopSeq 2 */
    for (int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) /* same iter space */
        {
            var_23 = ((/* implicit */signed char) min((max((arr_10 [i_3]), (((/* implicit */unsigned long long int) arr_5 [i_2])))), (((/* implicit */unsigned long long int) arr_8 [i_3 + 1] [i_2]))));
            arr_13 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)606);
            var_24 ^= ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)102))))));
            var_25 = ((/* implicit */short) max((min(((+(((/* implicit */int) var_11)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (arr_5 [i_2])))))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 + 1])))))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 8; i_4 += 3) /* same iter space */
        {
            arr_17 [i_2] [i_2] [i_2] |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) (unsigned short)56297)) - (56297)))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) max(((~(((unsigned int) (unsigned short)64927)))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_2] [i_2] [i_2]))))))))));
            var_27 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)14)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)58580))))) : (arr_0 [i_4])))));
            var_28 |= ((/* implicit */signed char) (((+(((/* implicit */int) arr_7 [i_4 + 1] [i_4 + 1])))) >= ((+(((/* implicit */int) arr_14 [(signed char)0] [i_4 + 1] [(signed char)0]))))));
            /* LoopSeq 4 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_20 [i_2] [i_2] [i_4 + 2] [(signed char)0] &= ((/* implicit */unsigned long long int) ((_Bool) (!(((/* implicit */_Bool) arr_5 [i_4 + 1])))));
                var_29 = ((/* implicit */signed char) max((var_29), (((signed char) (!(((/* implicit */_Bool) 10870215141638629063ULL)))))));
            }
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_28 [i_2] [i_2] [i_4 - 1] [i_6] [i_4] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)104))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_4 [i_4 + 1] [i_4]))));
                }
                var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_25 [i_6] [i_6] [i_4 + 2] [i_4 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_27 [i_4 + 1] [i_4] [i_4 + 1] [i_4 + 1]), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)9230))))))))) : (var_7)));
            }
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    arr_35 [i_2] [i_4] [i_4] [i_4] [i_8] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_25 [i_2] [i_2] [i_2] [i_4 + 2])) : (((/* implicit */int) arr_34 [i_4 + 1] [i_4] [i_4] [i_4] [i_4] [i_4 + 2])))))));
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_2])), (arr_9 [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65527))) <= (-8249907256234688843LL))))) : (((((/* implicit */_Bool) arr_1 [i_8] [i_4])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) : (3621368167982149638ULL))))))));
                    arr_36 [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (signed char)-24))))));
                }
                arr_37 [i_4] [i_8] = ((/* implicit */unsigned short) max(((-(3648549635U))), (((/* implicit */unsigned int) max((((short) arr_25 [i_2] [i_4] [i_4] [i_8])), (((/* implicit */short) (!(((/* implicit */_Bool) (signed char)89))))))))));
                var_33 -= ((/* implicit */unsigned long long int) (~(((arr_12 [i_2] [i_4 + 2]) / (arr_12 [i_4] [i_4 + 2])))));
                var_34 = ((/* implicit */unsigned short) (~(min((((/* implicit */int) arr_18 [i_4] [i_4] [i_4 + 2])), (((int) var_8))))));
                var_35 = (unsigned short)34948;
            }
            for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                arr_42 [i_4] = ((/* implicit */unsigned short) max((((int) arr_4 [i_4 + 2] [i_2])), (((/* implicit */int) (signed char)-15))));
                arr_43 [i_4] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) (signed char)0)) & (((/* implicit */int) arr_5 [i_4 + 1])))));
                var_36 = ((min((((/* implicit */unsigned int) (short)-10535)), (4294967282U))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)24075))) : (10958892807874734972ULL)));
                arr_44 [i_2] [(short)9] [i_4] [i_10] = ((/* implicit */unsigned short) min((((short) (unsigned short)24075)), (((/* implicit */short) (!(((/* implicit */_Bool) arr_29 [i_4 - 1] [i_4 - 1] [i_4 - 1])))))));
            }
        }
        /* vectorizable */
        for (signed char i_11 = 3; i_11 < 8; i_11 += 3) 
        {
            var_38 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_31 [i_2] [i_2] [i_11 - 1] [i_2] [i_11 - 2] [i_11]))));
            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) 3616267392U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)98)))))));
        }
        /* LoopSeq 3 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_40 = ((/* implicit */unsigned long long int) max((var_40), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
            var_41 = (signed char)64;
            /* LoopNest 2 */
            for (unsigned short i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    {
                        var_42 = 17689104192646031813ULL;
                        var_43 *= ((/* implicit */signed char) max(((+(arr_39 [i_2] [i_14] [i_2] [(signed char)0]))), (((((/* implicit */_Bool) arr_9 [i_14])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])))))) : (arr_48 [i_12] [i_14])))));
                        var_44 -= ((/* implicit */signed char) var_8);
                        var_45 &= ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((16266294959204318067ULL) >= (((/* implicit */unsigned long long int) 2128075714)))))))));
                        arr_57 [i_2] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_54 [i_2] [i_2] [i_2] [(_Bool)1] [(_Bool)1] [i_14])) / (1225650598)))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 2) 
        {
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) var_2))));
            var_47 = 2505060411172140878ULL;
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_48 = ((/* implicit */unsigned long long int) min((var_48), (((((/* implicit */unsigned long long int) (+(2520229779U)))) * (((unsigned long long int) arr_25 [i_2] [i_2] [i_2] [i_2]))))));
            arr_64 [i_16] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-114))));
            var_49 ^= ((/* implicit */signed char) ((unsigned short) var_10));
        }
    }
    for (int i_17 = 1; i_17 < 18; i_17 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 3) 
            {
                {
                    var_50 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-113)) ? (18087443925323782812ULL) : (((/* implicit */unsigned long long int) -1078147477)))));
                    arr_76 [i_17 - 1] [i_17] = (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65532))) * (var_16)))) ? (min((arr_68 [i_17 + 1] [i_17]), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (short)-3)))))));
                }
            } 
        } 
        var_51 = ((/* implicit */unsigned short) ((unsigned long long int) (+((+(((/* implicit */int) (unsigned short)65533)))))));
        arr_77 [i_17] [i_17] = ((/* implicit */unsigned short) (!(arr_67 [i_17 + 1])));
    }
    var_52 = ((/* implicit */_Bool) max((var_52), (var_18)));
}
