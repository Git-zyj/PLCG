/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36527
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) arr_2 [i_0]);
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) var_9))));
            var_20 -= ((/* implicit */unsigned int) (~(((int) arr_5 [i_0] [i_0]))));
            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_10) ? (max((((int) var_13)), (((/* implicit */int) var_14)))) : (min((((int) (unsigned short)3194)), (((/* implicit */int) (unsigned char)13)))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_22 = var_11;
                        /* LoopSeq 1 */
                        for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */int) var_15)) ^ (((/* implicit */int) (unsigned char)24))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) (-(arr_13 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4])))) : (arr_6 [i_0] [i_1] [i_0]))))));
                            var_24 ^= ((/* implicit */_Bool) var_12);
                            var_25 = ((/* implicit */unsigned char) var_11);
                            var_26 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) arr_14 [i_0] [(_Bool)1] [i_2] [i_3] [i_4])) + (16776704U))) << (((/* implicit */int) var_18))));
                        }
                        var_27 = ((/* implicit */unsigned char) ((min((((long long int) (unsigned char)233)), (((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))))) | (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (arr_4 [i_0]))) ^ (var_1))))));
                        var_28 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_29 = ((/* implicit */long long int) ((((/* implicit */int) (short)22126)) / (((/* implicit */int) var_6))));
            var_30 = var_1;
        }
        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) ((max((((/* implicit */int) arr_1 [i_0])), (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_12)))))));
    }
    for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
    {
        arr_21 [i_6] = ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)49)) << (((arr_20 [i_6]) + (6794657813153684381LL)))))) ? (-951794771) : ((-(((/* implicit */int) var_0))))))) >= (((((/* implicit */_Bool) ((long long int) (signed char)-3))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_18 [i_6]) > (((/* implicit */int) (unsigned short)37548)))))) : (((((arr_20 [i_6]) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1)))))));
        arr_22 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_18 [i_6])) > (4066668278900014977ULL)));
        var_32 = ((/* implicit */int) ((((/* implicit */long long int) arr_18 [i_6])) ^ (min((((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) ((unsigned int) var_8)))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) /* same iter space */
    {
        var_33 += ((/* implicit */unsigned int) (-(((/* implicit */int) var_0))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 0; i_8 < 24; i_8 += 4) 
        {
            var_34 = ((/* implicit */unsigned int) ((((/* implicit */int) min((min(((unsigned short)55865), (((/* implicit */unsigned short) arr_23 [i_7] [i_8])))), (max(((unsigned short)222), (((/* implicit */unsigned short) arr_23 [i_7] [i_8]))))))) >= (((/* implicit */int) arr_23 [i_7] [i_8]))));
            var_35 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_7 - 1] [i_7 - 1])) ? (((((/* implicit */_Bool) 1691685134)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_23 [i_7] [i_7])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1943904741)) ? (((/* implicit */int) arr_23 [i_8] [i_7])) : (((/* implicit */int) var_4))))) ? (((/* implicit */int) var_6)) : (1048064))) : (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) arr_24 [i_8] [i_7 - 1])) : (((/* implicit */int) arr_24 [i_7 - 1] [i_7])))));
        }
        arr_27 [i_7] = ((/* implicit */unsigned char) ((2512266720925467897ULL) > (2512266720925467876ULL)));
    }
    var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55212)) ? (((-8081331867970396923LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)36197))))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)42)) / (((/* implicit */int) (unsigned char)63)))))))) ? (min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) 10481176216429067605ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_3))))) : (((var_10) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40499)))))));
}
