/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189655
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
    var_16 = (_Bool)1;
    var_17 |= ((/* implicit */unsigned int) var_15);
    var_18 = ((/* implicit */_Bool) min((var_18), (var_6)));
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */long long int) ((((/* implicit */int) ((short) (+(((/* implicit */int) arr_1 [i_0])))))) <= (((/* implicit */int) (!((!((_Bool)0))))))));
                    arr_7 [i_0] [i_0] [i_2] = ((/* implicit */int) arr_0 [i_0] [16]);
                    var_20 = ((/* implicit */signed char) ((int) ((_Bool) (((_Bool)0) ? (2297975777290601999ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        arr_10 [i_3] = ((/* implicit */short) arr_8 [i_3]);
        var_21 = ((/* implicit */int) (signed char)-123);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((-2241427115978357290LL) == (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4])))))) : (((/* implicit */int) arr_12 [i_4] [i_4])))))));
        arr_14 [i_4] = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 2241427115978357290LL)) && (((/* implicit */_Bool) var_9))))));
    }
    for (int i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] = ((/* implicit */short) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_6 = 2; i_6 < 19; i_6 += 4) 
        {
            var_23 -= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_21 [i_5] [i_6 + 1] [i_6 + 1]))));
            var_24 = ((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6 + 2]))) : (2241427115978357289LL)));
            var_25 ^= (_Bool)0;
            arr_22 [i_5] [i_5] [i_5] = ((/* implicit */long long int) (-(67108863U)));
        }
        /* vectorizable */
        for (signed char i_7 = 3; i_7 < 21; i_7 += 3) 
        {
            arr_26 [i_7] [(_Bool)1] = ((/* implicit */unsigned int) arr_9 [i_7 - 1] [i_7 - 1]);
            /* LoopSeq 2 */
            for (int i_8 = 2; i_8 < 22; i_8 += 2) 
            {
                var_26 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_15 [(_Bool)1])) ? (((/* implicit */unsigned int) 674889262)) : (arr_17 [i_5]))));
                arr_29 [i_7] [13] [i_8] [i_8] = ((/* implicit */unsigned int) var_3);
                arr_30 [i_7] [i_7] [i_8] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_5])) < (((/* implicit */int) ((18446744073709551615ULL) <= (((/* implicit */unsigned long long int) -1786560884)))))));
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_8])) ? (((long long int) arr_27 [i_5] [i_5] [i_5] [i_8])) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((short) (unsigned char)82)))));
                    var_29 = ((/* implicit */unsigned long long int) ((arr_8 [(_Bool)1]) ? (((/* implicit */int) arr_23 [i_7] [i_7] [i_7])) : (((/* implicit */int) var_5))));
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) arr_32 [i_7 + 1])) : (arr_17 [(_Bool)1])));
                    var_31 ^= ((/* implicit */_Bool) (signed char)(-127 - 1));
                    var_32 |= ((/* implicit */signed char) ((arr_25 [i_5] [i_7 + 1]) == (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) << (((var_4) - (2483322867U))))))));
                }
                var_33 += ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)0))))));
                var_34 = ((/* implicit */_Bool) -2072741363);
                var_35 = ((/* implicit */signed char) arr_36 [i_7] [i_7] [i_7 - 1] [i_7 - 2]);
            }
            arr_37 [i_5] [i_7] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_24 [i_5])) + (((/* implicit */int) (_Bool)1))))));
        }
        var_36 = ((/* implicit */long long int) max((((/* implicit */int) arr_33 [i_5] [i_5] [i_5] [i_5])), (-366007165)));
    }
    for (int i_11 = 0; i_11 < 23; i_11 += 4) /* same iter space */
    {
        arr_40 [i_11] = ((int) 15007162195189103921ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 1; i_12 < 20; i_12 += 3) 
        {
            for (signed char i_13 = 1; i_13 < 20; i_13 += 2) 
            {
                {
                    var_37 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) var_8)) == (var_12))) ? ((~(((/* implicit */int) arr_43 [i_12] [i_13 + 1])))) : (((((/* implicit */_Bool) arr_15 [i_11])) ? (15) : (((/* implicit */int) (signed char)127))))));
                    var_38 = ((/* implicit */unsigned int) arr_42 [i_11] [i_11] [i_11]);
                    var_39 = ((/* implicit */unsigned long long int) ((_Bool) (_Bool)1));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_40 -= ((/* implicit */short) -674889259);
                                var_41 = ((/* implicit */signed char) (((+(arr_13 [i_11] [(short)6]))) + (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -1414230468)) ? (((/* implicit */int) var_15)) : (arr_32 [i_11])))))));
                                var_42 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_44 [i_12 + 3] [i_13 + 1])) ? (((/* implicit */int) arr_42 [i_12 + 1] [i_13 - 1] [i_13])) : (((/* implicit */int) arr_42 [i_12 - 1] [i_13 + 3] [i_13 + 1]))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4611686018427387904ULL)) ? (67108863ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (arr_25 [(unsigned char)18] [i_14]))));
                                var_43 = ((/* implicit */_Bool) var_7);
                            }
                        } 
                    } 
                    var_44 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)32))));
                }
            } 
        } 
        var_45 = ((/* implicit */short) ((((int) max((((/* implicit */signed char) var_0)), (arr_15 [i_11])))) >> ((((((!(((/* implicit */_Bool) 13835058055282163740ULL)))) ? (min((16285238883326246005ULL), (((/* implicit */unsigned long long int) arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) - (14771ULL)))));
    }
}
