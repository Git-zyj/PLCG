/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43672
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */int) var_9)) ^ (((int) (~(((/* implicit */int) (unsigned short)26650))))))))));
                    arr_7 [i_1] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 3197003118U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(signed char)16]))))) : (((((/* implicit */_Bool) 2590708394U)) ? (2590708394U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8668))))))), (((/* implicit */unsigned int) var_7))));
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)48340)))), ((-(((/* implicit */int) (unsigned short)2066))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 371122869)) || (((/* implicit */_Bool) -4837237867740254835LL))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_1))))))) : (((((/* implicit */_Bool) (unsigned short)64135)) ? (8322999980091176973ULL) : (((/* implicit */unsigned long long int) 1885020539U))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_0))));
    var_16 = ((/* implicit */signed char) ((long long int) (unsigned short)35405));
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            {
                var_17 = ((unsigned int) min((var_12), (((/* implicit */int) var_3))));
                arr_13 [i_4] [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)10583)), (arr_1 [13U])))) ? (((((/* implicit */_Bool) 3477770718U)) ? (7546788731119409210LL) : (((/* implicit */long long int) 1401625506U)))) : (-2238037720156215787LL))), (((/* implicit */long long int) -1521644868))));
            }
        } 
    } 
}
