/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242222
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
    for (int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) (+(18446744073709551615ULL)));
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((7775934669229129172ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) ? (((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 2])) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)3))))) : ((+(var_3))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [(short)16])))))));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) (((((!(((/* implicit */_Bool) -210825192)))) || (((/* implicit */_Bool) ((signed char) 4294967295U))))) || (((/* implicit */_Bool) arr_2 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (unsigned char i_3 = 1; i_3 < 21; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 19; i_4 += 3) 
                {
                    {
                        arr_11 [i_4 + 2] [i_4] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-118))) : (18446744073709551611ULL)))) ? (((/* implicit */unsigned long long int) arr_7 [i_3 + 1] [i_2] [i_4 + 3] [9])) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_3] [i_4])) ? (16365061047975562422ULL) : (((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_3] [i_3])))))) | (((/* implicit */unsigned long long int) (-(var_9))))));
                        var_14 = ((/* implicit */unsigned short) var_0);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 23; i_6 += 2) 
            {
                for (unsigned char i_7 = 3; i_7 < 22; i_7 += 1) 
                {
                    {
                        var_15 = ((/* implicit */unsigned short) arr_4 [i_1]);
                        var_16 = ((/* implicit */unsigned short) (-(arr_2 [i_7 - 3] [i_7])));
                        var_17 = ((arr_8 [i_1] [i_7 + 1] [i_6] [i_7]) ^ (((arr_8 [i_6] [i_7 - 3] [i_6] [i_6]) ^ (arr_8 [i_1] [i_7 + 1] [i_6] [i_7]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) <= (((int) (short)-11797))));
    }
    for (signed char i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        var_19 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 1827519949754258412LL)), (((((/* implicit */_Bool) 17420744123849967810ULL)) ? (((/* implicit */unsigned long long int) max((-1827519949754258408LL), (((/* implicit */long long int) arr_16 [i_8 + 2] [i_8 + 2] [i_8] [i_8 + 2]))))) : (var_0)))));
        arr_23 [i_8] = ((/* implicit */unsigned char) (+(1827519949754258405LL)));
        /* LoopSeq 4 */
        for (long long int i_9 = 0; i_9 < 12; i_9 += 2) 
        {
            var_20 = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) (unsigned short)20485)))))), ((~(((/* implicit */int) arr_14 [i_8 - 2]))))));
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((long long int) arr_20 [i_9] [i_9] [i_9] [i_9])), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)243)))))))) ? (((/* implicit */unsigned long long int) (~(arr_24 [i_8 - 2] [i_9])))) : (max((((((/* implicit */_Bool) var_1)) ? (9955891490627203219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))))), (((/* implicit */unsigned long long int) ((2733760222310734581LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_8]))))))))));
        }
        for (int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_11 = 1; i_11 < 11; i_11 += 3) 
            {
                for (long long int i_12 = 3; i_12 < 10; i_12 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) max((((((arr_5 [i_8] [(short)11]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32659))))) / (((/* implicit */long long int) arr_7 [6U] [i_12] [i_12 - 3] [i_12])))), (((/* implicit */long long int) var_10))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_4 [i_8]))));
                            var_24 = ((/* implicit */signed char) (~(2733760222310734600LL)));
                        }
                        for (long long int i_14 = 2; i_14 < 8; i_14 += 2) 
                        {
                            var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)202)), (7775934669229129172ULL))))))));
                            var_26 = ((/* implicit */long long int) arr_28 [i_14 - 2] [i_12 - 3] [i_11 + 1] [i_8 + 1]);
                        }
                        for (int i_15 = 0; i_15 < 12; i_15 += 3) 
                        {
                            arr_41 [i_11 + 1] [i_10] [i_10] [i_11] [i_11] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_37 [i_8] [i_10] [i_11] [i_10] [i_12 + 1] [i_15] [i_15]))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) arr_26 [i_8] [i_8] [i_8]))));
                            var_28 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (0U)))) : (max((((/* implicit */long long int) 7U)), (-2733760222310734581LL)))))));
                        }
                    }
                } 
            } 
            var_29 *= ((/* implicit */unsigned long long int) min((-1827519949754258406LL), (((/* implicit */long long int) (signed char)35))));
        }
        for (int i_16 = 0; i_16 < 12; i_16 += 3) /* same iter space */
        {
            arr_44 [i_8] [i_8] = ((/* implicit */unsigned long long int) (~(arr_19 [i_8] [i_8] [i_8 - 1] [i_8] [i_16] [(_Bool)1])));
            var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_16] [i_16] [i_8 - 2] [i_16] [i_8] [i_16])) || (((/* implicit */_Bool) arr_31 [i_8 + 2] [(signed char)0] [i_8 - 2] [i_16] [i_8] [i_8 - 2]))))) > ((+(((int) arr_33 [i_8] [i_8] [i_8]))))));
        }
        for (int i_17 = 0; i_17 < 12; i_17 += 3) /* same iter space */
        {
            arr_47 [i_8] [i_17] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_2 [i_8 - 2] [i_17])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_40 [i_17] [i_17] [i_8 + 2])))));
            var_31 -= ((/* implicit */unsigned short) 1322310301);
        }
    }
    var_32 = var_3;
    var_33 -= ((/* implicit */int) var_0);
}
