/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192748
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_19 &= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) arr_0 [(unsigned short)12])) ? (((/* implicit */int) var_3)) : (var_4)))))) ^ ((~((-(4294967276U)))))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            var_20 |= ((/* implicit */unsigned int) var_18);
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_21 = ((/* implicit */unsigned char) (~(20U)));
                var_22 = ((/* implicit */unsigned char) var_6);
            }
            var_23 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) ((unsigned char) var_18))))));
        }
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                for (unsigned char i_5 = 1; i_5 < 15; i_5 += 4) 
                {
                    {
                        arr_13 [i_0] [i_0] [i_4] [i_4] = ((/* implicit */long long int) var_16);
                        var_24 = ((/* implicit */unsigned char) 4294967276U);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_8 = 2; i_8 < 12; i_8 += 2) 
                        {
                            arr_21 [i_0] [15] [(short)5] = ((((/* implicit */int) ((unsigned char) 19U))) < (((/* implicit */int) var_8)));
                            var_25 = ((/* implicit */unsigned char) var_13);
                        }
                        var_26 ^= ((/* implicit */int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((var_4) % (((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_17)) ? (20U) : (4294967276U))))), ((((!(((/* implicit */_Bool) var_17)))) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            var_27 -= ((/* implicit */_Bool) 1U);
                            var_28 -= ((/* implicit */unsigned char) (((_Bool)1) ? ((-(4294967291U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-24)))));
                            var_29 &= ((/* implicit */unsigned char) (+(((/* implicit */int) var_16))));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((long long int) (-(((/* implicit */int) var_2))))))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 16; i_10 += 1) 
                        {
                            var_31 = min((((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (var_5) : (arr_2 [i_0 + 2]))), (((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_25 [(signed char)5] [i_6] [(signed char)5] [i_10])))))));
                            var_32 = (+((~(((/* implicit */int) arr_3 [i_0 + 2])))));
                            arr_26 [i_0] [(unsigned char)6] [(_Bool)1] [(unsigned char)8] [i_10] &= ((/* implicit */unsigned long long int) 4294967277U);
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((int) ((short) 3560478047U))))));
                        }
                    }
                } 
            } 
            var_34 &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 20U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [(signed char)0] [i_0] [(unsigned short)2] [i_0]))) : (arr_18 [i_0] [i_0] [i_3] [i_3] [i_0])))) ? (((/* implicit */int) ((signed char) (_Bool)1))) : (((/* implicit */int) (!((_Bool)0))))))));
            /* LoopSeq 2 */
            for (int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                /* LoopNest 2 */
                for (int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    for (int i_13 = 2; i_13 < 14; i_13 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) -170011203);
                            var_36 = ((/* implicit */unsigned int) ((unsigned char) max((var_13), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-73))))))));
                        }
                    } 
                } 
                var_37 ^= ((/* implicit */unsigned short) var_16);
                arr_35 [i_0] [i_0] [(short)4] [i_0] = ((/* implicit */unsigned long long int) ((short) (-(((((/* implicit */_Bool) -6477595702068668437LL)) ? (26U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)196))))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 16; i_14 += 3) 
                {
                    for (short i_15 = 1; i_15 < 14; i_15 += 4) 
                    {
                        {
                            arr_43 [i_0] [i_0] [i_15] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3560478047U))));
                            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1928495182)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_11] [i_11] [i_0]))) : (3227911261U)))) && (((/* implicit */_Bool) var_17)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_15 + 1])) ? (((((/* implicit */_Bool) arr_41 [i_0] [i_0] [6] [i_0] [6])) ? (arr_37 [8LL]) : (((/* implicit */unsigned long long int) arr_17 [i_0] [i_3] [i_11] [i_14] [i_15])))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), (-722275059))))))))))));
                            var_39 = ((/* implicit */unsigned char) ((unsigned int) arr_10 [i_0] [i_0] [i_0]));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 16; i_16 += 2) 
            {
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) 4294967290U))) + (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_28 [i_16] [i_16] [(signed char)15] [i_0])) : (((/* implicit */int) arr_36 [i_16]))))));
                var_41 = ((/* implicit */_Bool) (-(((/* implicit */int) var_11))));
            }
            /* LoopNest 3 */
            for (short i_17 = 0; i_17 < 16; i_17 += 2) 
            {
                for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 16; i_19 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((min(((!(((/* implicit */_Bool) var_18)))), (((4294967275U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))) || (((/* implicit */_Bool) var_1)))))));
                            var_43 = var_11;
                            var_44 = ((/* implicit */signed char) arr_5 [(unsigned char)6] [(_Bool)1]);
                            var_45 = ((/* implicit */signed char) (-(((((/* implicit */int) var_14)) | (((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [i_17] [i_18])), (var_17))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_46 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) * (var_6)))))) ? (max((4294967275U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_10))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 20U))))));
    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)44)) * (((/* implicit */int) ((unsigned char) (_Bool)0)))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) - (((-6702831327723153569LL) - (((/* implicit */long long int) var_4)))))) : (((/* implicit */long long int) ((/* implicit */int) var_15)))));
}
