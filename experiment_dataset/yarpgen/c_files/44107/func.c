/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44107
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) <= (((/* implicit */int) ((short) ((((/* implicit */long long int) ((/* implicit */int) var_12))) <= (2305807824841605120LL)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            var_15 *= ((/* implicit */short) ((max((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_0 [i_0])), (var_12)))), (((unsigned long long int) var_2)))) <= (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) -664946335))))))))));
            var_16 &= ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) min((var_10), (((/* implicit */long long int) (short)22872))))))));
            var_17 += ((/* implicit */unsigned short) max((((unsigned char) (!(((/* implicit */_Bool) var_13))))), (((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 1] [i_1])) > (((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))))));
        }
        for (unsigned int i_2 = 3; i_2 < 23; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        var_18 = max((((long long int) arr_4 [i_3] [i_3] [i_3 + 2])), (((/* implicit */long long int) min((arr_4 [i_2 - 3] [i_3] [i_3 + 2]), (var_7)))));
                        var_19 = ((/* implicit */unsigned long long int) (unsigned char)247);
                    }
                } 
            } 
            var_20 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) ((var_0) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))), ((-(((/* implicit */int) arr_12 [i_0] [i_2 - 3] [i_2 - 1] [i_2 - 1] [i_2 + 2]))))));
        }
        for (unsigned int i_5 = 3; i_5 < 23; i_5 += 4) /* same iter space */
        {
            arr_16 [i_5] [i_5] [i_5] = ((/* implicit */int) arr_9 [i_0]);
            /* LoopSeq 4 */
            for (unsigned short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_7 = 0; i_7 < 25; i_7 += 2) 
                {
                    var_21 ^= ((short) ((arr_3 [i_5 - 2] [i_5 - 3]) || (((/* implicit */_Bool) var_0))));
                    var_22 *= ((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) (!(((((/* implicit */_Bool) 2648585852U)) || (((/* implicit */_Bool) var_11)))))))));
                    var_23 = ((/* implicit */unsigned int) arr_11 [9LL]);
                }
                for (int i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    var_24 = ((/* implicit */long long int) ((((/* implicit */int) ((8388544) < (var_8)))) & (((/* implicit */int) ((unsigned short) ((var_11) >> (((1380944930510780354LL) - (1380944930510780296LL)))))))));
                    /* LoopSeq 1 */
                    for (int i_9 = 3; i_9 < 24; i_9 += 3) 
                    {
                        var_25 -= ((/* implicit */long long int) arr_25 [i_5] [i_6] [i_5]);
                        var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-21040))));
                    }
                }
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 25; i_11 += 2) 
                    {
                        {
                            var_27 += ((/* implicit */long long int) ((616513022132500528ULL) > (17830231051577051088ULL)));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((_Bool) 1918406922)) ? (((/* implicit */int) (unsigned short)27849)) : (((/* implicit */int) (unsigned char)255))))) > (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27194)) >> (((/* implicit */int) (_Bool)0))))) ? (min((((/* implicit */long long int) (unsigned char)23)), (0LL))) : (arr_28 [i_5 - 1] [i_5] [i_5] [i_5])))));
                            var_29 += ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) ((((((/* implicit */int) (short)-21040)) + (2147483647))) << (((((arr_1 [i_0]) + (119658027))) - (28))))))) == (((((/* implicit */int) ((unsigned char) arr_2 [i_10]))) >> (0LL)))));
                            arr_33 [i_10] [i_5 + 2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8329))) ^ (4131179140320953757LL)));
                        }
                    } 
                } 
                arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(var_9)))))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 25; i_12 += 4) 
                {
                    for (int i_13 = 0; i_13 < 25; i_13 += 2) 
                    {
                        {
                            var_30 = ((/* implicit */int) var_3);
                            var_31 = ((/* implicit */long long int) min((var_31), ((~(((((/* implicit */_Bool) 4114127573404940120LL)) ? (((((-4114127573404940120LL) + (9223372036854775807LL))) >> (((/* implicit */int) (unsigned char)0)))) : (((/* implicit */long long int) ((int) var_5)))))))));
                            var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) arr_37 [i_0] [i_0] [i_0]))));
                        }
                    } 
                } 
            }
            for (int i_14 = 3; i_14 < 23; i_14 += 3) 
            {
                arr_43 [i_0] |= ((/* implicit */long long int) ((unsigned short) min((((/* implicit */unsigned int) ((unsigned short) var_2))), (min((var_0), (((/* implicit */unsigned int) (short)22872)))))));
                arr_44 [i_14 + 1] [i_14 - 3] [i_14 + 1] &= ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_8)))));
            }
            for (short i_15 = 0; i_15 < 25; i_15 += 4) 
            {
                /* LoopSeq 1 */
                for (int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    var_33 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((unsigned int) (short)6447)))) ? (((/* implicit */int) ((_Bool) var_2))) : (((((/* implicit */_Bool) ((unsigned short) arr_48 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */int) ((unsigned short) arr_12 [i_0] [i_0] [i_0] [i_0] [(unsigned short)14]))) : (((/* implicit */int) (unsigned char)63))))));
                    arr_49 [i_0] [i_5] [i_15] [i_16] [i_16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_46 [i_16] [i_15] [i_5] [i_0]))));
                    arr_50 [i_0] [i_5] [i_0] [6] [6] [i_16] = ((/* implicit */signed char) min(((-(min((((/* implicit */unsigned long long int) arr_38 [i_0] [i_5 + 2] [i_15])), (var_6))))), (((/* implicit */unsigned long long int) (short)21040))));
                    /* LoopSeq 2 */
                    for (signed char i_17 = 1; i_17 < 23; i_17 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_4 [i_0] [i_5] [i_15])) - ((-(((/* implicit */int) (unsigned char)58)))))) | (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_17] [i_17] [(signed char)10] [i_17 + 1] [i_17] [i_17] [i_17]))) < (var_0))))));
                        var_35 = ((/* implicit */signed char) min((((int) (!(((/* implicit */_Bool) (unsigned char)101))))), (((/* implicit */int) ((((/* implicit */_Bool) (short)22872)) && (((/* implicit */_Bool) arr_41 [i_5 - 1] [i_5] [i_5 - 2] [i_5])))))));
                        var_36 = ((/* implicit */long long int) arr_32 [14] [i_0] [23U] [i_15] [i_16] [10ULL] [i_17]);
                    }
                    for (unsigned char i_18 = 1; i_18 < 24; i_18 += 2) 
                    {
                        var_37 = ((/* implicit */long long int) var_12);
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) (short)22872)) && (((/* implicit */_Bool) 4309455948769139276ULL))))) << (((((long long int) min((var_6), (((/* implicit */unsigned long long int) arr_28 [i_0] [(unsigned char)8] [i_0] [i_0]))))) - (2988644470952028290LL)))));
                        var_39 = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) var_0)), (17830231051577051088ULL))), (((/* implicit */unsigned long long int) (unsigned char)127))));
                        arr_57 [i_18] [i_5] [(short)5] [i_16] [i_18] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((/* implicit */unsigned long long int) arr_45 [i_5 - 2] [i_18 + 1] [i_18])) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6)))))));
                    }
                    arr_58 [i_0] [i_0] [i_5] [i_15] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)0))))), (616513022132500528ULL)));
                }
                arr_59 [i_0] [i_5] [i_5] [i_15] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((10831920937856389501ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_51 [i_15]))))))) ? (((/* implicit */int) ((unsigned short) ((short) arr_17 [i_0])))) : ((-(((/* implicit */int) min(((short)32767), ((short)32767))))))));
                var_40 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((int) -3991908882655771022LL))) - (((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)30393)))))) : (((unsigned long long int) arr_38 [i_15] [i_15] [6LL]))))));
                var_41 += ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) 234499003))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) -4114127573404940120LL)) ? (((/* implicit */int) (unsigned char)69)) : (((/* implicit */int) (unsigned char)133))))) ? (arr_18 [i_0]) : (((((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10))))) - (5097409412594448805LL)))));
            }
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 25; i_19 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_42 = ((/* implicit */unsigned short) arr_23 [i_0] [i_0]);
                    var_43 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) arr_41 [i_0] [i_5] [i_19] [i_20])))));
                }
                arr_65 [i_0] [i_5 - 2] = ((/* implicit */short) ((((/* implicit */long long int) var_8)) | (var_10)));
                arr_66 [i_19] [0ULL] [i_19] [i_19] = ((short) var_10);
            }
        }
        var_44 = ((/* implicit */short) ((unsigned char) 2371316665U));
    }
    var_45 = ((/* implicit */unsigned short) min((var_45), (((/* implicit */unsigned short) var_3))));
    var_46 = 616513022132500528ULL;
    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */long long int) 4073462697U)) > (1380944930510780354LL)))), (((((/* implicit */_Bool) ((signed char) var_10))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (-7880529465646988645LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
