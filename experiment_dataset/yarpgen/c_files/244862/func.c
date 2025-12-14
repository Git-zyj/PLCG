/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244862
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244862 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244862
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
    var_16 = ((/* implicit */unsigned short) max((((int) var_1)), (((/* implicit */int) var_11))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) max((max((min((arr_3 [i_0]), (((/* implicit */unsigned long long int) (short)-9647)))), (((/* implicit */unsigned long long int) ((short) 15918083970563611492ULL))))), (((/* implicit */unsigned long long int) var_9))));
                arr_6 [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)42681))));
                /* LoopSeq 4 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) /* same iter space */
                    {
                        var_18 &= ((/* implicit */unsigned long long int) arr_13 [(unsigned char)9] [i_1] [i_1] [(short)3] [1]);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned char i_4 = 3; i_4 < 9; i_4 += 2) 
                        {
                            arr_17 [i_1] [(signed char)2] [i_2] [i_2] [i_3 - 1] [i_4] &= ((((/* implicit */_Bool) 2528660103145940151ULL)) ? (((/* implicit */int) (short)9647)) : (((/* implicit */int) (short)-31624)));
                            var_19 *= ((/* implicit */int) arr_3 [i_0]);
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_14 [i_2 - 1] [i_2] [i_3 + 1] [i_2] [i_5])))));
                            arr_22 [i_0] [i_0] [i_1] &= ((/* implicit */unsigned long long int) arr_16 [4ULL] [i_1] [i_2 - 1] [i_1] [i_5] [i_5]);
                            var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((unsigned int) arr_14 [i_3 + 2] [i_1] [i_1] [i_1] [i_1]))) ? (min(((~(((/* implicit */int) var_8)))), (((((/* implicit */int) arr_16 [i_0] [i_0] [6ULL] [i_1] [i_3] [i_5])) | (((/* implicit */int) arr_1 [i_2])))))) : (((/* implicit */int) arr_13 [i_3 + 1] [i_3] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))));
                        }
                    }
                    for (unsigned short i_6 = 1; i_6 < 8; i_6 += 2) /* same iter space */
                    {
                        arr_25 [i_0] [10LL] [i_2 - 1] [i_2] = ((((/* implicit */_Bool) ((unsigned char) arr_10 [i_2 - 1] [i_2 - 1] [i_2]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_15)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13))) ^ (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_2] [(unsigned short)4])) ? (((/* implicit */unsigned long long int) var_12)) : (15244850619280247418ULL))))));
                        arr_26 [i_0] [i_0] [i_2] [i_6 + 3] = ((/* implicit */unsigned char) arr_15 [i_0] [i_0] [i_0]);
                        arr_27 [i_2] [i_2] [i_2 - 1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)229)) ? (2528660103145940124ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31624)))));
                    }
                    for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) /* same iter space */
                    {
                        var_22 += ((/* implicit */long long int) (+(max((arr_11 [i_1] [i_1] [i_2 - 1]), (((/* implicit */int) arr_29 [10U] [i_1] [i_2 - 1] [i_2]))))));
                        var_23 &= (short)-31650;
                        arr_31 [i_0] [i_1] [i_2] [7ULL] [i_2 - 1] [i_7] = ((/* implicit */unsigned short) ((long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)62177))) ? (((/* implicit */int) arr_16 [i_1] [i_1] [i_1] [i_2] [i_2 - 1] [i_2 - 1])) : (((/* implicit */int) arr_12 [i_2 - 1] [i_2] [(unsigned char)8])))));
                        arr_32 [i_2] = ((/* implicit */short) arr_19 [i_2] [(unsigned char)6] [i_2] [i_7] [(unsigned short)6] [(unsigned short)9] [i_7]);
                        arr_33 [i_0] [i_2] [i_2 - 1] [i_7] [i_7] [(unsigned char)0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((short) (+(8989784178008850657ULL))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 4; i_9 < 10; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */short) var_15)), ((short)31647))));
                            arr_39 [i_9] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (short)31650)))));
                            var_25 += ((/* implicit */unsigned short) arr_36 [i_0] [i_1] [i_2] [6LL] [i_9 - 2] [(unsigned short)8]);
                            arr_40 [i_0] [i_1] [i_1] [i_2] [i_2] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((unsigned char) 15918083970563611456ULL)), (arr_36 [i_9 - 3] [i_9] [i_9] [i_9 - 3] [i_9] [7])))) >> (((min((((/* implicit */unsigned int) var_12)), ((~(var_1))))) - (855121081U)))));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)3))) : (4660168238683113984ULL)));
                        }
                        /* vectorizable */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            arr_43 [(unsigned char)2] [i_2] [(unsigned char)2] [i_2] [i_10 - 1] = ((/* implicit */short) ((arr_42 [i_1] [i_1] [i_1] [i_1] [i_2 - 1] [i_2 - 1]) >> (((((/* implicit */int) arr_13 [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])) - (81)))));
                            arr_44 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_2 - 1] [i_2 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_2])) ? (((/* implicit */int) arr_28 [i_2 - 1] [i_2 - 1] [i_10 - 1] [i_10 - 1] [4U] [i_2])) : (((/* implicit */int) (unsigned char)10))));
                        }
                        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned char) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)22038), ((unsigned short)20377))))) : (((((/* implicit */_Bool) arr_9 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */unsigned int) arr_41 [i_8] [8] [i_8] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) : (arr_9 [i_2 - 1] [i_2 - 1] [2] [i_2 - 1])))));
                        arr_45 [i_2] [i_1] [i_2 - 1] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_14 [i_0] [(unsigned char)4] [(unsigned short)5] [i_2] [(unsigned short)5]))))));
                        arr_46 [i_0] [i_2] [4ULL] [i_8] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)16821))));
                    }
                    arr_47 [i_2 - 1] [i_0] [i_0] [(signed char)6] |= ((/* implicit */unsigned char) (~((~(((/* implicit */int) var_8))))));
                }
                /* vectorizable */
                for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_50 [i_0] [i_1] [i_11] [5U] = ((/* implicit */signed char) ((unsigned short) 255LL));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_35 [i_11 - 1]))) || (((/* implicit */_Bool) var_7))));
                }
                for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 2) 
                {
                    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_30 = ((/* implicit */unsigned short) 1648305445U);
                }
                /* vectorizable */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_56 [i_0] [i_1] [i_0] [(unsigned char)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_1] [i_0])) ? (((/* implicit */int) ((unsigned short) 2528660103145940162ULL))) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))));
                    var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_54 [i_1] [i_1] [i_13])))))));
                }
                arr_57 [i_0] [i_0] [1U] = ((/* implicit */unsigned long long int) var_0);
            }
        } 
    } 
    var_32 += ((/* implicit */unsigned short) var_7);
}
