/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46227
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) || (((/* implicit */_Bool) arr_1 [i_0 + 3])))))));
        var_21 = arr_1 [i_0];
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 2; i_2 < 18; i_2 += 3) 
        {
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_13 [i_4] [(_Bool)1] [i_3] [i_4] = ((/* implicit */unsigned int) max((((long long int) (short)-26246)), (((/* implicit */long long int) ((((arr_9 [i_4] [(signed char)16] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) (short)4351))))) | (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64420))) & (154543637U))))))));
                        var_22 = ((/* implicit */short) max((arr_3 [i_1]), ((+(((/* implicit */int) ((unsigned short) -16LL)))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) max((arr_12 [i_1] [i_1] [i_1] [i_1] [6ULL] [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    /* LoopSeq 3 */
    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (_Bool)0))));
        var_25 = ((/* implicit */long long int) max((((/* implicit */int) max((arr_11 [i_5] [i_5]), (arr_11 [i_5] [i_5])))), (((((/* implicit */int) arr_6 [i_5] [i_5])) & (((/* implicit */int) arr_6 [i_5] [i_5]))))));
    }
    for (unsigned char i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(14LL)))) ? (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)143))) >= (arr_16 [(short)10])))) & (((/* implicit */int) (!(((/* implicit */_Bool) -2339642249348959747LL))))))) : (((((((/* implicit */int) (short)-14775)) > (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) arr_11 [i_6] [(unsigned short)0])) : ((~(((/* implicit */int) (short)32766))))))));
        /* LoopNest 2 */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    arr_22 [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -2339642249348959748LL)) ? (1048572U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_8])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6])))))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)24715)) || (((/* implicit */_Bool) 4140423659U)))))))) : (((arr_9 [(unsigned short)9] [i_7] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)4364))))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
                    {
                        for (int i_10 = 0; i_10 < 17; i_10 += 2) 
                        {
                            {
                                arr_29 [i_7] [i_7] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) max(((unsigned short)64431), ((unsigned short)2583))))) | (((/* implicit */int) ((unsigned char) arr_10 [i_6] [i_7] [i_8] [i_9] [i_10] [i_10])))));
                                arr_30 [i_6] [i_7] [11ULL] [i_7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-120)))))))) < ((((~(((/* implicit */int) (unsigned short)32089)))) | (((/* implicit */int) arr_6 [i_7 - 1] [i_7 - 1]))))));
                                var_28 -= ((/* implicit */short) (~(((((/* implicit */int) arr_21 [i_7 - 1] [i_7 - 1] [i_9] [(short)8])) & (((/* implicit */int) (unsigned char)195))))));
                                var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7 - 1] [i_7] [i_7 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((((/* implicit */int) (unsigned char)195)) >> (((8904216439154603655LL) - (8904216439154603641LL)))))))) : ((+(((3849211809U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
        {
            for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
            {
                {
                    arr_35 [i_12] [i_11] = ((((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [i_12])) : (((/* implicit */int) arr_27 [i_12] [i_12] [i_11] [i_6] [i_6] [i_6])))) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_6] [i_11] [i_12] [i_6] [i_11] [i_12])) || (((/* implicit */_Bool) arr_27 [i_12] [i_12] [i_11] [i_6] [i_6] [i_6]))))));
                    var_30 = ((/* implicit */signed char) arr_6 [i_6] [(signed char)0]);
                    var_31 = ((/* implicit */short) arr_7 [i_6] [i_6] [i_6]);
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 3) 
    {
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (+(((((/* implicit */int) arr_36 [i_13])) << (((/* implicit */int) arr_36 [i_13])))))))));
        var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58385)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-97))) : (-1138876588032068945LL)));
        /* LoopNest 2 */
        for (unsigned char i_14 = 3; i_14 < 23; i_14 += 2) 
        {
            for (int i_15 = 0; i_15 < 24; i_15 += 2) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) (short)5407)) == (((/* implicit */int) (signed char)14))))), ((-(arr_39 [i_13] [i_13] [i_13]))))) * (((((/* implicit */_Bool) (unsigned short)26837)) ? (arr_39 [i_14 + 1] [i_15] [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_14 - 1])))))));
                    var_35 *= ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_15] [i_14])) || (((/* implicit */_Bool) arr_41 [i_15]))))) % (((/* implicit */int) arr_38 [i_15] [i_14])))) == (((/* implicit */int) ((_Bool) -6128776819194349428LL)))));
                }
            } 
        } 
        arr_42 [i_13] = ((/* implicit */signed char) arr_39 [i_13] [i_13] [3U]);
    }
    /* LoopNest 2 */
    for (int i_16 = 2; i_16 < 23; i_16 += 3) 
    {
        for (short i_17 = 0; i_17 < 24; i_17 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    for (long long int i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        {
                            arr_51 [i_17] = ((/* implicit */short) (+(((arr_40 [i_16] [i_16] [i_18] [i_19]) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)43)) / (((/* implicit */int) arr_45 [i_16] [i_17] [i_17])))))))));
                            var_36 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) arr_47 [i_16 - 2] [i_16 - 1] [i_18])));
                            arr_52 [i_16] [i_17] [i_17] [i_18] [i_19] [i_19] = ((/* implicit */unsigned long long int) ((unsigned short) (+(((/* implicit */int) arr_36 [i_16 + 1])))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    for (unsigned long long int i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        for (unsigned int i_22 = 3; i_22 < 22; i_22 += 2) 
                        {
                            {
                                var_37 -= ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_60 [i_16 - 2])) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_48 [i_20] [(unsigned short)14] [i_21])), ((unsigned short)49683)))) - (55)))))));
                                var_38 = ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_16] [i_17] [i_16] [11U])) / (((/* implicit */int) arr_41 [i_22]))));
                                var_39 = ((/* implicit */unsigned int) (unsigned short)1107);
                                var_40 = ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) (_Bool)1)))))), (max((((((/* implicit */_Bool) (unsigned char)149)) ? (-247938225) : (((/* implicit */int) arr_45 [i_17] [i_21] [i_17])))), (((/* implicit */int) ((_Bool) (signed char)115)))))));
                                arr_61 [i_17] [i_17] [i_20] [i_17] [i_21] [i_20] [i_22] = ((/* implicit */int) max((((/* implicit */long long int) (((~(4140423665U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))))), (((long long int) 2820107994031908366LL))));
                            }
                        } 
                    } 
                } 
                var_41 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((3122956815U) >> (((/* implicit */int) (_Bool)1))))) ? ((+((+(((/* implicit */int) arr_56 [i_16] [i_16] [i_16] [i_16])))))) : (((/* implicit */int) max((arr_58 [i_16 + 1] [i_16 + 1] [i_16 - 1] [i_16]), (min((arr_57 [i_17] [i_16] [i_17] [i_16]), ((_Bool)0))))))));
            }
        } 
    } 
}
