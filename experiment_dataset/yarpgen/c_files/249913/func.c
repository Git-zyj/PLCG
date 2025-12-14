/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249913
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
    var_14 = ((/* implicit */signed char) ((_Bool) (_Bool)1));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((short) var_6))) : (((/* implicit */int) arr_2 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) (~(arr_4 [i_0] [i_1])))) : (((var_8) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1] [i_0]))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2U)))))));
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_0 [i_1])))))) && (((/* implicit */_Bool) (~((~(((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 2; i_2 < 15; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) var_0);
                arr_12 [i_3] [i_2] = arr_11 [i_2];
                var_18 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_3]))) ? (4900562467939990171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)250)))))) ? (((((((/* implicit */_Bool) (signed char)127)) || (((/* implicit */_Bool) arr_2 [i_2] [i_2 + 1])))) ? (((/* implicit */int) (!(var_8)))) : (((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) var_10)))))) : (((/* implicit */int) var_10))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 14; i_4 += 1) 
                {
                    for (signed char i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned char) (_Bool)0);
                            var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) 4117540090973588163LL))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 -= ((/* implicit */signed char) ((((_Bool) max((var_0), ((_Bool)1)))) ? (var_7) : (((((/* implicit */_Bool) (-(-4117540090973588132LL)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_13)))) : (var_7)))));
    var_22 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (18446744073709551612ULL)))))));
}
