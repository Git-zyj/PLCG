/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224589
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_20 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_4))))))));
                var_21 = ((/* implicit */short) arr_2 [i_1] [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned int i_3 = 3; i_3 < 18; i_3 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned short i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
                            {
                                var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4])) >> (((((/* implicit */int) arr_2 [i_2] [i_2])) - (51576)))))) ? (arr_1 [i_3 - 1] [i_5 - 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                                arr_19 [i_6] [i_5] [i_5] [i_4] [i_3] [(_Bool)1] [i_6] = ((/* implicit */unsigned short) (+((+(arr_16 [i_2] [i_3] [i_4] [i_5] [i_5] [i_6] [i_6])))));
                                var_23 = ((/* implicit */unsigned char) ((long long int) arr_3 [i_3 - 1] [i_6]));
                            }
                            var_24 -= ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) var_11)) ? (arr_7 [i_3] [(unsigned char)19] [i_5]) : (((/* implicit */int) var_19))))) / (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (896391148U))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_3] [i_3]);
                /* LoopSeq 3 */
                for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    var_26 = ((/* implicit */unsigned char) ((((_Bool) ((arr_13 [(short)14]) ? (((/* implicit */int) (unsigned short)19492)) : (arr_7 [i_2] [(short)5] [i_7])))) ? (((((/* implicit */_Bool) arr_21 [i_3] [(unsigned short)8] [i_3] [i_3 - 2])) ? (((int) arr_7 [0] [i_3] [i_7])) : (((/* implicit */int) ((short) var_13))))) : ((~(((/* implicit */int) (_Bool)1))))));
                    arr_23 [i_2] [i_3] [i_7] [i_7] = ((/* implicit */unsigned char) arr_10 [(unsigned char)1] [15LL] [i_2]);
                    var_27 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_7 - 3] [i_3 + 1])) && (arr_12 [i_7 - 2] [i_3 - 2]))));
                    var_28 = ((/* implicit */short) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) arr_8 [i_3 - 3] [i_7 - 1])) ? (arr_8 [i_3 + 1] [i_7 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 3] [i_7 + 1])))))));
                }
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                {
                    arr_27 [(unsigned char)18] [(_Bool)1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (arr_21 [i_8] [i_3] [(short)2] [i_2]))) + (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)196), (arr_26 [i_8] [i_3] [i_2])))))))) ? (((((/* implicit */int) arr_6 [i_2] [i_3 - 2])) * (((/* implicit */int) arr_6 [i_8] [i_3 - 2])))) : ((-((+(((/* implicit */int) (unsigned char)233))))))));
                    arr_28 [i_8] [i_3] [i_2] = ((/* implicit */short) ((unsigned short) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))))));
                    /* LoopNest 2 */
                    for (int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned char) ((var_13) == ((~(((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))))));
                                var_30 += ((/* implicit */unsigned long long int) (~(((long long int) var_2))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 0; i_11 < 20; i_11 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_17 [i_2] [i_2] [i_3] [i_3] [i_3 - 1] [14U] [(unsigned short)0])))))))));
                        var_32 &= ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */long long int) arr_14 [i_3 - 3] [i_3 - 1] [19U] [i_8])), (arr_3 [4] [(unsigned short)18]))));
                        arr_39 [i_2] [(unsigned short)9] [i_2] [i_2] [4] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((int) arr_37 [i_3 - 2] [i_3])))));
                    }
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_30 [i_8] [i_3 - 3] [i_2] [i_2]))))));
                }
                for (unsigned short i_12 = 0; i_12 < 20; i_12 += 1) /* same iter space */
                {
                    var_34 |= ((/* implicit */_Bool) (((((-(((/* implicit */int) ((arr_35 [i_12] [i_3] [(_Bool)1] [(short)8]) >= (((/* implicit */unsigned int) var_13))))))) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (((/* implicit */unsigned long long int) arr_35 [(short)10] [i_3] [i_12] [i_2])) : (arr_17 [i_2] [i_3] [4U] [i_3] [i_3] [(unsigned short)6] [(unsigned char)16])))) ? (((((/* implicit */_Bool) -7613297388181490174LL)) ? (arr_3 [12ULL] [(short)0]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_3] [3LL]))))) + (1547172418861258478LL))) - (17LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 20; i_13 += 2) 
                    {
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            {
                                arr_48 [i_2] [i_3] [i_12] [i_13] [i_14] = arr_7 [i_2] [(_Bool)1] [i_12];
                                var_35 ^= arr_44 [4U] [i_13] [i_12] [i_3] [1];
                            }
                        } 
                    } 
                    var_36 = ((((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (unsigned char)51)) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(unsigned char)18] [i_2] [i_3] [i_12] [i_12]))) : (arr_46 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (((/* implicit */long long int) (+(var_0)))))) & (((/* implicit */long long int) (~(((/* implicit */int) arr_5 [i_3]))))));
                    var_37 &= ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_25 [i_3] [i_3] [i_3 - 3])), (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (var_0)))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [i_12])) / (((/* implicit */int) var_2))))), (18010000462970880ULL)))));
                    var_38 = max((((/* implicit */int) (!((!(((/* implicit */_Bool) var_2))))))), (max((((/* implicit */int) arr_26 [12ULL] [12LL] [(unsigned short)13])), ((+(((/* implicit */int) var_14)))))));
                }
                var_39 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_2] [i_2] [i_2] [i_3])) ? (var_16) : (((/* implicit */unsigned long long int) arr_20 [i_2] [i_3] [(_Bool)1]))))))) | (min((arr_11 [i_2] [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) ((int) arr_22 [12LL] [i_3] [(signed char)16])))))));
            }
        } 
    } 
}
