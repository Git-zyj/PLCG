/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27087
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
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [(_Bool)1] [i_0])) <= ((~(((/* implicit */int) arr_2 [i_0 + 2]))))));
        var_11 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_0]), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0])))))) ? ((~(arr_3 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)242)))));
        arr_5 [i_0] = ((/* implicit */signed char) arr_0 [i_0] [i_0]);
    }
    for (unsigned char i_1 = 2; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) min((((_Bool) max((((/* implicit */unsigned long long int) (unsigned char)12)), (3838099585789178138ULL)))), ((((((_Bool)1) ? (-2147483623) : (((/* implicit */int) (_Bool)1)))) > (((/* implicit */int) arr_8 [i_1 - 1]))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (_Bool)1))));
        var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) ((long long int) max((arr_2 [i_1 - 1]), (((/* implicit */signed char) (_Bool)1))))))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((13046357265736623126ULL) / (13817249847421266496ULL)))))))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_2 = 2; i_2 < 24; i_2 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((arr_10 [i_2 - 2] [i_2 - 2]) ? (((unsigned long long int) (_Bool)1)) : (((((/* implicit */_Bool) 14608644487920373461ULL)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 - 2] [i_2])))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((_Bool) arr_10 [i_2 - 2] [i_2 - 2])) ? (((arr_10 [i_2 + 1] [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2 - 2] [i_2 + 1])) : (((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) arr_10 [i_2 - 1] [i_2 - 1])))))))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 24; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_3] [i_2] [i_4] = ((/* implicit */long long int) arr_14 [i_4] [i_2] [i_2] [i_2]);
                    arr_17 [i_2] [i_3] [i_3] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 3838099585789178145ULL)) && (((/* implicit */_Bool) ((unsigned char) var_0))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) min((var_18), (arr_13 [i_2 + 1] [i_2 + 1] [i_2 + 1])));
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_10 [(unsigned char)11] [i_2])) & (((/* implicit */int) arr_10 [i_2 - 2] [i_5]))))) ? (((/* implicit */unsigned long long int) min(((((_Bool)1) ? (arr_18 [i_2]) : (((/* implicit */long long int) var_5)))), ((~(var_3)))))) : (((((((/* implicit */_Bool) (unsigned char)233)) ? (13384456871029210219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)254))))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 24; i_7 += 3) 
                {
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        {
                            arr_29 [i_2] [5LL] [i_6] [i_7 + 1] [12ULL] [i_5] [i_6] = ((/* implicit */unsigned short) ((unsigned long long int) 2147483628));
                            var_20 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)32))));
                        }
                    } 
                } 
                arr_30 [i_2] [i_5 + 1] [i_2] [(unsigned short)9] &= ((/* implicit */long long int) (+(max((((/* implicit */unsigned long long int) (~(arr_22 [i_2] [(signed char)11] [i_5 + 2] [i_6])))), (7493555893506287333ULL)))));
            }
            for (unsigned long long int i_9 = 3; i_9 < 24; i_9 += 2) 
            {
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) (~((-(-36408636))))))));
                arr_33 [i_2] [9LL] [9LL] [i_9] = ((/* implicit */_Bool) ((unsigned short) ((unsigned int) (unsigned char)255)));
            }
            /* vectorizable */
            for (unsigned int i_10 = 0; i_10 < 25; i_10 += 3) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), ((~(arr_14 [i_2 + 1] [i_5] [(_Bool)1] [i_5 - 1])))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), ((((_Bool)1) ? (arr_13 [i_2 - 1] [i_2 - 1] [i_12]) : (((/* implicit */unsigned long long int) (-(-2147483620))))))));
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (~(arr_13 [i_2 + 1] [i_2 - 1] [i_2 + 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            arr_46 [(_Bool)1] [i_14] [(unsigned char)0] [(unsigned char)0] [i_10] [17ULL] [i_2] = ((/* implicit */long long int) ((unsigned char) arr_27 [i_5 - 1] [i_5] [i_2 - 2] [i_2] [(unsigned char)16]));
                            arr_47 [(unsigned short)14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) var_0);
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */_Bool) arr_41 [(_Bool)1] [i_5 + 2])) ? (arr_41 [2ULL] [i_5 + 2]) : (arr_41 [(_Bool)1] [i_5 + 2])))));
                        }
                    } 
                } 
                arr_48 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) arr_23 [i_2 - 2] [i_5 + 2] [i_10]));
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_55 [i_5 - 2] [i_15] [(unsigned char)20] [i_16] = ((/* implicit */int) arr_54 [9] [i_5 + 2] [i_10] [i_15] [i_15]);
                            var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) arr_51 [i_2] [i_5 - 1] [i_5] [i_2] [i_16] [i_10] [i_2 - 1])))))));
                        }
                    } 
                } 
            }
            var_27 = (!(((/* implicit */_Bool) ((unsigned short) (unsigned char)251))));
        }
    }
    for (unsigned char i_17 = 0; i_17 < 25; i_17 += 1) 
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(7493555893506287315ULL)))) ? (((((/* implicit */_Bool) (unsigned short)11625)) ? (((/* implicit */int) arr_52 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])) : ((~(((/* implicit */int) arr_10 [i_17] [i_17])))))) : ((-(((/* implicit */int) max((arr_19 [i_17] [(_Bool)1] [i_17]), (((/* implicit */signed char) (_Bool)1)))))))));
        arr_58 [i_17] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_17] [i_17] [i_17])) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_11 [i_17]))))) : (10953188180203264301ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)224)))))));
    }
    /* vectorizable */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((signed char) (~(((/* implicit */int) (unsigned char)247))))))));
        arr_61 [i_18] = ((/* implicit */signed char) arr_50 [(_Bool)1] [i_18]);
    }
    var_30 = ((/* implicit */_Bool) max((var_30), (var_2)));
}
