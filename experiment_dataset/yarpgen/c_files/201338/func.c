/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201338
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
    var_20 -= ((/* implicit */unsigned char) ((short) (+(((long long int) 2093053040U)))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */signed char) (+(max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)22055)), (8096678159165108406LL)))), ((+(9269273537142157307ULL)))))));
                    var_22 |= ((/* implicit */unsigned short) (unsigned char)75);
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        arr_12 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (signed char)98)))) : (((long long int) (signed char)-62))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) 3002444260035071214LL))))))));
                        arr_13 [i_0 + 2] [i_0] [i_0] = max((((/* implicit */unsigned int) ((signed char) ((long long int) (unsigned short)47861)))), (((unsigned int) (_Bool)1)));
                    }
                }
            } 
        } 
    } 
}
