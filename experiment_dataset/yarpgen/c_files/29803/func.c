/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29803
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [8ULL] [i_0] &= ((/* implicit */short) var_5);
        arr_4 [i_0] = ((/* implicit */unsigned char) (((+(arr_0 [i_0]))) * (arr_0 [i_0])));
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (((((-(arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24576))))) ^ (var_1))))));
        var_11 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (min((((((/* implicit */_Bool) 4072571622918429383LL)) ? (((/* implicit */int) (unsigned char)50)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((((/* implicit */_Bool) 2047)) && (((/* implicit */_Bool) arr_0 [7])))))))));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */_Bool) (-((+(((/* implicit */int) arr_6 [i_1] [i_1]))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                for (long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
                        {
                            var_12 += ((/* implicit */unsigned long long int) min((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_9 [i_4] [0ULL])) : (((/* implicit */int) (signed char)77)))) - (((/* implicit */int) arr_14 [i_5] [i_4] [(unsigned char)8] [i_1])))), (((/* implicit */int) ((_Bool) ((var_4) != (-3683280724815489250LL)))))));
                            var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) arr_17 [0LL] [2U] [i_3] [i_3] [i_4] [i_5]))));
                            arr_19 [(unsigned char)1] [i_1] [(unsigned char)2] [i_1] [i_4] [(unsigned char)8] [(unsigned char)8] = ((/* implicit */signed char) arr_18 [i_1]);
                            var_14 *= ((/* implicit */_Bool) ((177781125) << (((((/* implicit */int) ((unsigned char) ((4072571622918429383LL) >> (((((/* implicit */int) var_5)) - (68))))))) - (28)))));
                        }
                        /* vectorizable */
                        for (short i_6 = 4; i_6 < 11; i_6 += 3) 
                        {
                            arr_24 [i_1] [i_2] [5U] = ((/* implicit */long long int) ((((/* implicit */int) var_5)) & (var_9)));
                            var_15 += ((/* implicit */_Bool) ((arr_21 [(signed char)10] [i_2] [i_6 - 1] [i_4] [i_2 - 1]) - (arr_21 [2ULL] [i_4] [i_6 - 1] [i_1] [i_2 - 1])));
                            var_16 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) var_3))))));
                        }
                        arr_25 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) arr_14 [i_1] [i_1] [i_1] [(signed char)0]);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_6)) ? (((var_7) / (((/* implicit */long long int) var_9)))) : (min((-4072571622918429384LL), (((/* implicit */long long int) var_5)))))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) % ((((+(var_6))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8)))))))));
    /* LoopSeq 4 */
    for (int i_7 = 0; i_7 < 18; i_7 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_4)) ? (arr_2 [(_Bool)0]) : (arr_28 [i_7] [i_7]))) <= (((/* implicit */unsigned long long int) max((333212300882242208LL), (4072571622918429383LL))))));
        var_20 += arr_0 [i_7];
    }
    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    var_21 = ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_10] [i_10] [i_8 - 1] [i_8])) || (((/* implicit */_Bool) var_6))))) > (((/* implicit */int) var_8)));
                    arr_37 [i_9] [(_Bool)1] [(short)8] [i_10] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_8] [i_9] [i_9] [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min(((unsigned short)25731), (((/* implicit */unsigned short) arr_35 [i_9] [i_10]))))) << (((max((18014398508957696ULL), (10746723293132593043ULL))) - (10746723293132593031ULL)))))) : ((((-(var_6))) - (var_1)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 18; i_11 += 1) 
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (signed char)77))))))));
                        var_23 -= ((/* implicit */short) var_7);
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        arr_43 [i_8] [i_9] [i_8] [i_8] &= ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [i_8 - 1] [(signed char)19]))) / (arr_33 [i_8] [i_10] [i_12])))));
                        arr_44 [i_10] [i_12] [i_12 + 2] [(signed char)5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [i_8 - 1])))));
                    }
                    /* vectorizable */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_8]))))) && ((_Bool)1)));
                        var_25 -= (+(arr_42 [i_8 - 1] [0]));
                    }
                    for (unsigned char i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        var_26 += ((/* implicit */short) var_9);
                        arr_51 [i_10] [i_9] [i_10] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) var_0)), (var_4))), (((/* implicit */long long int) ((unsigned char) var_8)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_3)) * (((/* implicit */int) (unsigned char)241))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_8] [i_8 - 1] [i_8] [i_8 - 1] [i_8]))) : (var_4))) : (max((((/* implicit */long long int) var_9)), (34359738367LL))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_47 [i_10] [i_9] [19ULL] [i_14]))))), (arr_36 [i_8] [i_8] [i_8] [i_8 - 1])))))));
                        var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) ((signed char) arr_39 [i_8] [i_9] [i_9] [i_10] [14]))) > (((/* implicit */int) ((signed char) var_5))))) ? (((/* implicit */long long int) (-(((/* implicit */int) ((signed char) arr_50 [i_10] [i_14])))))) : (min((arr_49 [i_8 - 1]), (((/* implicit */long long int) ((unsigned int) arr_41 [i_8] [i_8] [(_Bool)1] [i_8])))))));
                    }
                    /* vectorizable */
                    for (int i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        arr_55 [i_15 + 1] [i_10] [(unsigned char)0] = ((/* implicit */unsigned char) var_1);
                        var_28 &= ((/* implicit */_Bool) ((unsigned long long int) arr_49 [i_8 - 1]));
                        var_29 = ((/* implicit */unsigned char) ((((arr_54 [i_10] [i_9] [(unsigned short)15] [i_15]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_8 - 1] [i_10] [7LL] [i_9] [i_10]))))) >= (((/* implicit */unsigned long long int) var_9))));
                    }
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [14LL] [i_8 - 1] [i_9] [i_10]))) : (arr_30 [i_8 - 1]))) <= (((/* implicit */unsigned long long int) (-(arr_33 [3U] [i_9] [(_Bool)1])))))))))));
                }
            } 
        } 
        var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_8])) ? (arr_33 [i_8 - 1] [i_8 - 1] [(unsigned char)12]) : ((-(arr_49 [i_8])))))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_38 [i_8]))))) : (var_6))))))));
    }
    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 1) 
    {
        var_32 *= ((/* implicit */signed char) ((long long int) max(((unsigned char)172), (((/* implicit */unsigned char) var_0)))));
        var_33 ^= ((/* implicit */int) ((((/* implicit */_Bool) (~(((long long int) arr_14 [i_16] [i_16] [i_16] [(short)3]))))) ? (((((/* implicit */_Bool) ((long long int) var_4))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) -50874731)), (var_4)))) : (max((var_1), (((/* implicit */unsigned long long int) (short)-32749)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)3)) * (((var_0) ? (((/* implicit */int) (short)-16384)) : (((/* implicit */int) var_8)))))))));
        arr_60 [i_16] [i_16] = ((/* implicit */long long int) var_1);
        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_16])) && (((/* implicit */_Bool) ((arr_52 [i_16] [(_Bool)1] [i_16] [i_16] [(signed char)16] [i_16]) / (((/* implicit */int) var_3)))))))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
    {
        var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) max((4072571622918429383LL), (((/* implicit */long long int) max((((/* implicit */int) var_8)), (arr_52 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))))))));
        var_36 = ((/* implicit */int) (short)23057);
        arr_63 [i_17] &= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -2724499186031559811LL)) ? ((+(var_2))) : ((-(var_1))))))));
        var_37 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (var_6)))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)16))) : (10746723293132593021ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_17] [i_17]))))), (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (short)(-32767 - 1)))))))));
    }
    var_38 = ((/* implicit */long long int) 17201297677729095234ULL);
}
