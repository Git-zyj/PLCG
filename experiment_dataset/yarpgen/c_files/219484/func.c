/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219484
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
    var_13 = ((long long int) ((((/* implicit */int) var_10)) * (var_12)));
    var_14 = ((long long int) -6976811836069946002LL);
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
                {
                    for (long long int i_3 = 2; i_3 < 11; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_3] [i_2] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_0] [2] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(_Bool)1])))))) ? (((/* implicit */int) arr_6 [i_0])) : (arr_7 [i_0] [(unsigned short)4] [i_2] [i_3])))) == (max((((/* implicit */unsigned int) min((var_4), (var_10)))), (3466841747U)))));
                                arr_14 [1LL] [i_0] = ((/* implicit */_Bool) ((((var_12) > (((/* implicit */int) (_Bool)1)))) ? (arr_7 [i_4] [i_3] [i_0] [i_0]) : ((-((+(((/* implicit */int) (_Bool)1))))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((min((var_12), (var_6))), (((/* implicit */int) min(((_Bool)1), (var_10))))))) / (min((max((arr_11 [5] [i_0]), (3466841755U))), (max((828125541U), (((/* implicit */unsigned int) arr_8 [1LL] [1LL] [i_1] [i_0]))))))));
            }
        } 
    } 
}
