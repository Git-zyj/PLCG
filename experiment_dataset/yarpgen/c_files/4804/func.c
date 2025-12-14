/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4804
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_11 = (((!(((/* implicit */_Bool) arr_10 [i_4] [i_3] [i_1] [i_0])))) ? (((((/* implicit */_Bool) -9006804704524531708LL)) ? (arr_10 [i_0] [i_0] [i_2] [i_2]) : (arr_10 [i_4] [i_4] [i_4] [i_4]))) : (((arr_10 [i_0] [i_0] [i_0] [i_0]) & (arr_10 [i_1] [i_2] [i_3] [i_4]))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_3] [i_4] = (~(min((((/* implicit */unsigned int) (signed char)0)), (4079460755U))));
                                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4079460733U) % (215506541U)))) ? (((/* implicit */unsigned int) ((int) arr_12 [i_0] [i_1] [i_1] [i_2] [i_3] [i_3]))) : (((((/* implicit */_Bool) ((unsigned short) -1022540325))) ? (((((/* implicit */_Bool) 165478498U)) ? (215506559U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-90))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)0))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_11 [i_2])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) arr_2 [10LL])))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */short) (~(((unsigned long long int) (signed char)-90))));
                                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) 4129488798U)) ? (((/* implicit */int) max((arr_28 [i_5]), (((/* implicit */unsigned short) var_7))))) : ((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 4) 
                {
                    for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned int) (-(1022540324)));
                            var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 2878625891U))));
                            var_18 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-39))) - (165478474U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (4129488812U) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1313525721)) || (((/* implicit */_Bool) (signed char)15))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1022540322))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    for (int i_13 = 0; i_13 < 12; i_13 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_28 [i_13]))));
                            arr_44 [i_6] [i_6] [i_12] [i_12] [i_12] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_12] [i_13])) / (((/* implicit */int) arr_3 [2] [(short)5]))))) ? (max((arr_27 [i_5] [i_5] [i_5]), (var_8))) : (((((/* implicit */_Bool) (unsigned short)50081)) ? (arr_14 [(unsigned short)2] [i_6] [6ULL] [6ULL] [i_12] [(unsigned short)2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_5] [i_5])))))))) ? (((((/* implicit */_Bool) ((arr_38 [i_5] [i_13]) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) arr_41 [i_5] [i_5] [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5835))) : ((-(1661276343516753618ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
                            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) arr_19 [i_5] [i_5])))) : ((~(((/* implicit */int) (unsigned char)157))))))) : (((((/* implicit */_Bool) arr_30 [i_5] [i_6])) ? (arr_31 [i_13] [i_12] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5])))))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */int) min((var_9), (((signed char) arr_21 [i_5]))))) & (((((_Bool) arr_32 [i_5])) ? (((/* implicit */int) ((_Bool) 1661276343516753609ULL))) : (min((arr_37 [i_6] [i_6] [i_6]), (((/* implicit */int) arr_8 [i_5]))))))));
                            var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 12; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        {
                            arr_52 [i_5] [i_5] [i_14] [i_14] [i_6] [i_14] = ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_42 [i_15] [i_5] [i_5] [i_6] [i_5])))))), (((unsigned short) max((arr_40 [i_5] [i_6]), (((/* implicit */unsigned long long int) var_3)))))));
                            var_23 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_1 [i_14] [i_14])) ? (arr_1 [i_5] [i_5]) : (((/* implicit */unsigned long long int) -217761525)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (4294967276U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29847))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_16 = 0; i_16 < 12; i_16 += 1) 
                {
                    for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            {
                                var_24 ^= ((/* implicit */unsigned short) (((-(((((/* implicit */_Bool) 217761525)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_5] [i_16]))) : (arr_50 [(signed char)0] [i_18] [i_18] [i_18]))))) | (((min((((/* implicit */unsigned long long int) arr_60 [i_5] [i_6] [i_5] [4] [i_17] [i_18])), (arr_40 [i_17] [(short)0]))) ^ (((unsigned long long int) -1171859580))))));
                                var_25 ^= ((/* implicit */signed char) (~(((unsigned long long int) 215506537U))));
                                var_26 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
