/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45783
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
    var_14 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)25542)), (1569830443U)))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_13))))), (((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned int) (short)-20410))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)4005)), (5015075328692923590ULL))) : (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)25560))))))))));
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) != (var_0)))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 1073479680))))) >= (((/* implicit */int) (signed char)112)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) min((13431668745016628016ULL), (13431668745016628025ULL)));
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    var_17 ^= ((/* implicit */_Bool) ((((/* implicit */long long int) max((2147483647), (-1312772268)))) - (((max((((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_1])), (var_0))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)218)))))));
                    arr_9 [6ULL] [i_1] [i_0 - 1] [6ULL] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-115)) ? (5015075328692923590ULL) : (((/* implicit */unsigned long long int) -1312772268))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        arr_12 [i_0] [17LL] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) var_2))) * (((/* implicit */int) arr_8 [i_0]))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_0 - 3] [(signed char)0])) ? (((1073479664) - (((/* implicit */int) var_2)))) : (((/* implicit */int) arr_4 [i_2 - 2]))));
                        var_19 = ((((/* implicit */_Bool) ((arr_10 [i_0]) - (((/* implicit */int) arr_8 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25542))) : (arr_1 [i_0 + 2]));
                    }
                    arr_13 [i_0 - 1] [15LL] [i_0] = var_5;
                }
                for (unsigned short i_4 = 0; i_4 < 23; i_4 += 4) 
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */long long int) var_4);
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((-1073479677) != (((/* implicit */int) (signed char)(-127 - 1))))))) ^ (arr_18 [i_0] [i_1] [i_4] [i_4] [19U])));
                    }
                    for (unsigned short i_6 = 0; i_6 < 23; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (~(10494991916528416221ULL))))));
                        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                        var_23 += ((/* implicit */int) ((((/* implicit */_Bool) ((13431668745016628026ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_0 + 2] [i_0] [(unsigned char)3])))))) ? (((((/* implicit */_Bool) (signed char)55)) ? (9U) : (4294967289U))) : ((~(2772588892U)))));
                    }
                    /* vectorizable */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_24 ^= ((/* implicit */signed char) arr_10 [i_0]);
                        arr_25 [i_0] [i_0] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) arr_8 [i_0]);
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
                    {
                        arr_29 [i_0] [i_0] = ((/* implicit */short) 9205357638345293824ULL);
                        arr_30 [i_0] = ((/* implicit */unsigned int) (~(9241386435364257792ULL)));
                        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) var_4)) << (((((/* implicit */int) arr_24 [i_0 + 2] [i_0 - 1] [i_4] [i_8])) - (11343))))))));
                        arr_31 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_3 [i_0])) / (((var_3) % (-1073479673)))));
                    }
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_11 [(unsigned short)21] [i_1] [i_4] [i_0 - 2] [i_1]))));
                    arr_32 [i_0] [(_Bool)1] = ((/* implicit */int) (unsigned short)25540);
                }
                /* vectorizable */
                for (int i_9 = 2; i_9 < 22; i_9 += 1) 
                {
                    arr_36 [i_0] [18ULL] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (arr_28 [i_0 - 1] [i_0 - 1] [i_9 + 1] [i_1])));
                    arr_37 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_1)) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [22U] [i_1] [i_1] [i_1] [i_1]))))) : (((/* implicit */int) arr_3 [i_0]))));
                    arr_38 [i_0] = ((/* implicit */int) arr_34 [i_0]);
                }
                /* LoopSeq 1 */
                for (short i_10 = 0; i_10 < 23; i_10 += 3) 
                {
                    var_27 = ((_Bool) ((long long int) ((var_10) ? (4294967287U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)8192))))));
                    var_28 = ((/* implicit */short) ((arr_17 [20] [i_1] [i_10] [i_10] [i_1] [i_1]) && (((/* implicit */_Bool) arr_35 [i_10] [i_1] [i_1] [i_0]))));
                    arr_42 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) max((((/* implicit */unsigned short) (signed char)5)), ((unsigned short)25533)))))) != (((1U) << (((/* implicit */int) var_10))))));
                    arr_43 [i_0] [(signed char)4] = ((/* implicit */unsigned int) ((int) (unsigned short)41421));
                }
            }
        } 
    } 
    var_29 &= ((/* implicit */unsigned char) 865241884);
    /* LoopNest 2 */
    for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
    {
        for (long long int i_12 = 3; i_12 < 13; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 4) 
                    {
                        for (long long int i_15 = 1; i_15 < 13; i_15 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned short) var_1);
                                arr_57 [i_11] [i_12 + 3] [i_13] [i_15] [i_15] = ((/* implicit */signed char) ((unsigned char) ((arr_10 [i_13]) | (arr_10 [i_12 - 3]))));
                                arr_58 [i_15] [i_15] = ((unsigned char) ((((int) (_Bool)1)) / (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                                arr_59 [i_11 - 1] [i_11] [i_15] [i_11] = ((/* implicit */int) ((short) max((((/* implicit */short) arr_48 [i_11] [i_11] [i_15])), ((short)-32758))));
                            }
                        } 
                    } 
                } 
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-20)), (3387144759U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (10843455318552017796ULL)))));
                arr_60 [i_11 - 1] [i_11] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)120))) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) ((arr_44 [i_12 + 2]) < (((/* implicit */int) arr_24 [i_11] [i_12] [i_12 + 1] [i_11]))))) : (((/* implicit */int) (short)32758)));
            }
        } 
    } 
}
