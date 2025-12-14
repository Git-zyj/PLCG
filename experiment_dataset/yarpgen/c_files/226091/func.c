/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226091
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
    var_20 += ((/* implicit */int) var_11);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_21 += ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-(var_15)))) : (max((((/* implicit */unsigned long long int) arr_11 [i_4] [i_4] [i_4] [(_Bool)0])), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4] [(_Bool)1] [i_0] [(_Bool)1] [i_0]))) & (arr_4 [i_0] [i_4]))))));
                                var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_0] [3ULL] [i_2] [i_3 + 1])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)17035))))) ? (((/* implicit */int) (unsigned short)49769)) : (((((/* implicit */_Bool) var_10)) ? (arr_11 [i_1] [i_2] [i_3] [(_Bool)0]) : (((/* implicit */int) (unsigned short)65528)))))) : (var_6)));
                                arr_12 [i_2] [i_1] [i_0] [i_3] [4ULL] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_0 [i_0]), (arr_4 [(unsigned short)4] [i_3]))))) ? (var_15) : (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) ((_Bool) 13573106598421478637ULL))) : ((~(arr_8 [i_4] [(unsigned short)5] [i_1] [(unsigned short)5])))))));
                                arr_13 [i_0] [i_0] = ((/* implicit */_Bool) (-(((880991620) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16383)))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (unsigned short)9);
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 3; i_6 < 7; i_6 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (18446744073709551594ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [0] [i_0] [i_2] [i_0] [i_2]))))), (((/* implicit */unsigned long long int) -1708268582))));
                                var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1])))) ? (((((/* implicit */_Bool) arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1])) ? (13596397160105225291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))))) : (var_11)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((10503455148522285600ULL), (((/* implicit */unsigned long long int) (unsigned short)16660))));
    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (var_10)))) ? ((+(((/* implicit */int) ((_Bool) (unsigned short)45024))))) : ((-(((/* implicit */int) (!(var_3))))))));
}
