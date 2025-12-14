/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241526
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
    var_15 = ((/* implicit */_Bool) min(((+(var_5))), (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) -6873903643664896134LL)) ? (((/* implicit */int) arr_3 [i_0 + 2] [i_0 + 2])) : (arr_0 [i_0] [i_0])))), (6873903643664896136LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((unsigned int) (short)-32))))) : (((unsigned long long int) ((unsigned int) var_5)))));
        var_18 = ((/* implicit */int) (short)-29);
    }
    for (unsigned short i_1 = 2; i_1 < 10; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 1) 
        {
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    {
                        arr_12 [i_1] [i_2] [i_3] = ((/* implicit */long long int) (unsigned short)65520);
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_2) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65528)))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) + (18446744073709551608ULL))))) : (max(((-(arr_5 [i_2] [i_2]))), (((/* implicit */int) (signed char)0))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(var_5))))));
    }
    for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 3; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_25 [i_6] [i_6] [i_6] [i_8 - 3] = ((/* implicit */short) max((max((17541969130787308173ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_0)), (arr_13 [i_5] [i_5])))))), (((/* implicit */unsigned long long int) max((arr_11 [i_8 + 1] [i_7 - 1] [i_7] [i_7 - 1]), (((/* implicit */int) var_1)))))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 3; i_9 < 8; i_9 += 1) 
                        {
                            var_21 = (-(3977826297U));
                            var_22 = ((/* implicit */_Bool) (-(min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)45220))))), (6873903643664896133LL)))));
                        }
                        for (short i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_23 = ((/* implicit */long long int) var_4);
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) var_8));
                        }
                        /* LoopSeq 2 */
                        for (short i_11 = 0; i_11 < 12; i_11 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_30 [i_5] [i_6] [i_7])), (var_2))))))));
                            var_26 = ((/* implicit */short) (-(((((/* implicit */int) (unsigned short)30659)) % (((/* implicit */int) arr_30 [i_8] [i_7 - 1] [i_8 - 2]))))));
                            var_27 = ((/* implicit */unsigned int) arr_20 [i_5] [i_7 - 1]);
                        }
                        for (short i_12 = 0; i_12 < 12; i_12 += 3) /* same iter space */
                        {
                            arr_35 [i_5] [i_5] [i_5] [i_7] [i_12] [i_12] = ((/* implicit */_Bool) ((short) var_13));
                            var_28 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) -6873903643664896145LL)))));
                            var_29 = arr_20 [i_8] [i_6];
                            var_30 = ((/* implicit */_Bool) var_0);
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */_Bool) var_0);
    }
    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
    {
        arr_39 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_13])) ? (((/* implicit */int) arr_1 [i_13])) : (((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) arr_1 [i_13])))) : ((-(((/* implicit */int) arr_1 [i_13]))))));
        /* LoopNest 3 */
        for (int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            for (int i_15 = 0; i_15 < 15; i_15 += 1) 
            {
                for (signed char i_16 = 0; i_16 < 15; i_16 += 3) 
                {
                    {
                        var_32 = ((/* implicit */_Bool) 9223372036854775807LL);
                        /* LoopSeq 2 */
                        for (unsigned char i_17 = 2; i_17 < 14; i_17 += 3) 
                        {
                            var_33 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_47 [i_13] [i_13] [i_16] [i_17])), (var_2)))) && (((/* implicit */_Bool) var_0)))) || (((((/* implicit */_Bool) max((1419986053U), (((/* implicit */unsigned int) (_Bool)1))))) || (((/* implicit */_Bool) var_5))))));
                            var_34 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_37 [i_16])) ? (((/* implicit */int) arr_37 [i_16])) : (((/* implicit */int) arr_42 [i_13] [i_16] [i_14] [i_13])))), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)30813))))));
                            var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_43 [i_17 + 1] [i_17 - 2] [i_13])) : (arr_45 [i_16] [i_17 + 1])))) ? (min((var_4), (((/* implicit */unsigned int) arr_49 [i_13] [i_17 - 2] [i_15] [i_15] [i_14] [i_14])))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_3 [i_14] [i_17 - 2])), (arr_47 [i_13] [i_13] [i_13] [i_16])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 317141002U)) >= (arr_46 [i_13] [i_15] [i_14] [i_13]))))) : (((unsigned int) var_9))))));
                        }
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned long long int) (unsigned short)20328);
                            var_37 = ((/* implicit */unsigned short) arr_46 [i_13] [i_13] [i_15] [i_13]);
                        }
                        var_38 = ((/* implicit */short) var_3);
                        var_39 = ((/* implicit */_Bool) max((arr_47 [i_16] [i_13] [i_13] [i_13]), (((/* implicit */unsigned char) ((((/* implicit */int) (short)-35)) <= (((/* implicit */int) arr_42 [i_13] [i_15] [i_13] [i_13])))))));
                    }
                } 
            } 
        } 
        var_40 = ((/* implicit */unsigned char) var_5);
    }
    var_41 = ((/* implicit */unsigned char) var_11);
}
