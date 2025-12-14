/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30076
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
    var_10 = ((((var_2) + (2147483647))) << (max((var_3), (((/* implicit */int) ((var_1) <= (((/* implicit */int) var_7))))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_11 -= ((((/* implicit */int) (short)-4514)) >= (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (unsigned char)253)) : (((/* implicit */int) (unsigned char)8)))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                {
                    {
                        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) ((unsigned int) (short)-29803)))));
                        var_13 += ((/* implicit */unsigned char) (signed char)-47);
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_2])) : (-401428877)))), (((unsigned int) (_Bool)1)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 25; i_7 += 3) 
                        {
                            {
                                arr_22 [i_0] [i_4] [8U] [i_6] [i_7] [i_7] &= ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)12)) * (((/* implicit */int) arr_16 [i_0] [i_4] [i_5] [i_6]))))) && (((/* implicit */_Bool) ((unsigned int) var_4)))))), ((+((+(((/* implicit */int) (short)32760))))))));
                                arr_23 [i_7] [i_6] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_8 [i_0] [i_4] [i_6]) ? (((/* implicit */int) (short)-32751)) : (((/* implicit */int) arr_2 [i_4]))))) ? (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), ((-2147483647 - 1))))) : (arr_5 [i_0]))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((int) (+(((/* implicit */int) (short)(-32767 - 1))))));
                    arr_24 [i_0] [i_0] = max((((/* implicit */int) ((((/* implicit */_Bool) 23U)) || (((/* implicit */_Bool) (short)29803))))), (max((((/* implicit */int) arr_9 [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)20)))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                {
                    arr_33 [i_9] [i_9] [i_10] [i_10] &= ((/* implicit */short) max((var_4), (((unsigned char) ((unsigned char) -1011317365)))));
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (max((((/* implicit */int) (unsigned short)43552)), (((((/* implicit */int) (signed char)(-127 - 1))) & (((/* implicit */int) (unsigned char)122))))))));
                        var_17 = ((((/* implicit */_Bool) (-(arr_4 [i_8] [i_8] [i_8])))) ? (((/* implicit */unsigned int) ((((((/* implicit */_Bool) -1493706511)) ? (-1582854387) : (((/* implicit */int) (unsigned char)12)))) + (((int) (short)-31784))))) : (max((((14U) + (((/* implicit */unsigned int) 2147483647)))), (arr_30 [i_11]))));
                        var_18 = ((/* implicit */unsigned char) (short)32751);
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 25; i_12 += 1) /* same iter space */
                    {
                        arr_38 [i_8] [i_12] [i_10] [i_12] [(_Bool)1] = ((-1493706503) % (var_1));
                        arr_39 [i_8] [i_9] &= ((/* implicit */short) arr_30 [i_12]);
                        arr_40 [(short)6] [(_Bool)1] [i_10] [i_8] [i_8] = ((unsigned char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (unsigned char)244))));
                        arr_41 [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (_Bool)0))) ? (((/* implicit */int) (short)32742)) : (2147483647)));
                    }
                    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 1) /* same iter space */
                    {
                        var_19 ^= ((((((/* implicit */int) arr_15 [i_13] [i_9] [i_10] [i_13])) | (((/* implicit */int) (unsigned char)134)))) != (((/* implicit */int) min((((/* implicit */unsigned char) arr_8 [i_8] [i_8] [i_8])), ((unsigned char)97)))));
                        var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8] [i_9] [i_10] [i_10] [i_9] [i_13])) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_21 [i_13] [i_8] [i_9] [i_8] [i_8] [i_8]))))) ? (max((((((var_0) + (2147483647))) << (((((/* implicit */int) (unsigned char)255)) - (255))))), (((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */int) arr_37 [i_8] [i_13])) : (((/* implicit */int) var_6)))))) : (((/* implicit */int) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned char) (_Bool)0))))) == (min((((/* implicit */int) (unsigned short)43552)), (var_3))))))));
                        arr_44 [i_8] [i_13] [i_13] [i_13] = ((/* implicit */unsigned char) ((_Bool) min((((/* implicit */unsigned int) var_2)), (min((4294967272U), (((/* implicit */unsigned int) var_2)))))));
                    }
                    arr_45 [i_10] [i_9] [i_8] = max((min((-2147483632), (((/* implicit */int) arr_37 [i_9] [i_9])))), (((int) var_5)));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */int) var_7)) >= (var_3)))) - (((/* implicit */int) arr_9 [i_8] [i_8] [i_8])))), ((+(((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) (_Bool)1)))))))));
        arr_46 [i_8] = ((/* implicit */short) (((_Bool)0) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) (unsigned short)4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 20U)) && (((/* implicit */_Bool) (unsigned char)220)))))) : (((((/* implicit */_Bool) (unsigned char)24)) ? (((/* implicit */unsigned int) var_3)) : (697878506U))))) : (((unsigned int) min((arr_4 [i_8] [6U] [i_8]), (((/* implicit */int) (_Bool)1)))))));
    }
    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
    {
        var_22 -= ((/* implicit */_Bool) (+(4294967289U)));
        arr_50 [9U] = ((/* implicit */int) ((_Bool) arr_13 [i_14] [(_Bool)1] [i_14]));
        var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((int) (_Bool)1)) & (((/* implicit */int) (unsigned char)135))))) < (((((/* implicit */_Bool) arr_1 [i_14] [i_14])) ? (max((((/* implicit */unsigned int) var_2)), (4294967261U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_14] [i_14] [14U])) ? (((/* implicit */int) (unsigned char)135)) : (((/* implicit */int) (unsigned char)24)))))))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 13; i_15 += 1) 
    {
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= ((+(((/* implicit */int) arr_15 [(short)3] [i_15] [i_15] [(short)23])))))))));
        var_25 = var_0;
        var_26 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) arr_36 [i_15] [(short)8] [i_15] [i_15]))))));
    }
}
