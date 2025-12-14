/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208479
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */unsigned char) ((unsigned long long int) (signed char)37));
                    arr_7 [i_0] [i_1 - 2] [i_0] = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        var_11 = ((/* implicit */signed char) max((var_11), (arr_6 [i_0] [i_0] [i_0])));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) arr_9 [11U]))));
        arr_10 [i_3] = ((/* implicit */signed char) (short)-28390);
        var_13 -= ((/* implicit */long long int) var_3);
        /* LoopSeq 3 */
        for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) min((min((var_4), (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_5))));
            arr_13 [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_3] [i_3])) ? (3490868013U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)37))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)-28390))))));
        }
        for (signed char i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            arr_18 [i_3] [(_Bool)1] [i_3] = ((/* implicit */int) var_2);
            /* LoopNest 2 */
            for (signed char i_6 = 3; i_6 < 15; i_6 += 3) 
            {
                for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_6] [i_5] [i_3] [i_3] = ((/* implicit */signed char) var_7);
                        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-28390)) ? (var_4) : (((/* implicit */int) ((_Bool) var_9)))));
                    }
                } 
            } 
        }
        for (long long int i_8 = 2; i_8 < 14; i_8 += 1) 
        {
            arr_28 [13LL] [i_8 - 2] [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 7643913446935566776ULL)) ? (((/* implicit */int) (unsigned short)45136)) : (((/* implicit */int) ((4051020585U) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-10867))))))));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (signed char i_10 = 2; i_10 < 14; i_10 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                        {
                            arr_36 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_9))) || (((/* implicit */_Bool) arr_24 [i_11] [i_11]))));
                            arr_37 [i_3] [i_8 - 1] [i_3] [i_10 - 1] [i_11] [10U] [i_8 - 1] = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (signed char)37)) ? ((+(((/* implicit */int) (unsigned short)62281)))) : (-607849724))));
                            arr_38 [12] [i_8 + 1] [i_8 + 2] [i_8] [i_8 + 1] [i_8 - 1] [i_8] = ((/* implicit */unsigned short) min((((/* implicit */int) min((min((((/* implicit */unsigned short) (unsigned char)253)), (var_0))), (((/* implicit */unsigned short) ((4826829210452642265LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))), (((((/* implicit */int) arr_1 [i_10 - 2])) - (((/* implicit */int) (unsigned short)6090))))));
                        }
                        for (unsigned short i_12 = 3; i_12 < 16; i_12 += 1) 
                        {
                            arr_41 [i_3] [i_8 - 1] [i_8 - 1] [i_10] [i_3] = ((/* implicit */unsigned short) ((int) (signed char)8));
                            arr_42 [i_3] [i_10] [i_9] [i_3] [i_3] = ((/* implicit */signed char) (-(((((/* implicit */int) var_8)) >> (((/* implicit */int) arr_12 [i_3]))))));
                            var_16 ^= ((((/* implicit */int) (short)-10867)) ^ (((/* implicit */int) ((short) min((arr_29 [i_12]), (((/* implicit */int) (signed char)22)))))));
                        }
                        arr_43 [10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1516251587)) && (((/* implicit */_Bool) 2105329449))));
                    }
                } 
            } 
        }
        var_17 = ((/* implicit */int) arr_39 [1LL] [i_3] [i_3] [i_3] [i_3]);
    }
    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_44 [i_13 + 2] [i_13 - 1])) | (((/* implicit */int) ((arr_45 [i_13 + 1]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
        arr_46 [(signed char)21] |= ((/* implicit */unsigned short) ((_Bool) (short)10866));
    }
    var_19 |= ((/* implicit */int) (unsigned char)243);
}
