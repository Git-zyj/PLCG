/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233666
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
    for (int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_5 [i_0] [16] [i_0 + 3]))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                    var_12 = ((/* implicit */unsigned char) (signed char)0);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) var_4))))) ? (((/* implicit */int) max(((unsigned char)64), ((unsigned char)137)))) : (((/* implicit */int) var_0))))) ? ((~(min((14307509491451302692ULL), (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_1)) | (((((/* implicit */_Bool) (signed char)7)) ? (var_6) : (((/* implicit */long long int) 2147483647)))))))));
    var_14 = ((/* implicit */unsigned short) (+(((((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */long long int) 268402688U)) : (var_6))) / (((/* implicit */long long int) var_2))))));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 20; i_6 += 3) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned int) var_2);
                            arr_16 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned char)146), (arr_11 [i_4] [i_4]))))) ^ (var_9)))), (arr_5 [i_3] [i_4] [(signed char)19])));
                            arr_17 [i_3] [i_4] [i_4] [i_3] [i_4] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))))) * ((-(((unsigned long long int) var_1))))));
                            arr_18 [i_4] = (+(3184068331U));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 17; i_7 += 4) 
                {
                    for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
                    {
                        {
                            arr_25 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_11 [i_4] [i_4]);
                            var_16 = ((/* implicit */unsigned long long int) (-(4026564607U)));
                            var_17 = ((/* implicit */unsigned char) arr_10 [i_7 + 4] [i_4] [i_7 + 1]);
                        }
                    } 
                } 
            }
        } 
    } 
}
