/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203820
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */int) (short)-5)), (var_15)))) & (arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)0)) : (arr_1 [i_0] [i_0])))) ? (((((/* implicit */_Bool) 10964569413872266742ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (1729211360103755397ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))));
                    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (_Bool)0))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 4; i_3 < 19; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4]))) - (arr_9 [(signed char)13] [11ULL] [i_2])))) ? (((long long int) var_14)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)233))) : (7845721140822689233LL)))))) ? (var_7) : ((~(((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_2] [i_4])) ? (((/* implicit */int) arr_6 [i_4])) : (var_15)))))));
                                arr_14 [i_2] [i_0] = ((/* implicit */signed char) arr_11 [(short)19] [i_1] [5U] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_19 = ((/* implicit */int) 16717532713605796226ULL);
    }
    for (int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        arr_19 [(signed char)2] [i_5] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [12] [i_5] [10ULL] [0] [i_5])) ? ((((!(((/* implicit */_Bool) -7845721140822689233LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (min((arr_17 [i_5]), (((/* implicit */unsigned int) var_5)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            for (unsigned long long int i_7 = 1; i_7 < 17; i_7 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(unsigned short)10] [i_6] [i_7]))))) << (((((-4734048048816085206LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)86))))) + (4734048048816085137LL))))), (max((((/* implicit */int) ((_Bool) 1729211360103755412ULL))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
                    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 10132620337621544828ULL)) ? ((~(((/* implicit */int) arr_6 [i_6])))) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_15 [(_Bool)1] [15]))))))), (((((/* implicit */_Bool) ((unsigned char) 2298908129U))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5] [i_6] [i_7] [(unsigned char)13])))))))));
                }
            } 
        } 
    }
    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned short) var_5)))));
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 8; i_8 += 4) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (long long int i_10 = 2; i_10 < 6; i_10 += 3) 
            {
                {
                    var_23 += (~((+((+(((/* implicit */int) arr_6 [(_Bool)1])))))));
                    arr_34 [i_8] [6LL] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)223)) | (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */unsigned int) -1186977871)) == (arr_17 [(signed char)12]))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 3) 
            {
                {
                    arr_44 [i_11] [(unsigned char)13] = ((/* implicit */unsigned char) max(((~(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7)))))), (((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) var_9))), (min((((/* implicit */unsigned char) (signed char)-64)), ((unsigned char)176))))))));
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) (unsigned char)203)))), (((/* implicit */int) arr_6 [i_12]))))) ? (((((/* implicit */_Bool) arr_2 [i_11] [i_11 - 1])) ? (((/* implicit */unsigned long long int) ((((arr_11 [(_Bool)1] [13U] [1LL] [i_11]) + (2147483647))) << (((var_1) - (1160587572736616502LL)))))) : (((unsigned long long int) (signed char)-122)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) arr_42 [i_12] [i_11] [6] [i_12])) : (((/* implicit */int) var_6)))))))))))));
                    var_25 = ((/* implicit */signed char) (+(78295652U)));
                    arr_45 [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) | (max((((/* implicit */unsigned long long int) (signed char)127)), (1729211360103755406ULL)))))) ? (((/* implicit */int) ((unsigned short) max((4570157722684140840ULL), (((/* implicit */unsigned long long int) var_14)))))) : (((/* implicit */int) ((_Bool) var_8)))));
                }
            } 
        } 
        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11])) ? (max((((/* implicit */int) var_11)), (var_15))) : (((/* implicit */int) var_12))))) ? ((~(((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */int) arr_35 [i_11])) : (((/* implicit */int) arr_8 [i_11])))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) var_13)) & (var_2)))))));
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 19; i_14 += 3) 
        {
            for (unsigned int i_15 = 3; i_15 < 18; i_15 += 2) 
            {
                {
                    arr_51 [i_11] = ((/* implicit */unsigned int) var_10);
                    var_27 = ((/* implicit */long long int) arr_43 [i_11] [i_14] [i_11] [i_15]);
                }
            } 
        } 
        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_43 [i_11] [11LL] [i_11] [0])))) ? (((/* implicit */int) ((unsigned short) (unsigned char)8))) : (((/* implicit */int) var_0))))) ? (((max((var_12), ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_12)), (arr_41 [i_11] [(unsigned short)8] [i_11]))))) : ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) 4294967295U)))))) : (((/* implicit */long long int) ((var_10) ? (((((/* implicit */_Bool) 1471425266U)) ? (((/* implicit */int) (signed char)92)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_13 [i_11] [i_11] [i_11])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_10)))))))));
        /* LoopNest 2 */
        for (signed char i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (unsigned char i_17 = 2; i_17 < 16; i_17 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_18 = 2; i_18 < 15; i_18 += 3) 
                    {
                        for (unsigned short i_19 = 3; i_19 < 18; i_19 += 3) 
                        {
                            {
                                arr_64 [i_19] [(unsigned char)15] [i_11] [7ULL] [i_11] = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_11)), (var_0)))))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (1156756973U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8647)))))), (((long long int) arr_36 [(_Bool)1] [(unsigned char)1])))));
                                var_29 &= ((/* implicit */int) 3724556580U);
                                var_30 = ((/* implicit */unsigned long long int) arr_62 [8]);
                                var_31 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_19] [(_Bool)1] [i_11])) ? (13876586351025410776ULL) : (((/* implicit */unsigned long long int) (-(arr_58 [i_11] [12] [(unsigned char)10] [(unsigned short)0])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_20 = 3; i_20 < 18; i_20 += 1) 
                    {
                        for (unsigned char i_21 = 0; i_21 < 19; i_21 += 3) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((unsigned char) 3724556580U));
                                arr_69 [i_11] [i_11] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) min((arr_12 [i_11] [18U] [i_16] [9]), (var_12)))) <= (((/* implicit */int) ((unsigned char) var_1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) 9833766245855922295ULL))));
        arr_72 [i_22] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (-2147483647 - 1))))) ? (((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (((var_7) - ((-2147483647 - 1))))));
        var_34 = ((/* implicit */unsigned short) (~(1792U)));
    }
}
