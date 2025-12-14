/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192657
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
    var_19 = var_4;
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), ((_Bool)0)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (unsigned char i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_21 = ((/* implicit */unsigned short) (((!((!(((/* implicit */_Bool) (short)28337)))))) || (((/* implicit */_Bool) arr_0 [i_1] [i_1]))));
                    var_22 = ((/* implicit */int) var_17);
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) (short)31137);
    }
    for (short i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((min(((-(((/* implicit */int) (short)-28337)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((/* implicit */int) arr_1 [i_3] [i_3])))))) + (2147483647))) >> ((((((!(((/* implicit */_Bool) arr_2 [i_3] [i_3])))) ? (((((/* implicit */int) arr_2 [i_3] [i_3])) | (((/* implicit */int) (short)-28337)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)-28337)) : (((/* implicit */int) var_17)))))) + (28338))))))));
        var_24 = ((((/* implicit */_Bool) max((arr_0 [i_3] [i_3]), (arr_0 [i_3] [i_3])))) ? (((((/* implicit */_Bool) var_18)) ? (arr_0 [i_3] [i_3]) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)21] [i_3]))))));
        arr_11 [i_3] = ((((/* implicit */_Bool) (((-(((/* implicit */int) (short)-28337)))) | (arr_4 [i_3] [i_3] [i_3])))) ? (((/* implicit */int) min(((short)32767), (((/* implicit */short) var_16))))) : ((-(((/* implicit */int) min((var_18), (((/* implicit */unsigned short) arr_6 [i_3]))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 24; i_5 += 1) 
            {
                {
                    arr_18 [i_5] [(unsigned short)23] [i_3] = ((/* implicit */unsigned short) (((_Bool)1) ? ((-(((/* implicit */int) arr_10 [i_4])))) : (((((((/* implicit */int) arr_13 [i_5])) + (2147483647))) >> (((((/* implicit */int) (short)28337)) - (28335)))))));
                    var_25 = ((/* implicit */int) min((var_25), (min((((((/* implicit */int) (short)31137)) ^ (((/* implicit */int) min(((short)28337), (((/* implicit */short) arr_7 [i_5] [i_4] [i_4]))))))), (((/* implicit */int) arr_10 [i_4]))))));
                    var_26 = var_7;
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 24; i_6 += 4) /* same iter space */
    {
        var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-31138))))) ? (((/* implicit */int) var_16)) : (((var_3) / (((/* implicit */int) arr_13 [i_6])))));
        arr_21 [i_6] = (!(((/* implicit */_Bool) arr_17 [i_6] [i_6] [i_6])));
    }
    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        var_28 = ((/* implicit */short) ((min(((-(((/* implicit */int) var_12)))), (min((arr_0 [(short)3] [i_7]), (((/* implicit */int) arr_12 [i_7])))))) / (((/* implicit */int) ((unsigned char) ((-526777353) / (((/* implicit */int) (short)31137))))))));
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 17; i_8 += 4) 
        {
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                {
                    arr_28 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) (_Bool)1)))))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_25 [i_7] [i_8] [i_9])) | (var_6))) % (((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) (short)31137)) : (-997732786))))))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 15; i_10 += 1) 
                    {
                        for (unsigned char i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            {
                                arr_35 [i_7] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_16 [i_10 + 1])) >> (((/* implicit */int) arr_27 [i_10 + 2] [i_7])))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)32767))))))))));
                                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_15 [i_7] [i_8] [i_9] [i_10])) ? ((-(((/* implicit */int) var_13)))) : (((/* implicit */int) ((((/* implicit */int) (short)-28338)) > (((/* implicit */int) (_Bool)0)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_36 [i_7] = ((/* implicit */int) var_0);
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 4) 
    {
        for (unsigned char i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            {
                arr_41 [(unsigned short)14] = ((/* implicit */short) (unsigned char)14);
                var_30 = ((/* implicit */unsigned char) var_10);
                arr_42 [i_13] = ((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_39 [i_12] [i_12] [i_13])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_12] [(short)6] [i_13] [i_12])))))));
                arr_43 [i_13] [i_13] [i_12] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_17 [i_12] [i_12] [i_13])) / (((/* implicit */int) arr_17 [i_12] [i_12] [i_13])))) + (((/* implicit */int) (short)28336))));
                arr_44 [(unsigned short)16] [i_13] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_2))) && (((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)0), (arr_37 [i_13])))), (((((/* implicit */_Bool) arr_5 [i_13])) ? (((/* implicit */int) (unsigned short)13435)) : (((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_31 = ((/* implicit */unsigned char) ((_Bool) max((((((/* implicit */_Bool) (short)-28338)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))), (((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned short)28919)))))));
    var_32 = ((/* implicit */unsigned char) var_6);
}
