/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54694
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
    var_13 = ((/* implicit */_Bool) (~(10357433994913379527ULL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (((_Bool)1) || ((_Bool)1))))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) < (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (max((var_12), (((/* implicit */unsigned int) (unsigned short)37768))))))));
        var_16 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) var_9)))))), (((arr_4 [i_1 + 1]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)37768)) * (((/* implicit */int) (_Bool)1))))) : (var_2)))));
    }
    for (signed char i_2 = 3; i_2 < 19; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 4) /* same iter space */
            {
                arr_15 [i_2] = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) min(((unsigned short)36795), (((/* implicit */unsigned short) (_Bool)1)))))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_14 [i_2 - 3]))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2]))) | (var_2))))))))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 18; i_5 += 4) /* same iter space */
            {
                arr_19 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)37768))));
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 2) 
                {
                    var_18 = ((/* implicit */signed char) min(((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (var_4)))))), (((((unsigned long long int) arr_4 [i_3])) < (((/* implicit */unsigned long long int) var_12))))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_3)) ? (4010398683254463061LL) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (10U)))))) / (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned short)26536))))))))))));
                    var_20 = ((((_Bool) min((3873230988U), (((/* implicit */unsigned int) arr_14 [i_2 - 2]))))) || (((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */long long int) 3873230988U)), (-3153752856445998699LL))))));
                    arr_23 [i_2] [i_3] [i_5] [i_6] = (i_2 % 2 == 0) ? (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((arr_6 [i_6]) >> (((arr_20 [i_2] [i_2] [i_3 - 1] [16ULL] [i_3 - 1] [i_6]) + (2093721413448656749LL)))))), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_20 [i_5 + 1] [i_2] [i_2 - 3] [i_6] [i_2 - 1] [i_5 + 1]))))))) : (((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((arr_6 [i_6]) >> (((((arr_20 [i_2] [i_2] [i_3 - 1] [16ULL] [i_3 - 1] [i_6]) + (2093721413448656749LL))) + (595281923399822069LL)))))), (((unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_20 [i_5 + 1] [i_2] [i_2 - 3] [i_6] [i_2 - 1] [i_5 + 1])))))));
                }
                var_21 = ((/* implicit */signed char) ((((unsigned int) max((var_6), (((/* implicit */unsigned int) var_5))))) ^ (max((((((/* implicit */_Bool) arr_18 [i_2])) ? (var_11) : (2091129028U))), (max((33554304U), (((/* implicit */unsigned int) (_Bool)1))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 3) 
                {
                    var_22 = ((/* implicit */signed char) (-(((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)-84))))));
                    var_23 = ((/* implicit */long long int) (_Bool)1);
                    var_24 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 421736308U)) ? (15315907515728488140ULL) : (((/* implicit */unsigned long long int) -9223372036854775791LL))))));
                }
                arr_31 [(_Bool)1] [i_2] [i_2 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_3 [i_3 - 1]))));
                /* LoopSeq 2 */
                for (unsigned short i_9 = 2; i_9 < 19; i_9 += 1) 
                {
                    arr_35 [i_9 - 2] [i_9 + 1] [i_2] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)57)) / (((/* implicit */int) (signed char)126))))));
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) arr_6 [i_7]);
                        var_26 &= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_10)))) * (var_12)));
                        arr_39 [i_7] [i_2] [i_2] [i_7] &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2 + 1]))) * (((((/* implicit */_Bool) arr_26 [i_7] [i_3 - 1] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_7] [i_7] [i_7] [i_9] [i_9] [i_10]))) : (9935581541717611027ULL)))));
                    }
                }
                for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    arr_44 [i_2 - 1] [i_2 - 1] [i_7 + 2] [i_2] = (_Bool)1;
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 2; i_12 < 17; i_12 += 1) 
                    {
                        var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 15U))) ? ((-(((/* implicit */int) arr_30 [i_7])))) : (((/* implicit */int) (unsigned short)37835))));
                        var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_3 - 1] [i_3 - 1] [i_2]))));
                        var_29 = ((/* implicit */_Bool) (((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3153752856445998696LL))) / (var_7)));
                        var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-124)) || (((/* implicit */_Bool) var_12)))))));
                    }
                }
            }
            var_31 = ((/* implicit */unsigned long long int) (_Bool)1);
            var_32 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_11 [i_2 + 1])) : (1782281151082667155ULL)))) ? (((/* implicit */int) ((_Bool) arr_42 [i_2] [i_3 - 1]))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_45 [i_2] [i_3] [i_3] [i_2]))))))));
            var_33 = (~(var_6));
        }
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                arr_52 [i_2] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)116))))) < (((((/* implicit */_Bool) arr_18 [i_2 - 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
                arr_53 [i_2 - 2] [i_2] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (max((((/* implicit */unsigned long long int) arr_8 [i_13 - 1] [i_13 - 1] [i_13 - 1])), (6970922537583408311ULL))) : (((/* implicit */unsigned long long int) max((arr_34 [i_13 - 1] [i_2 + 1] [i_2] [i_13 - 1] [i_14]), (((/* implicit */long long int) var_12))))));
                var_34 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)0)), (17584796539334719132ULL)));
            }
            for (signed char i_15 = 2; i_15 < 16; i_15 += 2) 
            {
                var_35 = min((((signed char) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_15 - 2] [8U] [i_2] [i_2]))) : (var_12)))), (((/* implicit */signed char) ((var_0) < (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_2 - 1])))))));
                arr_57 [(_Bool)1] [i_2] [i_13 - 1] = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned long long int) var_10)), (arr_3 [i_2 - 3]))) >> (((var_12) - (3654160764U))))), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) (_Bool)1)), (738169652U))) * (arr_11 [i_2]))))));
            }
            arr_58 [i_13] [i_2] = ((/* implicit */signed char) arr_48 [i_2 - 2]);
            var_36 ^= ((/* implicit */_Bool) (((_Bool)1) ? (0U) : (738169642U)));
            arr_59 [i_2] [i_13 - 1] [i_2] = ((((/* implicit */_Bool) ((((unsigned int) arr_48 [i_2])) >> (((min((((/* implicit */unsigned long long int) var_12)), (var_2))) - (3654160789ULL)))))) || (((/* implicit */_Bool) ((signed char) (_Bool)0))));
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            arr_64 [i_2] [i_16] [i_2] = ((/* implicit */unsigned long long int) arr_56 [i_2] [i_2 - 1]);
            var_37 |= ((/* implicit */unsigned short) ((var_2) / (var_9)));
            var_38 -= ((/* implicit */signed char) (~(var_6)));
            var_39 -= ((/* implicit */signed char) (-(arr_54 [10U] [i_2] [i_2 - 3] [i_2 - 3])));
        }
        var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_42 [i_2] [i_2 - 3]), (((/* implicit */long long int) var_1))))) ? (((/* implicit */int) ((signed char) -8622063834159693813LL))) : (((/* implicit */int) arr_61 [i_2] [i_2 - 1]))));
    }
}
