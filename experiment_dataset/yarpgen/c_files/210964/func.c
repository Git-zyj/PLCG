/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210964
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
    var_12 = ((int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -8941561264064558107LL)) || (((/* implicit */_Bool) var_1))))), (var_10)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    var_13 *= ((/* implicit */unsigned char) ((_Bool) max(((unsigned short)51223), (((/* implicit */unsigned short) var_1)))));
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_11);
                }
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (-((~(((/* implicit */int) ((5876975881490848105LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) var_6);
    /* LoopNest 3 */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 4; i_7 < 20; i_7 += 4) 
                        {
                            {
                                arr_22 [i_6] [i_4] [i_5] [i_4] |= ((/* implicit */long long int) 16092266127252406766ULL);
                                var_16 = (+(((((min((-2106565066), (((/* implicit */int) var_9)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) var_2))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (16597815704150551158ULL)))))));
                                var_18 = ((/* implicit */unsigned short) min((((min((1848928369559000457ULL), (((/* implicit */unsigned long long int) var_11)))) * (((/* implicit */unsigned long long int) ((long long int) 0U))))), (((((/* implicit */unsigned long long int) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) * (2354477946457144838ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
