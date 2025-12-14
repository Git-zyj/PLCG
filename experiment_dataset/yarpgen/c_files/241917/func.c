/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241917
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
    var_20 = min((((/* implicit */int) var_2)), (var_11));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            arr_4 [(signed char)8] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))));
            /* LoopSeq 4 */
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                arr_9 [i_2] [(signed char)7] [7] = ((/* implicit */unsigned char) (-(arr_2 [i_0] [i_0] [i_2])));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (+(((((/* implicit */unsigned int) var_9)) / (arr_3 [i_2]))))))));
                            arr_16 [i_4] [i_3] = ((/* implicit */long long int) (-(((unsigned long long int) arr_5 [i_4] [i_0] [i_0]))));
                            var_22 = ((/* implicit */int) (-(-3371221852869497602LL)));
                        }
                    } 
                } 
            }
            for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 16; i_6 += 4) 
                {
                    for (long long int i_7 = 2; i_7 < 15; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) arr_5 [i_6] [i_6] [i_6 - 1])))));
                            var_24 = (!(((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_1] [i_5] [6] [i_7])) / (arr_2 [2U] [i_1] [i_1])))));
                        }
                    } 
                } 
                arr_29 [16] [11] = ((/* implicit */long long int) arr_22 [4LL] [i_1] [i_1] [i_1]);
            }
            for (unsigned long long int i_8 = 2; i_8 < 16; i_8 += 3) 
            {
                var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [13ULL] [i_8 - 2] [i_8 - 2] [i_8] [i_8])) ? (((((/* implicit */long long int) arr_20 [i_0] [i_1])) ^ (arr_15 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                arr_33 [i_8] [i_8] [i_8] = ((/* implicit */unsigned int) ((-715202451) & (-715202443)));
                arr_34 [i_0] [11] [i_8] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_13 [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 + 1] [16]))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    for (unsigned int i_10 = 0; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)48)) : (-975719972))))));
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_18))));
                            arr_43 [i_0] [i_1] [i_8] [i_9] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_39 [i_0] [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2] [i_0] [i_10])) && (((/* implicit */_Bool) ((long long int) arr_20 [i_0] [i_0])))));
                            var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) ((unsigned int) ((unsigned long long int) 975719972))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
            {
                arr_46 [i_0] [i_1] = arr_37 [i_0] [(signed char)8] [i_11] [i_0] [i_11];
                arr_47 [7LL] [i_1] [i_11] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_8))) / (((/* implicit */int) var_2))));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) arr_35 [i_0]))));
            arr_51 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_12])) ? (((int) arr_28 [i_0] [i_12] [i_12] [i_12] [i_12])) : ((~(-1820872919)))));
            arr_52 [i_0] [i_12] = ((/* implicit */int) ((arr_38 [(signed char)2] [i_12] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_12] [7ULL])))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            arr_55 [i_0] [i_0] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]);
            arr_56 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) 5596128516162262029LL)) ? (4U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_13] [i_13] [i_13]))))));
        }
        arr_57 [i_0] [(unsigned short)1] = ((/* implicit */unsigned long long int) arr_32 [8] [i_0] [i_0]);
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        arr_60 [i_14] = ((/* implicit */short) -818420405533091616LL);
        /* LoopSeq 2 */
        for (unsigned int i_15 = 1; i_15 < 6; i_15 += 3) 
        {
            var_30 = ((/* implicit */long long int) ((int) arr_58 [i_14]));
            var_31 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), ((+(7029087866418098593LL)))));
            arr_63 [i_14] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_41 [i_15 + 3] [(signed char)6] [i_15 + 4] [i_15 + 2] [i_15 + 2]), (arr_41 [i_15 + 2] [i_15] [i_15 - 1] [i_15 + 3] [i_15 + 2])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (~(((/* implicit */int) var_2))))), (((((/* implicit */_Bool) 4016379243576297339ULL)) ? (arr_37 [i_14] [i_14] [i_14] [i_14] [i_14]) : (arr_41 [i_14] [i_15] [i_14] [i_15 - 1] [i_14]))))))));
        }
        for (long long int i_16 = 0; i_16 < 10; i_16 += 3) 
        {
            var_32 = ((/* implicit */int) max((var_15), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((var_12), (((/* implicit */int) arr_7 [i_14] [i_14] [i_14] [i_14]))))), (arr_39 [i_14] [i_14] [i_14] [i_16] [i_14] [i_16] [i_14]))))));
            arr_68 [i_14] [i_16] [i_16] = ((/* implicit */int) arr_54 [i_14] [i_14]);
            arr_69 [i_14] [i_16] [i_14] &= ((/* implicit */unsigned long long int) var_0);
            /* LoopNest 3 */
            for (int i_17 = 0; i_17 < 10; i_17 += 3) 
            {
                for (long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                {
                    for (long long int i_19 = 2; i_19 < 9; i_19 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */int) arr_1 [i_14] [i_14]);
                            arr_78 [i_14] [7U] [i_17] [9U] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_76 [i_17] [(unsigned short)0] [i_19 - 2] [i_19 + 1] [i_19]) || (((/* implicit */_Bool) var_17)))))));
                            arr_79 [i_14] [1LL] [i_17] [i_14] [i_19] |= ((/* implicit */signed char) (~(((int) arr_77 [i_17] [i_17] [i_14] [i_18] [i_14] [i_19 - 1]))));
                            arr_80 [i_14] = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) arr_10 [i_14] [i_16] [i_17] [i_14] [i_19])) ? (arr_41 [i_14] [i_14] [i_17] [i_18] [i_18]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)111))))))), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_35 [i_18])) || (((/* implicit */_Bool) var_8)))))))));
                        }
                    } 
                } 
            } 
        }
    }
    var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_13)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))), (((var_14) * (((/* implicit */unsigned int) var_9)))))))))));
}
