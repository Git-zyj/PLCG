/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212442
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((var_15), ((unsigned short)20405))))));
                            var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_3] [i_2] [i_1] [i_0 - 3])))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_11)))))))))));
                            var_18 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_2))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((unsigned char) (unsigned char)242))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (~(18446744073709551594ULL))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) var_6);
    var_22 = ((/* implicit */unsigned short) var_13);
    /* LoopSeq 3 */
    for (unsigned short i_4 = 1; i_4 < 15; i_4 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (unsigned short)45131))))))));
        arr_14 [i_4 - 1] = ((/* implicit */unsigned char) var_7);
        var_24 = ((/* implicit */unsigned short) min(((((+(((/* implicit */int) var_3)))) + (((((/* implicit */int) arr_12 [i_4 + 1])) - (((/* implicit */int) arr_12 [i_4])))))), (((((/* implicit */int) arr_11 [i_4 - 1] [i_4])) - (((((/* implicit */_Bool) arr_12 [i_4 - 1])) ? (((/* implicit */int) arr_12 [i_4])) : (((/* implicit */int) var_5))))))));
        var_25 = (~(min((arr_13 [i_4 - 1]), (arr_13 [i_4 - 1]))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) var_8))));
        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5])))) == (((((/* implicit */int) (unsigned char)80)) | (((/* implicit */int) var_14))))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_6 [i_6] [i_6] [i_6] [i_6])))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))) * (var_11))) / (var_0))) : (min((arr_19 [i_6] [i_6]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_6]))) == (var_11))))))));
        /* LoopSeq 4 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
        {
            arr_23 [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_1 [i_6])) & (((/* implicit */int) arr_1 [i_6])))), (((/* implicit */int) (unsigned char)14))));
            var_30 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_6))))));
        }
        /* vectorizable */
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned char i_10 = 1; i_10 < 10; i_10 += 4) 
                {
                    for (unsigned short i_11 = 2; i_11 < 10; i_11 += 2) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52685))) : (arr_30 [i_6] [i_8] [i_9] [i_10] [i_11 - 1])));
                            var_32 |= ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)128)) * (((/* implicit */int) (unsigned short)43725))));
                        }
                    } 
                } 
            } 
            var_33 = ((/* implicit */unsigned char) arr_1 [i_6]);
        }
        for (unsigned long long int i_12 = 1; i_12 < 9; i_12 += 4) 
        {
            var_34 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned char i_13 = 0; i_13 < 11; i_13 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    arr_40 [i_6] [i_12 + 2] [i_12] [i_14] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_13] [i_14]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_35 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_13])) | (((/* implicit */int) arr_15 [i_12 + 1]))));
                        arr_44 [i_6] [i_12] [i_13] [i_14] [i_15] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_6 [i_12 + 2] [i_12 + 2] [i_12] [i_6]))));
                    }
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_12 - 1] [i_12 + 2])) ? (arr_19 [i_12 + 2] [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_6] [i_12 - 1] [i_13] [i_6])))));
                    arr_45 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_6])) && (((/* implicit */_Bool) arr_11 [i_12 + 1] [i_13]))));
                    var_37 = ((/* implicit */unsigned char) (~(var_13)));
                }
                var_38 = arr_39 [i_6] [i_12] [i_13] [i_13];
                var_39 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_22 [i_12 - 1]))));
            }
            for (unsigned short i_16 = 1; i_16 < 8; i_16 += 3) /* same iter space */
            {
                var_40 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)20387))));
                var_41 = (unsigned char)82;
                var_42 = ((/* implicit */unsigned char) (-(min((arr_28 [i_12 - 1] [i_16 + 3]), (((/* implicit */unsigned long long int) var_9))))));
                var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned long long int) var_8))) || (((/* implicit */_Bool) (unsigned char)32)))) ? ((~(((((/* implicit */_Bool) (unsigned char)242)) ? (((/* implicit */int) (unsigned short)45149)) : (((/* implicit */int) (unsigned char)229)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_12 + 1] [i_16])))))));
            }
            for (unsigned short i_17 = 1; i_17 < 8; i_17 += 3) /* same iter space */
            {
                var_44 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min(((unsigned short)23025), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) (unsigned short)45105)) : (((((/* implicit */int) arr_47 [i_6] [i_12] [i_17])) ^ (((/* implicit */int) arr_33 [i_17] [i_12] [i_17 + 1])))))) << ((((((~(((/* implicit */int) arr_12 [i_12 + 1])))) + (199))) - (14)))));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_46 [i_17 + 1] [i_12 + 2] [i_17 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_17]))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6] [i_6] [i_6]))) % (((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (13825512108152816314ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
            }
            arr_52 [i_6] [i_12] = var_7;
        }
        for (unsigned char i_18 = 0; i_18 < 11; i_18 += 4) 
        {
            var_46 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) arr_32 [i_6] [i_6] [i_18] [i_18] [i_18]))) + (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) (unsigned short)12856))))))))));
            var_47 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (arr_13 [i_6])))));
        }
        var_48 = ((/* implicit */unsigned short) (unsigned char)116);
        var_49 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_55 [i_6] [i_6])))))) > (((/* implicit */int) min(((unsigned char)3), ((unsigned char)146))))));
    }
    var_50 = ((/* implicit */unsigned char) var_14);
}
