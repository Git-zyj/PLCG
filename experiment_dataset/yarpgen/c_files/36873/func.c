/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36873
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    var_14 = ((/* implicit */unsigned long long int) ((signed char) var_4));
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-((+(((/* implicit */int) var_12)))))))));
                }
                var_16 += ((/* implicit */signed char) (-(min((((/* implicit */unsigned long long int) 3707632620745177012LL)), ((~(var_13)))))));
                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) ((((/* implicit */_Bool) (short)-1024)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) : ((~(var_1))))))));
                var_18 = max((((/* implicit */unsigned short) ((((/* implicit */int) var_6)) > (((/* implicit */int) (short)1031))))), (var_3));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-1037)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)131)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)-1012)))))) : (((((/* implicit */_Bool) var_10)) ? (3774081367415061197LL) : (var_11))))) : (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */long long int) 1641849620U)), (var_11))) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) & (-486050178))))))));
}
