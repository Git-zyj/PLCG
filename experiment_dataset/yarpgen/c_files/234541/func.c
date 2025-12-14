/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234541
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 16; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_1] [i_1] = ((unsigned short) ((((/* implicit */_Bool) var_16)) ? (var_0) : (arr_3 [i_3 + 3] [i_0 + 2])));
                            var_17 &= ((/* implicit */unsigned int) ((min((((((/* implicit */long long int) var_2)) % (var_3))), (((/* implicit */long long int) 0U)))) != (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_13))))) ? (((/* implicit */int) (short)3784)) : (((((/* implicit */int) arr_8 [i_2] [i_3 + 4] [i_3 + 4] [i_3])) + (((/* implicit */int) var_5)))))))));
                            var_19 = ((/* implicit */_Bool) ((long long int) (unsigned short)4974));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_4 = 0; i_4 < 20; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 2) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 16; i_6 += 4) 
                        {
                            {
                                arr_22 [i_0] [i_0] [(unsigned short)6] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_2)) && (arr_21 [i_5 - 1] [i_5 - 1] [i_0] [i_5 - 1] [i_5]))) ? ((-(((((/* implicit */int) var_9)) << ((((((-2147483647 - 1)) - (-2147483625))) + (28))))))) : ((+(((/* implicit */int) arr_8 [i_1] [i_4] [i_5] [i_6 - 1]))))));
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_19 [i_5 + 2] [(short)6] [i_0] [i_6 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_0] [i_0] [i_5] [i_5 - 1] [6ULL])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4974)))))))) : (((arr_21 [19] [i_1] [i_0] [i_5 + 1] [i_0]) ? (max((var_12), (((/* implicit */long long int) var_13)))) : (((/* implicit */long long int) var_2))))));
                                var_21 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) < (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_19 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))))) ? (((/* implicit */int) ((short) (+(var_2))))) : (((/* implicit */int) ((unsigned char) var_11)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((short) var_12));
}
