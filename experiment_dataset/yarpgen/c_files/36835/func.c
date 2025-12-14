/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36835
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
    var_13 |= ((/* implicit */signed char) max((var_6), (((/* implicit */int) var_2))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) << (((((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_12))))) / (((/* implicit */int) max((var_9), (((/* implicit */unsigned short) var_0)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = min((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) var_3)))))), (((((/* implicit */int) var_3)) | ((~(((/* implicit */int) var_7)))))));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                arr_9 [i_0] [i_0] [(unsigned char)1] [(signed char)12] = ((/* implicit */signed char) (~(((((/* implicit */int) var_4)) ^ (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))));
                var_16 *= ((/* implicit */_Bool) min((min((((/* implicit */int) ((unsigned short) (unsigned char)255))), (((var_11) | (var_11))))), (((((/* implicit */int) ((signed char) var_3))) << (((((/* implicit */int) (unsigned char)0)) << (((/* implicit */int) (unsigned char)9))))))));
            }
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) ((var_11) / (((/* implicit */int) var_4)))))), (((((/* implicit */int) ((signed char) var_12))) - (((/* implicit */int) var_12))))));
                var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((int) ((((/* implicit */int) var_10)) ^ (((((/* implicit */int) var_2)) + (var_6)))))))));
                var_18 = ((/* implicit */unsigned short) ((signed char) (((-(var_1))) / (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */int) var_2)))))));
            }
            /* vectorizable */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                var_19 += ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)113)) != (((/* implicit */int) (unsigned char)68))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((signed char) var_10)))));
            }
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) /* same iter space */
                {
                    arr_20 [i_0 - 1] [i_0] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) (unsigned char)2))))) ? (min((((/* implicit */int) var_8)), (var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (var_7))))));
                    var_21 += ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) var_9))), (((((/* implicit */int) var_12)) << (((((/* implicit */int) var_10)) - (106)))))));
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */int) max((var_4), (((/* implicit */unsigned char) var_7))))) : ((-(((/* implicit */int) (unsigned char)47)))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((var_5) << (((((/* implicit */int) var_12)) - (100))))) << (((((/* implicit */int) ((unsigned short) min((var_6), (((/* implicit */int) var_7)))))) - (1))))))));
                        var_24 = ((/* implicit */signed char) (+(((((/* implicit */int) var_10)) / (var_5)))));
                        arr_24 [i_0] [i_0] [i_0] [(unsigned short)21] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)9)) << (((((/* implicit */int) (signed char)83)) - (71)))));
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (unsigned char)162)))))));
                        arr_25 [i_0] [i_1] [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_12)))) > ((~(((/* implicit */int) var_9)))))) ? (((/* implicit */int) ((var_5) >= (((/* implicit */int) var_8))))) : (((/* implicit */int) ((signed char) ((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)246))))))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 24; i_8 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((((/* implicit */int) var_12)) ^ (var_6))) >= (((/* implicit */int) var_8)))) ? (((/* implicit */int) min((var_0), (var_10)))) : (max((((/* implicit */int) var_9)), (var_1))))))));
                    arr_28 [i_0] [(signed char)18] [i_5] [i_8] [i_0] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) var_12))))));
                    arr_29 [i_0 + 1] [i_0 + 1] [(unsigned short)20] [i_0] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned short)34773)) ? ((+(((/* implicit */int) (signed char)119)))) : (((((/* implicit */int) (unsigned char)185)) % (((/* implicit */int) (unsigned char)157)))))) + (((((/* implicit */int) var_0)) + (((/* implicit */int) var_4))))));
                    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */int) var_7)) * (((/* implicit */int) var_9)))), (var_11)));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_9 = 0; i_9 < 24; i_9 += 4) 
                {
                    var_28 = ((/* implicit */unsigned short) var_4);
                    arr_34 [i_0] [i_1] [i_1] [i_1] [(unsigned char)22] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
                    var_29 = ((/* implicit */_Bool) (~(((/* implicit */int) var_0))));
                }
                arr_35 [i_0] = ((/* implicit */signed char) (((((_Bool)1) || (((/* implicit */_Bool) (unsigned char)248)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) var_10)) * (((/* implicit */int) var_3))))));
            }
            arr_36 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) min(((-(((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned char) (signed char)73)))));
            arr_37 [i_0] [i_0] [i_0] = ((unsigned char) (-(((/* implicit */int) ((var_1) < (var_6))))));
        }
        /* vectorizable */
        for (unsigned char i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            arr_41 [i_0] = ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (unsigned char)8)) + (((/* implicit */int) (unsigned short)33956)))) : (((((/* implicit */int) var_10)) | (((/* implicit */int) var_12)))));
            var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) (+(var_1))))));
        }
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            var_31 -= ((/* implicit */unsigned char) (((-((-(var_6))))) >= (((/* implicit */int) ((signed char) var_3)))));
            var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) max(((-(((var_6) << (((((((/* implicit */int) var_0)) + (85))) - (19))))))), (min(((~(((/* implicit */int) var_7)))), (((/* implicit */int) min((var_0), (var_10)))))))))));
            var_33 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) ((unsigned short) var_2))) < (((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) var_0)))))));
        }
        arr_44 [(unsigned char)4] |= ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
    }
    var_34 = ((/* implicit */signed char) var_11);
}
