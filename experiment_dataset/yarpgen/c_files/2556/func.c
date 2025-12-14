/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2556
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
    var_11 &= ((/* implicit */unsigned char) var_0);
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) (unsigned char)16)))))) | (var_1)));
    var_13 = ((/* implicit */long long int) (((((_Bool)1) ? (17812664853185137525ULL) : (((/* implicit */unsigned long long int) -4178454756439397998LL)))) / (((/* implicit */unsigned long long int) var_2))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */_Bool) var_2);
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) -2726076843754771842LL))));
                    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
        var_17 -= ((/* implicit */unsigned short) var_8);
        var_18 = ((/* implicit */short) (_Bool)1);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_3 = 2; i_3 < 22; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 1; i_4 < 23; i_4 += 4) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_19 += (((_Bool)1) ? (((/* implicit */int) (unsigned char)221)) : (((/* implicit */int) (unsigned char)243)));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))) % (var_4)));
                    }
                } 
            } 
            var_21 = ((unsigned int) arr_8 [i_3] [i_3 + 2] [i_3]);
            var_22 = arr_9 [i_0] [i_0] [(unsigned char)20];
            var_23 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (var_3));
            var_24 = ((/* implicit */unsigned short) arr_6 [8] [i_3] [i_0] [8]);
        }
        for (signed char i_6 = 1; i_6 < 23; i_6 += 4) 
        {
            var_25 += ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)32767)) ? (4045949419U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)230))))));
            var_26 = ((/* implicit */unsigned char) 14793054959602083498ULL);
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) (((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_4)))) ? (var_10) : (((var_10) - (((/* implicit */int) (signed char)16))))))))))));
            var_28 = ((/* implicit */unsigned char) max((min((var_9), (arr_10 [i_6 + 1] [i_6]))), (((/* implicit */unsigned long long int) arr_12 [i_6] [i_0 - 2] [i_0 - 2] [i_0]))));
            var_29 &= ((/* implicit */_Bool) max((1677108385712583390ULL), (((/* implicit */unsigned long long int) (unsigned short)19299))));
        }
    }
    for (unsigned short i_7 = 3; i_7 < 22; i_7 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) arr_14 [17U] [i_7] [i_7] [5LL] [5LL] [i_7]);
        /* LoopSeq 1 */
        for (unsigned char i_8 = 3; i_8 < 23; i_8 += 3) 
        {
            var_31 = ((/* implicit */int) var_7);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (2123345122U) : (max((((/* implicit */unsigned int) (unsigned char)224)), (90682513U)))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned char i_10 = 4; i_10 < 23; i_10 += 3) 
                {
                    {
                        var_33 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)42771)) ? (-1LL) : (9223372036854775797LL)));
                        var_34 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? ((~(arr_11 [(short)7] [i_10 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)159)))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                        {
                            var_35 = ((/* implicit */signed char) arr_4 [i_7 - 2]);
                            var_36 = ((/* implicit */long long int) (((~(((/* implicit */int) ((1285542785) <= (((/* implicit */int) arr_14 [i_7] [i_8 - 1] [i_8] [i_9] [2] [i_7]))))))) < (((/* implicit */int) ((((/* implicit */_Bool) arr_13 [4LL] [i_11] [i_11] [i_8 - 2])) || (((/* implicit */_Bool) (+(var_9)))))))));
                            var_37 &= ((/* implicit */unsigned short) (+(min((arr_0 [i_10 + 1] [i_8 - 1]), (((/* implicit */int) arr_12 [i_10 - 4] [i_10 - 4] [i_8 - 3] [i_7 + 2]))))));
                        }
                        var_38 = ((/* implicit */int) ((((((-1769828553560829542LL) < (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7 + 2] [i_7 + 2] [(signed char)5] [i_7 + 2]))))) ? (((((/* implicit */_Bool) 4045949431U)) ? (((/* implicit */int) (signed char)50)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_8 [i_7] [i_9] [i_9])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775788LL)))))));
                    }
                } 
            } 
            var_39 = ((/* implicit */long long int) arr_30 [i_8 + 1] [(unsigned short)22]);
        }
        var_40 = ((/* implicit */int) var_2);
    }
}
