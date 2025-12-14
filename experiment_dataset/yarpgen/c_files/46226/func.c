/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46226
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
    var_13 = ((/* implicit */signed char) min((var_9), (((/* implicit */long long int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_12))))) ? (((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_1)) - (43376))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (var_0))))))));
    var_14 = ((/* implicit */long long int) (+((+(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 9; i_2 += 3) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0 - 2] [i_1] [i_2] [i_2 + 1] [i_2] = ((/* implicit */signed char) var_3);
                            var_15 = ((/* implicit */signed char) ((_Bool) arr_4 [i_1] [(_Bool)0]));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 9; i_4 += 4) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_24 [i_0] [i_4] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_6 [i_0 - 2] [i_5])))) ? (((var_7) ? (var_8) : (arr_3 [i_0] [i_1] [i_6]))) : ((~(((/* implicit */int) arr_18 [i_0] [i_0 + 1] [i_1] [i_1] [i_0] [i_6]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_21 [i_0 + 1] [i_4 + 1] [i_5 - 1] [(unsigned short)5] [i_5 - 1]))))) : (((((var_5) - (((/* implicit */unsigned long long int) arr_10 [i_1] [i_5])))) >> (((min((arr_10 [i_1] [1ULL]), (arr_10 [i_1] [1LL]))) - (1112467207624258908LL)))))));
                                arr_25 [i_0] [i_1] [i_1] [i_5] [i_6] = ((/* implicit */signed char) (~((~(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 3995946299U)))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_0 - 2] [i_0 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_9 [8ULL] [i_0 - 1] [i_1 - 2] [i_1])))));
                arr_26 [i_1] = ((/* implicit */long long int) (((+((~(((/* implicit */int) arr_8 [i_0 - 2] [i_1])))))) ^ ((~((~(((/* implicit */int) var_11))))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_1] [i_1] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (+(var_4)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [9LL])) ? (var_4) : (var_10))) : (arr_29 [i_0 + 1] [i_1] [i_7] [i_8])))));
                            var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (var_4) : (((/* implicit */long long int) var_8))))))), (((((/* implicit */_Bool) max((var_9), (((/* implicit */long long int) arr_8 [10U] [10U]))))) ? (((((/* implicit */unsigned long long int) arr_30 [i_0] [i_7])) * (var_5))) : (min((((/* implicit */unsigned long long int) var_4)), (arr_1 [i_0 + 1] [i_7 - 1]))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(299020997U)))) ? (var_5) : (((/* implicit */unsigned long long int) var_8))));
}
