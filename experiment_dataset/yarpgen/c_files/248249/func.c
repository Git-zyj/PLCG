/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248249
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((((1352640529U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) * (((min((((/* implicit */unsigned int) (unsigned short)65535)), (4294967290U))) / (((/* implicit */unsigned int) (+(var_7)))))))))));
                var_11 = ((/* implicit */int) max((var_11), (min((((((/* implicit */int) arr_2 [i_0])) << (((((/* implicit */int) arr_2 [i_1])) - (64953))))), (((/* implicit */int) min((arr_2 [i_1]), (((/* implicit */unsigned short) arr_1 [i_0])))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_0] [i_1])) << (((-2030898360) + (2030898384)))))) || (((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (unsigned char)63)), (arr_4 [(_Bool)1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_1])) >> (((/* implicit */int) arr_5 [11] [11]))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            {
                var_12 -= ((/* implicit */short) (+(((/* implicit */int) arr_7 [i_3]))));
                var_13 = ((/* implicit */long long int) arr_7 [i_2]);
            }
        } 
    } 
    /* LoopSeq 1 */
    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
    {
        var_14 |= (((~(((/* implicit */int) arr_10 [i_4])))) + (((/* implicit */int) arr_11 [i_4])));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_15 = ((/* implicit */unsigned long long int) (-(((702387310) & ((~(((/* implicit */int) arr_15 [i_4] [i_5] [i_5]))))))));
            var_16 &= ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) ((unsigned char) (+(5206933643063858392ULL)))))));
        }
        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
        {
            arr_18 [i_4] [i_4] &= ((/* implicit */unsigned int) ((((min((((/* implicit */int) (_Bool)0)), (((var_7) / (((/* implicit */int) var_3)))))) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_22 [i_4] [i_4] [i_4] = ((/* implicit */unsigned char) var_1);
                var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_6]))));
            }
            var_18 ^= ((/* implicit */short) (+((-(((/* implicit */int) arr_11 [i_6]))))));
        }
        var_19 = ((/* implicit */int) var_0);
        arr_23 [(unsigned char)20] [(unsigned char)20] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_11 [i_4])) << (((/* implicit */int) arr_12 [i_4] [i_4])))) | (min((((((/* implicit */_Bool) (unsigned short)8176)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_14 [i_4])))), (((/* implicit */int) min((((/* implicit */unsigned char) arr_12 [i_4] [i_4])), (arr_20 [i_4] [i_4]))))))));
    }
    var_20 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (unsigned char i_8 = 0; i_8 < 20; i_8 += 2) 
    {
        for (signed char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_8] [i_8] [i_8])) ^ (((/* implicit */int) min((((/* implicit */unsigned short) arr_24 [i_9])), (min((arr_9 [i_9] [i_8] [i_8]), (((/* implicit */unsigned short) arr_11 [i_8])))))))));
                var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */unsigned short) ((short) (unsigned short)52737))), (arr_8 [i_9]))))));
                var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (-(((/* implicit */int) ((short) arr_20 [i_8] [i_9]))))))));
                var_24 *= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 2097151U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_8] [(unsigned short)12]))) : (5ULL))) << (((((unsigned long long int) var_0)) - (4953228526307943853ULL))))) >> (min((((/* implicit */int) arr_13 [i_8])), ((+(((/* implicit */int) (unsigned short)0))))))));
                var_25 |= ((/* implicit */unsigned char) (-((+(((/* implicit */int) min(((unsigned short)8), (((/* implicit */unsigned short) var_3)))))))));
            }
        } 
    } 
}
