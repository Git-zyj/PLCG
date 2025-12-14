/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46827
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
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) -5317489054451781555LL)), (min((((/* implicit */unsigned long long int) var_7)), (8635448389074342316ULL)))));
            var_20 = ((/* implicit */long long int) (unsigned char)0);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_2 = 0; i_2 < 13; i_2 += 3) 
            {
                var_21 = ((/* implicit */long long int) var_6);
                arr_9 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_17);
                var_22 = ((/* implicit */unsigned char) min((var_22), ((unsigned char)32)));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3] [i_3] [i_1] [i_0 - 1])) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (796155529U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8381))))))));
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
                {
                    var_24 = (-(((var_3) ? (6U) : (((/* implicit */unsigned int) var_13)))));
                    var_25 = ((/* implicit */unsigned char) 2259817487U);
                }
                for (unsigned char i_5 = 0; i_5 < 13; i_5 += 2) /* same iter space */
                {
                    var_26 = ((/* implicit */_Bool) 8635448389074342289ULL);
                    var_27 = ((/* implicit */unsigned char) ((unsigned int) var_8));
                    var_28 = ((/* implicit */_Bool) (unsigned char)214);
                    var_29 = ((_Bool) (short)16129);
                }
                for (long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_30 *= ((/* implicit */unsigned char) var_15);
                    var_31 = ((/* implicit */_Bool) min((var_31), (((var_2) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_3] [i_6])))))));
                }
                for (unsigned char i_7 = 3; i_7 < 9; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        var_32 -= ((/* implicit */_Bool) -393412716);
                        arr_26 [i_0] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] [i_3] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        var_33 = ((/* implicit */signed char) (((~(3370183842U))) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)82)))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_34 = ((((/* implicit */_Bool) ((var_10) + (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_9] [i_7 - 2]))) : (((long long int) (unsigned char)84)));
                        var_35 = ((/* implicit */unsigned short) (unsigned char)86);
                        var_36 = ((/* implicit */int) arr_2 [i_0] [i_1] [i_7]);
                    }
                    for (short i_10 = 0; i_10 < 13; i_10 += 3) 
                    {
                        arr_31 [i_0 + 1] [i_3] [i_3] [i_0] [i_10] [i_0] [i_0 - 2] = ((/* implicit */short) 4294967295U);
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095672076U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (8635448389074342324ULL)))) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_7 - 2] [i_0 + 1])) : (((/* implicit */int) var_14))));
                        var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(8635448389074342322ULL))))));
                    }
                    var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) var_11))));
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) 9811295684635209299ULL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3)))) : (((((/* implicit */int) var_1)) ^ (((/* implicit */int) (unsigned char)211))))));
                    var_41 = ((/* implicit */int) max((var_41), ((+(((/* implicit */int) var_9))))));
                    arr_32 [i_3] [i_3] [i_1] [i_1] [i_3] = ((/* implicit */int) ((8635448389074342326ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 + 4] [i_3] [i_1] [i_0])))));
                }
                var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) (-(((/* implicit */int) ((short) (unsigned char)44))))))));
                var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (unsigned char)173))));
            }
        }
        for (unsigned char i_11 = 0; i_11 < 13; i_11 += 4) 
        {
            var_44 = ((/* implicit */_Bool) (unsigned char)255);
            var_45 -= var_10;
        }
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
        {
            for (short i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                {
                    var_46 = ((/* implicit */long long int) var_10);
                    var_47 -= ((/* implicit */long long int) (-(((/* implicit */int) (short)6))));
                    var_48 = ((/* implicit */signed char) max((((/* implicit */int) arr_23 [i_13] [i_12] [i_0 - 1] [i_0 - 1] [i_0 - 2])), (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */int) (unsigned char)54)) : (((/* implicit */int) (unsigned char)46))))));
                    var_49 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_12)), (9811295684635209277ULL)));
                    var_50 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned char)51)), (8635448389074342326ULL)));
                }
            } 
        } 
        var_51 = ((/* implicit */int) var_5);
    }
    /* vectorizable */
    for (unsigned int i_14 = 3; i_14 < 21; i_14 += 3) 
    {
        arr_45 [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_43 [i_14] [i_14 - 3])) <= (8635448389074342326ULL))))));
        arr_46 [18LL] &= ((/* implicit */unsigned char) var_6);
        /* LoopNest 3 */
        for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
        {
            for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
            {
                for (long long int i_17 = 4; i_17 < 21; i_17 += 3) 
                {
                    {
                        var_52 = (unsigned char)130;
                        var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (unsigned short)19310))));
                    }
                } 
            } 
        } 
        var_54 = ((/* implicit */short) var_15);
    }
    var_55 += ((/* implicit */_Bool) var_16);
    var_56 = ((/* implicit */unsigned int) min((var_56), (((/* implicit */unsigned int) var_2))));
}
