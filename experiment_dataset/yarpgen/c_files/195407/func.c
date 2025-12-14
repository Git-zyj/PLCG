/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195407
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0])), ((unsigned short)10565)))) == (((/* implicit */int) (_Bool)0)))))));
                var_21 = ((/* implicit */_Bool) ((unsigned char) (_Bool)1));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        arr_8 [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */int) (unsigned short)3)) | (((/* implicit */int) (_Bool)1))))));
        var_22 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        var_23 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2 - 3] [i_2 - 1]))));
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        var_24 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (unsigned short)3)), ((+(((/* implicit */int) (unsigned short)0))))))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 1; i_4 < 11; i_4 += 4) 
        {
            for (unsigned short i_5 = 3; i_5 < 10; i_5 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3]))))) | (((/* implicit */int) ((unsigned char) arr_3 [i_3])))));
                    var_26 = ((/* implicit */unsigned char) max(((~(((/* implicit */int) (unsigned char)14)))), (((var_7) ? (((/* implicit */int) arr_13 [i_4 + 1] [i_3])) : (((/* implicit */int) (unsigned char)197))))));
                    var_27 += (unsigned short)39599;
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            var_28 = ((/* implicit */unsigned char) (unsigned short)32768);
            arr_24 [i_3] = ((/* implicit */unsigned char) ((max(((!(arr_18 [i_3] [i_6] [i_3] [i_3]))), ((!(((/* implicit */_Bool) (unsigned char)1)))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_13 [i_3] [i_3])))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)63324)))))))));
            var_29 = (_Bool)1;
            var_30 = ((/* implicit */_Bool) max((min(((unsigned short)0), (((/* implicit */unsigned short) (_Bool)1)))), (((/* implicit */unsigned short) arr_13 [(unsigned char)2] [i_3]))));
        }
        for (unsigned short i_7 = 1; i_7 < 11; i_7 += 1) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((((/* implicit */int) max(((unsigned char)5), ((unsigned char)213)))) + (((/* implicit */int) (_Bool)1))))));
            var_32 = ((/* implicit */_Bool) ((unsigned short) (unsigned char)57));
            var_33 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)27621)) ? (((/* implicit */int) arr_10 [i_3])) : (((/* implicit */int) arr_6 [i_3])))))))));
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_34 = min((((((/* implicit */_Bool) max((arr_32 [i_3] [i_8] [i_8] [i_8]), (((/* implicit */unsigned char) arr_20 [i_3] [i_8] [i_3]))))) || (((/* implicit */_Bool) var_1)))), (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) && (((/* implicit */_Bool) arr_19 [i_3] [i_3] [i_9] [i_11])))));
                            var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)63324)) ? (((/* implicit */int) arr_33 [i_3] [i_3] [i_8] [i_9] [i_10] [i_11])) : (((/* implicit */int) arr_33 [i_11] [i_3] [i_9] [i_8] [i_3] [i_3]))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_3])))))));
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (unsigned short)65535))));
                        }
                        var_37 = ((unsigned short) (unsigned short)0);
                        var_38 = ((/* implicit */unsigned short) (_Bool)1);
                        arr_39 [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_15 [i_3] [i_3] [i_3])) != (((/* implicit */int) arr_15 [i_3] [i_3] [i_9])))) ? ((+(((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_3] [i_3])), ((unsigned short)3547)))))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8191)))))))));
                        var_39 |= ((/* implicit */_Bool) (((~(((/* implicit */int) (unsigned short)13690)))) ^ (((((/* implicit */int) arr_6 [i_3])) >> (((((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (_Bool)1)))) - (6)))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_3] [i_3]))))) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)0)))) : ((+(((/* implicit */int) (unsigned char)192)))))), ((+(((/* implicit */int) (unsigned short)5))))));
        }
        for (unsigned short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                var_41 |= ((/* implicit */unsigned short) (((((-(((/* implicit */int) (unsigned char)126)))) == ((+(((/* implicit */int) (unsigned short)65528)))))) ? (((/* implicit */int) ((_Bool) (unsigned char)0))) : ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2739)))))))));
                var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (unsigned short)12749)) - ((-(((/* implicit */int) (unsigned char)61))))))));
            }
            arr_44 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1))));
        }
    }
    for (unsigned short i_14 = 2; i_14 < 16; i_14 += 4) 
    {
        arr_48 [i_14] = (unsigned short)56704;
        var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((((/* implicit */_Bool) arr_46 [i_14] [i_14])) ? ((((_Bool)1) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_5 [i_14])))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned short)18680)) : (((/* implicit */int) var_9)))))) : (((((/* implicit */int) arr_4 [i_14 + 1])) / (((/* implicit */int) arr_1 [i_14])))))))));
        var_44 = (unsigned short)58912;
    }
    var_45 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)254)) + (((/* implicit */int) (unsigned char)74))));
}
