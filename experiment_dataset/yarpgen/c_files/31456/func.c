/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31456
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)231)))), (((((/* implicit */_Bool) (short)8192)) ? (((/* implicit */int) (unsigned short)7047)) : (((/* implicit */int) (unsigned char)0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_18))) != (((/* implicit */long long int) (-(((/* implicit */int) (short)8192))))))))) : (min((((/* implicit */unsigned long long int) (unsigned short)34891)), (18275348211342429970ULL))))))));
                arr_4 [(unsigned short)14] [i_1] = ((/* implicit */unsigned int) ((max((2575897254088180448LL), (((/* implicit */long long int) arr_1 [i_1])))) - (min((arr_2 [i_0]), (0LL)))));
                var_21 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_1])) >= (((/* implicit */int) arr_0 [i_1])))) ? (((((/* implicit */int) arr_3 [10ULL] [i_1] [i_1])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1]))))))) : ((-(((/* implicit */int) ((((/* implicit */int) (unsigned short)18184)) == (((/* implicit */int) (short)-12364)))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) var_18)) / (((((/* implicit */_Bool) 18275348211342429970ULL)) ? (171395862367121651ULL) : (((/* implicit */unsigned long long int) -31529077353799351LL))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) 
    {
        arr_8 [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -5863186408293290319LL)) ? (31529077353799350LL) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2])) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 + 2] [i_2])) == (((/* implicit */int) (unsigned char)0))))))))));
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((var_0) <= (2434204913U))))));
    }
    var_23 = ((/* implicit */unsigned char) var_15);
}
