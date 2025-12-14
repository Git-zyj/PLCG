/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26579
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_11 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_2 [10ULL] = ((/* implicit */unsigned long long int) var_9);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)10772)) ? (1201878172U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)124))));
    }
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((_Bool) (unsigned short)10794));
                    arr_15 [i_2] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)43881)) ? (((/* implicit */int) min(((unsigned short)9723), (((/* implicit */unsigned short) var_0))))) : (((/* implicit */int) arr_8 [i_2] [i_2]))))) : (2458605226U)));
                    arr_16 [i_4] [i_4] = ((/* implicit */long long int) max(((~(((/* implicit */int) ((short) arr_9 [i_2] [i_3]))))), (((/* implicit */int) arr_13 [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 3; i_5 < 22; i_5 += 4) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */short) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) arr_17 [i_5 - 2] [i_5 + 2])) : (arr_22 [i_5 + 2] [i_3] [i_4] [i_5] [i_4]))), (((/* implicit */unsigned long long int) ((short) var_9)))));
                                arr_23 [i_6] [i_5 + 2] [i_4] [(_Bool)1] [i_4] [i_3] [i_2] = ((/* implicit */long long int) (unsigned short)54769);
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((int) ((((/* implicit */_Bool) var_9)) ? (942005194U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((var_9) << (((var_6) - (3473656296378897196ULL))))))));
            arr_27 [i_2] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)59))));
            arr_28 [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_13 [i_2]);
        }
        var_16 = ((/* implicit */int) var_7);
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 24; i_8 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) (+(((arr_24 [i_8] [i_8] [i_8]) - (((/* implicit */int) arr_13 [i_8]))))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 4) 
        {
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 1) 
            {
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
                {
                    {
                        var_18 = (~(((3372678827681650909ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)124))))));
                        var_19 = ((/* implicit */unsigned long long int) ((int) var_1));
                        arr_37 [i_11] [i_9] |= ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 1; i_12 < 20; i_12 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10796)) ? (arr_22 [i_9] [i_9] [i_9] [i_9] [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                            arr_42 [i_10] = ((long long int) (~(3093089123U)));
                            arr_43 [i_10] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */int) arr_14 [(signed char)9] [i_9] [i_9] [i_9]);
                        }
                        for (unsigned short i_13 = 0; i_13 < 24; i_13 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            var_22 ^= ((/* implicit */unsigned int) 1375287566);
                            arr_47 [i_10] [i_11] [i_8] [i_8] [i_10] = ((/* implicit */unsigned int) (unsigned short)58461);
                        }
                        for (int i_14 = 0; i_14 < 24; i_14 += 4) 
                        {
                            arr_52 [i_8] [i_8] [i_8] [i_8] [i_11] [i_8] |= ((/* implicit */int) arr_12 [i_8]);
                            var_23 = ((/* implicit */unsigned long long int) var_4);
                            var_24 = ((/* implicit */unsigned short) arr_26 [i_8] [i_9] [i_14]);
                            arr_53 [i_8] [i_8] [i_8] [i_10] [i_8] = ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_36 [i_8] [i_9] [i_9] [i_8] [i_11] [i_14]))))));
                            arr_54 [i_8] [i_8] [i_8] [i_10] [i_8] [i_8] = ((/* implicit */short) (unsigned short)54776);
                        }
                        arr_55 [i_10] [i_10] [i_10] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_10]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_15 = 3; i_15 < 22; i_15 += 2) 
        {
            for (short i_16 = 2; i_16 < 20; i_16 += 4) 
            {
                for (int i_17 = 1; i_17 < 22; i_17 += 4) 
                {
                    {
                        var_25 = ((/* implicit */int) var_7);
                        arr_64 [i_8] [i_15] [i_16] [i_8] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) 1201878172U)) && (arr_25 [i_16 + 3] [i_16 + 2] [i_16 + 4])));
                        var_26 = ((/* implicit */unsigned char) (+(arr_33 [i_17] [i_15 - 1] [(signed char)5])));
                    }
                } 
            } 
        } 
    }
    var_27 = ((/* implicit */long long int) ((((((var_1) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6)))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18))))))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
}
