/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242856
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
    var_17 |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) (signed char)-20))))) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-16))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) var_0)))));
                var_18 |= ((/* implicit */int) ((unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) ^ (-5495638940529661631LL)))));
                var_19 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) ((arr_0 [(unsigned char)0]) != (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-20))))))), ((((-(var_10))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((!((_Bool)1))) && (((/* implicit */_Bool) var_5)))))));
    /* LoopSeq 2 */
    for (unsigned short i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        arr_10 [(unsigned char)13] [3ULL] = ((/* implicit */unsigned char) var_12);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((long long int) 133693440U)))));
            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)9)) ? (((/* implicit */unsigned long long int) (-(5495638940529661631LL)))) : (2097151ULL))))));
        }
        var_23 ^= ((/* implicit */int) arr_2 [i_2]);
    }
    for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
    {
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -5495638940529661631LL)) ? (133693440U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32749)))));
        var_25 = ((/* implicit */short) (unsigned char)8);
    }
}
