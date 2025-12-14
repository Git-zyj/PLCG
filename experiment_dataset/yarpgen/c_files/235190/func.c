/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235190
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        {
                            var_11 = min((min((((/* implicit */int) (unsigned short)0)), (688570453))), ((+(((/* implicit */int) arr_5 [i_1])))));
                            var_12 = (~((~((~(-980205643))))));
                        }
                    } 
                } 
                var_13 = ((/* implicit */long long int) max((((/* implicit */int) (short)-4568)), (-980205643)));
                var_14 = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)203)), (-6091112443362146189LL)))) ? (((18ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)53))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45485))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 383427820010651835LL)) && (((/* implicit */_Bool) (unsigned char)72))))), (arr_3 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)44)), (var_3)))) ? (((((/* implicit */_Bool) (unsigned char)79)) ? (383427820010651835LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)214))))) : (((/* implicit */long long int) ((/* implicit */int) (!(var_6))))))) <= (((((var_1) > (var_1))) ? (var_3) : (var_8)))));
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_8))));
}
