/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43158
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
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((var_13) ^ (((/* implicit */unsigned int) var_1)))))));
                arr_5 [i_1] = ((/* implicit */unsigned short) var_13);
                var_21 += ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1407343368162063173ULL)) ? (12ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) 16646144)) : (17302100731500786925ULL))) : (((/* implicit */unsigned long long int) (~(-16646154)))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_3 = 2; i_3 < 17; i_3 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65530))))) ? (var_19) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))));
            /* LoopNest 2 */
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_6 = 2; i_6 < 17; i_6 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) (((~(4))) >= (max((((/* implicit */int) var_17)), (var_1)))));
                            var_25 |= ((/* implicit */int) max((max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 2320895960512229180ULL))))), (arr_11 [i_4] [0LL] [i_6]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */int) (signed char)-15))))))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            var_26 = arr_18 [i_2] [i_3 + 3] [i_3 + 3] [i_3] [i_3];
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((unsigned short) (-(((/* implicit */int) (short)-19518)))))));
                            arr_21 [i_2] [i_3] [i_2] [(unsigned short)8] [i_5] [i_7] = ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_10) : (((/* implicit */int) (short)-19520)));
                            var_28 = ((/* implicit */short) (_Bool)1);
                            var_29 = ((/* implicit */unsigned short) ((arr_15 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 3]) + (arr_15 [i_3] [i_3 - 2] [i_3 + 2] [i_3 + 3])));
                        }
                        var_30 += ((/* implicit */unsigned long long int) (-(((((/* implicit */int) var_17)) & (((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))))));
                        arr_22 [(signed char)9] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)37)), (((unsigned int) (unsigned short)65514))));
                        var_31 += ((/* implicit */long long int) var_12);
                        var_32 &= var_16;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_8 = 0; i_8 < 20; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    for (int i_10 = 1; i_10 < 19; i_10 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) - (((/* implicit */int) (short)22)))) + ((-(((/* implicit */int) (unsigned short)44058))))))) * (((unsigned long long int) (-(((/* implicit */int) (short)33))))))))));
                            arr_33 [i_2] [i_9] [18ULL] [i_2] [i_10 - 1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)44055))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44085))) & (arr_28 [i_8] [i_9] [i_8] [i_8] [i_8] [i_8]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)19046)))));
                            var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)63877))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)34))) : (-2392534792444701059LL)));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (int i_11 = 1; i_11 < 19; i_11 += 4) 
            {
                for (int i_12 = 0; i_12 < 20; i_12 += 1) 
                {
                    for (short i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_12])))))), (var_16)));
                            var_36 = ((/* implicit */unsigned short) var_1);
                            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (988788222) : (((/* implicit */int) var_11))))) ? (((int) var_15)) : ((+(-1115882057)))))) ? ((-(((((/* implicit */_Bool) (short)-46)) ? (130944U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_12] [i_3] [i_11] [i_12] [i_13]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
                            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)10246)), (max((((unsigned int) arr_32 [i_2] [i_2] [i_2] [i_2] [i_2])), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))))))));
                            var_39 = (-(((/* implicit */int) (short)24)));
                        }
                    } 
                } 
            } 
        }
        var_40 = ((/* implicit */unsigned short) (((+(12215008102133758516ULL))) + (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 16646146)), (-5698543419053873765LL))))));
        var_41 = ((/* implicit */unsigned long long int) ((unsigned int) 6));
    }
    /* vectorizable */
    for (unsigned short i_14 = 3; i_14 < 15; i_14 += 1) 
    {
        var_42 = ((/* implicit */short) (-(((((/* implicit */_Bool) 2544582386U)) ? (((/* implicit */unsigned long long int) arr_7 [i_14])) : (2250220734713600891ULL)))));
        var_43 = (-(((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)12125))))));
        var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((unsigned short) arr_23 [i_14] [0LL] [i_14 - 1])))));
        var_45 = ((/* implicit */unsigned short) ((unsigned long long int) (!(((/* implicit */_Bool) var_8)))));
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 1; i_15 < 22; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                var_46 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3549857300U)))) ? (var_19) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [23])) ? (((/* implicit */int) var_2)) : (var_1)))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_50 [i_15 - 1] [i_15 + 1])) && ((!(((/* implicit */_Bool) (signed char)-44)))))))));
                arr_51 [i_16] [i_16] = ((/* implicit */unsigned long long int) var_5);
                var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (~(1776457635)))), (max((arr_49 [i_15 + 1]), (arr_49 [i_15 - 1])))));
                /* LoopNest 2 */
                for (unsigned int i_17 = 4; i_17 < 21; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 24; i_18 += 2) 
                    {
                        {
                            arr_57 [i_15] [i_16] = ((/* implicit */long long int) min(((~(((/* implicit */int) var_4)))), (((/* implicit */int) var_4))));
                            var_48 = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_47 [i_15])))), (((((/* implicit */int) var_16)) + (((/* implicit */int) var_9))))));
                            var_49 = ((/* implicit */short) min((var_49), (((/* implicit */short) 10809166931972862167ULL))));
                        }
                    } 
                } 
                var_50 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 10809166931972862178ULL))));
            }
        } 
    } 
}
