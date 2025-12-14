/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238715
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
    var_18 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_19 &= ((/* implicit */unsigned char) 8936349885055144517ULL);
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)101)) : (((/* implicit */int) (signed char)-77))))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [3])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2730))) : (3830718914U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
            var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 3801784628208048711ULL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))));
            arr_6 [i_0 - 4] [(unsigned char)15] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0 + 1]);
        }
        var_22 -= ((/* implicit */unsigned short) (~(((unsigned long long int) arr_5 [i_0 - 1] [i_0 - 3] [i_0]))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 19; i_2 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
        {
            var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) <= (14644959445501502910ULL)))) : (((/* implicit */int) (signed char)93))));
            arr_11 [i_2] [i_3] [i_2 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)65522)) ? (((/* implicit */int) ((1314567440U) > (4294967295U)))) : (((/* implicit */int) (unsigned char)3))));
            var_24 = ((/* implicit */long long int) ((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2 - 3])))));
            arr_12 [i_3] [i_3] [(_Bool)1] = (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) | (2807697018U))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            arr_16 [i_2] [i_4] [i_2] = ((/* implicit */unsigned short) (!(((arr_10 [(unsigned char)2] [i_4]) == (((/* implicit */unsigned long long int) 4294967295U))))));
            arr_17 [i_2] [i_4] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (short)30868))))));
            var_25 += ((/* implicit */unsigned int) arr_14 [i_2 - 2]);
            arr_18 [i_4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4]))) : (3758523752U)));
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((((/* implicit */int) (signed char)73)) % (((/* implicit */int) (signed char)-68)))))));
        }
        for (int i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            arr_23 [i_5] [i_5] [(unsigned short)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) 1487270277U)) : (4394346216047342449ULL)));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_2 - 1])) % (((/* implicit */int) arr_2 [i_2 - 2]))));
        }
        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1ULL)))) : (((((/* implicit */_Bool) arr_0 [(signed char)9])) ? (536443543U) : (((/* implicit */unsigned int) var_15))))));
        arr_24 [(unsigned char)0] = ((/* implicit */unsigned short) (-(var_6)));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) 262143ULL);
            var_30 += ((((/* implicit */_Bool) (unsigned short)14)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_2] [i_6] [i_6]))))) : (arr_25 [i_2 - 2] [i_2 + 1] [i_2 + 1]));
            var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 15575566248950182633ULL)) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) var_1)))) * (((/* implicit */int) ((signed char) 1086629691U)))));
        }
        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            var_32 = ((/* implicit */long long int) arr_4 [i_2 + 1]);
            var_33 = ((/* implicit */unsigned char) (-(arr_22 [i_2 - 1])));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                var_34 &= ((/* implicit */_Bool) var_4);
                var_35 = ((/* implicit */signed char) var_7);
                var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 261277957U)) ? ((-(arr_22 [4ULL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            }
            for (signed char i_9 = 2; i_9 < 16; i_9 += 2) 
            {
                arr_33 [i_9 - 1] [i_9] [i_7] [i_2] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4864)) == (((/* implicit */int) (short)-4101))));
                /* LoopSeq 1 */
                for (unsigned int i_10 = 0; i_10 < 20; i_10 += 4) 
                {
                    arr_36 [i_10] [i_9] [i_7] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_2 - 3]))));
                    var_37 = ((/* implicit */unsigned int) (short)32764);
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_0 [(unsigned char)10]))))) : (((/* implicit */int) arr_0 [(signed char)14]))));
                    arr_37 [16] [i_7] [14ULL] [(unsigned char)4] = ((/* implicit */_Bool) var_11);
                }
            }
        }
        var_39 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_5)))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (unsigned long long int i_11 = 4; i_11 < 19; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 20; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_13 = 0; i_13 < 20; i_13 += 2) 
            {
                var_40 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57719))) >= (739631019U)));
                var_41 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-77)) + (((int) (unsigned short)303))))), ((~(((((/* implicit */unsigned long long int) 1469985053U)) & (var_4)))))));
                arr_48 [i_11 - 4] [i_12] [i_13] = (~((-(739631035U))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                /* LoopSeq 1 */
                for (int i_15 = 0; i_15 < 20; i_15 += 2) 
                {
                    arr_55 [i_11] [i_12] [i_14] [(_Bool)0] = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) arr_5 [i_11 - 3] [i_11 - 2] [i_14])), (2918561756705913531ULL))), (((/* implicit */unsigned long long int) ((short) arr_5 [i_11] [i_11 + 1] [5ULL])))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2918561756705913537ULL)) ? (var_15) : (((/* implicit */int) var_9))))))) ? (arr_10 [i_11 - 4] [i_12]) : (((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_52 [i_11] [i_12]))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_46 [i_15])) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_60 [i_16] [i_11 - 4] [i_14] [i_12] [i_11 - 4] = ((/* implicit */int) max((14485081989661142649ULL), (((/* implicit */unsigned long long int) (signed char)30))));
                        var_43 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_11] [6U] [i_11 - 3] [i_12])) | (((/* implicit */int) arr_32 [i_11] [i_12] [i_11 - 4] [i_15]))))) || (((/* implicit */_Bool) arr_32 [7U] [(unsigned short)5] [i_11 - 4] [i_15]))));
                        arr_61 [11LL] [11LL] [i_11] = ((/* implicit */signed char) ((((((/* implicit */_Bool) 2029831090)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-127))))) ^ (((/* implicit */long long int) (~(arr_35 [i_11] [i_11 - 3]))))));
                    }
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        arr_64 [i_11] [i_12] [i_12] [i_14] [(_Bool)1] [i_17] [i_17 - 1] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)65)) / (min((((/* implicit */int) (unsigned short)65244)), (arr_47 [13U] [i_17 - 1] [i_11 - 1] [i_11])))));
                        arr_65 [i_11 - 1] [i_17] [i_11 - 3] [i_11] [i_11] = ((/* implicit */_Bool) ((long long int) 7U));
                        arr_66 [i_11] [i_12] [i_14] [i_17] [i_17] = ((/* implicit */short) (~((~(((/* implicit */int) arr_59 [i_17 - 1] [(unsigned char)7]))))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_18 = 0; i_18 < 20; i_18 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */int) max((arr_3 [i_14] [(unsigned char)1]), (((/* implicit */unsigned int) ((max((arr_50 [i_11] [i_11 + 1]), (((/* implicit */int) (unsigned char)19)))) << (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)43331)) : (var_15))) - (43331))))))));
                        var_45 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_41 [i_11 - 1] [i_11 + 1] [i_11])) ? (var_4) : (((/* implicit */unsigned long long int) arr_41 [i_11 - 2] [1ULL] [i_14])))))))));
                        arr_70 [i_11 - 2] [i_15] [i_14] [(unsigned short)8] [i_11 - 2] = ((/* implicit */unsigned int) ((signed char) min((arr_69 [i_11] [i_12] [(unsigned char)6] [i_15] [i_18] [(_Bool)1] [i_18]), (((/* implicit */int) ((_Bool) (unsigned short)13859))))));
                    }
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 2) /* same iter space */
                    {
                        var_46 = ((/* implicit */signed char) arr_45 [i_11] [i_11] [i_11] [i_11 - 1]);
                        arr_73 [i_11] [i_11] [i_14] [i_15] [i_11 - 3] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_11 - 3])) ? (((/* implicit */int) arr_7 [i_11 - 2])) : (((/* implicit */int) arr_7 [i_11 - 2]))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-1))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_11 - 4] [i_14] [i_14]))) % (var_17)))));
                        var_47 *= ((/* implicit */unsigned int) (unsigned short)51676);
                        var_48 &= ((/* implicit */signed char) max((((/* implicit */long long int) (signed char)8)), (24LL)));
                    }
                }
                var_49 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)51676))))), (((((/* implicit */_Bool) ((long long int) arr_19 [i_11 - 1]))) ? (((/* implicit */unsigned long long int) max((var_15), (((/* implicit */int) (signed char)127))))) : (((((/* implicit */_Bool) arr_10 [i_14] [i_12])) ? (((/* implicit */unsigned long long int) var_8)) : (var_7)))))));
            }
            arr_74 [i_11 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_68 [i_11] [i_11] [i_11] [12U])) * (((/* implicit */int) (signed char)9)))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)64)) < (((/* implicit */int) (signed char)-87))))))))));
        }
        arr_75 [i_11 - 4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_22 [i_11 - 3]))) ? (((/* implicit */unsigned long long int) (~(1789298173U)))) : (min((arr_22 [i_11 + 1]), (arr_22 [i_11 - 3])))));
        arr_76 [i_11] = ((/* implicit */int) ((((unsigned int) var_11)) == (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_67 [i_11] [i_11 - 4] [i_11 - 2] [i_11 - 4] [i_11 - 4] [i_11 - 2] [i_11 - 3])) ? (((((/* implicit */int) (unsigned short)51676)) / (2147483641))) : (((((/* implicit */int) arr_8 [i_11])) << (((arr_69 [18] [i_11] [i_11] [(signed char)7] [i_11] [i_11] [i_11]) + (1185430334))))))))));
    }
    for (unsigned long long int i_20 = 4; i_20 < 19; i_20 += 2) /* same iter space */
    {
        var_50 += ((/* implicit */unsigned short) (+((-(((/* implicit */int) arr_52 [i_20] [i_20 - 1]))))));
        var_51 -= ((/* implicit */short) ((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) (signed char)-86))));
    }
}
