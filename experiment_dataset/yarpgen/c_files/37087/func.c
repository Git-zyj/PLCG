/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37087
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
    var_16 = ((/* implicit */short) (~(((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1950907643U)) ? (var_5) : (var_7)))) : (((unsigned long long int) (unsigned short)105))))));
    var_17 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) (!(((((arr_2 [0U]) * (((/* implicit */unsigned long long int) 1405435137U)))) < (((/* implicit */unsigned long long int) arr_3 [i_0]))))));
                            arr_9 [i_1] [i_1] [i_2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) 3654784925422948012LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_0 [i_3 + 1])))) : ((~(((var_9) & (-3654784925422948013LL)))))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 1])) ? (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_0]) : (((/* implicit */long long int) 229991089U)))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_14))))))) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 + 1])) : ((-(((/* implicit */int) arr_5 [i_0] [i_3]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
                {
                    for (int i_5 = 1; i_5 < 14; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 15; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((signed char) (signed char)70))) ? (((/* implicit */int) var_6)) : (((var_0) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_0] [i_6] [i_0] [i_6])) : (((/* implicit */int) (unsigned short)63))))))));
                                arr_19 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_1] [(_Bool)1] [i_6])) ? ((~(((((/* implicit */_Bool) var_14)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) -1529704262)))))) : (((/* implicit */unsigned long long int) var_7))));
                                arr_20 [i_0] [(signed char)16] [i_4] [i_4] [(signed char)16] [i_0] [i_5] |= ((/* implicit */int) (!(((/* implicit */_Bool) ((((int) (signed char)-79)) & (((((/* implicit */_Bool) var_3)) ? (-2136525405) : (((/* implicit */int) (unsigned short)22279)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_7 = 3; i_7 < 15; i_7 += 2) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_9 = 2; i_9 < 16; i_9 += 3) 
                        {
                            arr_27 [i_0] [i_7] [i_7] [i_8] [i_0] = ((/* implicit */unsigned long long int) var_9);
                            var_21 = ((/* implicit */int) max((var_21), (arr_14 [i_0] [i_0] [i_7] [i_9])));
                        }
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 414816500914062299ULL)) ? (-6244857802280935889LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64)))));
                        var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(var_3))))));
                        arr_28 [i_7] [i_7] [i_7] [i_7] = min((((arr_18 [i_7 - 2] [6LL] [12U] [i_7] [i_7 + 2] [i_7 - 2] [4U]) ? (((/* implicit */int) arr_18 [i_7] [i_7 + 2] [i_7] [i_8] [i_7] [i_7 + 2] [i_7])) : (arr_15 [i_7 - 3] [i_7 - 2]))), (((int) (~(var_10)))));
                    }
                    var_24 = ((/* implicit */int) 16777215U);
                    var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0]))));
                    var_26 = ((/* implicit */long long int) ((((((/* implicit */_Bool) -1529704260)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_7 - 1] [i_7 - 3] [i_7 + 1]))) : ((((_Bool)0) ? (var_3) : (var_5))))) >> (((10595693450392096428ULL) - (10595693450392096426ULL)))));
                }
            }
        } 
    } 
    var_27 *= var_1;
    /* LoopSeq 1 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        /* LoopNest 3 */
        for (int i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            for (unsigned int i_12 = 1; i_12 < 17; i_12 += 3) 
            {
                for (signed char i_13 = 2; i_13 < 17; i_13 += 1) 
                {
                    {
                        var_28 = ((/* implicit */int) var_0);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (signed char i_14 = 1; i_14 < 16; i_14 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(4999209941449287927LL)))) - ((~(arr_36 [i_14] [i_13 - 2] [i_10])))));
                            arr_43 [i_10] [i_11] [i_11] [i_10] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (arr_36 [i_14] [i_10] [i_10]) : (((/* implicit */unsigned long long int) -1529704260)))));
                            arr_44 [i_10] [i_11] [i_11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 4294967295U)) ? (var_13) : (arr_41 [1LL] [i_11] [i_11] [i_11] [i_11]))) <= (((var_5) / (var_7)))));
                            arr_45 [i_11] [i_11] [i_11] = var_2;
                        }
                        for (signed char i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            arr_48 [i_10] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (~(arr_29 [i_13])));
                            arr_49 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_46 [i_10] [i_10] [i_11] [i_10] [i_13 - 1] [i_13 - 1]))))) ? (((/* implicit */int) (!(((((/* implicit */int) var_1)) == (((/* implicit */int) var_0))))))) : ((~(((/* implicit */int) arr_33 [i_13]))))));
                            var_30 = ((/* implicit */long long int) ((unsigned char) arr_46 [i_10] [0U] [i_13 - 1] [i_12] [i_11] [i_10]));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 3; i_16 < 15; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((arr_35 [i_10] [i_11] [i_12 - 1] [16ULL]) ? (((/* implicit */unsigned int) 1272747769)) : (arr_32 [i_10])));
                            var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_5))) ? (((/* implicit */int) arr_47 [i_11] [i_13 - 2] [i_11] [i_16 + 1] [i_16 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10] [i_11] [i_10] [i_11])) && (arr_35 [i_10] [i_10] [i_12] [i_13 + 1]))))));
                            var_33 = (-(arr_32 [i_10]));
                            var_34 = ((/* implicit */int) (((~(arr_39 [i_11] [i_12] [i_11]))) | (arr_39 [13U] [i_11] [i_11])));
                        }
                        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
                        {
                            var_35 = ((/* implicit */unsigned int) max((max((-3654784925422948042LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (-(((-650148789) | (((/* implicit */int) (signed char)-71)))))))));
                            var_36 |= ((/* implicit */unsigned int) ((min((arr_36 [i_10] [i_12 + 1] [i_13 - 2]), (arr_36 [i_17] [i_12 + 1] [i_13 - 2]))) >> (((((unsigned long long int) 530718357)) - (530718297ULL)))));
                        }
                    }
                } 
            } 
        } 
        var_37 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [(signed char)0] [i_10] [i_10] [i_10] [i_10] [(signed char)0]))) : (arr_29 [i_10]))));
        arr_56 [i_10] [i_10] = ((/* implicit */int) (~(arr_41 [i_10] [i_10] [(_Bool)0] [13LL] [i_10])));
    }
}
