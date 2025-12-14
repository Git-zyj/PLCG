/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3391
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3391 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3391
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
    var_17 &= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */int) (signed char)-43);
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            var_19 &= ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49396))));
            /* LoopNest 2 */
            for (signed char i_2 = 2; i_2 < 22; i_2 += 1) 
            {
                for (short i_3 = 3; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 387725903))) << (((1267714586U) - (1267714586U))))))));
                        var_21 = ((/* implicit */unsigned int) arr_6 [i_0]);
                        var_22 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 299309596)) ? (((/* implicit */int) (short)27518)) : (-1355731851))) << (((3027252710U) - (3027252697U)))));
                        var_23 = (!(((/* implicit */_Bool) ((6759879013271557957LL) - (((/* implicit */long long int) var_8))))));
                        var_24 = ((/* implicit */unsigned char) (+((~(arr_9 [i_0] [i_1] [i_2])))));
                    }
                } 
            } 
            var_25 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (1267714585U) : (6U)));
        }
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)77))))) | (13937852744038004399ULL))))));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        var_27 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)181)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (unsigned char)146)))))));
        /* LoopNest 3 */
        for (short i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            for (unsigned short i_6 = 3; i_6 < 8; i_6 += 2) 
            {
                for (signed char i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        arr_20 [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1523829668)) ? (arr_4 [i_5 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (arr_12 [i_5]) : (((((/* implicit */_Bool) arr_12 [i_7])) ? (arr_18 [i_4] [i_5] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? (min((arr_18 [i_4] [i_5] [i_5] [i_7]), (((/* implicit */long long int) ((signed char) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8410)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)145))) : (8005556291473712106ULL)))) && (((((/* implicit */long long int) ((/* implicit */int) var_10))) == (arr_3 [i_4])))))))));
                        var_28 = ((/* implicit */int) ((((/* implicit */int) (unsigned char)232)) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (6U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4] [i_4]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)207)))))))));
                        var_29 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_3))) <= (max((-166811964076313128LL), (((/* implicit */long long int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))))))) : (max((9992090970766392208ULL), (((/* implicit */unsigned long long int) (short)14320))))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 2; i_8 < 24; i_8 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            arr_27 [i_8 + 1] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10))))) : (((((/* implicit */_Bool) -415842413)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_21 [i_8])))))) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) == (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) var_1))))))) : ((~(((((/* implicit */_Bool) arr_25 [i_9])) ? (-2147483632) : (((/* implicit */int) (unsigned char)100))))))));
            var_30 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8] [i_9])) ? (((/* implicit */int) arr_26 [i_8] [i_9])) : (((/* implicit */int) arr_26 [(short)11] [i_9]))))) && (((((/* implicit */_Bool) arr_26 [i_8 + 1] [i_9])) || (((/* implicit */_Bool) arr_26 [i_8 - 2] [i_8 - 2]))))));
        }
        var_31 = ((/* implicit */unsigned char) var_4);
        arr_28 [i_8 - 2] = max(((~(((/* implicit */int) (signed char)48)))), (((/* implicit */int) var_1)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_10 = 3; i_10 < 23; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
            {
                for (long long int i_12 = 2; i_12 < 22; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_10 + 2] [i_10 + 2] [i_10] [i_10 - 2] [i_10] [i_10] [i_10 - 3])) == (((/* implicit */int) (signed char)3))));
                            arr_40 [i_8] [i_10] [i_11] [i_12] [i_13] = ((/* implicit */_Bool) (short)14836);
                        }
                    } 
                } 
            } 
            arr_41 [i_8] &= ((/* implicit */int) ((unsigned int) var_6));
            arr_42 [i_10] = ((/* implicit */unsigned int) 15922078212445743327ULL);
            /* LoopNest 2 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) arr_43 [i_8] [i_8] [i_8] [i_14]))))) ? (arr_23 [i_8 - 2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13174)) ? (((/* implicit */int) (signed char)111)) : (((/* implicit */int) (unsigned short)53780)))))));
                            arr_50 [i_16] [i_14] [i_8] [i_10] [i_8 - 2] [i_14] [i_8] = ((/* implicit */unsigned int) (~((~(var_0)))));
                            var_34 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (unsigned short)52361)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))));
                            arr_51 [i_14] [i_14] = ((/* implicit */unsigned long long int) arr_33 [i_10] [i_14]);
                            arr_52 [i_8] [i_8] [i_8] [i_14] [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) (unsigned short)11756);
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) /* same iter space */
                        {
                            arr_55 [i_17] [i_17] [i_14] [i_14] [i_10] [i_8] = ((/* implicit */long long int) (~(arr_22 [i_8 - 2])));
                            var_35 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_12)) ? (-6000050079695859464LL) : (((/* implicit */long long int) var_6))))));
                        }
                        arr_56 [i_8] [i_10 - 1] [i_14] = ((/* implicit */int) (~(4665828414571599338LL)));
                    }
                } 
            } 
        }
    }
}
