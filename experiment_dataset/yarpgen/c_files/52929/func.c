/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52929
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
    var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (~(591206308U)))) || (((/* implicit */_Bool) min((573411006U), (((/* implicit */unsigned int) var_9))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned char) ((signed char) (~(((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (1023040372U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_0]))))))));
                var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((int) var_3)))));
                var_18 = ((/* implicit */short) max((573411006U), (((/* implicit */unsigned int) (unsigned char)189))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 2150104054976420669ULL)) ? (2601881541U) : (1567387253U)))) & (var_11)));
                            var_20 = ((short) (-(((/* implicit */int) max((arr_8 [2U]), ((short)-1))))));
                            var_21 ^= ((/* implicit */unsigned int) ((short) ((unsigned long long int) 16296640018733130932ULL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 3) 
                {
                    for (long long int i_5 = 2; i_5 < 11; i_5 += 3) 
                    {
                        {
                            var_22 &= ((/* implicit */signed char) min((((/* implicit */long long int) (short)-5852)), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-2)) / (1180173796)))) ? (max((((/* implicit */long long int) (short)0)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) var_12))))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) -1180173796)), (var_0))))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-26508))))) | ((~(((((/* implicit */_Bool) (signed char)-1)) ? (16160887159400623768ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17712)))))))));
}
