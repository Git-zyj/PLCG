/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35403
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) var_6);
                    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) ((((/* implicit */long long int) (~(((unsigned int) 4631399870048986164LL))))) >= (-8806221323663685738LL))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)0))) : (var_13)))) ? (((/* implicit */unsigned long long int) ((unsigned int) 1597326019))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) -4631399870048986164LL)) : (var_3)))))))));
    var_18 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (1816573533U))))), ((+(((((/* implicit */_Bool) (signed char)14)) ? (4631399870048986163LL) : (((/* implicit */long long int) 2863331711U))))))));
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)126)) ? (var_3) : (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)71)), (-1597326040))))))) ? (1597326032) : (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) (signed char)122))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) : (var_0))))))))))));
}
