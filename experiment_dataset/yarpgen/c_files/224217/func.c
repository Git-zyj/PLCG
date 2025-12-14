/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224217
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
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned int) max((((/* implicit */long long int) var_12)), (arr_2 [i_0]))));
        arr_4 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [(_Bool)1] [i_0 + 1]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_17))))) : (arr_2 [i_0 - 1])))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_15)), (-9223372036854775804LL)));
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((+(var_14))), (((/* implicit */int) arr_0 [i_0 + 1] [i_1 - 1]))))) ? (((/* implicit */int) max((arr_5 [i_0] [i_1 - 1] [i_0]), (arr_5 [i_0] [i_1 + 1] [i_1])))) : ((~(((/* implicit */int) arr_1 [i_1 - 1] [i_1]))))));
        }
        for (short i_2 = 2; i_2 < 15; i_2 += 4) 
        {
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) ((_Bool) var_6))), (var_17)))) ? (((((/* implicit */_Bool) (unsigned short)65532)) ? (((/* implicit */unsigned long long int) 8736270928706567192LL)) : (545828644152251507ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_0])))));
            var_22 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2 - 1] [i_2]))) : (-1798002546104438277LL))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_2] [i_2 + 1] [i_2]))))));
            var_23 = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
        }
        /* LoopSeq 2 */
        for (unsigned short i_3 = 4; i_3 < 16; i_3 += 1) 
        {
            var_24 = ((/* implicit */unsigned char) min((545828644152251507ULL), (17900915429557300092ULL)));
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1]), (arr_2 [i_0 + 1])))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)76))) : (arr_7 [i_3] [i_0 + 1])))) : (((-1290317009685044283LL) / (((/* implicit */long long int) var_14)))))) : (arr_3 [(unsigned char)2] [i_3]))))));
        }
        /* vectorizable */
        for (int i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            arr_14 [i_0] = ((/* implicit */_Bool) -5041130323505051405LL);
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 17; i_5 += 3) /* same iter space */
            {
                arr_18 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */_Bool) ((int) arr_2 [i_0 + 1]));
                arr_19 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 545828644152251534ULL))));
            }
            for (long long int i_6 = 0; i_6 < 17; i_6 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_7 = 3; i_7 < 15; i_7 += 3) 
                {
                    arr_24 [i_0] [i_0 - 1] [8LL] [3ULL] [3ULL] [i_0] = ((/* implicit */unsigned char) (-(545828644152251534ULL)));
                    var_26 *= ((/* implicit */_Bool) arr_2 [i_4]);
                }
                for (signed char i_8 = 3; i_8 < 16; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                    {
                        arr_33 [i_0] [8U] [(_Bool)1] [i_8] [i_0] = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)68))) : (224LL))));
                        var_27 = ((/* implicit */unsigned short) arr_1 [7] [i_4]);
                        arr_34 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */int) arr_22 [i_8] [i_4] [i_9] [i_8 + 1] [i_9])) : (((/* implicit */int) var_3))));
                        arr_35 [i_0] [(short)6] [i_0] [(signed char)16] = var_8;
                    }
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                    {
                        arr_39 [i_10] [i_8] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) ((203LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-512))))))));
                        arr_40 [i_10] [i_10] |= ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_0] [i_0 + 1] [i_0 - 1] [i_8 - 3] [i_10] [i_10]))));
                        var_28 = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0 + 1] [i_4 + 1]))));
                    }
                    arr_41 [i_0] [i_0] [i_4] [i_6] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_6] [i_0]))) != (4868177002327591342LL))))));
                    /* LoopSeq 2 */
                    for (long long int i_11 = 3; i_11 < 15; i_11 += 1) 
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3515194886395799262LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (545828644152251507ULL)))) ? (((/* implicit */int) arr_29 [i_0] [i_4 - 2] [i_4] [(unsigned char)10] [i_4 + 1] [i_4])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-80))) != (arr_3 [i_0] [i_4]))))));
                        arr_44 [i_0] [(signed char)14] [i_0] [(signed char)14] = ((((/* implicit */_Bool) arr_25 [i_0] [i_4 + 1] [i_11 + 2] [i_0])) ? (545828644152251523ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_4 + 1])));
                        arr_45 [i_0] [i_4] [i_6] [(unsigned char)13] [i_0] = (~(((/* implicit */int) var_12)));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_49 [i_0] [i_8] [i_6] [(signed char)4] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_3))));
                        arr_50 [11LL] [i_0] [i_6] [i_0] [7LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_12] [i_8 - 2])) ? (((/* implicit */int) arr_32 [0ULL])) : (((/* implicit */int) ((short) arr_31 [i_0] [i_8 - 1] [i_6] [i_6] [i_4] [i_0] [i_0])))));
                        var_30 ^= ((/* implicit */_Bool) arr_30 [i_8 - 3] [(signed char)14] [(signed char)14] [i_8 - 3] [i_8 - 3]);
                        arr_51 [i_12] [i_0] [i_6] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned char) arr_48 [i_4 + 1] [i_8 - 2] [i_12]));
                    }
                }
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 545828644152251565ULL))))) | ((~(((/* implicit */int) var_0))))));
                arr_52 [i_0] [2ULL] [i_0] = ((unsigned char) arr_37 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_0 - 1]);
            }
            var_32 &= ((/* implicit */int) var_8);
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_42 [(unsigned char)6] [i_4] [i_4 - 2] [(unsigned char)6] [i_0])) : (((/* implicit */int) ((unsigned char) (_Bool)1)))));
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_4] [i_4 - 1] [i_4] [(_Bool)1])) ? (545828644152251556ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_4] [i_4 - 1] [i_4] [(short)2])))));
        }
        var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) ((min((((/* implicit */int) arr_5 [(unsigned char)6] [i_0 + 1] [i_0 + 1])), (((((/* implicit */int) arr_10 [i_0] [i_0])) ^ (((/* implicit */int) var_16)))))) << (((((((/* implicit */_Bool) arr_21 [i_0] [13U] [i_0 - 1])) ? (((/* implicit */int) ((unsigned short) arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)8]))) : (((/* implicit */int) arr_15 [i_0 + 1])))) - (20548))))))));
    }
    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 1) /* same iter space */
    {
        arr_56 [i_13] = arr_55 [i_13] [i_13];
        arr_57 [i_13] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_54 [i_13])))), (((/* implicit */int) ((short) arr_54 [i_13])))));
        arr_58 [i_13] = arr_54 [i_13];
    }
    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) /* same iter space */
    {
        var_36 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(73529953U))), (min((4029268279U), (((/* implicit */unsigned int) arr_54 [4ULL]))))))) ? (((/* implicit */int) (short)-23467)) : (((((/* implicit */_Bool) arr_55 [i_14] [i_14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_14]))))) : (((/* implicit */int) var_3))))));
        /* LoopSeq 2 */
        for (short i_15 = 0; i_15 < 20; i_15 += 3) /* same iter space */
        {
            arr_64 [i_14] [9LL] [(signed char)9] = ((/* implicit */signed char) ((((/* implicit */_Bool) -438527327095002340LL)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7)))));
            var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((arr_53 [i_14] [i_15]), (arr_53 [i_14] [i_14]))))));
            var_38 = max((3598818482U), (((/* implicit */unsigned int) (unsigned short)65535)));
            /* LoopSeq 1 */
            for (short i_16 = 0; i_16 < 20; i_16 += 3) 
            {
                arr_68 [i_14] = ((arr_66 [i_14]) ? (((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? ((~(arr_62 [i_14] [(signed char)13] [i_16]))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_53 [i_14] [i_15]), ((unsigned short)5216))))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                arr_69 [i_14] [(short)8] = ((/* implicit */unsigned char) (-((-((+(4294967275U)))))));
            }
        }
        for (short i_17 = 0; i_17 < 20; i_17 += 3) /* same iter space */
        {
            var_39 = ((/* implicit */short) max((var_39), (((/* implicit */short) 1974085609U))));
            arr_73 [i_14] [i_14] [i_14] = ((/* implicit */long long int) arr_67 [15LL] [i_14]);
            var_40 = ((/* implicit */unsigned short) arr_59 [i_14]);
        }
        /* LoopSeq 1 */
        for (unsigned char i_18 = 0; i_18 < 20; i_18 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_19 = 3; i_19 < 18; i_19 += 1) 
            {
                arr_78 [(_Bool)1] [i_18] [i_14] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_63 [i_14] [i_18] [i_19]))));
                var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_62 [i_14] [i_19 - 3] [i_19 + 2])) ? (((/* implicit */int) max((((/* implicit */short) arr_72 [i_14])), (arr_54 [i_14])))) : (((/* implicit */int) ((short) var_4)))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_70 [18U] [i_19 - 3] [i_14]))))) : (max((((/* implicit */unsigned int) (unsigned char)40)), (3629812372U)))));
                arr_79 [(short)2] [i_18] [(short)2] |= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (var_5)))), (arr_76 [i_19 - 2] [i_19] [i_19]))) == ((+(((/* implicit */int) arr_61 [i_14]))))));
            }
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_42 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_70 [i_14] [i_18] [10])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) arr_55 [4LL] [i_18])))))) : (((max((545828644152251553ULL), (((/* implicit */unsigned long long int) (unsigned char)233)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_81 [i_14] [i_20] [i_20] [(signed char)6])), (var_8)))))))));
                var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_67 [i_14] [i_14]))))) ? (((/* implicit */int) ((arr_76 [i_14] [i_18] [i_14]) <= (((/* implicit */int) arr_59 [i_20]))))) : (((((/* implicit */_Bool) arr_54 [i_14])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((13637238538367109771ULL), (((/* implicit */unsigned long long int) (signed char)10))))) ? (max((((/* implicit */long long int) (unsigned char)38)), (-206LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)247))))))));
            }
            for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
            {
                arr_88 [i_14] [i_18] [i_14] = ((/* implicit */long long int) var_10);
                arr_89 [(_Bool)1] [i_14] [i_14] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_75 [i_14] [i_14]))));
                var_44 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_16)), (arr_84 [i_14] [i_14])))));
            }
            arr_90 [i_14] = 3057552387U;
        }
    }
    /* vectorizable */
    for (unsigned int i_22 = 0; i_22 < 20; i_22 += 1) /* same iter space */
    {
        arr_93 [(short)10] = ((/* implicit */short) (+(arr_77 [i_22] [i_22])));
        arr_94 [i_22] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) 140737488355200LL)))))));
    }
    var_45 = var_4;
}
