/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218920
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
    for (unsigned char i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_10 -= ((/* implicit */unsigned char) (~(1054030291)));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 11; i_2 += 1) 
                {
                    for (int i_3 = 4; i_3 < 11; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_1] [(unsigned short)4] [i_1] [i_3] [i_0] = ((((((/* implicit */int) arr_6 [i_3] [i_3 - 4] [i_2])) / (var_6))) % ((~(var_9))));
                            arr_11 [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) (~((((!(((/* implicit */_Bool) var_1)))) ? ((+(arr_9 [0U]))) : (((var_5) / (var_5)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) max((((long long int) min((var_5), (((/* implicit */long long int) var_6))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (var_9)))) : (((((/* implicit */_Bool) var_3)) ? (-7508474896267581376LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))))))))));
        arr_14 [i_4] [i_4] = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) ((int) (unsigned char)18))), (max((((/* implicit */long long int) var_3)), (var_5))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_6)) & (var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)52048))))) : (((((/* implicit */int) (unsigned short)13481)) << (((arr_13 [i_4]) - (309764711U))))))))));
    }
    var_12 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) min((var_6), (((/* implicit */int) (unsigned short)49152)))))) ? (var_5) : (((/* implicit */long long int) var_2))));
    var_13 = ((((((/* implicit */long long int) (+((-2147483647 - 1))))) > (min((((/* implicit */long long int) (unsigned short)52052)), (-6840006535286182801LL))))) ? (((/* implicit */unsigned int) var_9)) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) | (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_7)) : (var_8))))));
}
