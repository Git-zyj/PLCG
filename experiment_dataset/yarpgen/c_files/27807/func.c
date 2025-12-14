/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27807
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
    var_12 = ((/* implicit */unsigned long long int) ((signed char) (_Bool)1));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) (-(((unsigned int) var_4))));
                                var_14 = var_3;
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned int) (-(6547555913624653093ULL)));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)46002)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))))) ? (((/* implicit */unsigned long long int) min((67108863U), (67108863U)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_2 + 1] [i_1] [20] [i_0] [i_0])) * (((/* implicit */int) arr_0 [i_0]))))) ? (arr_3 [i_1 - 1]) : (((/* implicit */unsigned long long int) arr_7 [3ULL]))))));
                }
            } 
        } 
        var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_0] [i_0]))));
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) min((((arr_1 [(_Bool)1]) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned char)8] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)1024))))))), ((((_Bool)1) ? (4294967294U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)64528))))))))));
    }
    var_19 = ((/* implicit */unsigned char) min(((((+(186830046738116720ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))), (((/* implicit */unsigned long long int) var_11))));
}
