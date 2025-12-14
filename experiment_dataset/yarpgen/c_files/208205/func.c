/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208205
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
    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (var_10) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_19)))))));
    var_21 = ((/* implicit */unsigned long long int) var_18);
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) -1166862820832768522LL));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) | (5191885493121505706LL)));
        arr_5 [i_0] |= arr_1 [i_0];
    }
    for (int i_1 = 2; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_10 [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned int) var_19)), (arr_8 [i_1 - 2]))))) ? ((+(6895667764532934237LL))) : (((-5191885493121505707LL) * (((/* implicit */long long int) ((arr_8 [i_1]) / (var_0))))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (var_10)))) ? ((+(((/* implicit */int) ((short) arr_8 [i_1]))))) : (((/* implicit */int) max((arr_9 [i_1 + 1] [i_1 - 2]), (arr_7 [i_1 + 1] [i_1 - 1]))))));
        var_23 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [(short)17])) ? (((/* implicit */int) ((unsigned short) arr_6 [i_1]))) : (((/* implicit */int) arr_7 [i_1 + 1] [i_1 + 1]))))), (((unsigned long long int) 5191885493121505712LL))));
        var_24 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1]))))), ((-(((/* implicit */int) arr_7 [0U] [i_1]))))));
        var_25 = ((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [(unsigned short)20] [(unsigned short)20]), (arr_9 [i_1] [i_1])))) || (((/* implicit */_Bool) arr_8 [i_1 + 1]))))), (((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) var_12)))) : ((-(((/* implicit */int) arr_7 [i_1] [i_1]))))))));
    }
    for (int i_2 = 2; i_2 < 23; i_2 += 4) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) min((var_26), (((unsigned short) ((arr_12 [i_2 - 2]) << (((((/* implicit */int) arr_9 [i_2] [i_2 - 1])) + (99))))))));
        arr_14 [i_2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) -593422286))));
        var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2])) ? (((/* implicit */int) var_19)) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 2])) <= (((/* implicit */int) arr_13 [i_2 - 2] [i_2 - 1])))))));
    }
    for (int i_3 = 2; i_3 < 23; i_3 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
        {
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                {
                    {
                        arr_27 [i_4] = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_13 [i_5] [i_6 + 3])))) + (((((/* implicit */int) arr_15 [i_5])) / (((/* implicit */int) arr_18 [i_4] [i_5] [i_4]))))));
                        arr_28 [i_6] [i_4] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_17 [i_3] [i_4])) ? (4913287360335921210LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_5] [i_6]))))), (((/* implicit */long long int) (_Bool)0))))) && (((/* implicit */_Bool) ((((arr_23 [i_5] [i_4 - 1]) <= (((/* implicit */unsigned long long int) arr_26 [i_4])))) ? (arr_8 [i_5]) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [11LL] [i_5]))) : (arr_12 [(unsigned short)3]))))))));
                        var_28 = ((/* implicit */int) ((((((((/* implicit */_Bool) 17669267655508218643ULL)) ? (((/* implicit */int) (unsigned char)109)) : (593422285))) == (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)(-32767 - 1)), ((short)-10521))))) : (((unsigned long long int) arr_18 [i_5] [i_5] [i_4]))));
                        /* LoopSeq 1 */
                        for (int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_31 [i_4] [i_5] [i_4] [(unsigned short)1] = ((/* implicit */signed char) -74311598293092240LL);
                            arr_32 [i_3] [i_5] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((signed char) ((((/* implicit */_Bool) (short)18623)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)20))) : (6917529027641081856LL)))));
                            arr_33 [i_7] [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) (signed char)56)) && ((_Bool)1))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 14LL))))) : (((/* implicit */int) ((signed char) arr_22 [i_4] [i_4 - 2]))))));
                            var_29 = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6 + 3])) || (((/* implicit */_Bool) (+(arr_26 [i_4]))))))), (max((((long long int) 4913287360335921213LL)), (((/* implicit */long long int) var_13)))));
                            var_30 = ((/* implicit */unsigned short) ((unsigned int) min((((((/* implicit */long long int) ((/* implicit */int) arr_17 [(_Bool)1] [i_4]))) != (var_5))), (((arr_21 [i_4] [i_5] [i_4]) >= (arr_6 [i_5]))))));
                        }
                    }
                } 
            } 
        } 
        var_31 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((long long int) min((var_17), (5191885493121505704LL))))));
        var_32 = arr_6 [i_3 - 1];
    }
}
