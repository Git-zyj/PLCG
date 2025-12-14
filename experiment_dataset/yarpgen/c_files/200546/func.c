/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200546
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_9 [i_3] [0] [0] [0] [5ULL] [i_0] = ((/* implicit */int) ((unsigned long long int) 9703198498004574588ULL));
                            var_17 += ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_3]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 + 1] [(_Bool)1] [i_2 + 2])) || (((/* implicit */_Bool) 1866458454355071663ULL))))));
                            arr_10 [i_0] = ((/* implicit */_Bool) max((((((11946384885069123737ULL) + (((/* implicit */unsigned long long int) var_9)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))))), (var_6)));
                        }
                    } 
                } 
                arr_11 [7] [7] = ((/* implicit */unsigned long long int) ((_Bool) max((var_11), (((/* implicit */unsigned long long int) var_14)))));
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 1; i_4 < 12; i_4 += 2) 
                {
                    for (int i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] = (_Bool)1;
                            arr_19 [i_0] [i_0] [i_0] [11ULL] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 652887047)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (12753370599291558878ULL)))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) (_Bool)1)))) + (min((-1627791580), (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) ((unsigned long long int) (_Bool)1))) ? (arr_2 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((_Bool)1), (arr_14 [i_5] [i_4] [i_4 + 1] [i_0])))))))));
                            arr_20 [i_0] [i_0] [5] [i_0] = ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), (min((((/* implicit */unsigned long long int) ((_Bool) (_Bool)1))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 512573172)) : (14302661231621305020ULL))))))))));
}
