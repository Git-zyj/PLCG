/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220262
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220262 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220262
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((signed char) 4294967289U));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_4))));
        arr_2 [3ULL] [i_0] = (+(((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned short) (unsigned char)192))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_7 [i_1] = var_10;
        arr_8 [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) : (16777215U)));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) var_3))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25; i_3 += 2) 
        {
            for (signed char i_4 = 1; i_4 < 22; i_4 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned long long int) min(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (4278190080U))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_18)))))));
                    var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((6804272693565307263ULL) >> (((4278190057U) - (4278190038U))))))));
                    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (~(4278190078U))))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((_Bool) min((min((((/* implicit */long long int) var_14)), (var_2))), (((/* implicit */long long int) ((_Bool) var_14))))));
}
