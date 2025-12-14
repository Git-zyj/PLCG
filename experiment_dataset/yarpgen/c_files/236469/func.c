/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236469
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            var_20 += ((/* implicit */int) arr_4 [(short)11] [(short)11] [i_1 + 4]);
            arr_6 [i_0] [i_0] [(short)10] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned char) (signed char)-100)), (arr_5 [i_0] [i_0])))), ((-(0U))))))));
            arr_7 [i_0] [i_0] = ((/* implicit */int) ((-2154619307419733173LL) == (((/* implicit */long long int) min((((((/* implicit */int) arr_2 [(_Bool)1])) % (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (signed char)80)))))));
            var_21 = (!(((/* implicit */_Bool) ((int) ((short) -1759662546)))));
            var_22 = ((/* implicit */unsigned char) (((((~(4418781825383860390LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((short) (short)15247)))))) | (min((((arr_4 [i_0] [i_1] [i_1]) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0]))))), (((/* implicit */long long int) min((arr_0 [(unsigned short)12]), (((/* implicit */int) arr_4 [i_0] [i_0] [(unsigned short)7])))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_3 = 1; i_3 < 13; i_3 += 4) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) max(((+(((/* implicit */int) arr_4 [i_3] [(unsigned char)6] [i_3 + 1])))), (((/* implicit */int) min((((unsigned short) (_Bool)1)), (var_2)))))))));
                var_24 = (!(((/* implicit */_Bool) (-(((/* implicit */int) min((arr_5 [i_0] [i_2]), (((/* implicit */unsigned char) arr_4 [i_0] [i_2] [i_3 - 1])))))))));
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_14 [i_3 - 1] [i_3 - 1])))) ? ((+((-(((/* implicit */int) (_Bool)1)))))) : (max((((int) (unsigned char)175)), (((/* implicit */int) min(((short)-10494), (((/* implicit */short) arr_5 [i_2] [i_3 + 1])))))))));
                var_26 ^= ((/* implicit */short) (-(((/* implicit */int) (((!(((/* implicit */_Bool) -3579504757038450559LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(signed char)7] [i_3])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))))))));
            }
            /* vectorizable */
            for (short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                var_27 -= ((((/* implicit */_Bool) arr_14 [(short)3] [i_2])) ? (((/* implicit */int) ((unsigned char) arr_3 [i_2]))) : (((/* implicit */int) arr_10 [i_4])));
                var_28 = ((/* implicit */signed char) (~((((_Bool)1) ? (((/* implicit */int) arr_12 [(short)0] [(unsigned char)3] [i_2] [(short)0])) : (((/* implicit */int) (unsigned char)131))))));
                arr_17 [i_0] [i_4] [i_4] = ((((/* implicit */int) arr_4 [i_2] [i_2] [i_4])) * (((/* implicit */int) arr_4 [i_4] [7] [i_4])));
                arr_18 [i_4] = ((/* implicit */long long int) ((((_Bool) arr_3 [i_2])) ? (((((/* implicit */_Bool) (short)15217)) ? (arr_0 [i_0]) : (((/* implicit */int) arr_9 [i_4])))) : (arr_1 [i_0])));
                var_29 = ((/* implicit */unsigned char) ((int) (-2147483647 - 1)));
            }
            arr_19 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned short) arr_5 [i_2] [i_2]))) * (((/* implicit */int) arr_9 [i_0]))));
        }
        for (short i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(8U)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_20 [i_0] [i_5])) ? (((/* implicit */int) (short)10410)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) arr_15 [0U] [i_5] [i_5]))))) : ((+(7199280097019794588LL))))))));
            arr_24 [i_0] = ((/* implicit */unsigned char) var_0);
            var_31 = ((((((/* implicit */_Bool) 3775900818549084123LL)) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_0] [i_5])) : (((/* implicit */int) arr_21 [i_0])))) * (((/* implicit */int) ((short) arr_10 [i_0]))));
            var_32 = ((((/* implicit */int) ((unsigned short) arr_9 [i_5]))) >> ((((~(((/* implicit */int) arr_9 [i_5])))) + (25))));
        }
        /* LoopNest 3 */
        for (unsigned char i_6 = 2; i_6 < 12; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 1) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            var_33 = ((/* implicit */short) (unsigned short)741);
                            var_34 = ((/* implicit */int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (3775900818549084123LL))))))), (min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) (_Bool)1))))));
                            arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */int) (unsigned short)56826);
                            var_35 = ((/* implicit */unsigned short) min((arr_25 [i_9]), (((/* implicit */long long int) (unsigned char)102))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 3) 
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) (~(3775900818549084123LL))))));
                            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_15 [i_0] [(unsigned char)5] [i_0]))))), (1323642637U))))));
                            var_38 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((unsigned char) var_16))))), ((~(((/* implicit */int) arr_31 [i_6] [i_6] [i_8 - 1] [i_8] [i_7 + 2] [i_6 - 2]))))));
                        }
                        for (unsigned char i_11 = 1; i_11 < 12; i_11 += 4) 
                        {
                            arr_43 [i_8] [i_6] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-68)), ((-2147483647 - 1))))) + (((4137841901U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [5]))))))))));
                            var_39 *= ((/* implicit */short) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)102))))), ((+(((((/* implicit */_Bool) 5U)) ? (((/* implicit */unsigned int) 1796475865)) : (864511438U)))))));
                        }
                        var_40 &= ((/* implicit */unsigned char) ((int) ((2154619307419733173LL) | (((/* implicit */long long int) 2147483647)))));
                    }
                } 
            } 
        } 
        var_41 *= ((/* implicit */unsigned short) ((unsigned char) 207683815646810712LL));
    }
    var_42 = ((/* implicit */unsigned char) (_Bool)1);
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            {
                var_43 ^= ((/* implicit */_Bool) var_1);
                /* LoopSeq 1 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_44 = max((((/* implicit */int) ((_Bool) arr_45 [i_12] [i_12]))), ((+(((/* implicit */int) (_Bool)1)))));
                    var_45 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_44 [i_13 + 1]))) % (9223372036854775805LL)));
                    var_46 = ((/* implicit */int) (((~(((long long int) (unsigned char)150)))) | (((/* implicit */long long int) (-(((((/* implicit */int) arr_46 [i_13 + 1])) + (((/* implicit */int) var_8)))))))));
                }
                /* LoopNest 3 */
                for (int i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    for (unsigned short i_16 = 1; i_16 < 13; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 4; i_17 < 13; i_17 += 3) 
                        {
                            {
                                var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) (((-(((/* implicit */int) (short)-29120)))) > ((+(((/* implicit */int) (_Bool)1)))))))));
                                var_48 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_56 [i_15] [i_15] [i_17] [i_17 + 1] [i_17])), (arr_46 [i_13 + 1]))))));
                                var_49 = ((/* implicit */_Bool) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
}
