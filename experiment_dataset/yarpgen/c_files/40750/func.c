/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40750
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */short) min(((~(arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) 913387185)) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14694))) : (arr_0 [i_0]))) : (arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_3 [i_0 - 1] = ((/* implicit */unsigned int) min((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)41)))))), ((-(((int) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((min((4398046511103ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1])))), (((/* implicit */unsigned long long int) min((arr_0 [i_0 - 1]), (((/* implicit */unsigned int) var_7)))))));
        var_12 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_2 = 2; i_2 < 11; i_2 += 3) 
        {
            arr_12 [i_2] [(short)2] = ((/* implicit */signed char) ((((18446744073709551615ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) < (((/* implicit */unsigned long long int) (~(arr_10 [i_1 - 1]))))));
            arr_13 [i_1] [i_2] [i_2 - 2] = ((/* implicit */unsigned short) arr_10 [i_1 - 1]);
            arr_14 [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (547494142U) : (arr_0 [i_1 - 1])));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4])) && (((/* implicit */_Bool) arr_18 [i_3] [i_4]))))), (arr_16 [i_5] [i_3])))) : (((((((/* implicit */int) var_11)) - (0))) | (((((/* implicit */_Bool) arr_18 [i_1] [i_3])) ? (-913387193) : (((/* implicit */int) arr_20 [i_5] [i_4] [i_5] [i_5] [i_1 - 1] [i_1 - 1]))))))));
                        arr_21 [i_5] [i_5] [i_5] [i_1] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((int) (_Bool)0))))) ? (max((((/* implicit */unsigned int) arr_6 [i_1 - 1])), (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3] [i_3])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (short i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_7 [i_1] [i_7]), (((/* implicit */int) var_3))))) ? ((-(1372362240U))) : (arr_0 [i_1 - 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_8 [i_1] [i_3] [i_1 - 1]) : (((/* implicit */unsigned int) arr_19 [i_1 - 1] [i_1 - 1] [i_1] [i_7] [i_1 - 1] [i_1 - 1]))))) ? (((((/* implicit */_Bool) arr_25 [i_7] [i_6] [i_1])) ? (913387185) : (((/* implicit */int) (short)23508)))) : (((arr_7 [i_7] [i_1]) ^ (((/* implicit */int) arr_23 [(_Bool)1] [i_3] [i_1 - 1])))))) : (((/* implicit */int) ((short) arr_16 [i_1 - 1] [i_3])))));
                        arr_26 [i_3] [i_6] [i_3] [i_6] [i_1] = ((unsigned int) ((int) arr_7 [i_1 - 1] [i_1 - 1]));
                    }
                } 
            } 
        }
        arr_27 [(short)5] [(short)5] = ((/* implicit */unsigned short) ((unsigned int) arr_15 [i_1] [i_1 - 1] [i_1 - 1]));
    }
    var_15 = ((/* implicit */short) (+((+(((((/* implicit */_Bool) (unsigned char)41)) ? (((/* implicit */unsigned int) var_4)) : (1372362240U)))))));
    /* LoopSeq 2 */
    for (unsigned int i_8 = 3; i_8 < 18; i_8 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 18; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 19; i_10 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                        {
                            arr_41 [i_9] [i_12] = ((/* implicit */int) ((long long int) (~(((/* implicit */int) arr_31 [i_8 - 3])))));
                            arr_42 [i_8] [i_8] [i_11] [i_11] [5ULL] [i_8] [i_12] = (((+(((/* implicit */int) (signed char)-49)))) < ((~(((/* implicit */int) arr_37 [i_10] [i_9 - 1] [i_10] [i_8 + 1])))));
                            var_16 = ((/* implicit */unsigned short) ((arr_33 [i_10] [i_10] [i_10] [i_9]) ? ((+(((/* implicit */int) (!(arr_33 [i_12] [i_11] [i_10] [i_9 + 1])))))) : ((~(((((/* implicit */int) (unsigned short)63087)) * (((/* implicit */int) arr_35 [i_8]))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            arr_45 [i_8] [i_13] = ((/* implicit */int) (!(((_Bool) ((arr_43 [17U] [i_11] [i_10] [i_9] [i_8 - 1]) ? (2922605055U) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))));
                            arr_46 [i_13] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(15731813589178902201ULL)))))))) : (((((/* implicit */unsigned int) ((var_10) ? (473093245) : (((/* implicit */int) (unsigned short)32646))))) | (arr_30 [i_9] [i_9] [i_8 - 2]))));
                        }
                        for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                        {
                            arr_49 [i_8] [i_9] [i_8] [i_11] [i_10] = ((((/* implicit */_Bool) min(((+(arr_36 [i_8] [i_8] [i_8] [i_8] [i_8]))), (((/* implicit */unsigned int) max((arr_43 [i_8] [i_8 + 1] [i_8 - 2] [i_8] [i_8 - 2]), (arr_28 [i_8 - 2] [i_9 - 1]))))))) ? ((~(((/* implicit */int) arr_37 [i_9] [i_9 + 1] [i_8 + 1] [i_8 - 2])))) : ((+(((/* implicit */int) arr_35 [i_9 + 1])))));
                            var_17 = ((/* implicit */unsigned int) ((short) max((((/* implicit */int) arr_39 [i_14] [i_11] [i_10] [i_9] [i_8 + 1])), (((((/* implicit */_Bool) arr_36 [i_8] [i_9] [i_10] [i_8] [i_14])) ? (arr_38 [i_8] [i_9 + 1] [i_10] [i_10] [i_14]) : (var_5))))));
                            arr_50 [i_8] [i_8] [i_8 - 3] [8] [i_8] [i_8] [i_8 - 3] = ((/* implicit */_Bool) var_4);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_54 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] = (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (arr_30 [i_8] [i_15] [i_8 - 2])))));
                            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_30 [i_8 - 3] [i_9 - 1] [i_9 - 1])) ? (max((arr_34 [i_8] [i_9 + 1]), (((/* implicit */int) arr_43 [i_8] [i_9] [i_10] [(_Bool)1] [i_15])))) : (((/* implicit */int) arr_28 [i_8 - 1] [i_9 - 1])))) * (((/* implicit */int) arr_37 [i_8] [i_8 - 1] [i_8] [i_8]))));
                        }
                    }
                    /* vectorizable */
                    for (signed char i_16 = 3; i_16 < 16; i_16 += 1) 
                    {
                        arr_59 [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_8 - 3] [i_9] [i_9 + 1] [i_9 + 1] [i_9 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (15ULL)))) ? (((arr_37 [i_8 + 1] [i_9] [i_10] [i_9]) ? (((/* implicit */int) arr_39 [i_8] [i_9] [i_10] [i_10] [i_16 - 1])) : (((/* implicit */int) arr_39 [i_8 - 2] [i_9 + 1] [i_10] [i_16 + 3] [i_8 - 2])))) : ((-(-1080084860)))));
                        var_19 = ((/* implicit */signed char) ((arr_43 [i_9 + 1] [i_9] [i_8 - 3] [i_16] [i_9 - 1]) ? ((+(var_4))) : (((/* implicit */int) arr_58 [i_8 - 2] [i_16 - 2]))));
                    }
                    arr_60 [i_8 + 1] [i_8] [i_8 - 2] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_52 [i_8 - 3] [i_8] [13U] [i_10]) << (((((/* implicit */int) var_8)) - (22031)))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) max((arr_56 [i_9]), (((/* implicit */unsigned short) var_2)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_58 [i_8 + 1] [i_9 - 1])))) : (((((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))) % (-1618652130080300170LL)))));
                    var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_31 [i_8 - 2])), (var_9)))))))));
                }
            } 
        } 
        arr_61 [i_8 - 2] = ((/* implicit */unsigned short) var_4);
        var_21 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (arr_29 [i_8 - 2]))) & (((((/* implicit */_Bool) arr_29 [i_8 - 1])) ? (arr_29 [i_8 - 3]) : (arr_55 [i_8 - 3] [i_8 - 1] [i_8 - 2] [i_8 - 2] [i_8])))));
    }
    for (unsigned int i_17 = 3; i_17 < 18; i_17 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((/* implicit */int) arr_44 [i_17] [i_17] [i_17 - 1] [i_17] [i_17] [i_17] [i_17])) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_57 [i_17] [i_17] [i_17] [i_17 - 3]) : (((/* implicit */int) arr_31 [i_17]))))))))));
        arr_65 [i_17] = ((/* implicit */unsigned short) ((((((_Bool) -1312791524)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)1434)))))) : (((arr_32 [i_17] [i_17] [i_17 - 3]) * (((/* implicit */unsigned long long int) -1406288010)))))) < (((/* implicit */unsigned long long int) ((long long int) arr_63 [i_17 - 3] [i_17 - 2])))));
        arr_66 [i_17] = ((/* implicit */int) (~(1372362240U)));
        arr_67 [i_17] = (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_17 - 1]))) - (min((arr_40 [i_17] [i_17 - 1] [i_17]), (((/* implicit */unsigned long long int) arr_38 [i_17 - 2] [i_17] [i_17] [i_17 - 1] [i_17 - 3]))))))));
    }
    var_23 = ((/* implicit */short) ((((((/* implicit */int) var_9)) > (((/* implicit */int) var_7)))) ? ((~(((/* implicit */int) min((((/* implicit */short) var_0)), (var_3)))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (!(var_2)))), (var_8))))));
    var_24 = ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (18446744073709551607ULL)))))));
}
