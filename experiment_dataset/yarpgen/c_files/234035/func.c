/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234035
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
    var_20 += ((/* implicit */int) (_Bool)1);
    var_21 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1807882346052691678LL))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_22 ^= ((/* implicit */unsigned char) ((((/* implicit */int) (((-(((/* implicit */int) (unsigned char)255)))) > (((/* implicit */int) arr_0 [i_0] [i_3]))))) / (((((/* implicit */_Bool) ((((/* implicit */int) var_1)) << (((/* implicit */int) (short)15))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
                            arr_15 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)-15)), ((+(15297951633336963244ULL)))))) ? (((/* implicit */int) (unsigned char)3)) : (((((/* implicit */_Bool) (short)16383)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_1 [i_0] [i_2]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((((int) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) var_7)) : (arr_11 [i_1] [i_0 + 1])))), (((/* implicit */int) arr_6 [(unsigned char)7] [(unsigned char)6] [i_1] [i_0])))))));
        }
        for (int i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            arr_19 [i_0] [(short)12] &= ((/* implicit */unsigned char) -6226922480835603684LL);
            arr_20 [i_5] [(unsigned char)11] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4317852526320327603LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) -3152214510034891691LL)))) : (((unsigned int) (unsigned char)160))));
            var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((min((1954755526U), (((/* implicit */unsigned int) ((((/* implicit */int) (short)-3829)) == (((/* implicit */int) (unsigned short)19))))))) << (((((/* implicit */int) var_1)) - (47014))))))));
        }
        var_25 = ((/* implicit */int) min((var_25), ((~(((/* implicit */int) var_9))))));
    }
    for (unsigned char i_6 = 2; i_6 < 20; i_6 += 3) 
    {
        var_26 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_6 - 1] [i_6 + 2]))) & (3127920191U)));
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            arr_27 [i_6] [i_6] = ((/* implicit */unsigned short) var_19);
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_6))) >= (1807882346052691678LL)));
        }
        arr_28 [i_6 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)57)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_6 - 2])) ? (((/* implicit */int) (short)-25136)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_6 - 2] [i_6]))) >= (0ULL))))))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (-1807882346052691679LL) : (((/* implicit */long long int) arr_26 [i_6 - 2]))))));
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (1807882346052691691LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40841))))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) < (882764859960623843LL)))))))) ? (((/* implicit */int) min((((/* implicit */short) arr_22 [i_6] [i_6 - 2])), (arr_24 [i_6] [i_6 - 2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_23 [i_6])))))))));
    }
    /* vectorizable */
    for (long long int i_8 = 1; i_8 < 16; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(524715423)))) ? (((/* implicit */int) (short)-9085)) : (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)26083))))));
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            for (unsigned char i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                {
                    arr_38 [i_10 - 1] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_1 [i_10] [i_10 + 1]))));
                    var_29 = ((/* implicit */unsigned int) (_Bool)1);
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        arr_43 [i_11] [i_8] [5LL] [i_8] [(unsigned char)3] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_6)))) - (((((/* implicit */int) var_14)) / (((/* implicit */int) (unsigned char)251))))));
                        var_30 = ((/* implicit */unsigned char) ((unsigned short) (unsigned short)36482));
                        /* LoopSeq 4 */
                        for (short i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
                        {
                            var_31 = arr_5 [i_8];
                            arr_46 [i_8] [i_9] [i_11] [i_8] = var_16;
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_10 + 1] [i_8 + 3])) / (arr_13 [i_8] [i_8])));
                        }
                        for (short i_13 = 0; i_13 < 20; i_13 += 4) /* same iter space */
                        {
                            var_33 &= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)(-32767 - 1))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) > (arr_13 [i_8] [i_11])))) : (((/* implicit */int) arr_40 [i_13] [4ULL] [6U] [i_10] [i_9] [i_8]))));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_4)) < (-1807882346052691678LL)));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)26083)))))));
                            arr_50 [i_8] [i_8] [6] [i_8] [i_8] [(_Bool)0] [i_8] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) var_19))) < ((-(((/* implicit */int) arr_39 [i_8 + 2] [i_11] [i_10 + 2] [i_11] [i_10 + 2]))))));
                        }
                        for (short i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                        {
                            arr_53 [i_8] [i_9] |= ((/* implicit */unsigned short) (~(11ULL)));
                            var_36 = ((/* implicit */unsigned char) ((short) ((unsigned char) arr_25 [i_8] [i_9])));
                            var_37 = ((546930578) + (((/* implicit */int) ((unsigned char) (unsigned short)36482))));
                        }
                        for (short i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                        {
                            var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) 1807882346052691671LL)) : (0ULL)));
                            arr_56 [i_15] [i_11] [i_11] [i_8] [(unsigned char)8] [i_9] [i_8] = ((/* implicit */int) (~(16777215U)));
                        }
                    }
                    for (unsigned short i_16 = 3; i_16 < 19; i_16 += 3) 
                    {
                        arr_59 [i_8] [i_9] [i_10 + 1] [i_16] [i_9] [i_8] = ((/* implicit */unsigned char) var_2);
                        var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (~(((1900216822U) % (4278190081U))))))));
                        arr_60 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) 1342666593U);
                    }
                    for (int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        var_40 = (unsigned char)150;
                        var_41 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) arr_44 [(unsigned char)9] [i_10 + 2] [i_9] [i_8 + 4] [i_9] [i_8 + 4] [i_8])) : (((/* implicit */int) var_0))))));
                    }
                }
            } 
        } 
        arr_64 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_9 [i_8 + 2] [i_8 + 3])) : (((/* implicit */int) var_0))));
    }
}
