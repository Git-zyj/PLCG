/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49438
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) min((var_7), (((/* implicit */int) (unsigned short)39380)))))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26174)) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 2) 
        {
            var_21 ^= ((/* implicit */signed char) arr_3 [i_1 - 1]);
            var_22 ^= ((/* implicit */unsigned short) arr_1 [i_1]);
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26169)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) (unsigned short)26126)))))));
            var_24 = ((/* implicit */short) (unsigned short)63191);
        }
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)26155)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53403))) : (1443997747U)))) < (min((((/* implicit */unsigned long long int) (signed char)-99)), (var_15)))))) << (((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) (unsigned short)63095)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3])))))) - (95))))))));
            arr_10 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) var_10);
            var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? ((+(((/* implicit */int) min((arr_6 [i_3]), (arr_0 [i_0])))))) : (((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)42375))))))));
        }
        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
        {
            arr_13 [i_0] [i_4] |= ((/* implicit */unsigned char) arr_12 [i_4]);
            var_27 += ((/* implicit */int) (~(((unsigned long long int) min(((_Bool)1), ((_Bool)0))))));
            var_28 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned short)53403)) : (((/* implicit */int) (signed char)-122))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)109))))) ? (((/* implicit */long long int) var_13)) : (min((min((-7346497962460656790LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) (unsigned short)28373))))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                {
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
                    {
                        {
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) arr_11 [i_0] [i_7]))));
                            var_30 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)32296)) ? (((((/* implicit */_Bool) var_15)) ? (660036476725435663ULL) : (((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_4] [i_4] [i_6]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_17)))))));
                            var_31 -= ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 24; i_9 += 1) 
                {
                    {
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (unsigned short)59518)), (arr_11 [i_9] [i_0])))))) ? (((((/* implicit */int) var_5)) & (((/* implicit */int) var_5)))) : (((/* implicit */int) ((short) arr_9 [i_0]))))))));
                        arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned char) (unsigned short)45051);
                    }
                } 
            } 
        }
        var_33 = ((/* implicit */signed char) arr_2 [i_0]);
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 10; i_10 += 3) 
    {
        var_34 = ((/* implicit */signed char) 3589511377U);
        arr_33 [(signed char)2] &= (+(((unsigned int) (signed char)-75)));
        arr_34 [i_10] = ((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 1; i_11 < 8; i_11 += 2) 
    {
        for (unsigned short i_12 = 2; i_12 < 10; i_12 += 1) 
        {
            {
                arr_40 [i_11 + 2] |= ((/* implicit */unsigned short) ((short) (((!(((/* implicit */_Bool) arr_22 [(unsigned char)13] [i_12] [i_12] [i_12] [i_12])))) ? (((int) (_Bool)0)) : (((/* implicit */int) arr_3 [i_12])))));
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                            {
                                var_35 ^= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_11])) ? (660036476725435663ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_14] [(unsigned short)10] [i_14])))))))));
                                var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (signed char)68))))) ? (min((((/* implicit */unsigned int) arr_1 [i_13])), (1499147424U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_36 [i_12] [i_14])))))))) & (14146025174985859885ULL))))));
                            }
                            for (unsigned int i_16 = 0; i_16 < 11; i_16 += 3) 
                            {
                                arr_50 [i_16] [10U] [i_13] [10U] [i_11] &= ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((unsigned short) arr_49 [i_11] [(unsigned short)10]))) || (((/* implicit */_Bool) arr_27 [i_11 + 3] [i_12] [i_11 + 3] [i_11 + 3] [i_11] [i_11])))));
                                arr_51 [i_13] [(unsigned char)6] |= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)254))));
                            }
                            arr_52 [i_11] [i_11] [i_13] [i_11] [i_11] = ((/* implicit */unsigned char) min((min((((/* implicit */int) (short)-24348)), (((((/* implicit */_Bool) (unsigned short)44564)) ? (-1871509786) : (((/* implicit */int) (_Bool)0)))))), (((/* implicit */int) ((signed char) arr_2 [i_11 - 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */int) (unsigned short)35278)) : (((/* implicit */int) var_3))));
}
