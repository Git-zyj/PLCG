/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27682
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 23; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */signed char) (+((~((-(var_0)))))));
                            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (((_Bool)1) ? (var_3) : (((/* implicit */long long int) var_7))))) ? ((-(4611096245445047771LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0]))) < (var_15))))))))))));
                            var_21 |= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)1))))) : ((-(-4999851068199153496LL)))))));
                            arr_13 [i_0] [i_2] [i_2] [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) >> ((((~(arr_11 [i_2] [i_0]))) + (7004459280871576182LL)))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_3)) ? (-9223372036854775794LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)84)))))))) ? ((-(((((/* implicit */_Bool) -6073075016354335476LL)) ? (((/* implicit */int) (signed char)95)) : (((/* implicit */int) (signed char)-76)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) -9223372036854775794LL)) ? (var_15) : (-1444621195347576907LL))) < (((/* implicit */long long int) (-(((/* implicit */int) (short)-13978)))))))))))));
                /* LoopNest 3 */
                for (signed char i_4 = 3; i_4 < 20; i_4 += 2) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                    {
                        for (short i_6 = 0; i_6 < 23; i_6 += 4) 
                        {
                            {
                                var_23 += ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) 29U))))))) >> (((((/* implicit */int) ((short) arr_10 [i_5 + 1]))) + (20414)))));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_11 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_2))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5 - 1] [i_4 - 3] [i_4 + 1])) != (((/* implicit */int) (!((_Bool)1)))))))) : (((unsigned long long int) (~(4999851068199153496LL))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_7 = 3; i_7 < 20; i_7 += 4) 
                {
                    for (short i_8 = 1; i_8 < 21; i_8 += 1) 
                    {
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (~(arr_2 [i_0] [i_7])));
                                var_26 = ((/* implicit */_Bool) (~(min((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9242))) : (26614468552857557LL))), (((/* implicit */long long int) var_4))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
}
