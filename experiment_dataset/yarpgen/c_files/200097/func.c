/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200097
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
    var_19 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_20 *= ((/* implicit */unsigned char) var_5);
        var_21 = (((!((!(((/* implicit */_Bool) arr_0 [12LL] [i_0])))))) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0 + 2])))) : ((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [(signed char)2])) : (((/* implicit */int) (short)32457)))))));
        arr_2 [i_0 + 3] [i_0] &= ((/* implicit */long long int) min((((/* implicit */unsigned int) arr_0 [(_Bool)1] [9ULL])), (((((/* implicit */_Bool) (signed char)-103)) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned int) var_7))))));
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned short) (+(arr_6 [(short)2])));
                arr_8 [i_1] [i_2] = ((/* implicit */signed char) var_7);
                arr_9 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_0)) ? (arr_7 [i_1] [i_2] [i_2]) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) var_14))))))) : (((/* implicit */int) (unsigned short)41404))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 19; i_3 += 4) 
    {
        for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
        {
            {
                var_23 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)24131)) / (arr_10 [i_3] [(_Bool)0])));
                var_24 = ((/* implicit */signed char) min((var_24), ((signed char)-113)));
            }
        } 
    } 
}
