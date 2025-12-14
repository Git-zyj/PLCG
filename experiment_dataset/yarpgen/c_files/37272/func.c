/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37272
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
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */_Bool) arr_1 [i_1]);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_20 *= ((/* implicit */unsigned char) (signed char)-125);
                            var_21 = ((/* implicit */unsigned long long int) (signed char)-6);
                        }
                    } 
                } 
                arr_11 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [(unsigned char)14] [i_0]))) * (arr_3 [i_0]))), (((((/* implicit */_Bool) (short)4032)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))) : (3465616670U)))))) && (((/* implicit */_Bool) (signed char)-115))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        for (long long int i_5 = 2; i_5 < 10; i_5 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 2) 
                    {
                        {
                            arr_22 [i_7] [(unsigned char)10] [(unsigned short)8] [i_4] = ((/* implicit */unsigned short) var_2);
                            arr_23 [i_4] [i_4] [i_5] [i_5] [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */signed char) ((var_10) && (((/* implicit */_Bool) arr_12 [i_5]))))), (arr_15 [i_5 - 2])))) >> (((/* implicit */int) arr_15 [(unsigned short)2]))));
                            var_22 -= arr_19 [i_5] [i_5];
                            arr_24 [i_5 + 1] [i_6] [i_5 + 1] [0LL] = ((/* implicit */unsigned int) var_1);
                            var_23 = ((/* implicit */signed char) ((arr_16 [i_5] [i_6]) >> (((var_17) + (1119047664998854371LL)))));
                        }
                    } 
                } 
                var_24 ^= ((/* implicit */unsigned short) (short)-4032);
            }
        } 
    } 
}
