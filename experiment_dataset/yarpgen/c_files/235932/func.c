/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235932
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (short)8212)) / (((/* implicit */int) var_6))))), (var_10)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((1835008), (((/* implicit */int) (_Bool)1))))) ? (3840) : (((/* implicit */int) (signed char)(-127 - 1)))))) : ((~(var_10))))))));
    var_20 ^= ((/* implicit */unsigned short) (((((+((+(((/* implicit */int) (signed char)(-127 - 1))))))) + (2147483647))) << (((((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) 1317414500)), (var_14))))) - (100)))));
    var_21 = ((/* implicit */signed char) (_Bool)1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    for (long long int i_3 = 1; i_3 < 12; i_3 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) ((arr_5 [(unsigned char)3]) ? (((/* implicit */int) var_17)) : (805306368))))) ? ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))) : (((((/* implicit */int) arr_1 [i_1 - 1] [i_3 + 2])) & (((/* implicit */int) (_Bool)1)))))))));
                            arr_12 [(unsigned char)1] [i_1] [(_Bool)1] [(signed char)10] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)(-127 - 1))), ((unsigned short)1399)))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))))) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1] [i_1 - 1] [3U] [i_1 - 1] [i_1])) ? (arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [(_Bool)1]) : (((/* implicit */int) var_5))))) ? (((arr_11 [i_1 - 1] [i_1 - 1] [12LL] [i_1 - 1] [i_1 + 1]) | (arr_11 [i_1] [i_1 - 1] [2U] [i_1] [i_1 - 1]))) : ((+(((/* implicit */int) var_12))))));
            }
        } 
    } 
}
