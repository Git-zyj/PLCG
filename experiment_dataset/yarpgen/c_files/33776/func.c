/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33776
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_4] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)127))));
                                var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3] [7U])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)373))) : (1006632960U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_1] [i_1] [i_2] [(signed char)11])) == (((/* implicit */int) (signed char)-87))))) : (((int) min((arr_6 [i_1] [i_2] [i_1] [i_1]), ((short)940))))));
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (+(arr_1 [i_1])))), ((~(arr_12 [i_1] [i_0] [i_0] [i_1] [i_1])))));
                arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((arr_11 [i_1] [i_1] [i_1] [i_1] [i_0]) < (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)29916))))), (((var_7) * (((/* implicit */unsigned long long int) 3092143727U))))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_6))) % (2977617261462157569LL))))));
        var_19 = ((/* implicit */short) min((var_19), ((short)940)));
    }
    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((min((arr_21 [i_6] [i_6]), (((/* implicit */long long int) arr_20 [i_6])))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned char)180)))))));
        arr_22 [i_6] = (-(var_5));
        arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))) ? (min((arr_21 [i_6] [i_6]), (arr_21 [i_6] [i_6]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_20 [i_6])))))));
        /* LoopNest 3 */
        for (signed char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_24 [i_7] [i_7])) ? (var_5) : (((/* implicit */int) arr_24 [i_7] [i_7]))))));
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_27 [i_8]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_33 [i_10] [i_10] = ((/* implicit */long long int) ((int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_24 [(short)8] [i_10])) : (((/* implicit */int) (signed char)86))))));
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 16; i_11 += 1) 
        {
            arr_37 [i_10] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-8299702828489808372LL)))) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (short)24603))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) <= (17ULL)))) : (((/* implicit */int) (unsigned char)29)))) : ((-(((/* implicit */int) arr_28 [i_11] [6U] [6U] [i_10]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_12 = 0; i_12 < 16; i_12 += 2) 
            {
                arr_42 [i_10] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_38 [i_12] [i_11] [i_11] [i_10])) : (((/* implicit */int) arr_35 [i_10] [i_10] [i_12]))))) ? (1270472002989427307ULL) : (((/* implicit */unsigned long long int) arr_21 [i_10] [i_10]))));
                var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) 107076991)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_20 [i_11]))))));
                arr_43 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_30 [i_12] [i_12])) & (arr_19 [i_11])))) ? (((/* implicit */unsigned long long int) 64512)) : (((arr_28 [i_10] [i_11] [i_12] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_10] [i_12]))) : (0ULL)))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_47 [i_11] [i_11] [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_35 [i_11] [i_11] [i_10])) : (684202838)));
                arr_48 [i_10] [i_11] [i_13] = ((/* implicit */unsigned long long int) ((((long long int) 3288334345U)) != (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_13] [i_13])))));
                var_24 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) (unsigned char)197)))));
                var_25 -= ((/* implicit */short) ((1823517997) != (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)29931)) : (((/* implicit */int) (_Bool)1))))));
            }
            arr_49 [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (arr_34 [i_10] [i_11] [i_11])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)22056)) >> (((/* implicit */int) (_Bool)0))))) : (((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_10] [i_11])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_10] [i_10] [(short)22] [i_11])) << (((/* implicit */int) arr_28 [i_10] [i_10] [12ULL] [8LL]))))) : ((((+(var_14))) - (arr_45 [i_10] [i_11] [i_11] [i_10])))));
            var_26 -= ((/* implicit */signed char) (short)-22057);
        }
        arr_50 [i_10] = ((/* implicit */unsigned int) (((-(arr_44 [i_10] [i_10] [i_10] [i_10]))) <= (((/* implicit */unsigned long long int) ((((_Bool) (signed char)127)) ? (((unsigned int) arr_38 [i_10] [i_10] [i_10] [i_10])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 4294967295U)) || (((/* implicit */_Bool) 2147483647)))))))))));
        var_27 = ((/* implicit */unsigned int) ((long long int) 2147483647));
        arr_51 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [8U] [i_10])) ? (((/* implicit */int) arr_24 [(short)12] [i_10])) : (((/* implicit */int) (short)389))))) ? (((((/* implicit */_Bool) arr_24 [2U] [i_10])) ? (((/* implicit */int) arr_24 [16U] [i_10])) : (((/* implicit */int) arr_24 [(signed char)18] [i_10])))) : ((+(((/* implicit */int) (short)-22043))))));
    }
    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) var_7))));
}
