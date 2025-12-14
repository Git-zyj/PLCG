/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2371
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0] [i_4 - 1])) % (((((/* implicit */_Bool) arr_11 [i_4] [i_4] [i_4 + 1] [i_4] [i_4 + 2] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_11 [i_4 + 2] [i_4] [i_4 + 2] [i_4] [i_4 + 1] [4U] [i_4])) : (((/* implicit */int) arr_11 [(unsigned char)10] [(unsigned char)10] [i_4 + 2] [i_4] [i_4 + 1] [i_4 - 1] [i_4 + 1]))))));
                                var_11 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_4)) ? (10998457376387798086ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) * (((/* implicit */unsigned long long int) var_2)))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((short) var_0)))))));
                                var_12 = ((/* implicit */unsigned long long int) var_0);
                                var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_4 + 1] [i_3] [i_2] [i_0] [i_0] [i_0] [i_0]))))) >> (((min((var_2), (var_2))) + (8566996737687736810LL)))))) < (max((((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))), (((/* implicit */unsigned long long int) (unsigned char)241))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min((arr_10 [i_1]), (((/* implicit */unsigned long long int) arr_7 [i_0] [(unsigned short)16]))))))) || (var_3)));
                var_15 = ((/* implicit */short) arr_9 [i_0] [i_1] [i_1]);
                var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))) ? (min((var_1), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_0] [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */_Bool) 12880251766438336575ULL)) && (((/* implicit */_Bool) 5425155271929839056ULL))))), (arr_5 [i_0] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
    {
        /* LoopNest 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (signed char i_7 = 1; i_7 < 9; i_7 += 1) 
            {
                for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    {
                        var_17 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_1 [i_7])))) ? (((((/* implicit */int) arr_20 [i_5])) / (((/* implicit */int) var_8)))) : (((/* implicit */int) var_3))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
                        {
                            var_18 ^= ((/* implicit */short) var_3);
                            var_19 = ((/* implicit */unsigned int) arr_1 [i_7]);
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) var_2))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -8553826853023141435LL)) ? (5737178872771721887ULL) : (7448286697321753540ULL)));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_19 [i_7 + 3] [i_6 - 1] [i_6 - 1]))));
                        }
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((~(min((((/* implicit */unsigned long long int) (_Bool)0)), (var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_30 [2LL] [i_6] [(unsigned short)4])), (var_4)))) ? (((/* implicit */int) (!(var_3)))) : (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (signed char)-38))))))))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5] [i_5] [i_5]))) : (var_2))), (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_5] [(signed char)0])) & (((/* implicit */int) var_7))))))), (((/* implicit */long long int) var_7)))))));
        var_25 = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (signed char i_11 = 0; i_11 < 22; i_11 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 20; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 22; i_14 += 3) 
                {
                    {
                        var_26 = ((/* implicit */unsigned int) arr_12 [i_14] [i_14] [i_11] [i_11] [i_12] [i_12 - 2]);
                        /* LoopSeq 1 */
                        for (unsigned char i_15 = 1; i_15 < 21; i_15 += 3) 
                        {
                            var_27 |= ((/* implicit */_Bool) arr_8 [i_12 + 1] [i_12] [18ULL] [(unsigned short)0]);
                            var_28 = ((/* implicit */_Bool) arr_42 [i_11] [i_11] [i_13] [i_11]);
                            var_29 = (!(((/* implicit */_Bool) ((unsigned int) arr_45 [i_11]))));
                            var_30 = ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((long long int) arr_4 [i_11] [i_11]))) : (((var_1) << (((((/* implicit */int) var_4)) - (82))))));
                        }
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((arr_10 [i_11]) >> (((/* implicit */int) var_3)))))));
        var_32 = ((/* implicit */_Bool) var_6);
    }
}
