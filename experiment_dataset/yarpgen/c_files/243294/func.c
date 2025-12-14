/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243294
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
    var_12 *= ((/* implicit */_Bool) min(((((+(var_8))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (18321486983616049901ULL))))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-27218)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((int) ((((((/* implicit */unsigned long long int) -1814791239)) | (125257090093501726ULL))) != (17978425561798957415ULL))));
                var_13 = ((((/* implicit */unsigned long long int) (-(arr_1 [i_0] [i_0])))) != ((((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) || (((/* implicit */_Bool) (short)23609)))))) : (max((18321486983616049889ULL), (((/* implicit */unsigned long long int) var_7)))))));
                var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((short) 1313536173))) | (((/* implicit */int) ((arr_0 [(short)3] [i_0]) < (((/* implicit */long long int) arr_1 [i_0] [i_0])))))))) || (((((/* implicit */int) arr_2 [i_1 - 2])) >= (((/* implicit */int) arr_2 [i_1 + 1]))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) ((unsigned short) ((18321486983616049902ULL) & (((/* implicit */unsigned long long int) var_11)))));
}
