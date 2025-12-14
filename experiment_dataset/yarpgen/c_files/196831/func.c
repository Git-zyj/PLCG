/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196831
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 &= ((/* implicit */signed char) var_13);
                    arr_11 [i_2] [i_1] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (signed char)64))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                        {
                            var_15 |= ((/* implicit */_Bool) ((var_1) - (var_1)));
                            var_16 += ((/* implicit */unsigned long long int) (((((_Bool)1) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (short)-32748)))) + (((/* implicit */int) (_Bool)1))));
                            arr_20 [i_2] [i_3] [i_2] [12LL] [i_2] = ((/* implicit */unsigned int) (+(8286766640438201959LL)));
                        }
                        arr_21 [i_2] = ((/* implicit */_Bool) (unsigned short)55090);
                        var_17 = ((/* implicit */_Bool) (unsigned short)0);
                        var_18 = ((/* implicit */_Bool) 1187460967U);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 4) 
                    {
                        var_19 ^= (-(((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)87)) - (2137054148)))) + (max((var_9), (((/* implicit */long long int) (_Bool)1)))))));
                        var_20 += ((/* implicit */long long int) (((+(((/* implicit */int) (unsigned short)9462)))) <= (119761268)));
                    }
                    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned char) ((3107506316U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    var_22 *= ((/* implicit */unsigned char) var_9);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_6 = 3; i_6 < 11; i_6 += 4) 
    {
        for (int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            {
                var_23 = 1187460980U;
                var_24 = ((/* implicit */int) max((var_24), (((((/* implicit */int) min(((unsigned char)249), ((unsigned char)87)))) * ((+(((((/* implicit */int) (unsigned short)56149)) / (((/* implicit */int) var_4))))))))));
                arr_29 [13LL] [i_7] = ((/* implicit */unsigned char) 4192256ULL);
            }
        } 
    } 
}
