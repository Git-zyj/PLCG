/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33311
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-26568)) * (((/* implicit */int) (_Bool)0))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) var_0))) >> (((/* implicit */int) ((((/* implicit */int) var_14)) <= (((/* implicit */int) var_2)))))));
        var_16 = ((/* implicit */unsigned short) var_9);
    }
    for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))))) | (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_1])), (var_9)))))));
        var_18 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)221)) == (((/* implicit */int) (unsigned short)65529)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_7))));
        var_19 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_6 [i_1]))));
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) min((((arr_5 [i_1] [i_1]) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_10))) ^ (var_3))) - (4056576386U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_5 [i_1] [8LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)35), (((/* implicit */unsigned char) (signed char)6)))))) : (var_5))))))));
    }
    for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
    {
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            for (long long int i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) (_Bool)1)))), ((-(((/* implicit */int) (short)26567)))))), ((-(((/* implicit */int) var_2)))))))));
                        arr_17 [i_5] [i_4] [i_4] [(unsigned short)3] = ((/* implicit */unsigned short) max((((arr_14 [(unsigned short)22] [i_3] [i_4] [i_4] [i_5]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_4 + 1] [i_4 + 1] [i_4] [14U]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_5) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))))));
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */short) (unsigned char)255)), ((short)-1))))) ? ((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_4 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_5])) < (((/* implicit */int) arr_15 [i_2] [i_4] [i_3] [4ULL] [i_2]))))))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_15 [i_4] [9LL] [9LL] [i_4] [(unsigned char)1]))))) & (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) + (var_8)))))) || (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) var_13))));
                    }
                } 
            } 
        } 
        var_25 *= ((/* implicit */short) ((((/* implicit */int) arr_7 [i_2])) == (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))) >= (arr_8 [i_2] [i_2]))))));
    }
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 16; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            {
                var_26 = ((/* implicit */long long int) ((_Bool) min((((/* implicit */short) arr_13 [i_6] [(unsigned char)2] [i_7] [(unsigned short)3])), ((short)-26558))));
                var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) (short)-32756))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) >= (13004941057427896746ULL))))), ((+((+(var_5))))))))));
            }
        } 
    } 
}
