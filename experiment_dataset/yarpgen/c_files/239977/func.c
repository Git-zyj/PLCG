/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239977
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
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_4 [i_0]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 3])))))));
                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (5679656230193603842LL)))) ? (min((((/* implicit */long long int) arr_1 [i_1])), (max((((/* implicit */long long int) arr_0 [i_1])), (-5679656230193603843LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_4 [i_0]), (1460183516619391067LL)))) ? (((/* implicit */int) arr_3 [i_0 + 3] [i_0 - 1])) : (((/* implicit */int) ((unsigned short) 868144008U)))))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) -5679656230193603842LL);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (min((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19912))) != (var_4)))), (((long long int) var_3)))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 3 */
    for (unsigned char i_2 = 4; i_2 < 18; i_2 += 2) /* same iter space */
    {
        var_18 += ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 18; i_3 += 2) 
        {
            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [i_2] [i_3] [i_3] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */short) ((((arr_13 [i_4 + 2] [i_3] [i_3] [i_3 + 1]) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_13 [i_4 + 2] [i_4] [i_4] [i_3 - 3])))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 + 2])))))));
                                var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)7488)))))));
                                var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) 0LL))) && (((/* implicit */_Bool) max((2269322406U), (((/* implicit */unsigned int) arr_7 [i_2] [i_3]))))))))) > (arr_10 [i_3]))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_7 = 3; i_7 < 18; i_7 += 4) 
                    {
                        var_21 += ((_Bool) ((((((/* implicit */_Bool) -5679656230193603825LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_4] [i_3] [i_3]))) : (-5679656230193603842LL))) + (((/* implicit */long long int) arr_11 [i_7 - 3]))));
                        var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */int) arr_17 [i_4 + 3] [i_2 - 1] [i_3 - 4] [i_3] [i_7 - 2])) < (((/* implicit */int) arr_17 [i_4 + 3] [i_2 - 1] [i_3 - 4] [i_3] [i_7 - 2]))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_23 += ((/* implicit */_Bool) (unsigned char)128);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned char) arr_14 [i_2]);
                            var_25 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) arr_28 [i_2] [i_2] [i_4] [i_2] [i_8])) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))) ? ((~(((/* implicit */int) (unsigned char)249)))) : (((/* implicit */int) arr_12 [i_3] [i_3] [i_4 - 1]))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_10 = 3; i_10 < 15; i_10 += 2) 
                    {
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            {
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)58059)) < (((/* implicit */int) arr_9 [i_10] [i_2 - 1] [i_4 - 1]))))) << (((/* implicit */int) min(((unsigned char)5), (((/* implicit */unsigned char) (_Bool)1)))))));
                                var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned short) arr_8 [i_10]))), ((-(12999184521849924590ULL))))))));
                                var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_25 [i_4 - 2] [i_3] [i_3] [i_2] [i_2 - 2])))) || (((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_11] [i_4])), (arr_28 [i_2] [i_10] [i_4] [i_3] [i_2])))) / ((-(((/* implicit */int) arr_19 [i_2] [i_10] [i_4] [i_10] [i_11] [i_10])))))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) 262147999);
                }
            } 
        } 
    }
    for (unsigned char i_12 = 4; i_12 < 18; i_12 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                {
                    var_30 = (((-(((/* implicit */int) min((arr_38 [i_12] [i_13]), (((/* implicit */signed char) arr_13 [i_12] [i_13] [i_14] [i_14]))))))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 5447559551859627021ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (567453553048682496LL)))) ? (((((/* implicit */_Bool) arr_19 [i_14] [i_13] [i_14] [i_14] [i_12] [i_14])) ? (((/* implicit */int) arr_41 [i_14] [i_14])) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_13] [i_14] [i_14])))) : (((/* implicit */int) arr_30 [i_12] [i_12] [i_14] [i_13] [i_13] [i_14] [i_14])))));
                    var_31 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_37 [i_12]))));
                    var_32 = ((/* implicit */int) (+(((((/* implicit */_Bool) 14930165828862673087ULL)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_28 [i_12] [i_12] [i_12] [i_12] [i_14]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_13]))) / (3516578244846878543ULL)))))));
                    var_33 = ((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)65323)) & (((/* implicit */int) arr_18 [i_12])))), (((((/* implicit */int) arr_18 [i_12])) & (((/* implicit */int) arr_18 [i_12]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_34 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)32768))));
            var_35 = ((/* implicit */unsigned char) ((567453553048682484LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)38)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_16 = 4; i_16 < 18; i_16 += 2) /* same iter space */
    {
        var_36 += ((/* implicit */int) ((short) arr_43 [i_16 + 1]));
        var_37 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-121))));
        var_38 += ((/* implicit */_Bool) ((((/* implicit */_Bool) 262148006)) ? (((/* implicit */int) (short)12989)) : (((/* implicit */int) (unsigned char)130))));
        var_39 += ((/* implicit */unsigned char) ((3516578244846878539ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_16 + 1] [i_16 - 4] [i_16])))));
        var_40 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)151)) + (arr_25 [i_16] [i_16] [i_16] [i_16] [i_16]))) % ((+(((/* implicit */int) (_Bool)1))))));
    }
}
