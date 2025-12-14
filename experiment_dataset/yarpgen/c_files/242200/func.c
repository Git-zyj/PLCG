/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242200
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned char) var_13);
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            var_16 += arr_6 [(unsigned char)8] [i_1] [i_0 + 1];
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) 2460811386U)) < (arr_2 [i_0])));
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_0] [i_1] [i_4] = ((/* implicit */long long int) max((arr_2 [i_0 + 1]), (((/* implicit */unsigned long long int) var_6))));
                            var_18 = ((/* implicit */unsigned long long int) arr_7 [i_2] [i_2] [i_2]);
                            var_19 &= ((/* implicit */unsigned long long int) arr_9 [i_0] [i_1 + 3] [i_2] [0ULL]);
                            var_20 = ((/* implicit */long long int) (short)26953);
                            var_21 |= ((/* implicit */_Bool) var_2);
                        }
                        arr_16 [7LL] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) << (((-6566748901361558148LL) + (6566748901361558163LL)))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                        {
                            arr_19 [i_0] [i_0] [i_1] [i_2] [i_3] [i_5] = (!(((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))))) <= (arr_6 [i_2] [i_3] [i_5]))));
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) 4398046511040ULL))));
                        }
                        arr_20 [i_3] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) (((-(((/* implicit */int) arr_17 [i_0 - 2] [i_3] [i_3] [4ULL] [i_3] [i_3])))) + (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_2] [i_3] [i_3] [i_3]))));
                    }
                } 
            } 
        }
    }
    for (unsigned int i_6 = 2; i_6 < 19; i_6 += 3) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_22 [i_6 - 1])) % (((/* implicit */int) arr_22 [i_6 - 2]))))) <= (var_10)));
        /* LoopNest 3 */
        for (unsigned int i_7 = 3; i_7 < 19; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned int i_9 = 4; i_9 < 19; i_9 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            arr_35 [i_10] [i_7] [i_8] [i_7] [i_6] = var_11;
                            var_23 ^= ((/* implicit */unsigned long long int) (~(arr_25 [i_7] [i_10])));
                            var_24 -= ((/* implicit */unsigned char) (+(11326782300048177456ULL)));
                        }
                        for (unsigned long long int i_11 = 4; i_11 < 16; i_11 += 3) 
                        {
                            arr_40 [i_7] [2U] [i_7] = ((/* implicit */long long int) arr_32 [i_7]);
                            var_25 = ((/* implicit */long long int) arr_25 [i_6] [i_6]);
                            arr_41 [i_11] [i_9] [6ULL] [i_9] [i_6] &= ((/* implicit */unsigned char) var_2);
                        }
                        var_26 = arr_30 [i_6] [17LL] [i_6];
                        var_27 = ((/* implicit */short) (+(727002151634241694LL)));
                        var_28 -= ((/* implicit */long long int) min((max((((/* implicit */unsigned long long int) ((arr_37 [i_9] [i_9 - 4] [i_9 - 2] [i_9 - 2] [i_9]) << (((((/* implicit */int) (unsigned char)93)) - (91)))))), (((arr_33 [i_6] [i_9] [i_7] [2U] [i_9]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [(unsigned short)9]))))))), (((/* implicit */unsigned long long int) arr_29 [i_9 - 3] [i_7] [i_8] [i_9]))));
                    }
                } 
            } 
        } 
        arr_42 [i_6] [i_6] |= ((/* implicit */long long int) arr_28 [i_6] [6LL] [0ULL]);
    }
    for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_29 |= ((/* implicit */unsigned long long int) var_7);
        var_30 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) < (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (min((214907462U), (((/* implicit */unsigned int) (short)26953)))))))));
        /* LoopNest 3 */
        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                for (unsigned char i_15 = 2; i_15 < 20; i_15 += 2) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)11484))) / (max((var_11), (((/* implicit */unsigned long long int) arr_47 [i_12] [i_13] [i_15 - 1])))))))));
                        arr_54 [i_12] [i_13] [7] [i_14] [i_15 - 1] [i_15 + 2] = ((/* implicit */unsigned int) arr_48 [i_12] [i_12] [5] [i_15]);
                        var_32 = max((((/* implicit */unsigned char) arr_51 [i_15 - 1] [i_15 + 3] [i_15 + 1] [i_15 + 1] [i_15 - 1] [i_15 + 1])), (var_0));
                    }
                } 
            } 
        } 
    }
    var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_6)), (214907447U))))))));
    var_34 = ((/* implicit */unsigned long long int) var_7);
}
