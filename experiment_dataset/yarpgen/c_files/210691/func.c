/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210691
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
    var_12 = ((/* implicit */int) ((unsigned char) ((signed char) var_5)));
    var_13 = ((/* implicit */_Bool) var_1);
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((unsigned int) ((long long int) ((long long int) (short)-28510)))))));
    var_15 = ((/* implicit */short) ((signed char) max((-6948030965311153200LL), (((/* implicit */long long int) var_9)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1587124598U)) ? (1689384820U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (min((((/* implicit */unsigned int) (unsigned char)118)), (1689384811U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65535)))))))) ? (((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)53683)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) -6948030965311153224LL))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)59)) ? (-3243304995069913339LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (644577951U)))) ? (((/* implicit */int) ((short) var_7))) : (((/* implicit */int) min(((unsigned short)51464), (((/* implicit */unsigned short) (_Bool)1)))))))) || (((/* implicit */_Bool) (((_Bool)1) ? (3650389345U) : (((((/* implicit */unsigned int) -765989510)) * (644577950U))))))));
                }
            } 
        } 
    } 
}
