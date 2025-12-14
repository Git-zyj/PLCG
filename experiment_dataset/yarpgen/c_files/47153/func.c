/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47153
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
    var_15 = ((/* implicit */short) ((max((var_11), (((/* implicit */unsigned int) ((signed char) var_1))))) == (((unsigned int) var_11))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) 14336LL))));
        var_17 = ((((/* implicit */int) ((((/* implicit */int) (signed char)-13)) != (((/* implicit */int) (signed char)-4))))) >> (((((/* implicit */int) ((short) var_13))) + (1210))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((arr_5 [i_0] [i_1] [i_1] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)542)))))));
                    arr_9 [i_0] [i_2] [i_0] = ((/* implicit */signed char) (-(arr_2 [i_1])));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) >= (((/* implicit */int) var_12)))) ? (((unsigned long long int) (unsigned short)65408)) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-9075)))))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_3]))) - (var_4)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) /* same iter space */
    {
        arr_19 [i_5] [i_5] = ((/* implicit */unsigned short) ((((((/* implicit */int) (signed char)-104)) < (((/* implicit */int) (short)13217)))) ? (((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) (short)-12781)))) ? (var_5) : (((/* implicit */long long int) (-(((/* implicit */int) arr_8 [i_5] [i_5] [i_5] [i_5]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 14; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 3; i_8 < 14; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_7] [i_8 + 1] [i_8 + 1] [i_7] [i_6 - 1] [i_5]))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) max((max((((/* implicit */long long int) var_13)), ((+(var_0))))), (((/* implicit */long long int) (signed char)28)))))));
                                var_23 += ((/* implicit */long long int) ((((var_4) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)173)))))) ? ((+(((/* implicit */int) (unsigned char)12)))) : ((-(((/* implicit */int) (unsigned short)63488))))));
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) <= (((/* implicit */int) (signed char)-20)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_6 - 2] [i_5]))) : (var_0))));
                    var_26 = ((/* implicit */unsigned short) ((_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) % (arr_26 [i_5] [i_5])))));
                }
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned int i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            /* LoopNest 3 */
            for (int i_11 = 4; i_11 < 13; i_11 += 4) 
            {
                for (int i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    for (unsigned short i_13 = 0; i_13 < 15; i_13 += 2) 
                    {
                        {
                            arr_41 [i_13] [i_10] [i_11] [i_13] [i_13] &= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) arr_33 [i_11])) ? (((/* implicit */int) (unsigned short)127)) : (((/* implicit */int) (signed char)76)))))) % (((/* implicit */int) var_13))));
                            var_27 = ((/* implicit */short) max(((+((-(((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [(short)12])))))), (((/* implicit */int) var_2))));
                            var_28 = ((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (min(((unsigned short)65409), (((/* implicit */unsigned short) var_3))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)127)) - (((/* implicit */int) (unsigned char)226))))) == (((((/* implicit */_Bool) (short)9388)) ? (609310481U) : (609310481U))))))));
        }
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
        {
            var_30 = ((/* implicit */short) ((int) (+(((/* implicit */int) arr_10 [i_14])))));
            var_31 = ((/* implicit */short) (~(((/* implicit */int) min((arr_3 [i_5] [i_14] [i_14]), (((/* implicit */unsigned short) var_2)))))));
            var_32 ^= ((/* implicit */short) (-((-(3332836841U)))));
            arr_44 [i_5] [i_14] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)23578)) >> (((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-22106))) * (0U)))))));
            var_33 = min((min((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_5))), (((/* implicit */long long int) (~(var_11)))))), (((/* implicit */long long int) ((((((((/* implicit */int) var_9)) - (((/* implicit */int) (unsigned char)23)))) + (2147483647))) >> (((/* implicit */int) arr_35 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))));
        }
        /* LoopNest 2 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 1; i_16 < 12; i_16 += 3) 
            {
                {
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)8100)) >= (((/* implicit */int) (unsigned short)119))))) < ((+(((((/* implicit */int) (short)19090)) + (((/* implicit */int) var_10)))))))))));
                    arr_49 [i_16] [i_15] = ((/* implicit */long long int) var_4);
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) ((signed char) (short)14774)))));
                    var_36 *= ((/* implicit */signed char) max((((/* implicit */long long int) ((_Bool) (unsigned short)65532))), (var_0)));
                    /* LoopSeq 2 */
                    for (short i_17 = 1; i_17 < 14; i_17 += 3) /* same iter space */
                    {
                        var_37 = ((/* implicit */short) (-(((/* implicit */int) arr_30 [i_16] [i_16]))));
                        var_38 = ((/* implicit */unsigned int) ((short) (~(((/* implicit */int) arr_12 [i_16] [i_16] [5ULL] [i_16] [i_16] [i_16 + 1])))));
                        arr_52 [i_5] [i_5] [i_16] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65416))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)14774)), ((unsigned short)65417))))) : (min((((((/* implicit */_Bool) arr_20 [i_5] [i_17])) ? (arr_39 [i_15] [i_15] [i_15] [i_15] [i_15] [i_5]) : (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) arr_20 [i_16 - 1] [i_17 + 1]))))));
                    }
                    for (short i_18 = 1; i_18 < 14; i_18 += 3) /* same iter space */
                    {
                        var_39 &= ((/* implicit */unsigned short) ((((/* implicit */int) var_12)) & ((+(((/* implicit */int) min((var_14), (((/* implicit */unsigned short) (short)26523)))))))));
                        arr_57 [i_5] [(short)4] [i_16] [i_5] = ((/* implicit */unsigned short) (((+(((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_5))))) / (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned int) (unsigned char)240)))))));
                    }
                }
            } 
        } 
        var_40 = ((/* implicit */_Bool) min((var_40), ((_Bool)0)));
    }
    for (long long int i_19 = 0; i_19 < 15; i_19 += 2) /* same iter space */
    {
        var_41 ^= ((/* implicit */unsigned short) var_0);
        var_42 |= (-(((/* implicit */int) (unsigned short)11311)));
        var_43 = ((/* implicit */signed char) var_13);
    }
    for (unsigned char i_20 = 2; i_20 < 21; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_21 = 0; i_21 < 22; i_21 += 3) 
        {
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) 
            {
                {
                    var_44 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)65395)) : (((/* implicit */int) arr_63 [i_20] [i_20])))), (max((((((/* implicit */_Bool) 4275352012U)) ? (((/* implicit */int) (short)30178)) : (((/* implicit */int) (unsigned short)65393)))), ((~(((/* implicit */int) (short)3761))))))));
                    var_45 = ((/* implicit */signed char) max((((/* implicit */int) ((short) (short)19420))), (((((/* implicit */_Bool) (unsigned short)49822)) ? (((/* implicit */int) (short)-1394)) : (((/* implicit */int) (signed char)4))))));
                }
            } 
        } 
        var_46 = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) var_6)) / (min((((/* implicit */long long int) (unsigned short)127)), (-3300755196157368686LL))))));
        arr_69 [i_20] = ((((((/* implicit */int) var_13)) < (((/* implicit */int) arr_64 [i_20 + 1] [i_20 + 1])))) ? (((((/* implicit */_Bool) 8321499136LL)) ? (3685656815U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-19421))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */long long int) ((/* implicit */int) arr_64 [i_20 + 1] [i_20 - 1]))))))));
    }
    /* LoopNest 3 */
    for (int i_23 = 0; i_23 < 13; i_23 += 1) 
    {
        for (signed char i_24 = 0; i_24 < 13; i_24 += 3) 
        {
            for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
            {
                {
                    var_47 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)125)) & (((/* implicit */int) (signed char)0))));
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (unsigned short)16501)) - (16487)))));
                    var_49 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */short) arr_64 [i_23] [i_23])), (arr_22 [i_23] [i_23] [i_23] [i_23])))) ? ((+(((/* implicit */int) var_3)))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_9)), ((unsigned char)119))))));
                }
            } 
        } 
    } 
    var_50 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) var_14)))));
}
