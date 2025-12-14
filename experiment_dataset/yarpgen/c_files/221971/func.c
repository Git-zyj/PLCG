/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221971
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
    for (unsigned long long int i_0 = 3; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned short)59794)) : (((/* implicit */int) (unsigned short)53132))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (-(arr_2 [i_0] [i_1 - 1]))));
                arr_6 [i_0] [i_0] [i_0] = (-((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)5741)) && (((/* implicit */_Bool) (unsigned short)5742))))))));
            }
        } 
    } 
    var_10 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) 2615011966U)) : (4713840138460776631ULL)))));
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) arr_0 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) : (((((/* implicit */_Bool) arr_9 [10ULL] [i_2])) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5754))))))))));
        arr_11 [i_2] = ((/* implicit */unsigned int) (-(arr_9 [i_2] [i_2])));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    var_13 &= (-(min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))), ((-(var_8))))));
                    var_14 = ((/* implicit */unsigned char) ((int) max((((/* implicit */int) arr_1 [i_3 + 1])), (1122064279))));
                    var_15 = ((/* implicit */unsigned int) arr_16 [i_3] [i_3 - 1]);
                }
            } 
        } 
    } 
}
