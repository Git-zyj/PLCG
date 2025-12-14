/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242573
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_4 [i_2]), (((/* implicit */long long int) min(((unsigned short)13758), (((/* implicit */unsigned short) arr_14 [i_0] [i_1] [i_0])))))))) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_4])) < ((-(((/* implicit */int) (signed char)93))))))))))));
                                var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2032)) & (var_10)))) && (((/* implicit */_Bool) max((8474566288517573840LL), (((/* implicit */long long int) 3959709761U))))))))) <= (((arr_9 [(unsigned short)10] [12U] [i_2] [i_3 - 1]) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_0)))))) : (((((/* implicit */_Bool) 3576224069U)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)112))) : ((-9223372036854775807LL - 1LL))))))))));
                                var_13 = (i_2 % 2 == 0) ? (((/* implicit */unsigned short) (((~(arr_11 [i_4] [i_2] [i_0] [i_3 + 2] [i_3 - 1] [i_2] [i_0]))) << (((var_1) - (3622131446U)))))) : (((/* implicit */unsigned short) (((((~(arr_11 [i_4] [i_2] [i_0] [i_3 + 2] [i_3 - 1] [i_2] [i_0]))) + (9223372036854775807LL))) << (((((var_1) - (3622131446U))) - (1U))))));
                                var_14 ^= ((/* implicit */unsigned char) -6345235926882530197LL);
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */short) ((((min((-5352411554701633054LL), (((((/* implicit */_Bool) -743017340)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)39))) : (6345235926882530188LL))))) + (9223372036854775807LL))) << (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)34)), (arr_1 [i_2 - 1])))) - (33)))));
                    var_16 = ((/* implicit */long long int) (_Bool)1);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (short i_6 = 3; i_6 < 15; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */long long int) (signed char)-104)), (((long long int) arr_2 [i_6] [i_2] [i_1])))));
                                var_18 ^= ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) min(((unsigned char)31), (((/* implicit */unsigned char) (signed char)127))))) ? (arr_11 [i_0] [i_0] [i_0] [i_5] [i_6 - 2] [i_0] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((-73186283395019739LL) < (((/* implicit */long long int) arr_13 [i_0])))))))));
                                var_19 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)-44)) && (((/* implicit */_Bool) arr_0 [i_5])))));
                                var_20 = ((/* implicit */int) var_1);
                                var_21 -= ((/* implicit */signed char) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_7 = 2; i_7 < 19; i_7 += 2) 
    {
        for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
        {
            {
                var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-18099))))), (((((/* implicit */_Bool) var_10)) ? (arr_23 [i_8]) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))) ? ((-(((((/* implicit */_Bool) arr_24 [i_7] [i_8 - 1])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_7] [i_8 + 1]))))))));
                var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) 28672U)))) < (arr_23 [i_7])));
                var_24 ^= ((/* implicit */unsigned short) (~((~((-(((/* implicit */int) arr_20 [i_7]))))))));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 21; i_9 += 2) 
                {
                    for (int i_10 = 1; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */signed char) (~(((long long int) max((743017314), (((/* implicit */int) (short)260)))))));
                            /* LoopSeq 1 */
                            for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                            {
                                var_26 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) arr_31 [2LL] [i_7])) != (((/* implicit */int) (unsigned char)38))))), ((+(((/* implicit */int) arr_32 [i_7] [i_8] [i_9] [i_11]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((arr_23 [i_8]) / (var_7))) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
                                var_27 -= ((/* implicit */_Bool) min((((3947109115U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22502))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) 5707136745255976311LL)))) < (var_1))))));
                                var_28 ^= ((/* implicit */unsigned char) arr_27 [i_11] [i_7] [i_9 + 1]);
                                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) var_5))));
                                var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(743017364)))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_24 [i_10] [i_10])))))));
                            }
                        }
                    } 
                } 
                var_31 &= ((/* implicit */long long int) arr_24 [(unsigned short)4] [i_8]);
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned long long int) (+((+(min((((/* implicit */int) var_9)), (477759913)))))));
}
