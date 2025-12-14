/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49224
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
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) var_11))))));
                var_17 = ((/* implicit */unsigned short) (-(min((4503599627370495ULL), (((/* implicit */unsigned long long int) arr_6 [i_0]))))));
                var_18 = ((/* implicit */unsigned short) 18442240474082181131ULL);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_1] [(signed char)1] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_10 [i_0 + 1] [i_0 + 1] [i_0]), (arr_10 [i_0 - 2] [i_0] [i_0 + 1])))) ? (((int) arr_1 [i_0 + 1] [i_0])) : ((~(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))))));
                            arr_15 [i_0] [0ULL] [i_2] [i_0] = 18442240474082181131ULL;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 -= ((/* implicit */short) (-((~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-89))) < (4503599627370485ULL))))))));
}
