/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228598
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
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((unsigned char) 6426867812924244992LL))) : (((/* implicit */int) ((unsigned short) (_Bool)1)))))) ? (((/* implicit */long long int) ((var_8) ? ((-(((/* implicit */int) (unsigned char)24)))) : (((/* implicit */int) (unsigned char)61))))) : (-6426867812924244993LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) var_16)) <= (((/* implicit */int) var_13))));
                    var_19 = ((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                {
                    arr_14 [i_0] [i_0] [9] [i_4] |= ((/* implicit */signed char) arr_4 [i_4]);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (((-(((/* implicit */int) (unsigned char)24)))) - ((~(var_11))))))));
                                arr_19 [i_6] = var_12;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned char i_7 = 4; i_7 < 19; i_7 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned int) arr_22 [(unsigned short)20] [i_8]);
            arr_25 [(signed char)16] = ((/* implicit */unsigned short) (-((-(max((arr_23 [i_7 + 2] [4] [i_7 + 2]), (((/* implicit */int) var_0))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_9 = 1; i_9 < 20; i_9 += 2) /* same iter space */
            {
                arr_28 [i_8] = ((/* implicit */signed char) 2529211137U);
                var_22 ^= ((arr_23 [i_7] [i_7 - 2] [i_9 + 1]) ^ (((/* implicit */int) var_15)));
                arr_29 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */int) (signed char)-15);
                /* LoopNest 2 */
                for (short i_10 = 1; i_10 < 20; i_10 += 3) 
                {
                    for (short i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_7]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_27 [i_10])) == (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) arr_34 [i_8] [i_7] [(unsigned short)6])) : (((/* implicit */int) var_4)))))))));
                            arr_36 [i_10] [i_8] [i_9 - 1] [i_8] [i_11] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)10)) != (((/* implicit */int) (signed char)122)))))) > (((arr_20 [i_7 - 2]) / (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_9 + 1] [i_8] [i_11])))))));
                            var_24 = ((/* implicit */short) arr_35 [i_7] [i_7] [i_7] [(unsigned short)2] [i_7] [i_7]);
                        }
                    } 
                } 
            }
            for (int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
            {
                arr_40 [i_7] [i_7] [1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_31 [i_7] [i_7] [i_7])))) || (((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)121)), (arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1])))))))) >= (((((/* implicit */_Bool) arr_37 [i_12 + 1] [14U] [i_8] [14U])) ? (arr_20 [i_8]) : (arr_20 [i_8])))));
                var_25 = max((((arr_21 [i_7 - 3]) / (((/* implicit */long long int) arr_30 [i_12 - 1] [i_8] [i_12])))), (((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)127))))))));
            }
        }
        for (signed char i_13 = 0; i_13 < 21; i_13 += 4) /* same iter space */
        {
            arr_43 [(signed char)4] [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) arr_26 [i_7 + 2] [i_13] [i_7 - 1]));
            var_26 = ((/* implicit */short) arr_24 [i_7 + 2]);
        }
        arr_44 [17] |= ((/* implicit */_Bool) arr_42 [i_7] [i_7 - 3]);
        arr_45 [i_7 - 4] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))) / (((/* implicit */int) ((_Bool) (unsigned char)61)))));
        var_27 = max((((/* implicit */long long int) (+(-8)))), (328108520943655924LL));
    }
    for (unsigned char i_14 = 4; i_14 < 19; i_14 += 4) /* same iter space */
    {
        arr_50 [i_14 + 2] [17] = ((/* implicit */_Bool) ((short) (+(907553075))));
        /* LoopNest 3 */
        for (long long int i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            for (int i_16 = 1; i_16 < 19; i_16 += 2) 
            {
                for (int i_17 = 0; i_17 < 21; i_17 += 1) 
                {
                    {
                        arr_58 [(unsigned char)15] [i_15] [i_15] [(unsigned char)15] [i_15] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) 9111877551959312310LL)) ? (9111877551959312306LL) : (9111877551959312289LL)));
                        var_28 = ((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_39 [6ULL] [i_14 + 1] [i_14 - 3])), (arr_32 [i_14] [i_15 + 2] [i_14] [i_14] [i_15 + 1]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_12)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_18 = 1; i_18 < 17; i_18 += 2) 
        {
            for (short i_19 = 1; i_19 < 20; i_19 += 3) 
            {
                for (int i_20 = 1; i_20 < 19; i_20 += 1) 
                {
                    {
                        arr_67 [i_14 + 2] [i_14 + 2] [i_19] [i_20 - 1] [i_14 + 1] [0U] = ((/* implicit */short) ((((/* implicit */_Bool) arr_48 [(unsigned char)20])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)-23313)) < (((/* implicit */int) arr_65 [(unsigned char)20] [i_14] [19] [i_14 + 1])))))) : (-6426867812924244994LL)));
                        arr_68 [16U] [i_14] [i_18] [i_14] = ((/* implicit */unsigned char) var_13);
                        var_29 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) (unsigned char)142)))));
                    }
                } 
            } 
        } 
    }
    var_30 = (+(((/* implicit */int) var_0)));
}
