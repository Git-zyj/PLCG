/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35303
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
    var_16 |= ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0 + 1] [i_3] [i_0] = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7978356532239237424ULL))))))))));
                                arr_14 [(_Bool)0] [i_4] [22] [(_Bool)0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned short) (-(max((arr_4 [i_0 + 2] [i_1]), (((/* implicit */unsigned long long int) (-(arr_6 [i_0] [i_1] [(unsigned short)12] [i_3]))))))));
                                arr_15 [i_3] [i_3] [i_0] [(short)4] [(short)4] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (short)-1))));
                                arr_16 [i_1] |= ((/* implicit */unsigned char) min((min((arr_8 [i_0 + 2] [i_1] [i_1 - 2] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_0)))) % (((/* implicit */int) arr_5 [i_2] [i_2] [i_0])))))));
                                arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) min((288230376151711743ULL), (((/* implicit */unsigned long long int) (signed char)-103))))) ? (((/* implicit */unsigned long long int) (-(((var_10) * (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 2] [(signed char)22] [(signed char)22])))))))) : (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) ((var_11) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        arr_21 [i_1] [i_1] [6U] [i_1] |= ((/* implicit */unsigned int) (~(((/* implicit */int) ((18158513697557839873ULL) == (18158513697557839871ULL))))));
                        arr_22 [i_0] [i_0] = ((int) arr_2 [(unsigned char)18]);
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 1; i_6 < 21; i_6 += 1) 
                    {
                        for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
                        {
                            {
                                arr_28 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)9974);
                                arr_29 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_12);
                                arr_30 [(short)6] [i_7] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) (~(((/* implicit */int) var_4))))))));
                                arr_31 [i_0] [i_1 - 1] [i_2] [(short)8] = ((/* implicit */short) ((18158513697557839897ULL) * (max((18158513697557839867ULL), (((/* implicit */unsigned long long int) (unsigned short)3))))));
                            }
                        } 
                    } 
                }
                for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    arr_34 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((min((min((-8360091736104285412LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned short)9975)), (var_5)))))) + (9223372036854775807LL))) >> (((((/* implicit */int) min(((unsigned short)65533), (((/* implicit */unsigned short) (short)-14638))))) - (50851)))));
                    arr_35 [i_8] [i_1] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_2)))));
                }
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_38 [i_1 + 1] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_12);
                    arr_39 [i_0] [(unsigned short)13] [i_0] = ((/* implicit */unsigned short) var_8);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 3; i_10 < 20; i_10 += 4) 
                    {
                        for (short i_11 = 2; i_11 < 21; i_11 += 4) 
                        {
                            {
                                arr_44 [i_11] [22ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 465810928U)) ? (var_11) : (((/* implicit */long long int) arr_19 [i_10])))))));
                                arr_45 [i_0] [i_1] [i_9] [i_10] [i_10] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_2 [i_10 - 1])) >= (((/* implicit */int) var_0))));
                                arr_46 [i_10 - 3] [i_1] [i_9] [i_1] [i_0] &= ((/* implicit */unsigned long long int) (short)-19);
                                arr_47 [i_0] [i_0] = ((/* implicit */signed char) ((short) -7825578798549452045LL));
                                arr_48 [i_0] [i_0] [i_10] [i_9] [i_1 - 2] [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_6 [i_11] [i_10 - 2] [i_0 - 1] [i_0 - 1]) | (((/* implicit */long long int) arr_9 [i_0 - 1] [i_0 - 1]))));
                            }
                        } 
                    } 
                    arr_49 [i_1] = ((/* implicit */int) arr_11 [i_0] [i_1] [(unsigned short)5]);
                }
                arr_50 [i_1] = ((/* implicit */_Bool) (short)-3823);
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((min((((((/* implicit */_Bool) -2914540464045996418LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6))), (((/* implicit */unsigned long long int) var_10)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
    /* LoopNest 3 */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 2) 
    {
        for (short i_13 = 3; i_13 < 10; i_13 += 4) 
        {
            for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
            {
                {
                    arr_59 [i_13] = ((/* implicit */unsigned long long int) var_5);
                    arr_60 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 91536348U)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (min((var_11), (((/* implicit */long long int) var_3))))));
                }
            } 
        } 
    } 
}
