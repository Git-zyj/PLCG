/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33873
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
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                var_19 = ((int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) var_5))));
                var_20 = -733056908;
                var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) 1598100460))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 7; i_2 += 3) 
    {
        for (long long int i_3 = 1; i_3 < 9; i_3 += 2) 
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 8; i_4 += 4) 
                {
                    for (unsigned char i_5 = 2; i_5 < 8; i_5 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) 72057525318451200ULL))));
                            var_23 = ((/* implicit */unsigned int) arr_14 [9]);
                            arr_19 [i_4] [i_3] [i_4] [(signed char)0] = ((/* implicit */_Bool) (short)-7854);
                            var_24 *= ((((/* implicit */_Bool) (unsigned short)46081)) ? (((/* implicit */int) ((631950248) != (((/* implicit */int) (short)-7854))))) : (((/* implicit */int) var_7)));
                        }
                    } 
                } 
                var_25 = max((((arr_8 [i_2 + 1]) - (var_18))), ((-((+(((/* implicit */int) (unsigned char)120)))))));
                arr_20 [i_3] [i_3] = ((/* implicit */_Bool) var_10);
                arr_21 [i_3] = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_0 [i_3 - 1] [i_2 - 1]))))), (((((((/* implicit */int) arr_4 [7])) < (((/* implicit */int) (unsigned char)209)))) ? ((+(0ULL))) : (((/* implicit */unsigned long long int) (-(1598100460)))))));
            }
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((min((1598100460), (((/* implicit */int) (unsigned char)66)))) >> (((((/* implicit */int) (short)-7833)) + (7840)))));
}
