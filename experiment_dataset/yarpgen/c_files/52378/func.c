/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52378
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
    for (short i_0 = 3; i_0 < 20; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) var_1)) % (((/* implicit */int) ((unsigned char) var_6)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) max((arr_2 [i_0] [i_0 + 2]), ((_Bool)1)))) - (((/* implicit */int) ((unsigned short) (short)31902))))))));
        arr_4 [i_0] [i_0 - 2] = ((/* implicit */int) min((max((6793228346457736584LL), (((/* implicit */long long int) arr_1 [i_0 - 2])))), (((6793228346457736562LL) >> (((var_8) - (16228323199618887478ULL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_12 [i_0] [i_1] [(signed char)0] = ((/* implicit */unsigned long long int) (_Bool)1);
                    arr_13 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (var_2)))) | (((arr_5 [i_0] [i_0 - 3]) ? (9223398068277038445ULL) : (var_8)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) : (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)15))) / (var_8))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_3 = 3; i_3 < 20; i_3 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) var_10)))) == (((/* implicit */int) (short)16383))));
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 22; i_4 += 2) 
        {
            for (long long int i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                {
                    {
                        arr_24 [i_3] [i_4 - 1] [i_4] [(unsigned short)12] = ((/* implicit */unsigned int) arr_21 [i_4] [2LL]);
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 3) 
                        {
                            arr_27 [i_6] [i_4] = ((_Bool) arr_17 [i_7 + 1] [i_4 - 1] [i_3 - 1]);
                            arr_28 [i_3 - 2] [i_3 - 2] [i_5] [i_6] [i_4] = ((/* implicit */long long int) ((int) (signed char)-26));
                            var_16 = ((/* implicit */unsigned long long int) max((var_16), ((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)60803)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)25758))) : (arr_21 [(_Bool)1] [i_6]))) : (((/* implicit */unsigned long long int) 16LL))))));
                            var_17 = ((/* implicit */_Bool) var_5);
                        }
                        arr_29 [i_4] [(short)2] [i_6] = ((/* implicit */long long int) 677483724);
                    }
                } 
            } 
        } 
        arr_30 [i_3 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) (unsigned char)189)) : ((~(((/* implicit */int) (short)26706))))));
    }
    /* LoopNest 2 */
    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        for (short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_31 [i_8] [(unsigned short)10]))));
                var_19 = (unsigned char)242;
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_0) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (unsigned short)60809))))) ? (min((((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_9]))))), (var_0))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 17179869182ULL)) ? (arr_15 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_8] [i_8] [i_9] [i_8]))))))))))));
                var_21 ^= ((/* implicit */unsigned short) max((max((((((/* implicit */_Bool) arr_22 [i_8] [i_8] [i_8] [i_8] [(unsigned char)2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(unsigned char)12] [i_8] [i_8] [i_8]))) : (arr_21 [i_8] [i_9]))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (signed char)38)), ((short)26689)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_8])) && (((/* implicit */_Bool) var_7))))) % (((/* implicit */int) arr_23 [i_8] [i_8] [(_Bool)0] [i_8])))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */unsigned short) var_6);
    var_23 = ((/* implicit */unsigned short) (signed char)38);
    var_24 = ((/* implicit */unsigned int) max(((short)-26705), (((/* implicit */short) ((unsigned char) ((var_7) / (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
}
