/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200283
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
    var_16 = ((/* implicit */short) ((_Bool) ((signed char) var_5)));
    var_17 = ((/* implicit */unsigned int) ((unsigned short) (signed char)48));
    var_18 -= ((/* implicit */unsigned int) max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((short) var_12)))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            var_19 = min((((/* implicit */unsigned short) arr_2 [i_0])), (min((((unsigned short) (unsigned char)109)), (((/* implicit */unsigned short) max((arr_5 [i_0]), (((/* implicit */short) (signed char)-67))))))));
                            arr_16 [i_0] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((int) var_12))));
                            arr_17 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned int) arr_5 [i_2])), (min((arr_12 [i_1] [i_1 + 1] [i_2] [i_3] [i_4]), (((/* implicit */unsigned int) 431206603)))))));
                        }
                    } 
                } 
            } 
            arr_18 [i_1] [i_0] = ((/* implicit */_Bool) arr_6 [i_0] [i_1]);
            arr_19 [i_0] = ((/* implicit */unsigned short) ((int) ((unsigned int) arr_3 [i_0] [i_0])));
        }
        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) /* same iter space */
        {
            arr_22 [i_0] = ((/* implicit */unsigned int) ((short) (_Bool)1));
            arr_23 [i_0] [4U] = ((/* implicit */unsigned int) arr_15 [(signed char)10] [i_5 - 1] [i_5] [i_5 - 1] [(signed char)10] [i_5 - 2]);
        }
        for (short i_6 = 0; i_6 < 20; i_6 += 3) 
        {
            arr_27 [6U] |= ((/* implicit */signed char) ((unsigned long long int) ((_Bool) arr_2 [i_0])));
            arr_28 [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) ((_Bool) arr_8 [i_6] [i_0])));
            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((unsigned short) ((unsigned int) var_4))))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
            {
                arr_36 [i_0] [i_0] = ((/* implicit */unsigned short) arr_3 [i_0] [i_8]);
                /* LoopSeq 3 */
                for (long long int i_9 = 1; i_9 < 18; i_9 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((unsigned short) 4385994858623015354LL)))));
                    arr_39 [i_0] = ((/* implicit */_Bool) ((signed char) ((signed char) var_12)));
                    arr_40 [i_0] [(signed char)5] [i_8] = ((/* implicit */unsigned long long int) arr_35 [i_7] [i_8] [i_9]);
                }
                for (unsigned long long int i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    arr_43 [(unsigned short)10] [i_7] [i_8] [i_0] [i_0] [i_8] = ((/* implicit */unsigned short) arr_35 [15ULL] [i_7] [i_7]);
                    arr_44 [i_10] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((int) var_2));
                    arr_45 [i_0] [i_7] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_7] [i_0]);
                    var_22 = ((/* implicit */unsigned int) ((signed char) ((long long int) arr_29 [1U] [i_8] [i_0])));
                }
                for (unsigned int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (unsigned char)232))));
                    var_24 = ((/* implicit */short) ((_Bool) -536870912));
                    arr_49 [i_0] [i_7] [i_7] [i_7] [i_8] [i_0] = ((/* implicit */unsigned int) arr_24 [i_7] [i_0]);
                    arr_50 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned int) arr_30 [i_7]));
                }
            }
            arr_51 [i_7] [i_0] [i_0] = ((/* implicit */int) (_Bool)1);
            arr_52 [i_0] [(unsigned char)12] [i_0] = ((/* implicit */int) arr_6 [i_0] [(unsigned short)13]);
            /* LoopSeq 1 */
            for (int i_12 = 1; i_12 < 18; i_12 += 2) 
            {
                arr_55 [i_0] = ((/* implicit */unsigned int) ((int) arr_34 [(unsigned short)9] [i_0] [i_0]));
                /* LoopSeq 2 */
                for (long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                {
                    arr_59 [i_13] [i_0] [i_0] [i_0] = ((/* implicit */int) (short)9103);
                    arr_60 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((int) var_10)));
                    arr_61 [1U] [i_0] [i_0] [17U] = arr_0 [i_0];
                    arr_62 [i_0] = ((/* implicit */unsigned long long int) (short)32516);
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((_Bool) arr_58 [i_12] [i_13] [i_13] [i_12 + 1])))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_66 [i_14] [i_0] [i_0] [i_0] = ((/* implicit */short) ((long long int) arr_64 [i_12 + 2] [14] [i_12 + 1] [i_12]));
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) arr_21 [(_Bool)1] [(unsigned short)0] [(_Bool)1]))));
                }
                arr_67 [8LL] &= ((/* implicit */_Bool) ((unsigned int) arr_57 [i_12 + 2] [i_12 - 1] [i_12 + 1]));
            }
            arr_68 [i_0] = ((/* implicit */short) ((_Bool) (signed char)56));
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 3) 
        {
            arr_71 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((int) arr_69 [i_0] [i_15])));
            arr_72 [i_0] [i_15] [i_15] = ((short) arr_7 [i_0] [i_0] [i_15] [i_0]);
            arr_73 [i_0] = ((/* implicit */unsigned char) var_11);
        }
        /* vectorizable */
        for (signed char i_16 = 0; i_16 < 20; i_16 += 4) 
        {
            arr_76 [i_0] = ((/* implicit */unsigned short) arr_32 [i_0] [(short)3]);
            var_27 = ((/* implicit */short) ((unsigned short) (signed char)71));
        }
        var_28 = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_0]);
        var_29 = ((/* implicit */long long int) ((unsigned long long int) arr_53 [i_0] [i_0]));
        arr_77 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((unsigned int) (unsigned short)11815)))), (((int) max((((/* implicit */unsigned long long int) (unsigned short)26447)), (1112077180081223426ULL))))));
    }
    /* vectorizable */
    for (unsigned char i_17 = 0; i_17 < 15; i_17 += 4) 
    {
        var_30 = ((/* implicit */int) var_6);
        var_31 = ((/* implicit */long long int) ((unsigned short) var_10));
    }
    for (short i_18 = 0; i_18 < 14; i_18 += 2) 
    {
        arr_82 [3] = ((/* implicit */unsigned short) arr_5 [i_18]);
        var_32 = ((/* implicit */unsigned int) arr_20 [i_18]);
    }
    for (unsigned long long int i_19 = 3; i_19 < 23; i_19 += 2) 
    {
        var_33 = ((/* implicit */signed char) ((unsigned int) ((_Bool) ((unsigned short) (_Bool)0))));
        arr_85 [i_19 - 2] |= ((/* implicit */unsigned int) ((long long int) 4383866668864628099ULL));
        arr_86 [i_19] [i_19] = ((/* implicit */_Bool) 4611686018427387904LL);
    }
    var_34 = ((/* implicit */unsigned int) ((unsigned short) 33292288U));
}
