/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243377
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
    var_13 = ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)24691)), (var_8)))))))));
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */short) min(((unsigned char)223), ((unsigned char)251)))), ((short)1)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((arr_4 [i_0] [i_1] [i_0]), (((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17831))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -5813597206714069865LL)) ? (-7355751506710818224LL) : (5813597206714069865LL))))))));
                var_15 -= ((/* implicit */unsigned char) -5813597206714069865LL);
            }
        } 
    } 
    var_16 = max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned short) (unsigned char)90)))))))));
}
