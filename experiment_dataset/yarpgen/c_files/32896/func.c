/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32896
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) 4124086681U))));
        var_20 = ((/* implicit */unsigned char) arr_3 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_2 [i_1]))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) var_8))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_23 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2]))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            var_24 = ((/* implicit */long long int) ((((((/* implicit */int) arr_11 [i_2] [i_2] [i_2])) == (((/* implicit */int) arr_11 [i_2] [i_3] [i_2])))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_9 [i_2] [i_2]))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_9 [i_2] [i_2])), (arr_11 [i_2] [i_3] [i_2]))))));
            arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_18)))) && (((/* implicit */_Bool) var_16)))) ? (min((arr_7 [i_2]), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_6 [i_3])))))));
            arr_13 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2778946662U)) ? (170880614U) : (170880613U)))) ? (((/* implicit */int) var_0)) : ((~(((/* implicit */int) arr_10 [i_2]))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
                {
                    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-90)) || (((/* implicit */_Bool) var_16)))))))))));
                            var_26 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_17))));
                            var_27 = ((/* implicit */long long int) arr_10 [i_2]);
                            var_28 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (max((arr_22 [(short)19] [i_5] [(short)19] [i_3] [i_2]), (((/* implicit */unsigned int) arr_17 [i_2] [i_4] [i_4] [i_6]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (unsigned short)0))))))) ? (((var_11) ? (2581177729U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)174))))) : (((/* implicit */unsigned int) 2020707884))));
                        arr_31 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (((((/* implicit */_Bool) (short)25749)) ? (170880613U) : (2685484531U))))) * (((/* implicit */unsigned int) ((719409295) / ((-(967775730))))))));
                    }
                } 
            } 
            arr_32 [i_2] [i_2] = ((/* implicit */short) var_16);
        }
        /* LoopNest 2 */
        for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (unsigned char i_11 = 3; i_11 < 21; i_11 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        arr_41 [i_11] [i_2] [i_11] [i_2] = ((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_11] [i_12] [i_11]);
                        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 967775730)) ? (((/* implicit */unsigned int) -1082023329)) : (170880613U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_8))))) >= (arr_38 [i_11 + 1] [i_11] [i_11 - 2] [i_11 + 1]))))) : (((arr_29 [i_2] [6U] [i_10] [i_2] [i_11] [i_12]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [(_Bool)1])))))));
                    }
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_2)))) & (((((/* implicit */_Bool) -1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_10] [i_11 - 1]))) : (var_18)))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 22; i_13 += 3) 
                    {
                        for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                        {
                            {
                                var_32 ^= ((/* implicit */short) ((((arr_46 [i_2] [2ULL] [i_11 - 3] [i_13] [i_14]) ? (((((/* implicit */_Bool) arr_37 [i_14 - 1] [i_14] [i_14] [i_14 - 1])) ? (2685484511U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_2] [i_14 - 1] [i_11] [(unsigned char)2]))))) : (arr_38 [i_10] [i_11] [i_10] [i_2]))) & (min((arr_22 [i_2] [i_2] [i_2] [i_2] [i_14 - 1]), (((/* implicit */unsigned int) var_7))))));
                                arr_48 [i_14 - 1] [i_13] [i_13] [i_2] [i_10] [i_10] [i_2] = ((/* implicit */unsigned int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (var_4) : (arr_47 [i_2] [i_10] [i_13] [i_14]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (((((/* implicit */int) arr_28 [i_14 - 1] [i_14])) / (((/* implicit */int) arr_45 [i_11] [i_11 - 3] [i_11] [i_11] [i_11]))))));
                                var_33 = min((2685484531U), (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_10 [i_2])))) >> (((((/* implicit */int) arr_6 [i_2])) - (60)))))));
                            }
                        } 
                    } 
                    arr_49 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) arr_28 [i_11 - 1] [i_11 + 1])) : (min((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_2] [i_2])))), (((/* implicit */int) (unsigned char)32))))));
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (-(((((/* implicit */int) var_8)) + (((/* implicit */int) arr_44 [7ULL] [i_2] [i_2] [i_2] [i_2]))))))), (min((arr_39 [i_2] [i_2]), (((/* implicit */unsigned int) var_17))))));
    }
    for (unsigned int i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        arr_52 [i_15] = ((/* implicit */unsigned short) max(((unsigned char)158), ((unsigned char)221)));
        arr_53 [i_15] [(short)19] = max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)240))))), (((((/* implicit */_Bool) ((unsigned int) var_17))) ? (((((/* implicit */_Bool) 170880613U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_18))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))));
    }
    var_35 = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) -3393278924707585772LL)) : (var_16))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (3225315517U)))))), (((/* implicit */unsigned long long int) var_1))));
    var_36 -= (+(((((/* implicit */_Bool) (unsigned char)160)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) 10203848537719544812ULL)) && (((/* implicit */_Bool) var_9))))))));
}
