/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224903
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
    var_14 = ((((/* implicit */_Bool) (~(var_6)))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_1)))) : (((var_6) ^ (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_10)));
    var_15 = ((/* implicit */_Bool) min((var_0), (var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 ^= min((var_6), (max((((((/* implicit */int) var_13)) - (((/* implicit */int) arr_2 [i_0] [i_0])))), ((+(arr_5 [i_0] [i_0] [i_0] [i_0]))))));
                    arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (arr_3 [i_0] [i_1]) : (arr_3 [i_0] [i_1])))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [12]))) & (arr_3 [8ULL] [i_1]))) : ((-(arr_3 [i_1] [i_1])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 += ((/* implicit */unsigned long long int) ((((int) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_3))))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [20] [i_3])) ? (((/* implicit */int) var_0)) : (arr_5 [i_1] [i_2] [i_3] [i_4])))));
                                var_18 = ((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [i_4]);
                            }
                        } 
                    } 
                    var_19 = var_0;
                    var_20 &= ((((arr_1 [i_1] [i_0]) & (((/* implicit */int) ((((/* implicit */_Bool) 0)) && ((_Bool)1)))))) != ((+((-(((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [5ULL])))))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */int) ((((/* implicit */int) (!(var_8)))) <= (max((((/* implicit */int) var_8)), (2147483647)))))) != (((/* implicit */int) var_8)));
    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (((-(((/* implicit */int) var_9)))) != (((((/* implicit */_Bool) var_6)) ? (2147483647) : (-2147483637)))))) == (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || ((!(((/* implicit */_Bool) var_12)))))))));
}
