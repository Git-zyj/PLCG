/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190216
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
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_16)), ((unsigned short)20670)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20657)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)108))) : (38233824U)))) : (min((((/* implicit */unsigned long long int) var_13)), (var_10))))))))));
    var_21 = ((/* implicit */int) (+(max((max((((/* implicit */unsigned int) (unsigned short)20671)), (38233824U))), (((/* implicit */unsigned int) var_2))))));
    var_22 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_15)), (max((max((((/* implicit */unsigned long long int) (unsigned short)44866)), (var_10))), (max((13737327698524416183ULL), (((/* implicit */unsigned long long int) var_15))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32750))) : (4256733448U))))), (max((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned int) var_11))))), (((arr_5 [i_1]) * (((/* implicit */unsigned long long int) -9040293884547148333LL))))))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)44867))))) ? (((((/* implicit */_Bool) (short)32750)) ? (((/* implicit */int) arr_6 [i_2] [i_1])) : (((/* implicit */int) arr_2 [(unsigned char)3] [(_Bool)1])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [(short)7])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)125))))) : (max((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_1])))), (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_8 [5] [5] [i_1] [i_2]))))))));
                    var_25 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [i_0] [i_1])), ((+(min((((/* implicit */unsigned int) var_3)), (arr_3 [i_0] [i_0])))))));
                }
            } 
        } 
    } 
}
