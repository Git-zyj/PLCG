/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235582
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 23; i_3 += 2) 
                {
                    {
                        var_14 &= ((/* implicit */signed char) ((unsigned int) 2374704313U));
                        var_15 = ((/* implicit */long long int) arr_4 [i_0]);
                    }
                } 
            } 
            var_16 = ((/* implicit */short) min((((/* implicit */int) max(((!(((/* implicit */_Bool) arr_5 [i_0] [14ULL] [i_0 + 2])))), (((_Bool) var_7))))), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))));
        }
        var_17 = ((/* implicit */short) ((_Bool) ((arr_0 [i_0 + 2] [i_0 + 2]) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 3])) : (((/* implicit */int) var_7)))));
        var_18 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_6)), (arr_4 [i_0 - 2])))) ? ((+(((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)77)) != (((/* implicit */int) arr_2 [i_0 - 3]))))))) << (((11539010179426799206ULL) - (11539010179426799187ULL)))));
    }
    for (long long int i_4 = 3; i_4 < 22; i_4 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_4 [i_4 - 2]))) << (((/* implicit */int) (!(arr_12 [i_4] [i_4 + 2]))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) arr_7 [i_4] [i_4] [(signed char)12])))) != (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) arr_7 [i_4] [i_4 + 2] [(short)10])) : (((/* implicit */int) arr_5 [i_4 + 1] [(signed char)0] [i_4]))))))) <= (arr_14 [i_4] [i_4])));
        var_21 = ((/* implicit */signed char) max((6433809857074204001LL), (((/* implicit */long long int) ((short) 16750827318983647624ULL)))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned short) ((short) arr_7 [i_5] [i_5] [(_Bool)1]));
        var_23 = ((/* implicit */int) min((((short) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5])), (((/* implicit */short) arr_1 [i_5] [i_5]))));
        var_24 += ((/* implicit */long long int) ((((/* implicit */int) ((arr_10 [i_5] [i_5] [i_5] [i_5]) == (((/* implicit */int) min(((_Bool)0), ((_Bool)1))))))) < (((/* implicit */int) arr_1 [i_5] [i_5]))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
            {
                {
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_6] [i_5])) ? (6405895067683716447ULL) : (((/* implicit */unsigned long long int) ((arr_19 [i_5]) / (((/* implicit */unsigned int) ((/* implicit */int) (!(var_0)))))))))))));
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_8 [i_5] [i_6] [i_6] [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (unsigned char)108)))))) : (((((/* implicit */_Bool) 3673374539755603363LL)) ? (((/* implicit */unsigned long long int) -776503097)) : (0ULL))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        for (long long int i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            {
                                var_27 = ((unsigned long long int) ((unsigned int) ((int) arr_16 [i_5])));
                                arr_28 [i_5] [i_5] [i_5] [6] [i_9] = ((/* implicit */int) min(((!(((/* implicit */_Bool) 1172708332)))), (((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (!(((/* implicit */_Bool) -2287116119740144817LL)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (unsigned short i_12 = 3; i_12 < 12; i_12 += 2) 
            {
                {
                    var_28 = ((/* implicit */signed char) (+(max((10128047442033809698ULL), (arr_23 [i_10])))));
                    var_29 = ((/* implicit */_Bool) arr_22 [i_12] [i_10] [7LL] [i_11] [i_10]);
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_13 = 2; i_13 < 12; i_13 += 3) 
        {
            for (unsigned long long int i_14 = 3; i_14 < 12; i_14 += 3) 
            {
                {
                    arr_45 [i_10] [i_10] [i_14] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_10] [i_13] [i_10]))) ^ (var_4)))) ? ((+(((/* implicit */int) arr_29 [i_10])))) : ((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) arr_43 [i_10] [i_10] [i_14 + 1] [i_14 - 3])) : (((/* implicit */int) var_11)));
                    var_30 = ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) arr_7 [i_10] [i_13 - 2] [i_10]))))))) == (((unsigned int) arr_8 [i_14 - 1] [8LL] [i_14] [i_13] [i_10])));
                    var_31 = ((/* implicit */unsigned short) (unsigned char)108);
                    arr_46 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) ((unsigned long long int) (-((-(arr_44 [i_10] [i_13] [(unsigned char)12]))))));
                }
            } 
        } 
        var_32 = ((short) ((unsigned short) arr_30 [i_10]));
        var_33 &= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (-1LL) : (-3673374539755603364LL)))) ? (min((((((/* implicit */_Bool) arr_41 [i_10] [i_10] [i_10])) ? (16804298271066506138ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((unsigned long long int) arr_21 [i_10] [i_10] [i_10] [i_10])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1044950866119074717ULL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_42 [i_10] [i_10])))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_15 = 2; i_15 < 20; i_15 += 1) 
    {
        var_34 ^= ((/* implicit */unsigned short) (+(976372001)));
        var_35 &= ((/* implicit */unsigned long long int) ((int) arr_13 [i_15 + 3] [i_15]));
        arr_51 [i_15 + 2] [i_15] = ((/* implicit */signed char) (~(arr_10 [i_15] [i_15 + 3] [i_15] [i_15])));
    }
}
