/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193977
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
    var_10 *= ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(465301088142638625ULL)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)22960))))) ? (arr_1 [i_0 + 1]) : (((/* implicit */long long int) var_7)))) : (((long long int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1])))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */_Bool) (unsigned short)42563);
                    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min(((unsigned short)31099), (((/* implicit */unsigned short) (_Bool)1)))))));
                }
            } 
        } 
    }
    for (unsigned int i_3 = 2; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */long long int) (+(((/* implicit */int) min((((/* implicit */short) arr_10 [i_3 - 2] [i_3])), ((short)-14332))))))) - (((((/* implicit */long long int) (((_Bool)1) ? (arr_13 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) - (max((((/* implicit */long long int) 4294967295U)), (arr_1 [i_3 + 1])))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (short i_5 = 1; i_5 < 14; i_5 += 2) 
            {
                {
                    var_15 = max((arr_7 [i_4] [i_4] [i_5]), (((((/* implicit */_Bool) 4294967295U)) ? ((~(((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */int) (short)27341)) | (((/* implicit */int) (unsigned short)0)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 1; i_6 < 15; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 18; i_7 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned short)34436))))));
                                var_17 = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_9 [i_3 - 2] [i_4] [i_7])), ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_3] [i_3])))))), (((/* implicit */int) (!(arr_10 [i_3 - 1] [i_5]))))));
                                var_18 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (3953403387U)))) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (max((-1832807475), (((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)12438))));
                    arr_24 [i_4] = ((/* implicit */int) (-(((unsigned long long int) (-(341563910U))))));
                }
            } 
        } 
        var_20 = ((arr_16 [i_3] [i_3]) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 21)) ? (((/* implicit */int) arr_14 [i_3])) : (33554431)))));
    }
    /* vectorizable */
    for (int i_8 = 1; i_8 < 20; i_8 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 21; i_10 += 1) 
            {
                for (long long int i_11 = 3; i_11 < 18; i_11 += 4) 
                {
                    {
                        arr_34 [i_8] [i_8] [i_8] [i_8 - 1] [i_8] [i_8] = ((/* implicit */long long int) ((_Bool) arr_31 [i_8] [i_9] [i_8] [i_8]));
                        arr_35 [i_8] [i_8] [i_10] [i_10] = ((/* implicit */long long int) (_Bool)1);
                    }
                } 
            } 
        } 
        arr_36 [i_8] = (-(((/* implicit */int) arr_30 [i_8 + 1] [i_8 + 1])));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_32 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8] [i_8 + 1] [i_8]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_27 [i_8])))))));
        arr_37 [i_8] [i_8] &= ((((/* implicit */unsigned long long int) 2082585635)) >= ((~(arr_31 [i_8] [i_8] [i_8] [i_8 - 1]))));
    }
}
