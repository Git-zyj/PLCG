/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231234
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
    for (int i_0 = 1; i_0 < 7; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            {
                var_10 = ((/* implicit */int) max((var_10), (-120511567)));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] [i_0] [i_1] [i_1] [i_2] [i_0] = ((((/* implicit */_Bool) ((unsigned long long int) 18446744073709551615ULL))) ? ((~(min((arr_8 [i_3]), (var_5))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((((unsigned long long int) 120511567)) - (120511544ULL))))));
                            arr_11 [0] [0] [i_0] = (-(((int) ((((/* implicit */_Bool) -120511542)) || (((/* implicit */_Bool) arr_9 [7ULL] [i_1 - 1] [9] [i_1 - 1]))))));
                            arr_12 [i_0] [i_2] [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) max((1597779778), (120511585)))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0 + 3] [i_0]), (arr_1 [i_0 + 4] [i_0])))) : (((var_7) ^ (((/* implicit */unsigned long long int) arr_1 [i_0 + 4] [i_0]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_11 = -2130847822;
    /* LoopSeq 1 */
    for (unsigned long long int i_4 = 1; i_4 < 16; i_4 += 4) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned long long int) var_0);
        var_12 = ((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_4])) ? (var_7) : (2474162455188463169ULL)))))) && (((((/* implicit */_Bool) -120511594)) || (((/* implicit */_Bool) -120511567))))));
    }
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 120511566)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)))) ? (((((var_6) + (2147483647))) >> (((var_7) - (9338100934288137933ULL))))) : ((~(var_6)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_4) == (((/* implicit */unsigned long long int) var_3)))))))) : (((11237896016225046228ULL) ^ (((/* implicit */unsigned long long int) -1)))));
    var_14 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_8)) ? (var_7) : (var_4))))) ^ (((((/* implicit */_Bool) (~(-864272167)))) ? ((~(14750839115146418657ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((4625846114732418973ULL) <= (4194303ULL)))))))));
}
