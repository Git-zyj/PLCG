/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52061
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                arr_8 [(_Bool)1] = ((/* implicit */short) var_9);
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (-2752706115759024948LL) : (((/* implicit */long long int) 1612512891U))))) ? (5952170481663449178LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))) ? (((/* implicit */int) (unsigned char)227)) : ((+(var_7)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_2))));
                    var_21 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_18))));
                }
                for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
                {
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */int) ((max((((/* implicit */unsigned int) (unsigned char)224)), (var_9))) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227)))))), (arr_0 [12LL])));
                    var_23 = max((max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (max((((/* implicit */unsigned long long int) 1612512891U)), (5846445023503437603ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))))))));
                }
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
                {
                    arr_18 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_1]) / (((/* implicit */int) arr_6 [i_0]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)227))))) ? (-3740167555164995408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            {
                                var_24 += ((/* implicit */int) arr_5 [i_0]);
                                arr_24 [18] [i_5] [18] [19ULL] = ((/* implicit */int) min((5107766987102403920LL), (((/* implicit */long long int) -226952743))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (2752706115759024947LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5354)))))) ? (max((((/* implicit */int) (_Bool)1)), (-226952756))) : (min(((-(((/* implicit */int) var_15)))), (var_7)))));
    /* LoopNest 2 */
    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 4) 
    {
        for (unsigned short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            {
                arr_30 [(unsigned char)3] [i_7] [(unsigned short)9] = ((/* implicit */short) var_12);
                var_26 = ((/* implicit */unsigned char) -5107766987102403920LL);
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)0)), ((-(var_16)))));
}
