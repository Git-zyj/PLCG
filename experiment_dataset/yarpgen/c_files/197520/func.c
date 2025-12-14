/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197520
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
    var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1))));
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (unsigned short i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            var_16 = arr_1 [i_3];
                            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((unsigned long long int) 2662206512695653328ULL))));
                            arr_12 [i_0] [i_2] [i_2] [i_4] = ((unsigned short) min((((/* implicit */unsigned long long int) ((unsigned short) var_13))), (((((/* implicit */_Bool) 3214400924287524972ULL)) ? (16725968312721540789ULL) : (var_0)))));
                            arr_13 [i_0] [i_1] [i_0] [i_3] [i_4] &= var_1;
                        }
                        /* vectorizable */
                        for (unsigned short i_5 = 3; i_5 < 21; i_5 += 3) 
                        {
                            var_18 = arr_0 [i_2] [i_2];
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_2] [i_2] [8ULL] [i_2] [i_2] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12)));
                            arr_17 [i_3] [i_3] &= ((/* implicit */unsigned long long int) ((unsigned short) 139611588448485376ULL));
                            var_20 ^= ((/* implicit */unsigned short) ((13514304974139215311ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_3] [i_5] [i_5] [i_5 - 3] [i_3] [i_3])))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_7))));
                        arr_18 [i_2] [i_2] [i_1 - 1] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0]);
                    }
                } 
            } 
        } 
        arr_19 [i_0] &= ((unsigned long long int) ((((/* implicit */_Bool) ((13049560669396310985ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) (unsigned short)21248)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 16; i_8 += 2) 
            {
                {
                    var_22 += 288230376151707648ULL;
                    var_23 = ((unsigned long long int) arr_2 [i_7] [i_8]);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_9 = 1; i_9 < 16; i_9 += 2) 
        {
            arr_32 [i_6] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) var_12)))));
            arr_33 [i_9] = ((unsigned long long int) ((unsigned short) var_5));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
        {
            arr_37 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_10])))))));
            arr_38 [i_6] [i_10] = var_0;
        }
        arr_39 [i_6] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (arr_34 [i_6 + 1] [i_6 - 2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_6] [i_6])))) : (var_0));
        arr_40 [i_6] = ((/* implicit */unsigned short) arr_7 [2ULL] [i_6] [i_6] [i_6 - 2]);
    }
    for (unsigned long long int i_11 = 2; i_11 < 17; i_11 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 1; i_12 < 17; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                    {
                        var_24 = ((unsigned long long int) 11870045100897650267ULL);
                        var_25 |= min((max((max((arr_35 [12ULL]), (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) (unsigned short)56098))))))), (min((288230376151707661ULL), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (12233014198004578208ULL)))))));
                    }
                    for (unsigned short i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        arr_53 [i_15] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_3);
                        var_26 = var_1;
                    }
                    for (unsigned short i_16 = 1; i_16 < 17; i_16 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned short) max(((~((~(((/* implicit */int) var_4)))))), (((/* implicit */int) ((((((/* implicit */_Bool) 288230376151707648ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_26 [i_16] [i_12] [i_13])))) != ((-(((/* implicit */int) var_7)))))))));
                        arr_58 [i_11] [i_11] [i_11] [i_16] [i_11] [i_16] = 18158513697557843944ULL;
                        arr_59 [i_16] [i_16] [i_13] [i_16] [i_16] = max((min((min((var_10), (288230376151707661ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) arr_9 [i_11] [i_12 - 1] [i_13] [i_16])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) & (554153860399104ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_23 [i_11])))))));
                        var_28 += ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((var_5), (var_5)))), (((unsigned long long int) arr_27 [i_11 + 1] [i_11 + 1] [i_12 + 1]))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)1920));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 18; i_18 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned short) ((unsigned short) arr_26 [i_18] [i_12] [i_18]))));
                                var_31 = ((((/* implicit */_Bool) 562949819203584ULL)) ? (max((((((/* implicit */_Bool) 288230376151707648ULL)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))), (((/* implicit */unsigned long long int) arr_42 [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34239))));
                                var_32 += arr_24 [i_17] [i_17] [i_13];
                            }
                        } 
                    } 
                    arr_66 [i_11] [i_11] [11ULL] = arr_41 [2ULL];
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)11] [i_11]))));
        var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 70368744177600ULL)) ? (((/* implicit */int) arr_1 [i_11 - 2])) : ((-(((/* implicit */int) arr_31 [i_11]))))))) ? (67645734912ULL) : (66571993088ULL)))));
        var_35 = var_4;
    }
    for (unsigned long long int i_19 = 2; i_19 < 17; i_19 += 3) /* same iter space */
    {
        arr_70 [i_19] [14ULL] |= ((/* implicit */unsigned short) ((unsigned long long int) 67645734912ULL));
        var_36 = ((/* implicit */unsigned long long int) ((unsigned short) ((((unsigned long long int) (unsigned short)19614)) != (max((((/* implicit */unsigned long long int) var_3)), (288230376151707661ULL))))));
    }
    var_37 *= var_13;
}
