/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211761
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
    var_10 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) min((var_7), (var_5)))) < (((/* implicit */int) var_4))))) - (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_2))))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        var_11 *= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)245))));
        var_12 = var_8;
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) (unsigned short)16384))))) * (((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) arr_2 [i_0]))))))) ? ((+((+(((/* implicit */int) var_5)))))) : (((/* implicit */int) arr_4 [i_0] [i_0]))));
            var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)11)) & (((/* implicit */int) (unsigned char)224))))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_2 [i_0]))))));
        }
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (unsigned short i_3 = 4; i_3 < 10; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) arr_6 [i_3] [i_3 - 2] [i_3 - 2]))) / (((((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) & (((/* implicit */int) arr_8 [i_3] [i_3 - 4] [i_3 - 1] [i_3 - 4]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 3; i_5 < 9; i_5 += 4) 
                        {
                            {
                                var_16 = (unsigned char)31;
                                var_17 = var_7;
                                arr_14 [i_0] [i_5] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */int) arr_4 [i_0] [i_0])) << (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 3] [i_5 - 1] [i_5 + 2] [i_5 - 2])))) * (((((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))))));
                                var_18 = ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                    var_19 = arr_6 [i_0] [i_0] [i_0];
                    arr_15 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) var_0)))) : (((((/* implicit */int) (unsigned char)14)) & (((/* implicit */int) (unsigned short)65535)))))) >> ((((~(((((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])) ^ (((/* implicit */int) var_0)))))) + (3631)))));
                    var_20 = var_6;
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */int) var_4)) / (((/* implicit */int) var_0)))) : (((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) - (((/* implicit */int) (unsigned short)65535)))))) : (((/* implicit */int) (unsigned char)126))));
    }
    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) ((unsigned short) var_3))) : (((((/* implicit */int) var_9)) | (((/* implicit */int) var_9))))))) ? (((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_9 [i_6])))) & (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) arr_9 [i_6]))));
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 11; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
            {
                for (unsigned char i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) (unsigned char)31)))) | (((/* implicit */int) (unsigned char)49)))), (((/* implicit */int) arr_9 [i_6]))));
                        var_24 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])) != ((+(((/* implicit */int) arr_6 [i_6] [i_6] [i_6]))))));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((unsigned short) (unsigned char)133)), (((/* implicit */unsigned short) (unsigned char)223)))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 3; i_10 < 8; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                {
                    var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6])) | (((/* implicit */int) (unsigned char)37))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) arr_9 [i_6]))), (arr_30 [i_6] [i_6])))) : (((((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6])) ? (((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6])) : (((/* implicit */int) arr_12 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])))) - (((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) arr_0 [i_6])) : (((/* implicit */int) var_8))))))));
                    arr_32 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_27 [i_6] [i_6])))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)3)) ^ (((/* implicit */int) arr_13 [i_6] [i_6] [i_6] [i_6] [i_6])))) ^ (((/* implicit */int) arr_18 [i_6] [i_6])))))));
                    var_27 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)104)) ? (((((/* implicit */_Bool) (unsigned short)28572)) ? (((/* implicit */int) (unsigned short)35498)) : (((/* implicit */int) (unsigned short)17788)))) : (((/* implicit */int) (unsigned char)0))))) || (((/* implicit */_Bool) (unsigned short)17788))));
                    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_27 [i_6] [i_6])) ^ (((/* implicit */int) arr_21 [i_6] [i_6] [i_6] [i_6])))))) | (((((/* implicit */int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1])) & ((~(((/* implicit */int) arr_30 [i_6] [i_6]))))))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min(((unsigned short)65535), (var_5)))) ? (((((/* implicit */int) var_9)) * (((/* implicit */int) var_1)))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_9))))))));
}
