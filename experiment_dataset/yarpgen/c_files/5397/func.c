/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5397
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) -4611080752827007310LL);
                    var_19 = ((/* implicit */unsigned int) 3548719219234251541LL);
                    var_20 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)207)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1317478168U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19730))) : (arr_3 [i_1] [(_Bool)1] [i_1])))) ? (((((/* implicit */_Bool) (short)16384)) ? (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])) : (var_17))) : (((/* implicit */unsigned long long int) ((3277829309U) & (((/* implicit */unsigned int) var_13)))))))));
                    var_21 *= ((/* implicit */unsigned char) (~((~(arr_4 [i_2] [i_1])))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) (-(2009386620U)))))));
                                var_23 &= (((+(var_16))) - (min(((~(var_15))), (((/* implicit */unsigned int) max((((/* implicit */short) var_0)), (arr_16 [i_4] [i_6])))))));
                                arr_25 [i_3] [i_4] [i_5] [i_7] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)48050)) > (((/* implicit */int) (short)24485))))) : (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (unsigned char)27)))))) : (((/* implicit */int) var_2))));
                                arr_26 [2] [i_4] [i_5] [i_4] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_5] [i_6]);
                                arr_27 [i_3] [i_3] [i_5] [i_6] [i_3] = max((min((((/* implicit */unsigned int) (_Bool)0)), ((+(2009386620U))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)50)) - (((/* implicit */int) arr_17 [(unsigned short)5] [i_4] [i_5] [i_6]))))) ? (arr_11 [i_4] [i_4]) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-16385))) - (var_5))))));
                            }
                        } 
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        {
                            var_25 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_3))))), (3U)))) ? (((/* implicit */int) (short)27151)) : (((/* implicit */int) ((((/* implicit */_Bool) ((var_16) / (arr_1 [i_8])))) && (((/* implicit */_Bool) (+(1265334326U))))))));
                            var_26 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)54617)))))));
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((max((var_17), (((/* implicit */unsigned long long int) 2285580669U)))) / (((/* implicit */unsigned long long int) 3290216969U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
