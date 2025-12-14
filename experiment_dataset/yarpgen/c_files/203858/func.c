/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203858
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)46063)) == (((/* implicit */int) (unsigned short)30559)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */long long int) ((((arr_2 [i_0] [i_1 + 2]) ? (((/* implicit */unsigned long long int) arr_3 [i_1 + 4])) : (262143ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_1 + 1])) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 1])))))));
                    var_13 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_0 [0ULL] [(unsigned short)5]))))) : (((/* implicit */int) arr_0 [i_1] [(_Bool)0])))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)46063)) != (((/* implicit */int) (_Bool)1)))))));
                    var_14 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_4 [i_3 + 1] [i_3 + 1] [i_4])) - (((/* implicit */int) arr_4 [i_3 - 1] [i_3 - 1] [i_4])))) == (((((/* implicit */int) arr_4 [i_3 - 1] [i_4] [i_4])) + (var_0))))))));
                        var_16 -= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) << (((((/* implicit */int) (unsigned short)19473)) - (19472)))))) ? (((/* implicit */int) (unsigned short)19448)) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_4 [(unsigned short)0] [(unsigned short)0] [i_4]))))))));
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */unsigned int) var_2);
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)216)) || (((/* implicit */_Bool) -6232558778122699656LL))));
}
