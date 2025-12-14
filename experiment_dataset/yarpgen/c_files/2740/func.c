/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2740
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? ((~(((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (15900504580346347373ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            arr_11 [i_1] [i_1] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1]))));
            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 - 2])) && (((/* implicit */_Bool) (short)32767))));
            var_22 *= ((/* implicit */unsigned char) ((unsigned long long int) arr_9 [i_2]));
            var_23 = ((/* implicit */long long int) var_1);
        }
        /* LoopNest 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_20 [i_1] [i_1] [i_4] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) arr_16 [(unsigned char)9] [i_5] [i_5 - 1]))));
                        arr_21 [7U] [i_1] [17LL] [i_3] [i_4] [17LL] = ((/* implicit */long long int) (-(arr_18 [i_5] [i_5] [i_1] [i_5 - 1] [i_5 - 1])));
                        arr_22 [i_1] [i_3] [(_Bool)1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_3])) << (((/* implicit */int) (signed char)20))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_4 + 2]))) : (((((/* implicit */_Bool) (unsigned short)8188)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_15))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
    {
        var_24 = ((((((/* implicit */int) (short)-31340)) + (2147483647))) << (((3967262322146179766LL) - (3967262322146179766LL))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_6] [i_6] [i_6])) * (((/* implicit */int) arr_7 [i_6] [i_6] [i_6]))));
        var_26 &= ((/* implicit */short) ((((/* implicit */int) arr_2 [i_6])) >= (((/* implicit */int) arr_2 [i_6]))));
    }
    var_27 = ((/* implicit */short) var_15);
    var_28 += ((/* implicit */short) ((((/* implicit */_Bool) (+((~(var_11)))))) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))) : (7073768655962905859ULL))))))))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        for (int i_8 = 3; i_8 < 8; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 12; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        for (int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            {
                                arr_39 [i_7] [i_8] [(short)2] [10ULL] [i_7] [8U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_7] [i_8])) ? (((/* implicit */int) arr_8 [i_8])) : (((/* implicit */int) (short)32032))))) / (max((((/* implicit */unsigned int) var_10)), (arr_38 [i_7] [8] [i_7] [i_8] [8]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)254)))));
                                var_29 = ((/* implicit */short) ((513643433U) << (((((/* implicit */int) (short)-16543)) + (16557)))));
                                var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_19 [i_7] [i_8] [i_9]))) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) var_2))))), (4586404117249331739ULL)));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 0; i_12 < 12; i_12 += 1) 
                    {
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            {
                                arr_45 [8LL] [i_12] [i_9] [i_8] [i_8] [i_8] [i_7] = (~(((/* implicit */int) arr_16 [i_8 - 3] [i_8 + 4] [i_8 + 2])));
                                var_31 = ((/* implicit */long long int) ((4503565267632128ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (arr_33 [i_7] [i_8 + 3] [i_8 + 3] [i_8])));
                    arr_46 [i_9] [i_8] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) var_17)) : (arr_30 [i_8] [(short)4] [i_8]))));
                }
            } 
        } 
    } 
}
