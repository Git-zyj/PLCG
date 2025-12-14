/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247911
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) arr_9 [i_3] [i_2] [i_1] [i_0]))));
                            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned short)63488), ((unsigned short)63488))))))) ? (((((/* implicit */int) (signed char)65)) - (((/* implicit */int) arr_2 [(_Bool)1])))) : (((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)2065)) : (((/* implicit */int) var_8))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */signed char) max((((long long int) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */int) arr_7 [i_0] [10U] [i_1] [i_0])) : (((/* implicit */int) (signed char)65))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2065))))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 23; i_4 += 2) 
                {
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_6 = 0; i_6 < 23; i_6 += 1) 
                            {
                                var_16 = (unsigned short)63510;
                                var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_0] [i_0] [16U] [i_1] [i_1])) == (((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_5]))));
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (((/* implicit */int) (signed char)-64))))) ? (max((arr_16 [i_1] [i_6] [i_6]), (((/* implicit */long long int) (short)32767)))) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (arr_5 [i_0] [(unsigned char)18] [i_4])));
                                arr_18 [i_0] [i_6] = ((/* implicit */_Bool) (+(arr_8 [i_0] [i_1] [i_6] [i_5] [i_6])));
                            }
                            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                            {
                                arr_21 [i_5] [(short)6] [i_1] [i_5] [(short)6] [(signed char)6] &= ((/* implicit */unsigned int) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7])))))))));
                                arr_22 [i_7] [i_1] [i_4] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (unsigned short)2065))) << (((/* implicit */int) ((((/* implicit */int) arr_19 [i_0] [14U] [14U] [i_7])) == (((/* implicit */int) (unsigned short)2065)))))));
                                arr_23 [11LL] [i_1] [(signed char)2] [i_7] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((short) arr_6 [i_4] [10ULL]))))) : ((~(17179869183LL)))));
                            }
                            /* LoopSeq 3 */
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 23; i_8 += 2) 
                            {
                                var_19 ^= ((((/* implicit */_Bool) ((int) (signed char)-75))) ? (((/* implicit */int) arr_25 [i_0] [i_0] [i_4] [i_5] [i_8] [i_8])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_4] [i_5] [0ULL])));
                                var_20 |= ((/* implicit */unsigned long long int) arr_1 [i_4]);
                                var_21 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)65)) ? (((/* implicit */unsigned long long int) arr_4 [i_1] [(_Bool)1])) : (arr_8 [(unsigned short)10] [i_1] [i_5] [i_5] [i_1])))) ? (((/* implicit */int) ((unsigned char) arr_1 [i_0]))) : (arr_14 [i_0] [i_4] [i_4] [i_4] [i_4])));
                                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)23187)) ? (((/* implicit */long long int) arr_14 [i_0] [i_1] [12LL] [i_5] [i_8])) : (arr_16 [i_8] [i_8] [i_5])));
                            }
                            for (signed char i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                            {
                                arr_29 [i_9] [i_9] [i_5] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)2048)), ((-(((((/* implicit */_Bool) (unsigned short)2065)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (1815902234U)))))));
                                arr_30 [i_0] [i_1] [i_1] [i_1] [(unsigned short)1] = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (+(arr_12 [i_4] [i_4])))) ? (((/* implicit */int) min((var_9), (arr_15 [i_0] [i_1] [i_1] [i_4] [i_1] [i_5] [i_4])))) : (((/* implicit */int) ((unsigned char) var_0))))));
                            }
                            for (signed char i_10 = 0; i_10 < 23; i_10 += 4) /* same iter space */
                            {
                                var_23 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-65)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [(_Bool)1] [i_5])) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [(unsigned char)1] [i_5] [i_10]))) : (((unsigned int) (_Bool)1)))));
                                var_24 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_10])) << (((/* implicit */int) arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))))) ? (((/* implicit */int) max((arr_2 [i_4]), (((/* implicit */unsigned short) arr_25 [i_10] [i_5] [i_4] [i_4] [i_0] [i_0]))))) : (((/* implicit */int) arr_2 [i_0]))));
                            }
                            var_25 = ((/* implicit */short) ((unsigned short) 17179869183LL));
                            var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
                            arr_33 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_4])) ? ((+(min((arr_4 [i_4] [(_Bool)1]), (((/* implicit */unsigned int) arr_19 [i_0] [22ULL] [i_4] [i_5])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)236)) ? ((~(((/* implicit */int) (unsigned short)63501)))) : ((~(((/* implicit */int) arr_13 [i_0] [6U] [6U] [i_4] [i_5])))))))));
                        }
                    } 
                } 
                arr_34 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-23208)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(signed char)5] [i_0] [i_0] [i_0]))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)63490)) + (((/* implicit */int) (unsigned short)2048))))) ? (((unsigned int) arr_26 [i_1] [i_1] [i_1] [i_0] [i_0])) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [9LL] [i_1] [i_0] [i_1]))) + (arr_28 [i_0] [11ULL] [(short)18])))))));
            }
        } 
    } 
    var_27 = ((/* implicit */short) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_28 = ((/* implicit */signed char) (+(((-7277845577685405472LL) % (arr_36 [3U] [i_11])))));
        arr_38 [16LL] |= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_11] [i_11])) ? (arr_36 [i_11] [i_11]) : (arr_36 [i_11] [i_11])));
    }
    var_29 = ((/* implicit */signed char) max((((((((/* implicit */_Bool) (unsigned short)2048)) ? (((/* implicit */int) (unsigned short)2027)) : (((/* implicit */int) (_Bool)0)))) / (((/* implicit */int) var_11)))), (((/* implicit */int) var_5))));
    var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_0)) + (2147483647))) << (((((/* implicit */int) var_8)) - (1)))))))))));
}
