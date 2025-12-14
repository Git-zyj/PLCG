/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31085
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_12))) ? ((~(4665243544995379696LL))) : (((/* implicit */long long int) ((arr_0 [i_0 - 2]) << (((/* implicit */int) (signed char)11)))))));
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) (signed char)62)), (-4665243544995379696LL))), (((/* implicit */long long int) ((short) var_9)))))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) arr_1 [i_0] [i_0 + 1]))));
        var_17 = ((/* implicit */unsigned int) var_12);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_0 [i_0 + 1])))))) ? ((~(((/* implicit */int) var_1)))) : (((int) (+(((/* implicit */int) arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) /* same iter space */
    {
        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4)));
        var_20 |= arr_4 [i_1] [i_1];
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) /* same iter space */
    {
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (-(((unsigned int) var_7)))))));
        var_22 = ((/* implicit */signed char) ((unsigned short) arr_6 [i_2] [i_2]));
        /* LoopNest 2 */
        for (unsigned int i_3 = 3; i_3 < 17; i_3 += 1) 
        {
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */short) 4665243544995379696LL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_24 |= ((/* implicit */_Bool) var_3);
                                var_25 |= ((/* implicit */unsigned short) arr_7 [i_2]);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) (((~(4665243544995379710LL))) < (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_3] [i_4])) > (((/* implicit */int) var_0))))))))));
                    var_27 = ((/* implicit */short) 4665243544995379696LL);
                    /* LoopSeq 2 */
                    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) 
                    {
                        var_28 |= ((/* implicit */signed char) max((4665243544995379696LL), (-4665243544995379684LL)));
                        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-2))));
                    }
                    for (unsigned int i_8 = 4; i_8 < 17; i_8 += 1) 
                    {
                        var_30 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_3])) << (((arr_19 [i_2] [i_2] [i_4] [i_2] [i_2]) + (7600393410730244731LL)))));
                        var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_12 [i_2] [i_3] [i_4]))))) ? (((/* implicit */long long int) (-(-1053781729)))) : (var_3))) == (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_8 - 2])))));
                        var_32 = 4665243544995379682LL;
                    }
                }
            } 
        } 
        var_33 += ((/* implicit */unsigned short) var_9);
    }
    /* LoopSeq 1 */
    for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
    {
        var_34 = ((/* implicit */unsigned short) arr_20 [i_9] [i_9] [i_9]);
        var_35 = ((/* implicit */unsigned char) max((-4665243544995379685LL), (4665243544995379728LL)));
        var_36 = ((/* implicit */unsigned long long int) ((short) -4665243544995379729LL));
    }
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned int i_11 = 1; i_11 < 10; i_11 += 4) 
        {
            {
                var_37 = ((/* implicit */signed char) (short)-12217);
                /* LoopSeq 2 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_38 = ((/* implicit */short) (unsigned char)31);
                    var_39 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((short) (unsigned char)58))), (((arr_16 [i_11] [i_12] [i_12] [i_11 + 1]) + (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_11])))))))));
                }
                for (long long int i_13 = 0; i_13 < 12; i_13 += 1) 
                {
                    var_40 &= ((/* implicit */long long int) var_13);
                    var_41 = ((long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)237)), (-4665243544995379685LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_10]))))) : (((unsigned long long int) var_7))));
                    /* LoopNest 2 */
                    for (unsigned short i_14 = 4; i_14 < 10; i_14 += 1) 
                    {
                        for (int i_15 = 2; i_15 < 11; i_15 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned int) arr_33 [i_10] [i_14]);
                                var_43 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 14615070582783465273ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : (4665243544995379677LL))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) - (9223372036854775807LL)))));
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) min((var_6), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) min((828266524U), (((/* implicit */unsigned int) (unsigned char)218))))) : (((long long int) arr_31 [i_13] [i_10] [i_10] [i_10])))))))));
                    var_45 = arr_21 [(signed char)12] [(signed char)12];
                }
            }
        } 
    } 
    var_46 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_47 = ((/* implicit */long long int) ((unsigned short) ((arr_15 [(unsigned short)16]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)102))))));
        var_48 &= ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_4))))))) * (((/* implicit */int) ((arr_7 [i_16]) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_22 [i_16])))))))));
        var_49 = ((/* implicit */unsigned short) 12U);
        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(4665243544995379735LL)))) ? ((~(((/* implicit */int) arr_10 [i_16] [i_16] [i_16] [i_16])))) : (((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_12 [i_16] [i_16] [i_16]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_16] [i_16] [i_16] [i_16]))) <= (arr_4 [i_16] [i_16])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_16])) || (((/* implicit */_Bool) arr_20 [i_16] [(unsigned char)2] [i_16])))))))));
        var_51 ^= ((/* implicit */signed char) var_14);
    }
}
