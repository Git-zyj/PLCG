/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242367
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                var_14 = ((short) (~(((/* implicit */int) (unsigned short)28))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16; i_2 += 1) 
    {
        for (short i_3 = 3; i_3 < 16; i_3 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 17; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 2; i_5 < 14; i_5 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) arr_15 [i_5 - 2] [i_4] [i_2] [i_2])))) * (min((((/* implicit */int) (short)-3562)), (-1590917555)))));
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_2] [i_3] [i_3 - 1] [i_2] [(unsigned short)11]))))) ? (((/* implicit */int) (short)-3562)) : (((-1990168870) / (2147483645)))));
                            var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) arr_9 [5ULL]))));
                            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) var_9))));
                        }
                    } 
                } 
                var_19 = ((((/* implicit */_Bool) (+(((int) (short)24786))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 17652846215006686324ULL)))) : (((min((arr_7 [i_2] [i_2]), (((/* implicit */unsigned long long int) -7234324731418665660LL)))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-15248)) ? (4194303) : (((/* implicit */int) (short)-24789))))))));
            }
        } 
    } 
}
