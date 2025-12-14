/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194196
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_20 -= ((/* implicit */signed char) ((arr_0 [(unsigned short)9] [i_0]) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_12)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        for (signed char i_5 = 3; i_5 < 17; i_5 += 1) 
                        {
                            {
                                var_21 = ((arr_6 [(short)0] [i_4 + 1] [i_3]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5 - 1] [i_5] [i_5 + 3] [i_4 + 1] [6ULL] [i_5] [i_4 - 1])) ? (((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5 - 2] [i_4 + 1] [i_4 + 1] [i_5] [i_4 + 1])) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5 + 3] [i_4 + 1] [(unsigned char)7] [i_5] [i_4 + 1]))))));
                                var_22 += ((/* implicit */int) (-(((((/* implicit */_Bool) (~(13861632171965605693ULL)))) ? (((((/* implicit */_Bool) (unsigned short)14271)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4 - 1] [i_5 - 3])))))));
                                arr_17 [i_5] [(_Bool)1] [(short)13] = ((/* implicit */unsigned long long int) ((unsigned int) (unsigned short)14275));
                                var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-118)))))) % (((((/* implicit */_Bool) (signed char)103)) ? (3690581702987964219ULL) : (((/* implicit */unsigned long long int) 949437371U)))))))));
                                var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_3] [(short)8] [i_3] [(unsigned short)0]))) / (3220460981243035869LL)))) ? (3220460981243035893LL) : (((/* implicit */long long int) ((/* implicit */int) (short)30235)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) arr_10 [i_1] [i_1] [(unsigned short)3] [i_1]);
                }
            } 
        } 
        var_26 = ((/* implicit */short) arr_12 [16ULL] [(short)10] [i_1] [i_1] [(unsigned char)16] [i_1]);
        arr_18 [13LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139)))))) > (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (arr_8 [i_1] [i_1]) : (arr_8 [i_1] [i_1])))));
        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) arr_15 [(short)2] [i_1] [i_1] [i_1] [i_1] [i_1]))));
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
    {
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 11; i_8 += 2) 
                {
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
                        {
                            {
                                arr_33 [i_6] [i_7] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_7] [i_9])))))));
                                arr_34 [i_6] [i_6] [i_8] [i_9] [(signed char)5] = ((/* implicit */_Bool) (((+(arr_30 [6ULL] [i_8] [i_9] [i_10]))) + ((+(((/* implicit */int) arr_24 [i_6] [i_6] [i_6]))))));
                                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) (signed char)-6))));
                            }
                        } 
                    } 
                } 
                var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) ((((((/* implicit */_Bool) arr_22 [i_7] [i_6])) ? (arr_22 [i_6] [i_7]) : (arr_22 [i_7] [i_7]))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)59911)))))))));
                var_30 = ((/* implicit */_Bool) (unsigned char)74);
            }
        } 
    } 
    var_31 ^= ((/* implicit */_Bool) ((unsigned long long int) var_6));
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
        {
            {
                arr_40 [i_11] = ((/* implicit */signed char) (_Bool)1);
                var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((_Bool) ((((/* implicit */int) arr_35 [i_11])) < (((/* implicit */int) (short)24205))))) ? (((((/* implicit */_Bool) (short)-8192)) ? (((/* implicit */int) (unsigned char)184)) : (((/* implicit */int) (signed char)-87)))) : (((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */int) arr_35 [i_11])) : ((-(((/* implicit */int) arr_37 [i_11])))))))))));
                var_33 = ((/* implicit */unsigned long long int) arr_37 [(short)19]);
                arr_41 [(short)5] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)23429)) ? (-9223372036854775789LL) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_36 [i_12]))))));
                arr_42 [i_11] [(signed char)6] = ((/* implicit */signed char) ((((/* implicit */int) (short)-14414)) & (((/* implicit */int) (unsigned char)49))));
            }
        } 
    } 
    var_34 += ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (var_0)));
}
