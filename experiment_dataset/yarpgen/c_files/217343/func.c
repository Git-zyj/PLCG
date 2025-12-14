/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217343
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
    var_10 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_6)), (max((((/* implicit */unsigned long long int) var_2)), (min((var_0), (((/* implicit */unsigned long long int) var_2))))))));
    var_11 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483632)) ? (((/* implicit */int) (short)-4426)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)13)), (var_3)))) : (((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned long long int) max((max((-1), (((/* implicit */int) var_9)))), (max((((/* implicit */int) var_2)), (var_8)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (unsigned int i_3 = 4; i_3 < 20; i_3 += 2) 
                {
                    {
                        arr_10 [i_1] [i_0] = ((/* implicit */long long int) var_4);
                        var_12 = ((/* implicit */_Bool) var_6);
                        var_13 = ((/* implicit */unsigned int) arr_3 [i_2 + 2]);
                        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_6))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */long long int) (unsigned short)62705);
        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6632805270492297404LL)) || (((/* implicit */_Bool) var_8))));
        /* LoopNest 3 */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_18 [i_0] [i_4] [i_4] = ((/* implicit */long long int) var_0);
                        arr_19 [i_5] [i_4] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(_Bool)1] [i_0] [i_4])) ? (var_0) : (var_5)))) && (((/* implicit */_Bool) 2035271516U))));
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2825)) ? (1751392868U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_6])))))) ? (var_0) : (var_5)));
                    }
                } 
            } 
        } 
    }
}
