/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46555
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (+((~(((/* implicit */int) var_11))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) % (18446744073709551601ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-16)) && (((/* implicit */_Bool) var_0))))))) : ((-(((int) (signed char)57))))));
    var_14 = ((/* implicit */short) (-(((((/* implicit */int) var_11)) >> (((((long long int) var_1)) - (502817958LL)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 3]))) | (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1]))) : (8759683809563361328LL)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    arr_7 [i_0] [i_0] [(unsigned short)17] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (var_10) : (((/* implicit */int) var_4))))) && (((/* implicit */_Bool) var_9))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((((/* implicit */int) var_9)) - (3592)))))) % (arr_0 [i_0 - 1])));
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 19; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_15 &= ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0] [i_1 - 1])) ^ (((/* implicit */int) arr_3 [i_4 + 3] [(short)15] [i_4]))));
                                arr_13 [i_0] [i_0] [i_0] [i_3] [i_4] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */long long int) 1136975860)) < (9223372036854775807LL)))) <= ((+(-1136975839)))));
                                var_16 = ((/* implicit */int) ((unsigned char) (unsigned char)255));
                                arr_14 [8U] [8U] [i_2] [i_2] [8U] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2])) ? (2477163799U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65525)))))) / (((((/* implicit */_Bool) (unsigned short)32007)) ? (26ULL) : (((/* implicit */unsigned long long int) -4250703846623893523LL))))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) arr_5 [i_0]);
                }
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) - (var_10)))) - (max((((/* implicit */unsigned long long int) var_1)), (var_5))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
