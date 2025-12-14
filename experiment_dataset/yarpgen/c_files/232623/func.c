/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232623
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2]))))));
                    var_16 = ((/* implicit */int) arr_8 [i_0] [i_1] [13ULL] [15ULL]);
                    var_17 = ((/* implicit */long long int) ((short) (-(((/* implicit */int) (!(((/* implicit */_Bool) -237402961))))))));
                    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) (!((_Bool)0)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) != (((((/* implicit */int) (unsigned short)0)) | (((/* implicit */int) var_5))))))) << (((((((((/* implicit */int) (unsigned short)53969)) | (((/* implicit */int) (signed char)-1)))) * (((((/* implicit */int) (unsigned short)26748)) & (((/* implicit */int) (unsigned short)43730)))))) + (10336)))));
    var_20 = ((_Bool) ((signed char) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (unsigned short)65529)))));
    var_21 = ((/* implicit */unsigned long long int) max(((((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_4)) ? (-4458017635004324522LL) : (((/* implicit */long long int) 4294967273U)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1225377886U)) || (((/* implicit */_Bool) (unsigned short)53980)))))))), (((/* implicit */long long int) ((_Bool) (-(16777215ULL)))))));
}
