/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27803
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
    var_14 = ((/* implicit */unsigned int) max((var_8), (((/* implicit */unsigned long long int) ((unsigned short) 135300906U)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_3) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_0] [i_4 + 2]))) : (((((/* implicit */_Bool) var_9)) ? (arr_0 [1] [(unsigned short)10]) : (((/* implicit */unsigned long long int) 4159666389U))))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_8))) / (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-32760))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((unsigned int) var_13)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [(unsigned char)10] [i_1] [i_1] [(unsigned char)10]))))))));
                                var_16 = ((/* implicit */_Bool) min((695621627), (((/* implicit */int) ((_Bool) min((((/* implicit */short) var_7)), (var_9)))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) ((signed char) 10167305342582820924ULL));
                    var_18 = ((/* implicit */signed char) ((unsigned long long int) var_12));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) >> (((var_2) - (17605184048851409023ULL)))))) < (135300927U)))))));
}
