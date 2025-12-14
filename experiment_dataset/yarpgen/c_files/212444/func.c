/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212444
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
    var_10 += ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) var_1);
                                var_12 = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_8)))))))));
                                var_13 = ((unsigned char) min((((/* implicit */short) (_Bool)1)), ((short)120)));
                                arr_14 [(signed char)2] [2U] [i_2 + 2] [i_3] [i_4] &= arr_0 [i_0 + 1];
                            }
                        } 
                    } 
                } 
                arr_15 [(unsigned char)7] [i_1] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)4))));
                arr_16 [i_0] [i_0] [i_1 - 1] = (unsigned short)8620;
                arr_17 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) min((-732090832), (((/* implicit */int) (unsigned short)61440))))) ? (((/* implicit */int) arr_9 [i_0] [(unsigned char)3] [(unsigned char)3] [i_1])) : (((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1] [i_1])) * (((/* implicit */int) arr_11 [i_0 + 1] [i_1 + 1]))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)81)) ? (((/* implicit */int) (unsigned char)97)) : (arr_19 [i_5]))) | (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)57766)) || (((/* implicit */_Bool) (short)-1)))))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_15 = ((/* implicit */unsigned char) ((short) 2336939149U));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 3; i_7 < 20; i_7 += 3) 
            {
                for (short i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (signed char)-12)) == (((/* implicit */int) var_0))))) / ((-(((/* implicit */int) (signed char)31))))));
                        arr_27 [i_5] [i_8] [(unsigned char)8] [(unsigned char)8] &= var_9;
                        arr_28 [i_7] [i_7] [i_7] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [(short)11] [i_6] [(unsigned char)2] [i_6])) ? (var_8) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) arr_18 [i_5] [i_5])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)183)) || (((/* implicit */_Bool) (unsigned char)81)))))));
                    }
                } 
            } 
            arr_29 [i_6] = ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)81))) : (8985658405382874610LL));
        }
        var_17 = ((/* implicit */unsigned char) (+(-1255635154)));
        var_18 = ((/* implicit */short) arr_20 [i_5]);
    }
    for (int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_19 *= ((/* implicit */unsigned char) ((_Bool) var_1));
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 21; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) ((((((((/* implicit */int) (signed char)-12)) + (2147483647))) << (((((/* implicit */int) (unsigned char)196)) - (196))))) < (((/* implicit */int) min(((_Bool)1), ((_Bool)0))))));
                    arr_40 [i_9] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 976687069)) ? (((/* implicit */int) min(((unsigned short)7769), (((/* implicit */unsigned short) arr_20 [i_10]))))) : (-2073095144)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
        {
            for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
            {
                {
                    var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)127)) ? (((/* implicit */long long int) 2064537934)) : (-5860373030969509615LL)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)));
                    var_22 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_9] [i_13])) | (max((((/* implicit */int) var_9)), (var_8))))))));
                    var_23 &= min((((/* implicit */short) arr_41 [i_9] [i_12] [(short)11])), ((short)-14523));
                    var_24 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (arr_21 [i_13] [i_13] [i_13])))) : (((/* implicit */int) arr_20 [i_9]))));
                    var_25 = ((/* implicit */int) ((unsigned long long int) ((((((/* implicit */_Bool) arr_43 [i_9] [i_12] [i_9])) ? (((/* implicit */int) (short)-122)) : (((/* implicit */int) (short)24968)))) | (((/* implicit */int) ((short) arr_41 [i_12] [i_13] [i_12]))))));
                }
            } 
        } 
    }
    for (int i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            for (int i_16 = 2; i_16 < 20; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 3; i_17 < 20; i_17 += 3) 
                {
                    {
                        arr_57 [i_14] [i_14] [(unsigned char)14] [(signed char)2] = ((unsigned char) (-(((((/* implicit */_Bool) arr_53 [i_14] [i_15] [(unsigned char)7] [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18217459454630805786ULL)))));
                        /* LoopSeq 1 */
                        for (short i_18 = 0; i_18 < 21; i_18 += 3) 
                        {
                            arr_61 [i_14] [i_15] [(short)17] [i_17] [(unsigned char)13] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) 8620995010509655960LL))))) == (((/* implicit */int) (unsigned char)248))));
                            arr_62 [i_14] [i_14] [(short)11] [i_17 + 1] [i_18] &= ((/* implicit */unsigned short) ((3821626982655326957ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_44 [(_Bool)1] [11ULL] [(_Bool)1] [i_17 - 2]))))) ? (((/* implicit */int) arr_51 [i_14] [0] [i_16] [i_17 + 1])) : (((/* implicit */int) (short)6756)))))));
                        }
                    }
                } 
            } 
        } 
        var_26 *= ((/* implicit */_Bool) arr_45 [i_14] [(unsigned char)15]);
    }
}
