/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220076
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
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) max((max((((/* implicit */int) ((short) arr_1 [i_0]))), (2147483647))), (((/* implicit */int) ((signed char) max((9223372036854775807LL), (((/* implicit */long long int) -2147483647))))))));
                arr_5 [5U] [5U] [i_0] = ((/* implicit */long long int) ((((var_7) <= (-1LL))) && (((((/* implicit */_Bool) 401963995U)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 23; i_3 += 1) 
                    {
                        {
                            var_11 = (((!(((/* implicit */_Bool) min((7677074300072948310LL), (var_7)))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3] [(unsigned char)4] [i_3])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)145))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) 16651787087709202105ULL)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) arr_4 [i_2] [i_1] [i_2])))))))));
                            arr_12 [i_0] [i_0] [(signed char)9] [i_0] [i_0] = ((/* implicit */long long int) min((((short) ((signed char) (short)32762))), (((/* implicit */short) ((signed char) (-(((/* implicit */int) arr_1 [i_0]))))))));
                            var_12 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) ((int) arr_9 [i_3] [i_2] [i_0] [i_0]))), (7783954185155178289LL))));
                            arr_13 [i_3] [i_1] [i_3] [4U] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_3 + 1] [i_3 + 1]))))), (arr_9 [i_0] [i_0] [i_0] [i_3])));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((signed char) arr_18 [i_0] [i_0] [i_0] [i_4] [i_0])))));
                            var_14 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_4 [i_5] [i_4] [i_1])), ((+(((/* implicit */int) (unsigned char)111))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) -9223372036854775807LL)) || (((/* implicit */_Bool) (unsigned char)58)))))))) : (-23LL)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 7677074300072948310LL))));
}
