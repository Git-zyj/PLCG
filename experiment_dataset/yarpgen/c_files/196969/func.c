/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196969
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
    var_14 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (var_5))))) ^ (((((/* implicit */_Bool) 1799792284)) ? (((/* implicit */unsigned int) var_3)) : (var_6))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [5] = var_7;
                arr_6 [i_0] = ((/* implicit */unsigned int) arr_4 [i_1]);
                var_15 += ((/* implicit */unsigned int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) (~(((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_6)) : (var_1))))));
    /* LoopSeq 3 */
    for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((arr_8 [i_2] [i_2]) ? (var_7) : (((/* implicit */int) arr_7 [i_2]))))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2]))))));
        /* LoopSeq 1 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (var_10)));
            var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) arr_11 [i_2])))));
        }
    }
    for (int i_4 = 0; i_4 < 23; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */unsigned int) ((((1799792262) ^ (-1799792285))) % ((+(-1627031075)))));
        arr_16 [i_4] = ((/* implicit */int) (~(max((248U), (((/* implicit */unsigned int) 815249416))))));
        var_20 = ((/* implicit */_Bool) (-(arr_14 [i_4] [0U])));
    }
    for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
    {
        arr_21 [i_5] [i_5] = arr_17 [i_5] [i_5];
        var_21 = ((/* implicit */long long int) var_11);
        arr_22 [i_5] = ((/* implicit */short) (+(min((((/* implicit */long long int) (((_Bool)1) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (max((((/* implicit */long long int) (_Bool)1)), (arr_4 [(signed char)9])))))));
        arr_23 [i_5] [i_5] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */unsigned int) -554102563)) : (var_10))) ^ (var_10)))), (((((/* implicit */_Bool) arr_4 [i_5])) ? (((((/* implicit */_Bool) 1799792285)) ? (arr_4 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
        var_22 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) -1799792297)) < (arr_4 [i_5]))) ? ((+(arr_4 [i_5]))) : ((+(arr_4 [i_5])))));
    }
}
