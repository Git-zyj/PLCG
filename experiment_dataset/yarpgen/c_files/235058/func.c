/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235058
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
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_20 |= ((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)162)))) ? (-1869003783) : (((((/* implicit */int) (short)13925)) >> (((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((((/* implicit */int) ((2393432714U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0 - 2])))))) - (((((/* implicit */int) arr_0 [i_0])) % (max((var_5), (((/* implicit */int) arr_2 [i_0] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) var_9);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] &= arr_5 [i_1] [i_1];
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)255)) : ((+(((/* implicit */int) (unsigned char)30))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (unsigned short)6422)) ? (1901534582U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26235))))) : (min((16380U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((long long int) 10588203404823494664ULL))));
        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned char i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    {
                        arr_18 [i_4] [i_2] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (-7702757215163653918LL)));
                        arr_19 [i_1] [i_4] [i_1] [i_4] |= ((/* implicit */long long int) ((((unsigned int) var_8)) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                        var_22 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_3 - 3] [i_3])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_20 [15ULL] [i_5])))) < ((((+(var_11))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58062))))))))));
            arr_23 [i_5] [12LL] [i_1] = ((/* implicit */signed char) ((var_13) << (((((/* implicit */int) var_7)) - (26130)))));
            arr_24 [i_1] [i_5] = ((/* implicit */unsigned long long int) var_14);
        }
        for (long long int i_6 = 0; i_6 < 17; i_6 += 2) /* same iter space */
        {
            var_24 += arr_17 [i_6] [i_1] [i_1] [i_1];
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
            {
                arr_32 [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (long long int i_9 = 3; i_9 < 15; i_9 += 2) 
                    {
                        {
                            var_25 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)165)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17678))) : (281337537757184ULL))));
                            var_26 = ((/* implicit */int) ((((/* implicit */int) (short)-2348)) < (((/* implicit */int) (unsigned char)60))));
                            arr_40 [i_1] [i_8] [8U] [i_8] [i_9] = ((/* implicit */int) 1966080U);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)21))))))))));
                /* LoopSeq 1 */
                for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                {
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                    var_29 = ((/* implicit */_Bool) min((var_29), (var_1)));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_15 [i_6]))));
                        var_31 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [i_11] [i_7] [i_6]))));
                        var_32 = ((/* implicit */int) ((unsigned int) var_13));
                    }
                }
                var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (unsigned short)56056))));
            }
            for (signed char i_12 = 1; i_12 < 14; i_12 += 3) 
            {
                arr_47 [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) max((1037126215), (((/* implicit */int) (unsigned char)68))));
                arr_48 [i_6] = arr_43 [4] [i_12] [i_6] [i_1] [i_1] [i_1] [i_12 - 1];
                arr_49 [i_1] [i_1] [6LL] [i_12] = ((/* implicit */signed char) arr_46 [i_12] [i_12 + 2] [i_12 + 2]);
                var_34 = ((/* implicit */unsigned long long int) (+(max((var_8), (((((/* implicit */int) arr_33 [i_6])) & (((/* implicit */int) (short)-8276))))))));
            }
            arr_50 [i_1] = ((/* implicit */unsigned char) var_9);
        }
        for (long long int i_13 = 0; i_13 < 17; i_13 += 2) /* same iter space */
        {
            var_35 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)37717)), ((~(var_13))))))));
            arr_54 [13U] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_21 [i_13] [i_13] [i_1]))))));
            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) var_8))));
            var_37 ^= ((/* implicit */short) 709365656);
            arr_55 [i_1] [i_13] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        }
    }
    var_38 *= ((unsigned char) var_17);
}
