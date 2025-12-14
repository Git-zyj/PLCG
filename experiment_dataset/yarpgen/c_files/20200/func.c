/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20200
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
    var_11 *= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((_Bool) var_6)) ? ((~(var_10))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)15)))))))), (max((((/* implicit */long long int) var_10)), ((~(var_1)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) var_6))))) ? (((var_6) ? (arr_0 [(signed char)0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65521))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -26430834)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))) ? (arr_0 [(unsigned char)10]) : (((arr_0 [6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)14]))))))))));
        arr_2 [i_0] [i_0] = ((((unsigned int) arr_0 [i_0])) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((_Bool) 1232868081U)))))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3)))))) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned long long int) ((long long int) arr_0 [i_0])))));
        var_14 = ((/* implicit */unsigned int) ((unsigned short) (!((!(((/* implicit */_Bool) arr_0 [i_0])))))));
    }
    for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        var_15 += ((/* implicit */_Bool) (~(((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))))) & (max((((/* implicit */long long int) (unsigned short)3)), (arr_5 [i_1])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                {
                    var_16 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_5 [i_3 - 2]), (((/* implicit */long long int) arr_9 [i_3 - 4] [i_3 + 1] [i_3 + 2])))))));
                    arr_11 [i_2] [i_2] [i_3] = (((+(min((arr_9 [0LL] [0LL] [i_2]), (((/* implicit */unsigned int) (unsigned short)4)))))) == (arr_9 [8LL] [8U] [i_3]));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            {
                                arr_18 [i_2] [i_5] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) arr_9 [i_1] [i_1] [i_1])) : (var_1)))));
                                arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_10)) + (arr_7 [i_3 - 3])))) || (((/* implicit */_Bool) ((arr_7 [i_3 + 1]) - (arr_7 [i_3 - 1]))))));
                                arr_20 [i_1] [i_2] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) var_8);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_17 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min(((unsigned short)65532), (((/* implicit */unsigned short) arr_14 [i_3 - 2] [i_3 - 1] [i_3 - 2])))))));
                        var_18 = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) var_0)), (arr_9 [i_3 - 3] [i_3 - 2] [i_3 - 3]))) > (((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_21 [i_1] [i_2] [i_1] [i_6])))))))));
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 1; i_7 < 14; i_7 += 4) 
        {
            arr_26 [i_7] = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15))) : (var_1))), (min((0LL), (((/* implicit */long long int) var_7)))))), (((/* implicit */long long int) var_8))));
            var_19 &= ((/* implicit */unsigned char) arr_22 [i_1] [i_1] [i_1] [i_1]);
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 1) 
        {
            arr_30 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(arr_5 [i_1])))) <= (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_1]) : (arr_0 [i_1])))));
            arr_31 [i_8] [i_1] = ((/* implicit */unsigned int) ((_Bool) -1999397212));
        }
        for (short i_9 = 0; i_9 < 16; i_9 += 3) 
        {
            arr_34 [i_9] [(unsigned char)7] = ((/* implicit */unsigned short) (~(var_1)));
            var_20 -= ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_9])), (((((/* implicit */_Bool) var_3)) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_10 [i_9] [i_9] [i_1] [i_9])))))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 16; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned int) ((signed char) arr_0 [i_1]));
                        var_22 &= ((/* implicit */_Bool) ((((arr_13 [i_1] [i_9] [i_10] [i_10] [i_10] [10U]) & (arr_13 [i_1] [i_9] [i_1] [i_10] [i_11] [i_11]))) << ((((~(arr_13 [i_10] [i_10] [i_11] [i_11] [i_11] [i_10]))) - (12358451028403874234ULL)))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                for (int i_13 = 2; i_13 < 15; i_13 += 2) 
                {
                    for (int i_14 = 0; i_14 < 16; i_14 += 2) 
                    {
                        {
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_1] [15LL] [15LL] [i_9] [(_Bool)1])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65526)))));
                            arr_47 [i_1] [i_9] |= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_40 [i_1] [i_9] [i_13 - 2]), (arr_40 [i_1] [i_1] [i_13 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_13 - 2] [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13 - 2]))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_14])))))))));
                            arr_48 [(_Bool)1] [i_9] [14ULL] = ((/* implicit */_Bool) (+(min(((+(-3631782437661897011LL))), (((/* implicit */long long int) (~(((/* implicit */int) var_5)))))))));
                            var_24 = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned int) arr_28 [i_13 - 1] [i_9])), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_17 [i_1] [i_9] [i_12] [i_13]))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned char i_15 = 0; i_15 < 10; i_15 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (long long int i_18 = 1; i_18 < 8; i_18 += 3) 
                {
                    {
                        arr_59 [(_Bool)1] &= ((/* implicit */int) ((unsigned short) (_Bool)0));
                        /* LoopSeq 1 */
                        for (signed char i_19 = 2; i_19 < 7; i_19 += 4) 
                        {
                            var_25 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */unsigned long long int) -2431585315751990295LL)) : (max((((/* implicit */unsigned long long int) (signed char)-69)), (var_2))))));
                            arr_62 [i_15] [(_Bool)1] [(unsigned char)4] [i_18] [i_18] [i_19] [i_19] = ((/* implicit */long long int) min((((((/* implicit */int) arr_43 [i_18 - 1] [i_18 + 1] [i_18 + 2] [i_19 + 1])) <= (((/* implicit */int) arr_37 [i_18 + 2] [i_18 - 1] [i_18 + 1] [i_19 + 2] [i_19 - 2])))), (((_Bool) arr_44 [(_Bool)1] [i_18 + 1] [i_19 - 1] [i_17]))));
                        }
                        arr_63 [(short)3] [i_16] [i_18] [i_17] [(short)3] [i_18] = ((/* implicit */long long int) ((((_Bool) 2919707891U)) ? ((-(((/* implicit */int) (unsigned char)155)))) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
        var_26 -= ((((/* implicit */_Bool) 2626977314U)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_15] [i_15] [(unsigned char)6] [i_15] [i_15])) * (((/* implicit */int) (unsigned char)101))))) : (((((/* implicit */_Bool) arr_51 [(_Bool)1] [i_15] [i_15])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [5LL] [5LL] [i_15]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */int) (unsigned char)16)) : (113601506)))));
        arr_64 [i_15] = (((!(((/* implicit */_Bool) arr_35 [i_15] [(unsigned short)0] [i_15] [i_15])))) || (((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15])));
        var_27 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) -1999397205))));
    }
    /* LoopNest 3 */
    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
    {
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 12; i_22 += 1) 
            {
                {
                    var_28 -= ((/* implicit */unsigned int) ((unsigned short) min(((unsigned char)118), (((/* implicit */unsigned char) (_Bool)0)))));
                    var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned char)55)))) && (((/* implicit */_Bool) var_7)))))));
                    arr_71 [i_20] [i_21] [i_20] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_15 [i_20 + 1] [i_21])) ? (((/* implicit */int) arr_33 [i_20 + 1] [i_20 + 1])) : (((/* implicit */int) arr_33 [i_20 + 1] [i_20 + 1]))))));
                }
            } 
        } 
    } 
    var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (var_9))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)243))))) ? ((~(var_4))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
}
