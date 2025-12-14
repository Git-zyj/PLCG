/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235375
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) -536870912);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_11 += ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_2] [i_1] [i_0] [i_1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))));
                        /* LoopSeq 2 */
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            var_12 = ((((/* implicit */_Bool) arr_6 [i_3 + 2] [(short)18] [i_3 + 1] [i_3])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_3 + 1] [i_3] [i_3] [i_3 + 1])));
                            arr_14 [i_0] [i_0] = ((/* implicit */signed char) var_9);
                            var_13 = ((/* implicit */_Bool) (+((-2147483647 - 1))));
                        }
                        for (long long int i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+(8070450532247928832ULL))))));
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) 4503599627370495ULL))));
                            arr_18 [(signed char)7] [i_0] [i_0] [i_1] [i_2] [i_3 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) >= (3533345190U)));
                        }
                        arr_19 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) -2492923580094041811LL);
                        arr_20 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */long long int) var_2)) < (0LL))));
                    }
                }
            } 
        } 
        arr_21 [i_0] = ((long long int) -1LL);
        arr_22 [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((unsigned int) var_9)) : (max((var_5), (((/* implicit */unsigned int) var_1)))))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_12 [3LL] [3LL] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) (short)-5269)) ? (761622106U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
    }
    for (int i_6 = 1; i_6 < 16; i_6 += 4) 
    {
        arr_27 [i_6] [i_6] = ((/* implicit */_Bool) min((((max((((/* implicit */unsigned int) var_1)), (3533345178U))) >> (((((((/* implicit */_Bool) 3533345176U)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) - (35))))), (((/* implicit */unsigned int) min((((unsigned short) (unsigned short)65535)), (((/* implicit */unsigned short) var_10)))))));
        arr_28 [i_6] [i_6] = ((/* implicit */signed char) min((((unsigned int) var_1)), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)35325)) & (((/* implicit */int) (short)-17748)))))));
        arr_29 [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) ((short) ((arr_1 [i_6 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9)))));
        arr_30 [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) max((arr_11 [i_6 - 1] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 - 1]), (var_2)))) % (((long long int) arr_24 [i_6 + 1]))));
        var_16 = ((/* implicit */short) var_2);
    }
    for (unsigned int i_7 = 1; i_7 < 13; i_7 += 2) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((_Bool) var_10))))) << (((761622105U) - (761622098U)))));
        var_18 += ((/* implicit */unsigned char) (signed char)98);
        arr_33 [i_7] [i_7] = ((/* implicit */unsigned int) ((((unsigned long long int) 761622106U)) < (((((/* implicit */_Bool) (signed char)-125)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512)))))));
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        var_19 += ((/* implicit */signed char) arr_17 [i_8] [(short)12] [i_8] [i_8] [i_8] [i_8]);
        arr_36 [i_8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) > (761622122U))))) <= (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 761622100U)) ? (761622106U) : (26644973U)))), (((unsigned long long int) var_3))))));
        var_20 = ((/* implicit */short) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-45)), ((~(761622109U)))))) % (((((/* implicit */_Bool) ((signed char) var_6))) ? (arr_0 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) (short)24183)))))));
        /* LoopSeq 4 */
        for (short i_9 = 4; i_9 < 9; i_9 += 4) 
        {
            arr_39 [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (max((-6678589960987458473LL), (((/* implicit */long long int) 12)))))))) : (var_5)));
            var_21 *= ((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)0)), (min((min((0U), (((/* implicit */unsigned int) (short)-24216)))), (max((((/* implicit */unsigned int) (unsigned short)65535)), (var_6)))))));
            var_22 &= ((/* implicit */long long int) (unsigned char)17);
        }
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) min(((unsigned short)65535), (((/* implicit */unsigned short) arr_6 [i_8] [i_8] [i_10] [(unsigned char)13])))))))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 13495925050706028053ULL))))), (3533345185U)))) : (7364434724378390163LL)));
            arr_44 [i_8] [i_8] [i_10] = (signed char)127;
            /* LoopNest 3 */
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 4) 
                {
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_34 [i_8])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */int) var_1)) <= (var_2)))))) * (((/* implicit */int) ((((int) 65535)) != (((((/* implicit */int) var_3)) << (((((/* implicit */int) var_1)) - (1067))))))))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) var_1))));
                        }
                    } 
                } 
            } 
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))));
            arr_56 [i_8] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)67)) ? (((((/* implicit */int) (signed char)-1)) % (((((/* implicit */_Bool) -8824185151906927713LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483639))))) : (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_16 = 2; i_16 < 8; i_16 += 1) 
            {
                for (unsigned int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned long long int) arr_12 [i_8] [i_15] [i_16] [i_17] [i_17] [i_17]);
                        var_28 += ((/* implicit */signed char) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_5 [i_16 + 1] [i_15] [i_8]))));
                    }
                } 
            } 
            arr_64 [i_8] [i_15] = ((/* implicit */short) ((long long int) arr_15 [i_15] [i_15] [i_15] [i_15] [i_8] [i_8]));
        }
    }
}
