/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53082
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
    var_11 = ((/* implicit */_Bool) (short)(-32767 - 1));
    var_12 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)27259)) : (((/* implicit */int) (short)27257)))) : ((+(((/* implicit */int) var_4)))))))));
    var_13 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) var_3)) <= (max((var_7), (((/* implicit */unsigned long long int) var_3)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1048575LL)) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) % (9007507285028834981ULL)))))))) : (var_9)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -1048599LL)), (448154585194407681ULL)));
                var_15 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (9939547562118716154ULL))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(((/* implicit */int) (short)4409))))))) * (((((/* implicit */_Bool) (short)-27260)) ? (max((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1]))))))));
                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-27258))))) ? (-5707442324465068744LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-27260)))))), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)35733))))), (((((/* implicit */_Bool) -5707442324465068744LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29803))) : (7504104402516736839ULL)))))));
            }
        } 
    } 
}
