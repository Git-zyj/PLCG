/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234744
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
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 += (~((+((+(((/* implicit */int) (unsigned char)4)))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        arr_10 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)4)), (1363867946)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_12)))))));
                        arr_11 [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_3 [i_1 + 1] [i_1]) | (((/* implicit */int) var_5)))))));
                        arr_12 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) max((min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) -1363867946)) ? (((/* implicit */int) (short)13730)) : (1363867946)))))), (((/* implicit */long long int) arr_8 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 4; i_5 < 9; i_5 += 3) 
                        {
                            var_16 |= ((/* implicit */long long int) arr_14 [i_0] [i_1] [i_1] [i_0] [i_1]);
                            var_17 = ((((arr_4 [i_1] [i_1]) ? (((/* implicit */int) (short)32425)) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_4] [i_1])))) & ((-(((/* implicit */int) var_5)))));
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_2))));
                            var_19 &= ((/* implicit */_Bool) (~((-(-1571593123)))));
                        }
                        /* LoopSeq 2 */
                        for (int i_6 = 1; i_6 < 10; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 60))));
                            var_21 = (((!(arr_9 [i_0] [i_1] [i_2] [i_4] [i_1]))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((((/* implicit */int) (short)13730)) > (((/* implicit */int) (unsigned char)4))))));
                            var_22 = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_0] [i_0] [i_0] [i_1]))) : (var_13))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_1] [i_1])) ? (-60) : (((/* implicit */int) var_11))))));
                        }
                        for (int i_7 = 3; i_7 < 10; i_7 += 1) 
                        {
                            arr_23 [i_1] [i_1] [i_2] [i_1] [i_7] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25147)) ? (((((/* implicit */int) (short)-25147)) ^ (var_9))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            arr_24 [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) (~(0)));
                            var_23 = ((/* implicit */long long int) (short)25147);
                            arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] = ((arr_14 [i_1 + 1] [i_1 + 3] [i_1] [i_1] [i_7 - 2]) ? (59) : (((/* implicit */int) arr_14 [i_1 + 1] [i_1 + 3] [i_1 + 3] [i_1] [i_7 - 2])));
                            var_24 = arr_18 [i_0] [i_0] [i_0] [i_4] [i_4];
                        }
                        arr_26 [i_0] [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((_Bool) (_Bool)1))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 373665903)) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_27 [i_8] [i_8]) : (arr_28 [i_8])))) ? (((((/* implicit */int) (_Bool)0)) * (arr_29 [i_8] [i_8]))) : (59)))) - (((((/* implicit */_Bool) (unsigned short)27033)) ? (-3175015130456110431LL) : (((/* implicit */long long int) ((int) (short)27143)))))));
        /* LoopNest 2 */
        for (int i_9 = 1; i_9 < 21; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                {
                    var_27 = ((/* implicit */int) min((var_27), (((max((((/* implicit */int) (short)16383)), (1363867945))) % (((/* implicit */int) (short)-16383))))));
                    var_28 = ((/* implicit */_Bool) min((var_28), (min(((_Bool)0), (((((/* implicit */int) (short)16383)) > (min((((/* implicit */int) (unsigned short)25268)), (var_0)))))))));
                    var_29 += ((/* implicit */long long int) var_8);
                }
            } 
        } 
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 20; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                for (short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_14 = 0; i_14 < 22; i_14 += 4) 
                        {
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_2))));
                            var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(arr_27 [i_11] [i_11]))) : (((/* implicit */long long int) min(((-(((/* implicit */int) arr_43 [i_8] [i_11] [i_11] [i_11])))), (arr_32 [i_8] [i_11 + 1])))))))));
                            var_32 = ((/* implicit */unsigned short) ((arr_40 [i_8] [i_8]) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -829141305)) ? (arr_33 [i_12]) : (((/* implicit */int) var_2))))) : (max((((/* implicit */long long int) -1)), (arr_35 [i_8] [i_8] [i_14])))))));
                        }
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_27 [i_11 + 2] [i_11 + 1]), (((/* implicit */long long int) 1571593122))))) ? (((/* implicit */long long int) ((((((/* implicit */int) (short)-25147)) + (2147483647))) << (((((/* implicit */int) (unsigned char)247)) - (247)))))) : (min((((/* implicit */long long int) (short)-25147)), (arr_27 [i_11 + 2] [i_11 + 1])))));
                    }
                } 
            } 
        } 
    }
    var_34 += ((/* implicit */unsigned char) var_1);
}
