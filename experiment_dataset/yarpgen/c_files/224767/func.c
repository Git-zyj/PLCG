/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224767
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
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned long long int) var_2)) : (((((/* implicit */_Bool) (unsigned char)110)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)35))) : (18446744073709551615ULL)))));
                    var_17 = var_10;
                    var_18 = ((/* implicit */_Bool) var_1);
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) var_2))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (signed char)0))));
        var_21 -= ((/* implicit */signed char) (((+(-7704526015510110735LL))) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_15)))))));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */int) arr_5 [i_3]);
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) min((((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))) <= (max((((/* implicit */unsigned int) var_10)), (4294967270U)))))), (((min((var_8), (var_12))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_10)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 9; i_4 += 3) 
        {
            for (int i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    arr_18 [i_4] [i_3] [i_3] = ((/* implicit */_Bool) (-((-(18247632473964669002ULL)))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_6)))), (((((/* implicit */_Bool) (short)-11774)) ? (((/* implicit */int) arr_12 [i_5] [i_5])) : (((/* implicit */int) var_0))))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (var_4)))) ? ((-(13850030066736353077ULL))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned char)145)), (var_3)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (658675222) : (((/* implicit */int) (unsigned char)110))))) : (max((arr_5 [i_5]), (((/* implicit */unsigned int) (unsigned char)110))))))))))));
                    arr_19 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 1; i_6 < 12; i_6 += 4) 
                    {
                        for (signed char i_7 = 2; i_7 < 11; i_7 += 4) 
                        {
                            {
                                arr_25 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) min(((~(((/* implicit */int) arr_1 [i_3] [i_3])))), (((((/* implicit */_Bool) min((var_14), (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) var_6)) : (var_14)))));
                                var_24 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max(((signed char)30), ((signed char)31))))));
                                arr_26 [i_3] [i_3] [i_5] [i_3] [i_5] [i_3] [i_3] &= ((/* implicit */_Bool) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) 1284066269261218182ULL)) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) (unsigned char)131))))));
                                arr_27 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min(((unsigned char)105), ((unsigned char)133)))) ? (max((((/* implicit */int) var_8)), (var_2))) : ((+(((/* implicit */int) var_10)))))) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)896)) : (((/* implicit */int) (unsigned char)133))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 11; i_9 += 4) 
        {
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned int) (signed char)28);
                    var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_0)))))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((max((var_9), (((/* implicit */int) var_10)))) / ((+(((/* implicit */int) arr_30 [i_11]))))))) : (((arr_12 [i_11] [i_11]) ? (var_13) : (((/* implicit */long long int) arr_11 [i_8] [i_8]))))));
            var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-94))));
        }
        /* vectorizable */
        for (unsigned short i_12 = 2; i_12 < 11; i_12 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                for (int i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    {
                        arr_50 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) ((var_11) ? (((/* implicit */long long int) ((var_5) ? (var_2) : (((/* implicit */int) var_12))))) : (var_3)));
                        arr_51 [i_12] = ((/* implicit */unsigned int) (((~(((/* implicit */int) var_0)))) * (((((/* implicit */_Bool) (short)6414)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0))))));
                        arr_52 [i_8] = ((/* implicit */unsigned short) var_15);
                    }
                } 
            } 
            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) arr_37 [i_8] [i_8] [i_8]))));
            /* LoopNest 3 */
            for (unsigned long long int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 13; i_17 += 3) 
                    {
                        {
                            var_30 ^= ((/* implicit */long long int) arr_45 [i_8] [i_12 + 2]);
                            arr_60 [i_16] [i_16] [i_15] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_15)) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) arr_44 [i_12 - 2] [i_12 - 1] [i_12 + 2] [i_12 - 2]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_18 = 2; i_18 < 11; i_18 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_19 = 0; i_19 < 13; i_19 += 2) 
            {
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_59 [i_18 + 2] [i_18] [i_18 + 2] [i_18 + 2] [i_18] [i_18])) : (var_13)));
                var_32 = ((/* implicit */unsigned int) var_7);
            }
            var_33 = ((/* implicit */unsigned long long int) var_6);
            arr_67 [i_18] = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_20 = 4; i_20 < 19; i_20 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 20; i_22 += 2) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (-(arr_71 [i_20]))))))) : (((var_11) ? (((/* implicit */int) var_1)) : (3))))))));
                        var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_80 [i_22] [i_22])) ? (min((0ULL), (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_20] [i_20])), (arr_4 [i_22]))))))) ? (((((/* implicit */_Bool) max((var_9), (((/* implicit */int) var_7))))) ? (arr_7 [i_22] [i_22] [i_22]) : (1497415516U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_76 [i_20] [i_20] [i_20])))))));
                        var_36 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32750)) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) (unsigned short)1536))))) ? (var_4) : (((((/* implicit */_Bool) arr_74 [i_20] [i_20])) ? (((/* implicit */int) arr_1 [i_23] [i_23])) : (((/* implicit */int) var_12)))))), (((/* implicit */int) (signed char)49))));
                        arr_81 [i_20] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */unsigned short) min((var_2), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_77 [i_20 - 3])) : (var_4)))));
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max((((/* implicit */int) var_7)), (var_14)))))) ? (max((12477988480733250183ULL), (((/* implicit */unsigned long long int) 1147584675)))) : (((/* implicit */unsigned long long int) ((-25LL) | (((/* implicit */long long int) 4294967266U)))))));
    }
}
