/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222565
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
    var_10 = ((/* implicit */unsigned char) 60LL);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */signed char) ((((/* implicit */long long int) (~((-(((/* implicit */int) arr_0 [i_0]))))))) != (var_1)));
        arr_3 [i_0] [2ULL] = ((/* implicit */unsigned long long int) (unsigned char)251);
        arr_4 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-2))))), (max((var_8), (var_1)))))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_8))) ? (((var_1) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0]))))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 10; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                {
                    {
                        var_12 *= ((/* implicit */signed char) arr_1 [i_2]);
                        arr_12 [11LL] [i_1] [i_1] [i_1] = ((/* implicit */short) arr_11 [i_0] [i_1] [i_1] [i_3]);
                        var_13 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_0))))), (var_6)));
                        var_14 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_0)))) : (max((arr_10 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3]), (var_8)))))), (max((max((arr_1 [10ULL]), (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_8)) > (64424509440ULL))))))));
                    }
                } 
            } 
        } 
        var_15 = ((/* implicit */signed char) var_1);
    }
    var_16 = ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) > (var_6)))) <= (((/* implicit */int) var_5)))) ? (max((((4681145971722228796ULL) * (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */short) (signed char)62))))))) : (((/* implicit */unsigned long long int) var_6)));
    var_17 = ((((/* implicit */_Bool) ((signed char) 4681145971722228796ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : ((+(((11258878967913159176ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
}
