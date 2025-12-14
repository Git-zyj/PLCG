/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39249
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) / (((/* implicit */int) (unsigned short)32640))));
    var_14 += ((/* implicit */unsigned long long int) min(((unsigned short)32907), (((/* implicit */unsigned short) ((short) var_2)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_2 [(_Bool)0])) : (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (unsigned short)32640)) : (((/* implicit */int) (unsigned short)32640))))));
        var_16 = arr_3 [i_0];
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                for (int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_3 [i_3]), (((/* implicit */long long int) var_2))))) && (((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)15)))))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
                        arr_14 [(unsigned short)13] [(unsigned short)13] [(unsigned short)13] [(unsigned char)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [6LL] [i_3 - 1] [i_3 + 1] [6LL]))))) ? (((long long int) arr_10 [i_0] [i_3 + 1] [i_3] [10ULL])) : (((((long long int) var_2)) << (((((/* implicit */int) arr_0 [i_0])) + (22)))))));
                        var_18 += ((/* implicit */unsigned long long int) var_5);
                    }
                } 
            } 
        } 
    }
}
