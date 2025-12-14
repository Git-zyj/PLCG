/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53468
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
    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 15216028790587398109ULL))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 1; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [1ULL] [15ULL] [15ULL] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_2 - 1] [i_2 - 1])) || (((/* implicit */_Bool) 5397625699749774796LL)))))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_0 [i_2])));
                    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)32154))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (int i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_13 [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2774471001828910183LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33381))) : (17211285956905064174ULL)))));
                                var_20 ^= ((/* implicit */long long int) arr_12 [i_2] [i_3] [i_2] [(unsigned short)9] [(unsigned short)9]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((((((/* implicit */_Bool) ((unsigned short) (unsigned short)32154))) ? (((((/* implicit */_Bool) arr_10 [(_Bool)1] [(_Bool)1] [(signed char)0] [i_2] [i_2])) ? (17525641019425637125ULL) : (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) min((-3LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (1513378297)))))))));
                }
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    var_22 = ((/* implicit */unsigned short) (~(((long long int) arr_9 [i_1 + 1] [3LL] [i_5 - 1] [i_5 - 1] [5ULL]))));
                    arr_16 [i_5 - 1] [i_5] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1])) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_5] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (5515526400113757201LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_1 + 2] [i_1 + 2] [0ULL]))))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    var_23 = ((/* implicit */long long int) max((((arr_7 [i_1 - 1] [i_1 - 2] [i_1 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32158))))), (((/* implicit */unsigned long long int) ((((long long int) var_6)) != (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_6]))))))));
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned short i_8 = 3; i_8 < 17; i_8 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */unsigned short) ((max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_14)) ? (var_7) : (arr_5 [i_8 + 1]))))) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_8 [i_8] [(unsigned short)6])))) ? (arr_15 [i_8 + 2] [i_7] [i_1 + 1]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33376))) <= (4136537345441931460LL)))))))));
                                arr_27 [i_0] [i_1] [i_1] [(unsigned short)6] [i_1] [i_8] = ((/* implicit */_Bool) (((-(((long long int) arr_17 [i_0] [i_1 - 2] [i_0])))) & (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_18 [i_1 + 2]) ? (((/* implicit */int) ((((/* implicit */_Bool) 5515526400113757201LL)) && (((/* implicit */_Bool) (unsigned short)46612))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_1 + 1] [i_0] [i_0])) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -13LL)) ? (((/* implicit */int) (unsigned short)7680)) : (((/* implicit */int) (_Bool)1))))) ? (1007279459555773211LL) : (((/* implicit */long long int) ((/* implicit */int) ((4067487463024248351ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)20)))))))))));
                }
                /* vectorizable */
                for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_26 = (-(((17211285956905064148ULL) | (((/* implicit */unsigned long long int) 16777215LL)))));
                    var_27 = ((/* implicit */_Bool) ((int) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1 - 2] [i_1 - 2]));
                }
                /* vectorizable */
                for (long long int i_10 = 2; i_10 < 17; i_10 += 4) /* same iter space */
                {
                    arr_35 [i_0] = ((((/* implicit */_Bool) arr_20 [i_1 - 2] [i_1 + 2] [i_10 - 2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (arr_9 [(unsigned short)5] [(unsigned short)5] [i_1] [i_10] [i_10 + 2]) : (((/* implicit */int) var_1))))) : ((+(921103054283914491ULL))));
                    var_28 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_0] [i_0] [i_0] [i_0]))));
                }
                for (long long int i_11 = 2; i_11 < 17; i_11 += 4) /* same iter space */
                {
                    arr_38 [i_1 + 2] [i_1 + 2] [11ULL] = ((/* implicit */_Bool) (-((-(18446744073709551609ULL)))));
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_26 [i_0] [i_1] [i_1] [i_1 - 1] [i_11] [i_11])) < (((/* implicit */int) ((((/* implicit */_Bool) 6839032311622249578ULL)) || (((/* implicit */_Bool) ((long long int) 11484177793043828362ULL))))))));
                }
                /* LoopSeq 1 */
                for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    var_30 = ((/* implicit */unsigned short) arr_12 [(_Bool)1] [(_Bool)1] [(unsigned short)8] [(unsigned short)8] [i_12]);
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_45 [i_12] = ((/* implicit */long long int) var_8);
                                arr_46 [i_0] [i_1 + 2] [i_12] [i_12] [i_14] = ((/* implicit */unsigned short) (-(max((arr_36 [i_0] [i_1] [i_12] [i_14]), (((arr_1 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
                                var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47860)) ? (((((((/* implicit */_Bool) arr_36 [i_0] [i_12] [(signed char)3] [i_14])) ? (((/* implicit */int) arr_26 [i_0] [i_1] [i_12] [i_12] [i_13] [i_13])) : (((/* implicit */int) var_10)))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_23 [i_0] [i_13] [i_12] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) arr_34 [i_0] [i_1] [i_14] [i_13])))))));
                                arr_47 [i_0] [i_1] [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-5478299344312058848LL), (((/* implicit */long long int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) ((_Bool) 14885986466533408910ULL))), (arr_43 [i_0] [i_1] [i_14] [i_1 + 1] [i_14]))) : ((~((~(var_0)))))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_0] [(_Bool)1] [i_1] [i_12] [i_12])) ? (5397625699749774814LL) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_1])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) (unsigned short)33375)) ? (arr_36 [5LL] [i_12] [i_1] [i_0]) : (((/* implicit */unsigned long long int) var_13))))))));
                }
                var_33 = ((/* implicit */signed char) var_7);
            }
        } 
    } 
    var_34 = ((/* implicit */signed char) var_9);
    var_35 = ((/* implicit */unsigned long long int) max((var_35), (var_2)));
    var_36 += ((((/* implicit */_Bool) max((((/* implicit */int) ((signed char) 18446744073709551588ULL))), ((~(((/* implicit */int) var_15))))))) ? (var_8) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 4506637500779082049ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)65535))))))));
}
