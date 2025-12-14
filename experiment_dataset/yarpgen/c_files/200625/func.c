/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200625
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
    var_16 = ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) (unsigned short)3))))), (var_2)));
    var_17 = ((/* implicit */unsigned short) var_2);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 17; i_3 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned short) ((min((arr_3 [i_3]), (((/* implicit */unsigned int) var_10)))) & (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_3]) : (arr_3 [i_3])))));
                        var_19 = ((/* implicit */short) max((arr_5 [i_3] [i_2] [i_1] [i_0]), (((/* implicit */unsigned int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (0ULL)))))));
                        arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_15)), (max((((/* implicit */unsigned long long int) var_2)), (var_3)))))) ? (((4285126188373724317ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (short)-32762)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((long long int) 0)) : (((-5048568893314811613LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)29))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                {
                    var_20 = ((/* implicit */signed char) max((var_11), (((/* implicit */long long int) (((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))) + (((/* implicit */int) arr_14 [i_0] [i_0] [i_0])))))));
                    arr_16 [i_5] [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_4] [i_0]))))));
                    arr_17 [i_0] [i_5] = ((/* implicit */unsigned short) (-((+(arr_11 [i_5])))));
                    var_21 -= ((/* implicit */long long int) (~(((int) var_10))));
                    var_22 &= ((/* implicit */int) var_2);
                }
            } 
        } 
        var_23 += ((/* implicit */long long int) arr_10 [i_0]);
        var_24 = ((/* implicit */long long int) var_6);
    }
    for (unsigned int i_6 = 0; i_6 < 25; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) 3480676264U))))))));
                    var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) ((max((var_3), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_24 [i_6] [i_7])))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned short) arr_20 [i_6] [i_6])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_23 [i_6] [i_6] [i_6] [i_6]))))) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30720))) : (4285126188373724317ULL)))))));
    }
    var_28 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (~(((/* implicit */int) var_10))))), (var_15)));
    var_29 = ((/* implicit */long long int) var_10);
}
