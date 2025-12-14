/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39654
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
    var_12 = max((((/* implicit */unsigned int) var_11)), ((~(var_10))));
    var_13 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (+(var_9)))) : (var_3))), ((~(var_5)))));
    var_14 ^= ((/* implicit */unsigned short) var_2);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_15 *= ((/* implicit */unsigned int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))))), (max(((~(var_11))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)35445)))))))));
        var_16 = ((/* implicit */unsigned short) min((var_16), ((unsigned short)58776)));
        var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_0) << ((((~(var_5))) - (3758579547U))))))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((unsigned int) (unsigned short)65535)) / (295568451U)))) ? (((int) var_3)) : (((/* implicit */int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_5)))))))));
            arr_4 [i_1] [2] = ((/* implicit */unsigned short) ((min(((~(((/* implicit */int) (unsigned short)56279)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)9256)) : (((/* implicit */int) (unsigned short)25752)))))) ^ (((((-1736673361) | (((/* implicit */int) arr_1 [(unsigned short)11])))) & (max((((/* implicit */int) (unsigned short)52567)), (0)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            arr_7 [i_0 + 1] [i_2] = ((4077503499U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)28322))));
            arr_8 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((int) -466243566));
            var_19 = ((/* implicit */unsigned int) ((arr_3 [i_0 + 2]) > ((~(((/* implicit */int) (unsigned short)9256))))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                for (int i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    {
                        var_20 = (~(((/* implicit */int) arr_10 [i_4])));
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [8] [i_0] [i_4])) : (var_9)))))));
                        var_22 += ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 2] [i_0 + 2])) & (((/* implicit */int) (unsigned short)28332))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 20; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    {
                        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_14 [i_0 - 1]))));
                        arr_20 [18] [i_5] [i_2] [7U] &= ((/* implicit */unsigned short) ((((-613056483) + (2147483647))) >> (((4294967295U) - (4294967286U)))));
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 1; i_7 < 19; i_7 += 4) /* same iter space */
                        {
                            var_24 += (~(1U));
                            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((var_2) > ((+(((/* implicit */int) (unsigned short)14517)))))))));
                        }
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 4) /* same iter space */
                        {
                            var_26 = var_4;
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (unsigned short)39783))));
                            var_28 = ((/* implicit */unsigned int) max((var_28), ((+(29986647U)))));
                        }
                        for (unsigned int i_9 = 1; i_9 < 19; i_9 += 4) /* same iter space */
                        {
                            arr_29 [i_0] [i_0 - 1] [(unsigned short)19] [i_5] [i_6] [i_9 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(var_0))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_10)))) ? (((var_4) << (((((arr_25 [i_0] [i_9] [i_5 + 1]) + (550941632))) - (29))))) : (((int) arr_14 [i_0 + 1]))));
                        }
                        arr_30 [i_2] [i_5] [10U] = ((int) var_5);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
        {
            arr_33 [i_10] = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_13 [i_10] [i_10] [i_0 + 1] [i_10])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)14517))))));
            var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [5] [i_10] [i_0] [(unsigned short)5]) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14501)))))) ? (((/* implicit */int) arr_23 [i_0] [i_0] [i_0 + 1] [18U] [i_0] [i_0 + 1])) : (arr_21 [i_0] [i_0 + 2] [i_0 - 1] [(unsigned short)18] [i_0 + 1] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 19; i_11 += 3) 
        {
            for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_13 = 1; i_13 < 19; i_13 += 4) 
                    {
                        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 2147483633)) + (4294967295U)))) ? (((((/* implicit */_Bool) 4294967278U)) ? (((/* implicit */unsigned int) -1346697895)) : (var_7))) : (((/* implicit */unsigned int) arr_40 [i_11 - 3] [i_11] [i_11 - 3] [(unsigned short)20] [i_11] [i_0])))))));
                        var_32 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (4294967295U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42572)) ? (((/* implicit */int) arr_26 [i_12] [i_11 - 2] [i_12] [i_12] [i_0 + 2])) : (((int) (unsigned short)46620)))))));
                    }
                    for (int i_14 = 0; i_14 < 21; i_14 += 4) 
                    {
                        var_33 += min((min((((/* implicit */unsigned int) (unsigned short)26050)), (min((var_3), (((/* implicit */unsigned int) (unsigned short)54857)))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_37 [i_14] [i_12] [i_0])) + (var_11)))));
                        var_34 *= ((/* implicit */int) ((4294967275U) == (((((/* implicit */_Bool) ((int) 1027594674))) ? (((((/* implicit */unsigned int) -429012980)) - (3275179104U))) : (((((/* implicit */unsigned int) arr_5 [i_11 + 2] [i_11 + 2])) + (arr_17 [i_0] [i_0] [i_0] [i_11 - 3] [i_12] [i_14])))))));
                    }
                    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) (unsigned short)50429)))), (min((max((-97530248), (((/* implicit */int) (unsigned short)25752)))), (((int) var_1))))));
                        arr_47 [i_15] [i_0] [i_11] [i_11] [i_0] = ((/* implicit */unsigned short) var_10);
                        var_36 = ((/* implicit */int) arr_10 [i_11]);
                        var_37 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                        arr_48 [i_0] [i_11] [i_12] [i_15] [i_0] [i_15 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)50439)), (4294967295U)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_12 [i_11] [i_11])) : (min((arr_21 [5U] [i_12] [i_12] [i_11] [i_0] [i_0 + 2] [(unsigned short)1]), (((/* implicit */int) arr_0 [i_0])))))))));
                    }
                    arr_49 [2] [i_12] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_28 [i_11 + 1] [i_11 + 1] [i_11] [i_11 + 2] [i_11 - 3]))))));
                }
            } 
        } 
    }
    for (unsigned int i_16 = 0; i_16 < 20; i_16 += 3) 
    {
        var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) min((arr_17 [i_16] [i_16] [i_16] [i_16] [3] [i_16]), (0U))))));
        var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) min((((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1U)) ? (((/* implicit */int) (unsigned short)15106)) : (var_4)))))), (((((/* implicit */_Bool) 3362448441U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (808600539U))))))));
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((int) arr_45 [i_16] [i_16] [i_16] [i_16] [1U])) % ((+(min((132677200), (((/* implicit */int) (unsigned short)15096)))))))))));
        arr_53 [i_16] [i_16] = ((/* implicit */int) max(((~(1545799112U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_16])) && (((/* implicit */_Bool) arr_3 [i_16])))))));
    }
    /* vectorizable */
    for (int i_17 = 0; i_17 < 17; i_17 += 3) 
    {
        var_41 = ((/* implicit */int) ((unsigned short) (unsigned short)22236));
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) arr_22 [i_17]))));
    }
}
