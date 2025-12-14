/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3967
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
    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-4))));
    var_19 = ((/* implicit */unsigned short) min((((var_10) % (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27171)) ? (((/* implicit */int) (_Bool)1)) : (var_3)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) min((14533108813416513958ULL), (((/* implicit */unsigned long long int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) 6508686420809878274ULL);
                var_21 -= (((((_Bool)1) && (((/* implicit */_Bool) (signed char)-35)))) || (((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) min((5071129375602884774LL), (((/* implicit */long long int) (_Bool)1))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)37378)))) : ((+(((/* implicit */int) (unsigned short)60419))))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) arr_1 [i_1])))) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_0])) : (((((/* implicit */_Bool) -63442638)) ? (((/* implicit */int) (short)23171)) : (var_3))))), (((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (unsigned short)37390)) : (((/* implicit */int) (unsigned short)46801)))) < (((/* implicit */int) ((arr_4 [i_0] [i_0] [i_0 + 2]) || (((/* implicit */_Bool) (unsigned char)192))))))))));
                arr_8 [i_0] [i_1 + 2] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (10428315653261231818ULL))) << (((min(((_Bool)1), ((_Bool)1))) ? (((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 1] [i_1 - 1])) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_0 + 1]))))))));
            }
        } 
    } 
}
