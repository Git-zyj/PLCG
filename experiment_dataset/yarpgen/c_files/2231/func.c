/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2231
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 741547261U)) ? (445826075U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [3ULL])) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 - 1]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2]))) : (var_0)))));
    }
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((-((-(((/* implicit */int) arr_5 [i_1])))))) : ((~(((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_3))))))));
        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) (+((-(3553420021U)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) && (((/* implicit */_Bool) var_3))))) % (((/* implicit */int) var_10)))) : ((+(((((/* implicit */int) var_11)) | (((/* implicit */int) var_9)))))))))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 10; i_2 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned long long int) arr_0 [i_2]);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                var_17 += ((/* implicit */long long int) var_11);
                var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((_Bool) var_1)))));
            }
            for (short i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) max((arr_4 [i_1] [i_2]), (var_5)))) == (((/* implicit */int) (unsigned char)12)))))));
                    arr_16 [i_1] [i_2] [i_4] [i_4 + 1] [i_4] [i_5] = ((/* implicit */signed char) var_10);
                    var_20 = ((/* implicit */long long int) var_1);
                }
                var_21 = ((/* implicit */unsigned int) max(((~(arr_10 [i_2 + 1] [i_4] [i_4 - 1]))), (((((/* implicit */int) var_10)) ^ (arr_10 [i_2 - 1] [i_2 - 1] [i_4 - 1])))));
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_12 [2ULL] [i_2 + 1])))) ? (((/* implicit */int) max((var_11), (((/* implicit */signed char) var_9))))) : (((/* implicit */int) max((arr_7 [i_4 + 1] [i_4 - 1]), (((/* implicit */short) var_11)))))));
                var_23 = ((/* implicit */long long int) max((11U), (((/* implicit */unsigned int) (~(((((/* implicit */int) var_10)) << (((var_7) + (164113212))))))))));
            }
            var_24 = ((/* implicit */long long int) (~(((4294967292U) % (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63555)))))))));
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) var_0))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                        {
                            arr_27 [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_2]);
                            arr_28 [i_1] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_9))));
                            var_26 = ((/* implicit */signed char) (~(var_0)));
                            arr_29 [i_1] [i_2] [i_6] [i_7] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_8 [i_2 + 2]))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) /* same iter space */
                        {
                            var_27 += ((/* implicit */signed char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (3553420035U)))) ? (3299590574770430955ULL) : (((/* implicit */unsigned long long int) arr_10 [1LL] [i_6] [i_6])))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) arr_22 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 - 1]))))))));
                            var_28 = ((/* implicit */int) ((unsigned short) max((max((arr_33 [i_9] [i_9] [i_7] [i_6] [i_2] [i_1]), (((/* implicit */long long int) arr_0 [i_1])))), (((/* implicit */long long int) max((arr_30 [i_1]), ((unsigned short)27542)))))));
                            arr_34 [(_Bool)1] [i_2 + 1] [i_6] [i_7] [i_9] = ((/* implicit */unsigned char) (~((~(((var_9) ? (3553420036U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
                        }
                    }
                } 
            } 
            arr_35 [i_1] [i_1] [i_2 + 1] = ((/* implicit */_Bool) var_5);
        }
        for (short i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(arr_19 [i_1] [i_10 + 1] [i_10])))) == (12954874644718868739ULL))))));
            /* LoopNest 2 */
            for (unsigned short i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 1) 
                {
                    {
                        arr_42 [i_12] [i_10] [i_11] [i_11] [i_10] [i_1] = ((/* implicit */unsigned short) max((((((/* implicit */long long int) arr_17 [i_1] [i_10 - 1] [i_10 - 1] [i_1])) | (max((((/* implicit */long long int) 4294967292U)), (arr_25 [i_12] [i_11] [10] [10] [i_1]))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_1])) ? (((/* implicit */int) arr_18 [i_10] [i_10] [i_1])) : (((/* implicit */int) arr_22 [i_1] [i_10 + 2] [i_10 + 2] [i_12])))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_30 = ((/* implicit */long long int) var_9);
                            var_31 = ((/* implicit */long long int) var_9);
                        }
                        for (unsigned short i_14 = 2; i_14 < 8; i_14 += 2) 
                        {
                            var_32 = ((/* implicit */unsigned short) var_7);
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((((/* implicit */_Bool) max((max((((/* implicit */long long int) var_11)), (var_0))), (((/* implicit */long long int) ((unsigned short) 3553420035U)))))) ? (min((((/* implicit */int) arr_5 [i_1])), (-839628204))) : ((-(((/* implicit */int) var_5)))))))));
                            arr_47 [i_10] [i_10] = ((/* implicit */int) ((((6440425123550011769LL) != (var_0))) || (((/* implicit */_Bool) arr_10 [i_10] [i_10 + 1] [i_14 - 1]))));
                        }
                    }
                } 
            } 
        }
    }
    for (short i_15 = 1; i_15 < 18; i_15 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 19; i_16 += 4) 
        {
            for (long long int i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                for (unsigned long long int i_18 = 1; i_18 < 17; i_18 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_19 = 1; i_19 < 18; i_19 += 2) 
                        {
                            var_34 = ((/* implicit */unsigned short) ((signed char) var_5));
                            var_35 = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) && ((!(((/* implicit */_Bool) var_10)))))) && (((/* implicit */_Bool) (unsigned short)65535))));
                            var_36 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */_Bool) var_10)) ? (arr_57 [i_15] [i_16] [i_16] [i_19]) : (((/* implicit */unsigned long long int) arr_60 [i_15] [i_16] [i_17] [i_17] [i_18] [i_18] [i_19 - 1]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_10)) : (var_7))))));
                            var_37 += ((/* implicit */long long int) ((_Bool) (-(((((/* implicit */long long int) var_7)) + (var_8))))));
                        }
                        arr_61 [i_15] = ((/* implicit */unsigned char) arr_49 [i_15]);
                        /* LoopSeq 2 */
                        for (long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                        {
                            arr_64 [i_15 - 1] [i_15] [i_17] = ((long long int) ((unsigned int) 0ULL));
                            var_38 = max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) ((_Bool) var_9)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-1)), (12954874644718868748ULL)))) ? (5491869428990682876ULL) : (6453349867032239074ULL))));
                        }
                        /* vectorizable */
                        for (unsigned short i_21 = 3; i_21 < 16; i_21 += 2) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) (-(var_7)));
                            var_40 |= ((/* implicit */unsigned char) var_1);
                        }
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((arr_62 [i_15 - 1] [i_15] [i_15] [i_15 + 1] [i_15] [i_15] [i_15 + 1]), (arr_62 [i_15] [8] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1] [i_15 - 1])))) % ((((_Bool)1) ? (arr_55 [i_15] [i_15] [i_15] [i_15]) : (min((((/* implicit */unsigned long long int) var_3)), (arr_55 [i_15] [0ULL] [i_15] [i_15 + 1])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_22 = 3; i_22 < 18; i_22 += 4) 
        {
            for (unsigned char i_23 = 1; i_23 < 17; i_23 += 2) 
            {
                for (int i_24 = 1; i_24 < 18; i_24 += 1) 
                {
                    {
                        arr_75 [i_15] [i_22] [i_15] [i_23 - 1] [i_23 + 1] [14U] = ((/* implicit */unsigned short) min((((signed char) ((arr_57 [i_15] [i_22 - 3] [i_23] [i_24]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))), ((signed char)-17)));
                        var_42 &= ((/* implicit */unsigned char) 4U);
                    }
                } 
            } 
        } 
        var_43 |= ((/* implicit */_Bool) arr_59 [i_15] [i_15 + 1] [i_15] [i_15] [i_15] [i_15]);
        var_44 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(arr_54 [i_15 + 1] [i_15] [i_15] [i_15 + 1]))))));
    }
    /* vectorizable */
    for (short i_25 = 1; i_25 < 18; i_25 += 1) /* same iter space */
    {
        var_45 = ((/* implicit */long long int) arr_57 [i_25 - 1] [i_25] [i_25 + 1] [i_25]);
        var_46 = ((/* implicit */_Bool) arr_71 [i_25] [i_25] [i_25] [i_25 - 1]);
        var_47 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_25 + 1] [i_25 + 1] [i_25] [i_25] [i_25])) ? (arr_66 [i_25] [i_25 + 1] [i_25] [i_25 + 1] [i_25]) : (arr_66 [i_25] [i_25 + 1] [(signed char)7] [i_25] [i_25 + 1])));
        var_48 = ((/* implicit */unsigned short) arr_52 [i_25] [7ULL]);
    }
    var_49 = ((/* implicit */long long int) var_4);
}
