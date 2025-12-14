/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38427
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((unsigned int) ((arr_1 [i_0] [i_0]) % (((/* implicit */int) var_5)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) & (((((/* implicit */int) (unsigned char)131)) - (((/* implicit */int) var_8))))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            arr_16 [i_1] [i_2] [i_3 + 3] [i_4] [i_1] [i_5 + 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-20))));
                            var_11 -= ((/* implicit */unsigned int) (signed char)-19);
                            var_12 *= ((/* implicit */signed char) ((unsigned long long int) ((-750317226) & (((/* implicit */int) arr_3 [i_3])))));
                            arr_17 [i_3] [i_2 - 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1 - 1] [i_2 - 1] [i_3] [i_3] [i_3] [i_3] [i_5]))) * ((-(max((((/* implicit */unsigned int) (signed char)-14)), (31U)))))));
                        }
                        var_13 = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_3)))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_3] [i_1])) ? (var_9) : (((/* implicit */int) arr_13 [i_3 - 2] [i_1] [i_1 - 1] [i_2 - 1] [i_1 + 3] [i_1] [i_1]))))) ? (((((/* implicit */_Bool) max((4294967264U), (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_1 + 2] [i_2] [i_3 + 2] [i_3] [i_4]))))) : (((/* implicit */int) var_8)))) : (min((((((/* implicit */_Bool) arr_9 [i_4] [i_4] [7U] [i_4] [i_4] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (31U))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_20 [i_1] [i_3] [i_6] [i_6] [i_1] |= (+(max((arr_6 [i_6]), (arr_7 [i_6] [i_2] [i_2] [i_2 - 1]))));
                        var_15 = ((min(((~(var_7))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)12)) ^ (((/* implicit */int) (signed char)39))))))) >> ((((-(var_6))) - (13417954277078127045ULL))));
                    }
                    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((int) ((arr_14 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 1] [i_1 + 2]) + (((/* implicit */unsigned long long int) var_4)))))) : ((+((+(4294967294U)))))));
                    arr_21 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_11 [i_1] [i_1] [i_3] [i_1] [i_3] [i_3 + 3])) + (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_8))))) : (max((var_6), (arr_19 [i_1] [i_1] [i_1] [i_3] [i_3]))))) : (var_7)));
                }
            } 
        } 
        var_17 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 2002110277236918423ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)118))) : (2147483648U)));
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_8 = 1; i_8 < 19; i_8 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    {
                        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) * (((/* implicit */int) var_1))))) : ((+(2147483638U)))))) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-39)) : ((+(var_9))))) : (max((arr_27 [i_10] [i_10] [i_8 - 1]), (((/* implicit */int) (signed char)(-127 - 1)))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 21; i_11 += 2) 
                        {
                            arr_33 [i_7] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_2)))), ((_Bool)1))))));
                            arr_34 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) 0))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)15)), (3255255872U)))) : (var_6)));
                            arr_35 [i_7] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((arr_30 [i_7] [i_8] [i_9] [i_7] [i_7]) * (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) (unsigned char)156)) ? (4294967264U) : (131071U))))), (((((/* implicit */_Bool) var_5)) ? (((((/* implicit */unsigned int) var_9)) | (1901913384U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (var_2)))))))));
                            arr_36 [i_7] [i_7] [i_10] [i_11] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_25 [i_8 - 1] [i_7])) ? (((/* implicit */int) (signed char)61)) : (arr_31 [i_7] [i_7] [i_8 - 1] [i_9] [i_7]))) << (((((/* implicit */int) ((unsigned char) var_3))) - (70)))));
                        }
                    }
                } 
            } 
            arr_37 [i_7] [i_7] [i_8 - 1] = 1127789494135711189ULL;
            var_19 = ((/* implicit */unsigned char) max((var_19), (var_0)));
        }
        arr_38 [i_7] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) & (1127789494135711189ULL)))) ? (arr_22 [i_7] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))))))));
    }
    for (int i_12 = 0; i_12 < 10; i_12 += 1) 
    {
        var_20 = (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)3))) ? (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((32767U) & (var_2)))))));
        arr_42 [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (0) : (((/* implicit */int) (unsigned char)19))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_7))) << (((((/* implicit */int) (signed char)81)) - (22)))));
    }
    /* LoopSeq 2 */
    for (signed char i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((max((arr_22 [i_13] [i_13]), (((/* implicit */unsigned long long int) (_Bool)1)))) ^ (((/* implicit */unsigned long long int) var_9)))))));
        arr_45 [i_13] [i_13] = ((/* implicit */_Bool) var_5);
    }
    for (signed char i_14 = 4; i_14 < 22; i_14 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_46 [(unsigned char)14])) ? (((/* implicit */int) arr_46 [0])) : (((/* implicit */int) arr_46 [(unsigned char)8])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [(unsigned char)0]))))))))));
        /* LoopSeq 1 */
        for (unsigned int i_15 = 3; i_15 < 21; i_15 += 1) 
        {
            var_23 = ((/* implicit */unsigned int) (-(var_4)));
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_24 |= ((/* implicit */int) max((((((/* implicit */_Bool) (+(var_2)))) ? (2866915672454497180ULL) : ((-(var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_50 [(unsigned char)20] [2ULL])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) arr_50 [(_Bool)1] [(_Bool)1])))))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 3; i_17 < 22; i_17 += 1) 
                {
                    for (int i_18 = 2; i_18 < 20; i_18 += 2) 
                    {
                        {
                            var_25 *= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_50 [i_15 + 2] [i_18])) : (((((/* implicit */_Bool) arr_47 [i_18])) ? (((/* implicit */int) arr_52 [i_18] [i_17] [i_18] [i_18])) : (((/* implicit */int) (_Bool)1))))))), (var_6)));
                            arr_59 [i_14] [7ULL] [i_14] [i_14] [i_17] [i_18 - 2] = ((/* implicit */signed char) ((unsigned int) ((14631686338344319378ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_14] [i_14] [i_14] [i_17] [i_14] [i_16]))))));
                        }
                    } 
                } 
                var_26 = var_6;
            }
            for (unsigned long long int i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                var_27 = ((/* implicit */unsigned char) min((var_27), (arr_55 [i_14] [i_14] [i_14 + 1] [i_14] [i_15] [(_Bool)1])));
                arr_62 [i_14] [i_14] [i_19] = (i_14 % 2 == zero) ? (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_48 [i_14] [i_14]) - (3465297208U))))))))) : (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((((arr_48 [i_14] [i_14]) - (3465297208U))) - (1280274064U)))))))));
                var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_9), (((((/* implicit */_Bool) arr_47 [20U])) ? (var_4) : (var_9)))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((unsigned char) min(((signed char)12), ((signed char)-1))))))))));
            }
            arr_63 [i_14 - 3] [(signed char)2] |= (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) + (var_2))));
            var_29 = arr_52 [i_14] [i_14] [i_14] [i_15];
        }
    }
    var_30 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-103))) > (var_6))))) < (((unsigned int) var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((unsigned long long int) ((var_6) != (1127789494135711189ULL))))));
}
