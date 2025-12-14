/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200676
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */_Bool) arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */short) (-(((/* implicit */int) max(((short)19428), ((short)-19429))))));
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) var_7))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_16 [i_1] [i_2] [i_2] [i_0 - 1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned int) max((((/* implicit */int) arr_14 [i_1] [i_1] [i_5])), (var_7)))), (min((var_9), (((/* implicit */unsigned int) var_8))))))));
                                var_15 -= ((/* implicit */unsigned int) ((int) 45620205));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_18 [i_0 - 1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_6)))) || (((/* implicit */_Bool) var_11))))), ((+(max((arr_16 [i_0 + 2] [i_0 + 2] [i_0] [(unsigned char)0] [6]), (((/* implicit */long long int) (_Bool)1))))))));
    }
    for (unsigned int i_7 = 1; i_7 < 16; i_7 += 1) /* same iter space */
    {
        var_16 += ((/* implicit */unsigned char) var_3);
        /* LoopSeq 3 */
        for (unsigned int i_8 = 1; i_8 < 18; i_8 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned short) (~(min((arr_7 [(unsigned char)11] [17U] [i_8]), (arr_7 [i_7 + 2] [i_7 + 2] [i_8])))));
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    {
                        var_18 -= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) arr_3 [i_9 + 1])), (var_9))), (((/* implicit */unsigned int) arr_11 [i_7] [i_8] [i_9 + 1] [(_Bool)1]))))), (((((/* implicit */_Bool) arr_11 [i_7] [i_8 + 1] [i_7 + 3] [i_9 + 1])) ? (max((0ULL), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) -551897402))))));
                        var_19 = ((/* implicit */short) arr_28 [i_7] [i_8] [i_7] [i_8]);
                        var_20 = ((/* implicit */int) ((unsigned char) arr_20 [i_8]));
                    }
                } 
            } 
            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((((/* implicit */unsigned short) (short)15)), (min((((/* implicit */unsigned short) ((short) (signed char)-50))), ((unsigned short)0))))))));
        }
        for (unsigned int i_11 = 1; i_11 < 18; i_11 += 3) /* same iter space */
        {
            var_22 -= ((/* implicit */long long int) min(((unsigned short)63622), (((/* implicit */unsigned short) (unsigned char)158))));
            var_23 *= ((/* implicit */unsigned long long int) max((2U), (((/* implicit */unsigned int) (signed char)-117))));
            var_24 = ((/* implicit */unsigned short) var_3);
        }
        /* vectorizable */
        for (unsigned int i_12 = 1; i_12 < 18; i_12 += 3) /* same iter space */
        {
            var_25 ^= ((/* implicit */int) arr_29 [7ULL] [i_7] [i_7] [7ULL] [i_12]);
            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_34 [i_7] [i_12])) : (arr_37 [i_7] [i_7])));
        }
        var_27 = ((/* implicit */unsigned long long int) min((var_27), ((-(2447166569576912376ULL)))));
        var_28 += ((/* implicit */_Bool) -2147483640);
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_7] [i_7] [(signed char)8])) ? (((/* implicit */int) arr_31 [i_7 + 1] [i_7] [i_7] [i_7])) : (var_7)))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)13)) : (var_7))) : (((/* implicit */int) arr_0 [i_7 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((209806323U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) < (arr_38 [14U] [i_7] [i_7]))))) : (arr_7 [i_7 + 2] [i_7] [(_Bool)1])));
    }
    /* vectorizable */
    for (unsigned int i_13 = 1; i_13 < 16; i_13 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_13 - 1] [i_13 + 2] [i_13 - 1])))))));
        var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) || (((((/* implicit */int) (unsigned short)63622)) == (((/* implicit */int) (unsigned short)0))))));
    }
    /* LoopNest 2 */
    for (unsigned short i_14 = 0; i_14 < 20; i_14 += 4) 
    {
        for (long long int i_15 = 0; i_15 < 20; i_15 += 1) 
        {
            {
                var_32 += ((/* implicit */unsigned int) (short)-16);
                var_33 = ((/* implicit */unsigned long long int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) + ((-(4294967293U))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_14] [i_15])) ? (((((/* implicit */_Bool) var_7)) ? (var_7) : (var_5))) : ((~(((/* implicit */int) var_8)))))))));
            }
        } 
    } 
    var_34 -= ((/* implicit */long long int) var_5);
    var_35 = ((/* implicit */unsigned int) (-(var_5)));
}
