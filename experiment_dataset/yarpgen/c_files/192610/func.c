/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192610
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_0]);
                    arr_7 [i_0] [i_0] [(short)12] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)20710))));
                    var_13 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) ((2221090816684632023LL) >> (((9396251521649030461ULL) - (9396251521649030428ULL)))))) ? (((2309741934U) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((var_4), (((/* implicit */signed char) arr_0 [i_2])))))))));
                    var_14 = var_11;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (short i_3 = 3; i_3 < 8; i_3 += 1) 
    {
        arr_10 [i_3 - 3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_4 [i_3] [i_3])) / (arr_5 [i_3] [i_3])))))) * ((+(6594489946656717452ULL)))));
        arr_11 [i_3 - 1] = ((/* implicit */long long int) var_9);
        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) arr_3 [i_3] [i_3 - 3] [i_3 + 3]))))) ? (min((((var_6) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)8]))))), (((/* implicit */long long int) arr_3 [i_3 + 3] [i_3] [i_3 + 2])))) : (((/* implicit */long long int) ((/* implicit */int) ((min((var_5), (((/* implicit */int) arr_6 [(_Bool)1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))))));
        arr_12 [i_3] [i_3] = var_11;
        arr_13 [(unsigned short)8] = ((/* implicit */unsigned char) min((((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3 + 3]))))), (((/* implicit */unsigned long long int) arr_4 [(signed char)13] [i_3 + 3]))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 2) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) < (var_10)));
        var_17 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)146))) & (6594489946656717452ULL))));
        var_18 ^= ((/* implicit */long long int) arr_2 [i_4]);
        arr_16 [i_4] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_14 [i_4]))));
        var_19 -= ((/* implicit */signed char) ((arr_5 [i_4] [i_4 + 1]) > (((/* implicit */int) arr_2 [i_4 + 1]))));
    }
    /* LoopNest 3 */
    for (long long int i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) max((var_20), (min((((/* implicit */int) var_1)), ((+(((/* implicit */int) arr_3 [i_5] [i_6] [i_7]))))))));
                    var_21 += ((/* implicit */short) (_Bool)0);
                    var_22 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_5] [i_5]))));
                }
            } 
        } 
    } 
}
