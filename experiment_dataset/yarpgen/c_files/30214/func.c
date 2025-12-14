/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30214
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
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-30842)) & (((/* implicit */int) (short)30842))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    var_21 &= ((/* implicit */short) ((var_5) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-73)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) (short)-17888)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)80)))) : (((/* implicit */int) (_Bool)0)))))));
                    var_22 &= ((/* implicit */unsigned long long int) (+(((int) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_19)))))));
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) var_15);
    }
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((int) (~(((unsigned long long int) (short)30841)))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 9; i_4 += 1) 
        {
            var_25 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_4 [i_3 + 2] [6ULL] [i_3 + 1])), (var_12))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_7 [(unsigned short)13] [i_4]))))));
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */int) arr_6 [i_3] [i_3 + 2] [i_3] [(unsigned short)6])) | (((/* implicit */int) var_4))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) var_17)))) / (var_8))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (signed char)-66))))))))));
        }
        /* vectorizable */
        for (int i_5 = 4; i_5 < 10; i_5 += 2) 
        {
            var_27 = ((/* implicit */long long int) arr_7 [i_3] [i_3]);
            var_28 = ((/* implicit */unsigned char) arr_6 [i_3] [i_3 + 1] [i_3 + 2] [i_5 - 3]);
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))));
        }
        var_30 = ((/* implicit */unsigned int) max((((long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_12 [i_3])))), ((~(arr_2 [i_3 + 2] [i_3 + 2] [i_3])))));
    }
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
        {
            for (int i_8 = 1; i_8 < 18; i_8 += 4) 
            {
                {
                    var_31 = (unsigned char)119;
                    var_32 = ((/* implicit */signed char) var_15);
                    var_33 &= max((((((/* implicit */_Bool) (short)17887)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_6] [i_8]))) : (arr_17 [i_8]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) + (((((/* implicit */_Bool) arr_5 [(unsigned short)10] [i_6] [i_7] [i_7])) ? (((/* implicit */int) (short)-30866)) : (((/* implicit */int) var_11))))))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8 + 1] [i_8 + 2])) ? (((/* implicit */int) var_4)) : (((((((/* implicit */int) (short)-30837)) + (2147483647))) >> (((/* implicit */int) arr_19 [i_8 + 1] [i_8 - 1] [i_8 - 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
        {
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 2) 
                        {
                            var_35 = ((/* implicit */int) var_19);
                            arr_31 [i_9] [i_12] [i_9] [i_10] [i_9] [10U] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (_Bool)1)))) / (((((/* implicit */int) var_16)) * (((/* implicit */int) arr_4 [i_6] [(_Bool)1] [i_10])))))))));
                            var_36 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_19 [i_6] [i_9 + 1] [i_12]))));
                            var_37 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)13462)) : (((/* implicit */int) arr_6 [i_6] [i_6] [i_6] [(short)17]))))))));
                        }
                        var_38 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) var_16)), (((unsigned char) (unsigned short)6351))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                        {
                            arr_35 [i_9] [i_9 + 1] [i_9 + 1] [(signed char)6] [i_13] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_5)))));
                            var_39 = ((/* implicit */_Bool) arr_33 [i_6] [i_9] [16ULL] [16ULL] [16U]);
                            var_40 ^= ((/* implicit */unsigned char) ((-2093817462) == (((/* implicit */int) arr_20 [i_9 + 1] [i_9 + 1] [i_11]))));
                            var_41 = ((/* implicit */signed char) ((unsigned short) var_11));
                            var_42 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (arr_17 [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) & (((/* implicit */unsigned int) ((var_10) / (((/* implicit */int) var_9)))))));
                        }
                        var_43 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_17))) + (((/* implicit */int) ((short) var_7)))));
                    }
                } 
            } 
        } 
        var_44 = var_13;
    }
    var_45 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((unsigned char) 11463039686791745607ULL))) ? (((((/* implicit */int) (signed char)48)) - (((/* implicit */int) var_9)))) : (((/* implicit */int) ((signed char) (signed char)119))))));
    var_46 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_16) || (((/* implicit */_Bool) var_10)))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_8))))))));
}
