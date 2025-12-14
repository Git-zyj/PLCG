/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206286
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
    var_10 |= ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_1)), (var_4)));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_12 = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */long long int) var_4);
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) max((((max((((/* implicit */unsigned int) (unsigned short)15763)), (arr_3 [i_1] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) -572449732))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min(((+(2796517561676219213ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? ((+(((/* implicit */int) (unsigned char)97)))) : (((/* implicit */int) min(((unsigned short)15776), (((/* implicit */unsigned short) arr_5 [i_1] [i_2] [i_1])))))))))))));
            var_16 = ((/* implicit */long long int) 13ULL);
            var_17 = max(((-(((/* implicit */int) var_6)))), (((/* implicit */int) var_6)));
        }
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_4 = 0; i_4 < 12; i_4 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) > (arr_3 [i_1] [i_4]))))));
                var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) (~(var_9)))))));
            }
            /* vectorizable */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)51)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_21 = ((/* implicit */signed char) var_9);
                            var_22 = ((/* implicit */unsigned int) var_3);
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49743)) ? (((/* implicit */int) arr_16 [i_1] [i_3 + 2] [i_1] [i_1] [i_3])) : (((/* implicit */int) (signed char)32))));
            }
            /* vectorizable */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) (-(1025169187)));
                var_25 = ((/* implicit */_Bool) (~(arr_6 [i_3] [i_3 + 2])));
                var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) var_2))));
            }
            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)118)))))));
            var_28 = ((/* implicit */unsigned long long int) ((max(((+(-1285528792))), (((/* implicit */int) min((var_6), (var_1)))))) >> ((((~(arr_24 [i_1] [i_1] [i_3] [i_3]))) - (2137493998U)))));
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_29 = arr_20 [i_1] [i_9];
            var_30 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (unsigned short)16809))))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_4))))) ? (var_5) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))))));
            var_31 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) -1681547966)) | (var_5)))));
            var_32 &= (!(((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) (unsigned short)48727))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 2) 
            {
                var_33 = ((/* implicit */unsigned short) arr_14 [i_10 + 2] [i_9] [i_1]);
                var_34 = ((/* implicit */signed char) var_7);
                var_35 = ((/* implicit */unsigned char) ((((8355840) >> (((((/* implicit */int) (unsigned short)16809)) - (16797))))) >> (((min((arr_23 [i_10 - 1] [i_9] [i_10 - 1] [i_9]), (arr_23 [i_10 + 1] [i_9] [i_10 + 3] [i_10]))) + (296904932)))));
                /* LoopNest 2 */
                for (unsigned short i_11 = 2; i_11 < 10; i_11 += 2) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */_Bool) arr_2 [i_10 + 1]);
                            var_37 |= ((/* implicit */short) var_5);
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned short) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
            {
                var_39 = (unsigned short)48729;
                /* LoopSeq 3 */
                for (unsigned char i_14 = 1; i_14 < 9; i_14 += 2) 
                {
                    var_40 = ((/* implicit */_Bool) var_3);
                    var_41 = ((/* implicit */unsigned short) ((unsigned char) var_8));
                }
                for (int i_15 = 1; i_15 < 11; i_15 += 2) 
                {
                    var_42 = ((/* implicit */long long int) 1681547965);
                    var_43 = ((/* implicit */_Bool) (+(var_8)));
                    var_44 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)49772))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                    {
                        var_45 |= ((/* implicit */int) (-((+(arr_22 [i_1] [i_9])))));
                        var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_27 [i_15 + 1] [i_15] [i_15] [i_15 - 1])))))));
                        var_47 = ((/* implicit */long long int) (+((~(((/* implicit */int) var_2))))));
                        var_48 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)220)))) | (((/* implicit */int) ((((/* implicit */int) var_6)) < (((/* implicit */int) (_Bool)1)))))));
                        var_49 = ((/* implicit */int) arr_30 [i_13] [i_13] [i_13]);
                    }
                }
                for (unsigned short i_17 = 1; i_17 < 11; i_17 += 2) 
                {
                    var_50 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))));
                    var_51 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_38 [i_17 - 1] [i_17 + 1] [i_17]))));
                }
            }
        }
    }
    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 2) 
    {
        var_52 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16809))))) > (((((/* implicit */_Bool) (-(var_5)))) ? ((-(arr_49 [i_18]))) : (arr_49 [i_18])))));
        var_53 = ((/* implicit */unsigned char) var_4);
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_54 = 12201853070378898045ULL;
        /* LoopNest 2 */
        for (unsigned int i_20 = 0; i_20 < 24; i_20 += 2) 
        {
            for (short i_21 = 1; i_21 < 23; i_21 += 2) 
            {
                {
                    var_55 = ((/* implicit */unsigned long long int) var_0);
                    var_56 = ((/* implicit */unsigned int) max((var_56), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_53 [i_19] [i_19] [i_20])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))) : (arr_54 [i_20] [i_21 + 1] [i_20]))), (((/* implicit */unsigned long long int) (-(arr_51 [i_20])))))))));
                }
            } 
        } 
        var_57 &= ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-16)) * (((/* implicit */int) (unsigned short)16807))))) ? (((/* implicit */unsigned long long int) ((arr_55 [i_19] [i_19] [i_19] [i_19]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_0))))) : (var_5));
        var_58 = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned int) (_Bool)1)), (var_9))), (var_9)));
    }
    var_59 = ((/* implicit */signed char) var_8);
    var_60 = (~(((/* implicit */int) var_1)));
}
