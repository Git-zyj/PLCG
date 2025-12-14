/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38283
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_2 [i_0]))));
            arr_7 [i_1] [i_0] [i_0] |= ((/* implicit */unsigned int) min((-443158792614133131LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) <= (arr_1 [i_0]))))));
        }
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_10 [(signed char)4] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? ((+(-301386299))) : (990366290)));
            arr_11 [i_0] [i_2] [i_2] = ((/* implicit */short) arr_4 [i_0] [9ULL]);
            arr_12 [i_0] [12LL] [i_2] = ((/* implicit */short) max((((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0])) && (((/* implicit */_Bool) arr_8 [i_2]))))), (arr_0 [i_0])));
        }
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 22; i_3 += 4) 
        {
            arr_16 [i_0] = ((/* implicit */_Bool) (short)25437);
            var_21 = (-(max(((~(-6279359520113898897LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) -4359162769838149814LL)) ? (((/* implicit */int) var_0)) : (arr_8 [(unsigned short)21])))))));
        }
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 2; i_5 < 20; i_5 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                    {
                        {
                            arr_26 [i_5] = (((~(((/* implicit */int) arr_9 [i_5] [i_4] [i_4])))) / (301386293));
                            arr_27 [10LL] [(signed char)14] [i_6] [i_6] &= (-(((/* implicit */int) var_18)));
                        }
                    } 
                } 
                arr_28 [i_0] [i_4] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)8191))));
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                {
                    arr_32 [i_5] = ((/* implicit */unsigned short) (-(arr_15 [i_5])));
                    var_22 = ((/* implicit */long long int) 15211975859861863478ULL);
                    var_23 ^= var_1;
                }
                arr_33 [i_5] [i_4] [i_4] = ((/* implicit */short) (~(-211821835937487864LL)));
            }
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                arr_38 [i_0] [i_0] [i_9] = ((/* implicit */int) 17399670354780319587ULL);
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    arr_42 [i_0] [i_4] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_12) << (((((/* implicit */int) var_13)) - (37541)))))) ? (((/* implicit */int) arr_35 [i_9] [i_4] [i_9] [i_10])) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_7))))))) <= (((((/* implicit */_Bool) 2138696770U)) ? (min((2156270526U), (((/* implicit */unsigned int) (unsigned short)36591)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18865)))))));
                    arr_43 [i_0] [i_4] [i_4] [i_9] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_8 [i_10])) / (var_14)))) ? (arr_36 [10] [i_4] [i_10]) : (((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0])) - (((/* implicit */int) arr_13 [i_10])))))))) ? (-2110583176902930328LL) : (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (signed char i_11 = 3; i_11 < 21; i_11 += 2) 
                {
                    arr_46 [i_0] [i_0] [i_0] [i_0] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(750751414675287392ULL)))) ? (arr_17 [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))))));
                    arr_47 [i_0] [i_11] [20LL] [i_11] = ((/* implicit */int) ((((long long int) arr_14 [i_4] [i_11])) ^ (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))));
                }
            }
            var_24 = ((/* implicit */unsigned int) (short)-819);
            arr_48 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0]) / (((/* implicit */long long int) max((2868517691U), (1222445458U))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (1043458658U)))) * ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (4762642598847174543LL)))))) : (min((((((/* implicit */_Bool) 1495326741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (var_6))), (((/* implicit */unsigned long long int) 1495326739))))));
            /* LoopSeq 2 */
            for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) 
            {
                var_25 = ((/* implicit */unsigned short) max(((((_Bool)1) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) var_16)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [(short)3] [(short)15] [i_12] [i_12]))))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) var_15)) ? (2158910891U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(short)21] [11LL] [i_12]))))), (((/* implicit */unsigned int) var_7)))))));
                /* LoopNest 2 */
                for (signed char i_13 = 0; i_13 < 22; i_13 += 1) 
                {
                    for (unsigned int i_14 = 1; i_14 < 19; i_14 += 2) 
                    {
                        {
                            arr_57 [i_4] [i_0] [i_12] [i_4] [i_14] &= ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_29 [i_14 + 3] [i_14 + 3] [i_14 + 1] [i_14 + 1] [i_14])) | (min((15211975859861863490ULL), (((/* implicit */unsigned long long int) 2777846959U)))))), (((/* implicit */unsigned long long int) (short)23191))));
                            var_26 ^= ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) 1972405585U)) ? (((/* implicit */int) arr_22 [i_14] [i_4] [i_4] [i_0])) : (((/* implicit */int) var_17)))), (((/* implicit */int) (signed char)-117)))), (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_58 [i_0] [i_0] = ((/* implicit */unsigned int) min((((long long int) arr_6 [i_12])), (((/* implicit */long long int) min((((/* implicit */int) arr_4 [i_0] [i_0])), (1495326739))))));
            }
            for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_16 = 0; i_16 < 22; i_16 += 3) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            arr_68 [i_0] [i_4] [i_15] [i_15] [i_15] [(unsigned short)7] [i_17] |= ((/* implicit */_Bool) var_3);
                            arr_69 [i_0] [i_0] [i_15] [i_0] [(_Bool)1] [i_16] [i_4] = ((/* implicit */int) min((var_15), (min((((/* implicit */long long int) 2138696759U)), ((+(0LL)))))));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_60 [(short)3] [i_4] [i_4]))));
            }
        }
        /* LoopNest 2 */
        for (short i_18 = 0; i_18 < 22; i_18 += 2) 
        {
            for (short i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                {
                    arr_75 [i_19] [i_18] [i_19] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) (+(10024713882781385758ULL))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((-5243580346655964667LL) <= (((/* implicit */long long int) ((/* implicit */int) (short)25994))))))) : (1023913455U)));
                    var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) (signed char)15))));
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-6))))))) ? (var_15) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7991860243453050722ULL)) ? (((/* implicit */int) (unsigned short)3)) : (((/* implicit */int) (signed char)(-127 - 1))))))));
}
