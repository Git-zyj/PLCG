/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31594
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) min(((-(3138761541U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)-16384)), (arr_0 [i_0]))))));
        var_11 -= ((/* implicit */unsigned int) (~(262042857318158397LL)));
        var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((min((1722735778), (((/* implicit */int) arr_0 [i_0])))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 262042857318158397LL))))))))));
        var_13 = ((/* implicit */unsigned char) (-(min((((/* implicit */long long int) ((262042857318158396LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))), (((-262042857318158394LL) - (262042857318158397LL)))))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_14 = ((((/* implicit */_Bool) max((((-1) + (((/* implicit */int) var_7)))), (((/* implicit */int) ((1735038913) >= (((/* implicit */int) var_8)))))))) ? ((+(16777088U))) : (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)14636)))), ((-(((/* implicit */int) arr_0 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65523))), (arr_6 [i_1] [i_1])));
        arr_8 [i_1] = ((/* implicit */long long int) (short)32763);
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_15 |= ((/* implicit */unsigned short) (short)-18529);
        var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
        /* LoopSeq 4 */
        for (short i_3 = 0; i_3 < 23; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 23; i_5 += 4) 
                {
                    {
                        var_17 ^= ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_2] [i_2])))));
                        arr_18 [i_2] [i_2] [i_4] [i_5] [i_5] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) 181307418853434443LL))))));
                        var_18 -= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)4)) - (((((/* implicit */int) (short)-64)) - (1296194330))))))));
                        var_19 = ((/* implicit */int) arr_9 [i_5]);
                    }
                } 
            } 
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 2886969064255235630LL))));
            /* LoopSeq 1 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                var_21 = ((/* implicit */_Bool) min((var_21), (((((((long long int) arr_1 [i_2])) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))))) <= ((-(((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (181307418853434430LL)))))))));
                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2]))) != (-181307418853434431LL)))))));
            }
        }
        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 2) 
        {
            arr_25 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -262042857318158382LL)) ? (362716439) : (((/* implicit */int) (unsigned short)65508))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -362716440)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)6278))) : (var_3))) < (((/* implicit */unsigned int) max((((/* implicit */int) var_2)), (4))))))) : ((-((-(((/* implicit */int) var_7)))))));
            var_23 ^= ((/* implicit */unsigned short) ((unsigned char) (-((-(arr_10 [20] [20]))))));
        }
        for (unsigned int i_8 = 3; i_8 < 22; i_8 += 1) 
        {
            var_24 = ((/* implicit */signed char) 8560207072473567697LL);
            /* LoopSeq 3 */
            for (short i_9 = 1; i_9 < 19; i_9 += 1) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)42)) || (((/* implicit */_Bool) (unsigned short)57344))))), (max((arr_13 [i_9 - 1] [i_9 - 1] [i_9 - 1]), (((/* implicit */unsigned short) var_4))))))) : (((((((/* implicit */int) (short)43)) != (((/* implicit */int) arr_26 [i_2])))) ? (((1255180665) << (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_2] [i_8] [i_2])))))))));
                var_26 = ((/* implicit */long long int) (!(((((/* implicit */_Bool) (unsigned short)65518)) && ((!((_Bool)1)))))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_34 [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */unsigned int) max((1824341813), (((/* implicit */int) arr_23 [i_10] [i_8 - 1] [i_8 + 1]))))) != ((~(((((/* implicit */unsigned int) 16777216)) / (33554431U)))))));
                arr_35 [i_2] [i_2] [i_10] [i_10] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((int) var_2))))))));
                arr_36 [i_10] [i_8] [i_2] [i_10] = ((_Bool) ((((/* implicit */_Bool) arr_11 [i_10] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)19707))));
                var_27 += ((/* implicit */_Bool) (~((+(((/* implicit */int) arr_28 [i_10] [14]))))));
                var_28 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_9 [i_8 + 1])) ? (min((arr_11 [i_2] [i_8]), (((/* implicit */int) arr_9 [i_2])))) : ((+(((/* implicit */int) (_Bool)1))))))));
            }
            for (short i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                var_29 = ((/* implicit */long long int) ((((/* implicit */int) (!((_Bool)1)))) >> (((((/* implicit */_Bool) (+(((/* implicit */int) arr_30 [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) 1255180664)) ? (524288U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_8])))))))));
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) ((-1255180666) < (((/* implicit */int) (_Bool)0))))) + (((((/* implicit */_Bool) (short)255)) ? (362716439) : (-1255180676)))));
                /* LoopNest 2 */
                for (unsigned int i_12 = 2; i_12 < 21; i_12 += 2) 
                {
                    for (signed char i_13 = 3; i_13 < 22; i_13 += 4) 
                    {
                        {
                            var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_41 [i_8] [i_8] [i_12 + 2] [i_12] [i_13 - 1] [i_13]), (-362716439)))) && ((!(((/* implicit */_Bool) 5871279398441705105LL))))));
                            arr_46 [i_13] [i_12] [i_13] [i_13] [i_8] [i_2] = ((/* implicit */int) (_Bool)0);
                            var_32 = ((/* implicit */_Bool) min((var_32), ((!(((/* implicit */_Bool) min((((/* implicit */short) arr_43 [i_12] [i_13 - 1] [i_13 + 1] [i_12] [i_12])), ((short)255))))))));
                            var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) (+(var_3))))));
                            var_34 = ((/* implicit */long long int) max((max((((/* implicit */int) (unsigned short)14636)), ((-(((/* implicit */int) var_4)))))), (((((/* implicit */_Bool) 1397308169)) ? (min((1255180684), (((/* implicit */int) (short)1035)))) : ((~(((/* implicit */int) arr_45 [i_2] [i_8] [i_11] [i_8] [i_8]))))))));
                        }
                    } 
                } 
                arr_47 [i_8 - 1] &= 181307418853434443LL;
            }
            arr_48 [(unsigned char)16] [i_8] = ((/* implicit */int) arr_20 [i_2] [i_8] [i_8]);
        }
        /* vectorizable */
        for (unsigned short i_14 = 1; i_14 < 21; i_14 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_15 = 4; i_15 < 22; i_15 += 3) 
            {
                var_35 = (+(((((/* implicit */_Bool) arr_13 [i_2] [i_14] [i_15])) ? (((/* implicit */int) arr_28 [(signed char)2] [4])) : (((/* implicit */int) (unsigned char)106)))));
                var_36 = ((/* implicit */unsigned int) 362716422);
                arr_53 [i_14] [12LL] [i_14] = ((/* implicit */_Bool) -181307418853434431LL);
                arr_54 [i_14] [i_14] [(short)14] [i_15 - 2] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)110)) >= (((/* implicit */int) (short)233)))))));
            }
            for (short i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                var_37 = ((/* implicit */int) ((((/* implicit */_Bool) -262042857318158373LL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_52 [(_Bool)1] [(unsigned short)9] [i_16] [i_14])) * (((/* implicit */int) (unsigned char)106))))) : ((~(arr_20 [i_16] [i_14] [i_2])))));
                arr_58 [i_14] [i_14] [i_14 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) -262042857318158383LL)) ? (68719476736LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))) != (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_14] [i_14] [i_14 + 1])))));
            }
            var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)50899)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)48149))))) ? (((/* implicit */int) ((short) (short)233))) : ((+(((/* implicit */int) arr_50 [i_14 + 2] [i_14])))))))));
            var_39 = ((/* implicit */short) (~(((/* implicit */int) arr_55 [i_14] [i_14 + 1] [i_14 - 1] [i_14]))));
            arr_59 [i_14] = ((/* implicit */signed char) ((-262042857318158372LL) == (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_14] [i_14 + 1] [i_14 + 2] [i_14 + 2])))));
        }
        arr_60 [i_2] [i_2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_49 [(unsigned char)8]), (((/* implicit */unsigned short) arr_17 [i_2] [i_2] [i_2] [i_2] [5LL] [i_2]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-49)))))))), (((((/* implicit */_Bool) arr_19 [(unsigned short)8] [(unsigned short)8] [i_2])) ? (((((/* implicit */_Bool) (short)67)) ? (3632068366566572143LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)93))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (signed char)33))))))));
        var_40 -= ((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) ? (((((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */long long int) (~(var_3)))) : (-4096LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)99)))));
    }
}
