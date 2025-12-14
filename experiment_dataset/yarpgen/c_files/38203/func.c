/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38203
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_4 [(short)19] = ((/* implicit */signed char) (+((+(((/* implicit */int) ((_Bool) var_7)))))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_10 [i_2] = ((/* implicit */unsigned char) (+(min((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))), (max((var_5), (((/* implicit */unsigned long long int) var_2))))))));
                    var_10 += ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_2))))));
                    var_11 -= max((((/* implicit */unsigned long long int) (short)8191)), ((((!(var_7))) ? (13357417762023707183ULL) : (max((13357417762023707181ULL), (((/* implicit */unsigned long long int) (signed char)-107)))))));
                    arr_11 [i_0] [i_0] [i_2 + 3] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_0))))))) ? (max((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((min((((/* implicit */short) (signed char)-87)), ((short)-11086))), (((/* implicit */short) ((unsigned char) var_3)))))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) var_6);
                }
            } 
        } 
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(max((max((((/* implicit */unsigned long long int) var_6)), (var_3))), (((/* implicit */unsigned long long int) (+(var_6)))))))))));
    }
    var_13 = ((unsigned char) 18446744073709551605ULL);
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
        {
            {
                var_14 = ((/* implicit */short) ((long long int) ((unsigned char) max((var_4), (var_4)))));
                var_15 += ((/* implicit */signed char) (+((+(((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_1))))))));
                arr_19 [i_3] [i_3] &= ((/* implicit */short) min((((/* implicit */unsigned long long int) max((min((var_1), (((/* implicit */unsigned char) var_2)))), (max((((/* implicit */unsigned char) var_2)), (var_0)))))), (((unsigned long long int) (+(var_6))))));
            }
        } 
    } 
    var_16 |= min((var_5), (((/* implicit */unsigned long long int) var_8)));
    var_17 -= ((/* implicit */unsigned char) var_7);
}
