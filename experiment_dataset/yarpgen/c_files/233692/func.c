/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233692
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
    var_12 += ((/* implicit */_Bool) var_2);
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_11))))) ? (((((((/* implicit */unsigned long long int) var_3)) <= (2184875699318249179ULL))) ? (max((-8881488860551381172LL), (((/* implicit */long long int) var_5)))) : (((/* implicit */long long int) (-(var_2)))))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) >> (((/* implicit */int) var_5)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 18; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_0])));
                        arr_13 [i_3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5592724397435055977LL)) ? (var_3) : (((/* implicit */unsigned int) var_2))))) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_0))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)71))) : (arr_9 [10U] [1U] [i_0] [(_Bool)1] [i_2] [i_2 - 1])))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1]))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 2) 
            {
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_2)) : (var_11)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_5))))) : (((((/* implicit */_Bool) var_8)) ? (1962860007U) : (1630067821U)))));
                var_16 = ((/* implicit */int) 2354744300U);
            }
            for (unsigned int i_5 = 1; i_5 < 16; i_5 += 1) 
            {
                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2354744319U))));
                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_14 [i_0] [i_1] [(_Bool)1] [i_0]))));
                var_18 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) 234881024U)) ? (((/* implicit */unsigned long long int) var_4)) : (var_0)))));
            }
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))));
        var_20 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_4)))) ? (((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 3) 
    {
        arr_22 [i_6] [(_Bool)1] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((unsigned short) var_6))))) ? (min((arr_2 [(unsigned short)10]), (min((((/* implicit */long long int) var_3)), (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_0 [14ULL] [i_6]), (((/* implicit */unsigned char) var_7))))) ? (((/* implicit */int) var_9)) : (((var_10) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1)))))))));
        var_21 -= ((/* implicit */signed char) ((((_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)187)) ? (((/* implicit */unsigned long long int) var_3)) : (arr_19 [7LL])))) ? (((/* implicit */unsigned long long int) arr_5 [i_6] [(unsigned char)3] [(unsigned char)3] [(unsigned char)3])) : (((unsigned long long int) arr_4 [i_6] [(unsigned char)3])))) : (((/* implicit */unsigned long long int) (-((+(var_1))))))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            for (short i_8 = 0; i_8 < 10; i_8 += 3) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(min((4294967287U), (((/* implicit */unsigned int) var_10))))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (var_1)))) ? (((/* implicit */long long int) var_8)) : (((long long int) arr_2 [i_7]))))));
                    arr_27 [i_6] [i_7] [i_7] = ((/* implicit */long long int) min((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_6)) : (var_3))), (((/* implicit */unsigned int) arr_20 [i_6] [i_7])))), (((/* implicit */unsigned int) ((short) arr_17 [i_7] [i_7] [i_7] [i_7])))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_2)), (min((((/* implicit */unsigned long long int) arr_11 [i_6] [(unsigned char)12])), (var_11))))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) ((var_11) > (var_11)));
        var_25 = ((/* implicit */unsigned long long int) (+(-6498868831850435887LL)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_10 = 2; i_10 < 13; i_10 += 1) /* same iter space */
        {
            arr_32 [i_10 - 2] [i_9] &= ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_10)) : (arr_11 [i_10 - 1] [i_9])));
            var_26 += ((/* implicit */int) ((signed char) 13506134298179646511ULL));
        }
        for (signed char i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
        {
            arr_35 [i_9] = ((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)64358)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-26914)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_3)) : (3733179678872017303LL))) : (min((-3928083792115515891LL), (((/* implicit */long long int) arr_17 [(signed char)14] [i_11 - 1] [i_11] [i_9]))))))));
            /* LoopNest 2 */
            for (unsigned char i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (int i_14 = 1; i_14 < 10; i_14 += 1) 
                        {
                            arr_43 [i_9] [i_13] = ((/* implicit */unsigned short) ((short) var_2));
                            arr_44 [i_9] [i_11 + 1] [i_12] [i_13] [i_14] [i_11 + 1] = ((/* implicit */unsigned long long int) (-(var_1)));
                        }
                        for (long long int i_15 = 3; i_15 < 12; i_15 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned int) arr_47 [i_11 - 2] [0ULL] [(signed char)10] [i_13 + 1] [i_13]))))) ? (min((((((/* implicit */_Bool) 1603762216U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) arr_33 [i_11 - 1] [8U])))) : (((/* implicit */unsigned long long int) ((int) min((((/* implicit */int) var_10)), (var_2))))))))));
                            var_28 ^= ((/* implicit */unsigned long long int) var_3);
                            arr_49 [i_15] [i_13] [i_9] = (!((!(((/* implicit */_Bool) var_2)))));
                            var_29 = ((/* implicit */unsigned int) var_2);
                        }
                        for (int i_16 = 2; i_16 < 13; i_16 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned char) min((((arr_42 [i_16] [i_16] [i_16 - 2] [1U] [i_16] [i_16 + 1] [i_16]) ? ((-(((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned char)255)))), ((~(var_6)))));
                            var_31 = ((/* implicit */signed char) var_3);
                            var_32 ^= ((/* implicit */unsigned int) var_8);
                            var_33 = ((/* implicit */_Bool) ((unsigned int) var_11));
                            var_34 = ((/* implicit */_Bool) max((arr_30 [i_11 - 2] [i_11 - 2]), (((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1)))));
                        }
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_17 = 4; i_17 < 11; i_17 += 1) 
                        {
                            var_35 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_13 + 1] [i_13 + 1] [9U] [i_13] [i_17]))) : (((((/* implicit */_Bool) 33554431)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_0)))));
                            var_36 = ((var_8) >= (var_2));
                        }
                        var_37 = ((/* implicit */signed char) (-(max((arr_5 [i_9] [i_11 - 2] [i_12] [i_13 + 1]), (((/* implicit */long long int) var_10))))));
                    }
                } 
            } 
            arr_56 [(signed char)1] = ((/* implicit */unsigned char) var_5);
        }
        for (short i_18 = 4; i_18 < 12; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_19 = 2; i_19 < 10; i_19 += 2) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
                {
                    {
                        var_38 = ((/* implicit */long long int) ((_Bool) var_8));
                        var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? ((+(arr_46 [i_9] [i_18 - 2] [i_19] [6ULL]))) : (8935141660703064064LL)));
                        arr_66 [i_9] [(short)7] [i_19] [(short)7] = ((/* implicit */long long int) arr_59 [i_18] [i_19]);
                        var_40 = ((/* implicit */signed char) min((((/* implicit */long long int) (!(var_7)))), (((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_1))) : (((/* implicit */long long int) ((/* implicit */int) min((var_10), (var_5)))))))));
                        arr_67 [i_9] = ((/* implicit */unsigned int) arr_11 [i_9] [i_19]);
                    }
                } 
            } 
            var_41 &= ((/* implicit */unsigned int) var_7);
            var_42 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) -1185428795)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (arr_6 [i_18] [i_9] [i_9])))), (max((arr_5 [i_18] [i_18] [i_9] [i_9]), (((/* implicit */long long int) 1727927843)))))) > (((/* implicit */long long int) (-(((/* implicit */int) var_10)))))));
        }
    }
    var_43 = ((/* implicit */unsigned long long int) max((var_43), (((/* implicit */unsigned long long int) (unsigned short)65535))));
}
