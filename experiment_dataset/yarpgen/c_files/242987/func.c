/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242987
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
    /* vectorizable */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) arr_0 [i_0 + 1]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */int) var_15)) & (((/* implicit */int) var_10)))) >> (((((/* implicit */int) ((unsigned char) 2147483647))) - (241)))));
    }
    for (long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_18 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((((/* implicit */int) (short)20163)) ^ (((/* implicit */int) arr_3 [i_1 + 3]))))) * (1050827778U))), (((/* implicit */unsigned int) ((((((-884234554) + (2147483647))) >> (((((/* implicit */int) (unsigned short)50191)) - (50186))))) >> (((((/* implicit */int) min((((/* implicit */unsigned short) var_12)), (arr_3 [i_1 - 1])))) - (41898))))))));
        var_19 = ((/* implicit */_Bool) (-(max((arr_1 [i_1 + 3] [i_1 + 3]), (((/* implicit */unsigned long long int) var_0))))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 4) 
        {
            for (unsigned short i_3 = 4; i_3 < 15; i_3 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) var_14)), (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) min((((int) (signed char)-93)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1] [i_2]))))))))));
                    var_21 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1585873034190195601LL)) && ((_Bool)1)));
                    /* LoopNest 2 */
                    for (signed char i_4 = 3; i_4 < 15; i_4 += 4) 
                    {
                        for (long long int i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)19480))));
                                arr_13 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) var_7))) & (((/* implicit */int) (unsigned char)195))));
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((int) (-(((/* implicit */int) (signed char)85))))))));
                                arr_14 [i_4] [11U] [i_4] = ((/* implicit */unsigned long long int) arr_6 [(short)10] [i_3 - 4]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_6 = 0; i_6 < 13; i_6 += 1) 
    {
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            {
                arr_21 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) min((arr_8 [(unsigned short)6] [(unsigned short)10] [(unsigned short)6]), (((((((/* implicit */_Bool) (unsigned short)21432)) ? (arr_8 [i_6] [(_Bool)1] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (short)20155))))) % (((/* implicit */long long int) ((/* implicit */int) ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4)))))))))));
                /* LoopNest 2 */
                for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
                {
                    for (short i_9 = 0; i_9 < 13; i_9 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */_Bool) 1585873034190195600LL);
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned int) 2147483647)) + (2180450533U)));
                            /* LoopSeq 4 */
                            for (short i_10 = 0; i_10 < 13; i_10 += 4) 
                            {
                                var_26 = (_Bool)0;
                                var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) arr_19 [(unsigned short)0] [i_7]))));
                                var_28 = ((/* implicit */_Bool) min((((var_0) ^ (((/* implicit */long long int) (~(var_16)))))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_28 [i_10] [i_7] [i_6])) ^ (((/* implicit */int) (signed char)-1))))), (max((4095LL), (((/* implicit */long long int) arr_18 [i_8] [i_7]))))))));
                            }
                            /* vectorizable */
                            for (unsigned short i_11 = 0; i_11 < 13; i_11 += 4) 
                            {
                                var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_7] [i_6] [i_8] [i_9] [i_11] [i_6]))));
                                var_30 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) * (852907610U)));
                            }
                            for (short i_12 = 0; i_12 < 13; i_12 += 2) 
                            {
                                var_31 = arr_22 [(signed char)2] [(short)12] [(_Bool)1];
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)48632))))) * (max((-1585873034190195601LL), (((/* implicit */long long int) var_14))))));
                            }
                            for (long long int i_13 = 1; i_13 < 10; i_13 += 4) 
                            {
                                var_33 = ((/* implicit */_Bool) ((((max((-4096LL), (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) ((/* implicit */int) max(((short)-20156), (var_11))))))) + (((/* implicit */long long int) arr_33 [i_13] [i_9] [i_8] [0LL] [0LL]))));
                                arr_35 [i_13] [i_7] [9ULL] [(unsigned char)7] [9ULL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_12)), (arr_25 [i_13 + 2])))) && (((/* implicit */_Bool) arr_25 [i_13 + 2]))));
                                var_34 += (-(((/* implicit */int) (signed char)85)));
                                var_35 = ((/* implicit */short) (((((-2147483647 - 1)) % (((/* implicit */int) var_10)))) * (((/* implicit */int) var_10))));
                                var_36 = ((/* implicit */short) max((var_36), (((/* implicit */short) min((1145125164U), (((/* implicit */unsigned int) (unsigned short)43307)))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 13; i_14 += 4) 
                {
                    for (unsigned int i_15 = 1; i_15 < 11; i_15 += 1) 
                    {
                        {
                            arr_40 [10LL] [i_15] = ((/* implicit */short) arr_3 [i_7]);
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (2544810705U) : (min((((/* implicit */unsigned int) (unsigned short)65535)), (1533847488U)))));
                            var_38 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (signed char)-12)) < (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65523))))))), (arr_32 [(short)6] [4LL] [i_15 - 1] [7] [i_14] [(_Bool)1])));
                        }
                    } 
                } 
                var_39 = (~(((/* implicit */int) (short)20153)));
            }
        } 
    } 
}
