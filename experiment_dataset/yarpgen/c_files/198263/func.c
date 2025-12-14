/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198263
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
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 20; i_2 += 2) 
            {
                {
                    var_20 = (-((+((+(arr_1 [i_0] [(signed char)5]))))));
                    var_21 = -6590932463036898800LL;
                }
            } 
        } 
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
        var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) != (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)69))))));
    }
    for (int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) (_Bool)1))));
        arr_10 [i_3] = ((/* implicit */unsigned short) (((~(((/* implicit */int) (_Bool)1)))) | (((((/* implicit */int) arr_6 [20])) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_3] [i_3])))))))));
    }
    for (int i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
    {
        arr_13 [(_Bool)1] [(_Bool)1] |= ((/* implicit */int) (+((+(max((var_8), (((/* implicit */long long int) (unsigned char)207))))))));
        arr_14 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_4]))))) != ((+(arr_11 [i_4])))));
    }
    for (int i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
    {
        arr_17 [6ULL] = ((/* implicit */unsigned short) (((~(max((((/* implicit */unsigned long long int) var_11)), (5673509442804771817ULL))))) | (((/* implicit */unsigned long long int) (~(arr_8 [i_5]))))));
        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(9223372036854775807LL)))))))));
        var_26 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)27)) & (((/* implicit */int) (unsigned short)31889)))) > ((+(830530795)))));
    }
    var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) max((var_6), (((/* implicit */unsigned char) var_11)))))));
    var_28 = ((/* implicit */int) min((var_28), ((+(781959207)))));
    var_29 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) var_9))) ? (max((((/* implicit */unsigned int) (unsigned short)24985)), (4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (-(var_8)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */unsigned long long int) var_5)) : (16860177630324315714ULL))))))))));
}
