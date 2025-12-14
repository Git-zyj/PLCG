/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29704
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
    var_11 = ((((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (min((6738879694565431011ULL), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))))))) % (min((((/* implicit */unsigned long long int) ((var_5) ^ (((/* implicit */int) var_10))))), (min((((/* implicit */unsigned long long int) (unsigned char)255)), (4987848122291898005ULL))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((int) arr_0 [i_0]));
        var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 2600118708495739060LL)))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 1) 
                {
                    {
                        var_13 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (arr_13 [i_3] [i_2] [i_1 + 2] [(short)18]) : (((/* implicit */int) (unsigned char)255))));
                        arr_14 [i_1] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 513326331)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(var_8))))) : (((arr_11 [i_1] [(unsigned char)13] [i_1 + 2] [i_1 + 2] [(short)18]) - (arr_11 [i_1] [i_2] [i_2] [i_3] [i_4])))));
                        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_1]))));
                    }
                } 
            } 
            var_15 = ((/* implicit */_Bool) arr_6 [(unsigned char)0] [i_1 - 1]);
            var_16 = ((/* implicit */long long int) var_5);
        }
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_10 [i_1 + 2]))) ? (((/* implicit */unsigned long long int) arr_10 [i_5])) : (arr_7 [16U] [i_1 + 2])));
            var_19 = ((/* implicit */unsigned int) arr_7 [i_1] [i_5]);
        }
        for (long long int i_6 = 4; i_6 < 18; i_6 += 1) 
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_11 [i_6 - 4] [i_6] [i_6] [i_6 - 4] [i_6]))));
            arr_20 [i_1] [i_6] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_6) : ((~(arr_13 [i_6] [i_6 - 1] [i_6] [i_1])))));
            var_21 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_18 [i_1] [i_1])) & (((/* implicit */int) (_Bool)1))))));
        }
        var_22 = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        arr_25 [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) var_4)))))))) / (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) var_9)), (arr_9 [i_7] [(unsigned char)10] [i_7])))))))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */short) ((min((((/* implicit */int) arr_21 [i_7])), (((((/* implicit */int) (unsigned char)74)) >> (((/* implicit */int) (_Bool)1)))))) - (max((((((/* implicit */int) (_Bool)1)) + (-1615226263))), (((((/* implicit */int) (short)8389)) + (((/* implicit */int) (_Bool)1))))))));
            var_23 = ((/* implicit */short) var_10);
            var_24 = ((((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (arr_13 [i_8] [i_8] [i_7] [i_7])))) ^ (min((3096614239U), (((/* implicit */unsigned int) arr_13 [i_7] [i_8] [7U] [i_8])))));
        }
        for (long long int i_9 = 2; i_9 < 9; i_9 += 2) 
        {
            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), (min((arr_21 [i_7]), (((/* implicit */unsigned char) (_Bool)1)))))))));
            /* LoopSeq 4 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_11 = 2; i_11 < 8; i_11 += 3) 
                {
                    for (unsigned short i_12 = 1; i_12 < 9; i_12 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) ((var_0) ^ (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                            var_27 = ((/* implicit */short) ((11507726226881652853ULL) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-8394)) ? (8453590) : (((/* implicit */int) (unsigned char)255)))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) max((var_28), (-513326331)));
                var_29 = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)127))));
            }
            for (short i_13 = 0; i_13 < 10; i_13 += 3) 
            {
                var_30 = ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_34 [i_7] [i_7] [i_13])), (9101840578941188522ULL)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)8811)) - (((/* implicit */int) arr_16 [i_7] [i_13] [i_13]))))), (((((/* implicit */_Bool) arr_22 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_0)))))) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)8788))))), (min((var_2), (((/* implicit */unsigned long long int) -8453567)))))));
                var_31 = ((/* implicit */signed char) var_1);
                var_32 = ((/* implicit */_Bool) 4294967286U);
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 8; i_14 += 4) 
                {
                    for (unsigned int i_15 = 4; i_15 < 8; i_15 += 4) 
                    {
                        {
                            arr_49 [i_13] [i_9] [i_13] [2LL] [i_15 - 4] = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 1463213921)) <= (arr_19 [i_14 + 2] [i_13] [i_7])))))));
                            var_33 += min((((var_1) ? (((/* implicit */int) arr_32 [i_15] [i_14 + 2] [i_14 + 1] [i_9 + 1])) : (((/* implicit */int) arr_32 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_9 + 1])))), ((+(((/* implicit */int) var_1)))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                var_34 += ((/* implicit */unsigned char) ((unsigned int) arr_45 [i_9 + 1] [i_9] [i_9] [6ULL] [i_9 - 1]));
                arr_54 [i_16] [(short)2] [i_16] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_46 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 1]))));
                arr_55 [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_9 + 1])) ? (arr_28 [i_9 - 2]) : (arr_28 [i_9 + 1])));
                var_35 = ((/* implicit */unsigned long long int) ((long long int) arr_15 [i_9 + 1]));
            }
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) min((min((((/* implicit */long long int) var_10)), (arr_53 [(signed char)0] [i_9 - 2] [i_9] [i_9 + 1]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -4029935416450207882LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (4294967294U)))) && (((/* implicit */_Bool) (~(arr_40 [i_7] [i_9] [i_17] [i_17]))))))))))));
                var_37 = ((/* implicit */signed char) ((arr_40 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2]) << (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)127))))));
            }
            var_38 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (var_5)))) ? (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) var_4))))) : (var_3)))));
            arr_59 [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned int) -513326331)) != (165997744U))))) ? (((((/* implicit */_Bool) max((arr_42 [i_7] [i_7]), (((/* implicit */long long int) var_8))))) ? (max((((/* implicit */long long int) var_8)), (arr_56 [i_9] [i_9 + 1] [i_9]))) : (((/* implicit */long long int) min((8453590), (513326330)))))) : (((/* implicit */long long int) 3395795079U))));
        }
        var_39 = arr_9 [i_7] [i_7] [i_7];
    }
}
