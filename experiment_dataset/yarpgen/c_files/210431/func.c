/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210431
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210431 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210431
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
    var_11 = ((/* implicit */_Bool) 6792848121276554750LL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned short i_2 = 2; i_2 < 13; i_2 += 4) 
            {
                {
                    arr_6 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 6792848121276554741LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-12))) : (-6792848121276554746LL))) > (((/* implicit */long long int) (+(((/* implicit */int) (short)-26824)))))));
                    var_12 = ((/* implicit */unsigned int) ((((_Bool) (unsigned short)60220)) ? (((((/* implicit */int) var_2)) % (((/* implicit */int) var_0)))) : (max((((/* implicit */int) var_9)), (((((/* implicit */int) arr_2 [i_0])) >> (((((/* implicit */int) var_6)) - (39908)))))))));
                    arr_7 [i_1] [i_2 - 1] = min((((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_3 [i_2 + 1] [i_1])))), (((((/* implicit */long long int) var_3)) > (var_10))));
                    var_13 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_2 [i_1])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) ((/* implicit */int) ((6792848121276554732LL) >= (((/* implicit */long long int) ((/* implicit */int) var_9)))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) == (arr_5 [i_2]))))) <= (var_1))))) : (max((var_4), (((/* implicit */unsigned int) arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1])))));
                }
            } 
        } 
    } 
}
