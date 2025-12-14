/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242899
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) (!(((/* implicit */_Bool) 4177886316U)))))));
    var_14 = ((/* implicit */_Bool) ((3656094329733464765LL) >> (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)26))))));
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 9; i_0 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)-1)))))));
        var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) >= ((~(((/* implicit */int) (unsigned short)31561)))))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 9; i_1 += 3) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1 - 1])))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [i_2] [i_3] [i_1 + 1] [i_1] [i_3]))) >= (arr_6 [i_1 + 1])));
                    }
                } 
            } 
            var_20 = ((/* implicit */long long int) ((arr_11 [i_1 + 2] [i_1] [i_1 + 3]) > (arr_11 [i_1 + 2] [i_1] [i_1 + 3])));
            var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 + 3]))));
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                arr_16 [i_5] [i_1] [i_1] = ((((/* implicit */unsigned long long int) var_7)) ^ ((~(arr_10 [i_1] [i_2] [i_5]))));
                var_22 = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) >= ((~(arr_6 [(signed char)10]))));
                var_23 = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_7))));
            }
            for (unsigned char i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */long long int) ((arr_6 [i_1 + 3]) << (((var_9) - (2872109862840830699ULL)))));
                            arr_24 [i_1] [i_2] [i_8] [i_7] [i_8] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                            var_25 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                            arr_25 [i_1] [i_1] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_1 - 1]))));
            }
            var_27 *= (~(((/* implicit */int) var_1)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (18446744073709551615ULL)));
            var_29 = ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) > ((+(((/* implicit */int) (_Bool)1)))));
            /* LoopSeq 2 */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_30 -= ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_11 - 1]))) <= (2349047562503395973LL));
                            var_31 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551615ULL))));
                            var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                    } 
                } 
                var_33 += ((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_28 [i_1] [i_1]))))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (int i_14 = 2; i_14 < 9; i_14 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
                            var_35 = ((/* implicit */long long int) max((var_35), ((+(var_12)))));
                        }
                    } 
                } 
                var_36 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))));
                arr_43 [i_1] [i_1] [i_10] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_13 [i_1] [i_1]))))));
            }
            for (unsigned short i_15 = 0; i_15 < 12; i_15 += 3) 
            {
                var_37 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_9] [i_1 + 2]))));
                arr_46 [i_9] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) >= (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 2]))));
                var_38 = ((/* implicit */int) (-(4611686018427387903ULL)));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!((_Bool)1)))) >> ((~(((/* implicit */int) var_0))))));
            }
            arr_47 [(short)6] |= ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        }
        /* LoopSeq 3 */
        for (int i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            var_40 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)7))));
            arr_51 [i_1] = ((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1]))));
        }
        for (int i_17 = 1; i_17 < 11; i_17 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
            {
                for (signed char i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    {
                        arr_61 [i_1] [i_1] [i_1] [i_1] [i_19] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_4 [i_19]))))));
                        var_41 = ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_17 - 1] [i_17 + 1] [i_1 + 3] [i_19]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                for (long long int i_21 = 3; i_21 < 9; i_21 += 2) 
                {
                    {
                        var_42 = ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_11)) - (46))));
                        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (+(((/* implicit */int) var_5)))))));
                    }
                } 
            } 
        }
        for (unsigned char i_22 = 0; i_22 < 12; i_22 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 0; i_23 < 12; i_23 += 2) 
            {
                for (int i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    {
                        var_44 = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        var_45 = ((/* implicit */signed char) (~(18446744073709551605ULL)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                for (signed char i_26 = 2; i_26 < 11; i_26 += 4) 
                {
                    for (unsigned char i_27 = 2; i_27 < 11; i_27 += 3) 
                    {
                        {
                            arr_85 [i_27 + 1] [i_26 + 1] [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) ((arr_30 [i_1] [i_1 - 1] [i_1] [i_26 - 2]) > (arr_30 [i_1] [i_1] [i_1] [i_26 - 2])));
                            arr_86 [i_1 + 1] [i_22] [i_25] [i_1] [i_27] [i_25] [i_27 + 1] = ((/* implicit */_Bool) (~(var_7)));
                            arr_87 [i_1 + 3] [i_1] [i_25] [i_27 - 1] [(signed char)2] [i_27] = ((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_1])) * (((/* implicit */int) (unsigned short)64693))));
                            var_46 += ((((/* implicit */int) arr_79 [i_1] [i_22] [i_25] [i_27 - 1] [i_27])) > (((/* implicit */int) (unsigned char)44)));
                            var_47 = ((/* implicit */int) max((var_47), ((+(((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned int i_28 = 0; i_28 < 12; i_28 += 4) 
            {
                for (unsigned long long int i_29 = 1; i_29 < 10; i_29 += 2) 
                {
                    for (signed char i_30 = 2; i_30 < 9; i_30 += 4) 
                    {
                        {
                            arr_97 [(short)5] [(short)5] [i_1] [i_29] [i_30] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_10))));
                            var_48 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_38 [i_1 + 2] [i_1 + 3]))));
                            arr_98 [i_1] [(short)4] [i_29] [i_29] [i_28] [i_22] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_53 [i_1 - 1] [i_28]))));
                        }
                    } 
                } 
            } 
            var_49 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
            arr_99 [i_22] [i_22] [i_22] |= ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) > (((/* implicit */int) (unsigned char)196))));
        }
    }
    /* vectorizable */
    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_32 = 1; i_32 < 22; i_32 += 3) 
        {
            for (unsigned short i_33 = 1; i_33 < 20; i_33 += 2) 
            {
                {
                    var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) (+(arr_107 [12] [i_32 - 1] [i_32 + 1] [i_33 + 2]))))));
                    var_51 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) > (var_4)));
                    var_52 = ((/* implicit */long long int) (-(((/* implicit */int) arr_103 [i_32] [i_33 + 3]))));
                    var_53 = ((/* implicit */short) (!((_Bool)1)));
                }
            } 
        } 
        arr_109 [i_31] = ((/* implicit */unsigned int) (+(18446744073709551605ULL)));
        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((22ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)44))))))));
    }
    /* vectorizable */
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_35 = 0; i_35 < 23; i_35 += 2) 
        {
            var_55 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((var_7) > (((/* implicit */unsigned int) ((/* implicit */int) arr_106 [i_34] [i_34] [i_34]))))))));
            arr_114 [i_34] [i_34] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_103 [i_34] [i_34])) >= (arr_111 [i_34] [i_35]))))));
        }
        var_56 = ((/* implicit */unsigned char) min((var_56), (((/* implicit */unsigned char) (+(((((((/* implicit */int) arr_104 [(signed char)16])) + (2147483647))) >> (((3536333172U) - (3536333162U))))))))));
        arr_115 [i_34] [i_34] = (!(var_6));
    }
    var_57 = ((/* implicit */long long int) (~(max((min((((/* implicit */unsigned long long int) var_6)), (5612105913118706070ULL))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */short) (_Bool)1)))))))));
    var_58 -= min((min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7002179945626701161LL))))), (max((var_2), (((/* implicit */unsigned short) var_0)))))), (var_8));
}
