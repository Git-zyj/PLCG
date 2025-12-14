/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229706
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
    var_14 = ((/* implicit */long long int) var_6);
    var_15 = (-((~(((/* implicit */int) var_0)))));
    var_16 &= ((/* implicit */_Bool) var_2);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                var_17 |= ((/* implicit */_Bool) ((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) (unsigned short)20276)) - (20263)))));
                var_18 = ((/* implicit */int) ((unsigned int) ((((/* implicit */int) (signed char)93)) > (((/* implicit */int) arr_1 [i_0])))));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 18; i_3 += 1) 
                {
                    var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))))) ? (((/* implicit */int) var_8)) : (arr_7 [i_0] [i_0] [i_2] [(unsigned short)3] [(unsigned short)3] [i_3])));
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_3]))));
                    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 3595512844151586592LL)) ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1])));
                }
            }
            for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
            {
                var_22 += ((/* implicit */_Bool) (((-(((/* implicit */int) arr_5 [i_0] [i_1] [i_4 - 2] [i_4 - 2])))) - (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_4])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_4 - 1])) : (((/* implicit */int) var_3))))));
                /* LoopSeq 1 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) 4503599493152768ULL))));
                    var_24 = ((/* implicit */short) (+((~(((/* implicit */int) arr_10 [i_1]))))));
                }
                var_25 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? ((-(((/* implicit */int) var_4)))) : ((+(var_13)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_1 [i_0]))))) : ((-(((((/* implicit */_Bool) var_2)) ? (arr_8 [i_0] [i_0] [i_1] [i_4] [i_4] [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
            }
            var_26 = ((/* implicit */short) 18442240474216398847ULL);
            var_27 = ((/* implicit */int) var_5);
        }
        for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))))) ? (((int) var_5)) : ((+(((/* implicit */int) arr_12 [i_0] [i_6] [i_6] [i_0] [i_6])))))))));
            arr_18 [i_0] [(short)16] [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) ? (((((/* implicit */unsigned int) arr_16 [i_6] [i_0])) & (arr_14 [i_0] [i_0] [i_0] [i_0] [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_11 [i_6] [i_6] [i_0] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
        }
        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
        {
            var_29 = ((/* implicit */unsigned short) (~((~(var_13)))));
            var_30 *= ((/* implicit */unsigned int) (((+(arr_20 [i_0] [i_0]))) / ((+(((/* implicit */int) var_6))))));
        }
        /* LoopSeq 4 */
        for (signed char i_8 = 1; i_8 < 17; i_8 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
            {
                var_31 = ((/* implicit */signed char) ((((long long int) arr_0 [i_0] [i_8 + 1])) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5668)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (2199023255551LL)))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) (unsigned short)16360)))))));
                arr_26 [i_8] [i_8] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) ((unsigned long long int) var_12))))));
            }
            for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
            {
                arr_31 [i_10] [i_8] [i_0] = (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(var_5))))))));
                arr_32 [i_8] [i_0] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) arr_7 [i_10] [i_8] [i_10] [i_8] [i_10] [i_10])) | (858419946U))) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_4 [i_8 - 1])) : (((((/* implicit */int) var_12)) | (((/* implicit */int) (_Bool)1)))))))));
                var_32 = ((/* implicit */long long int) (+(((unsigned int) arr_2 [10U] [i_10]))));
                var_33 = ((/* implicit */short) var_7);
            }
            var_34 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2777877009U)) ? ((~(arr_20 [i_0] [i_0]))) : ((+(((/* implicit */int) (_Bool)1)))))))));
            var_35 = ((/* implicit */signed char) (-(((/* implicit */int) arr_17 [i_0]))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 18; i_12 += 1) 
            {
                var_36 = ((unsigned char) arr_39 [i_0] [i_0] [i_0]);
                var_37 = ((/* implicit */unsigned int) ((arr_11 [i_12] [i_11] [i_0] [i_0]) & (-938727325)));
            }
            arr_40 [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0] [i_11])) >> (((arr_27 [i_0] [i_11] [i_0]) + (2050335528)))));
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned long long int i_14 = 0; i_14 < 18; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 18; i_15 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned int) ((unsigned long long int) var_12));
                            var_39 = ((/* implicit */int) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))) >= (arr_33 [i_13] [i_0])));
                            var_40 = ((/* implicit */short) (~(((/* implicit */int) arr_25 [i_14] [i_13] [i_0]))));
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) 4503599493152788ULL))) ? (arr_43 [i_13] [i_11] [i_13]) : (((/* implicit */int) ((_Bool) 11092801110226129128ULL)))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            var_42 = ((/* implicit */short) (+(arr_46 [i_0] [i_16] [i_0] [i_0] [i_0] [i_16])));
            var_43 = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) arr_0 [i_16] [(signed char)1])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((!(var_0)))))) : (((/* implicit */int) ((var_5) && (arr_22 [4] [i_16]))))));
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_4))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_4)) && (var_5))))) : (((((/* implicit */_Bool) var_4)) ? (4503599493152786ULL) : (((((/* implicit */_Bool) arr_25 [12ULL] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)38))) : (18442240474216398829ULL)))))));
        }
        for (signed char i_17 = 0; i_17 < 18; i_17 += 4) 
        {
            arr_52 [i_0] [15LL] [i_17] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)24980)))))));
            var_45 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) (~(((/* implicit */int) (signed char)118))))))) ? ((~(((arr_39 [i_0] [i_17] [i_0]) << (((4503599493152794ULL) - (4503599493152785ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) & ((+(var_10))))))));
        }
    }
    /* LoopSeq 1 */
    for (short i_18 = 3; i_18 < 22; i_18 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_19 = 0; i_19 < 25; i_19 += 1) 
        {
            var_47 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_53 [i_18])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_18 + 2] [19] [19])) ? (var_7) : (var_7)))) : ((+((+(2950841441U)))))));
            var_48 ^= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4095)) ? (((/* implicit */unsigned long long int) var_9)) : (18442240474216398832ULL)))) ? (((/* implicit */unsigned long long int) arr_56 [i_18 + 1] [i_18 - 1] [i_18 - 1])) : ((~(4100627058828165848ULL)))))));
            var_49 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_53 [i_18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_18] [i_19])))))) : (((((/* implicit */_Bool) arr_56 [i_18] [i_18] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4503599493152780ULL)))))));
            var_50 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_54 [10ULL] [i_18 + 3])))));
            var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_56 [i_18] [i_18 + 1] [i_18 - 1])))) ? (((/* implicit */long long int) ((((((/* implicit */int) arr_53 [i_18])) >> (((1047141952) - (1047141943))))) / (((/* implicit */int) (signed char)86))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) arr_55 [i_18] [i_19]))))) ? (((/* implicit */long long int) ((int) arr_53 [i_18 + 1]))) : (-3232164752412267666LL)))));
        }
        var_52 = ((/* implicit */unsigned short) ((var_5) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1410846737)) ? (((/* implicit */int) arr_55 [i_18] [i_18])) : (27678241)))) >= ((~(4503599493152768ULL)))))) : (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_53 [i_18])) * (((/* implicit */int) var_5))))))));
    }
}
