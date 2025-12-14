/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189740
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
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_16);
            arr_5 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) ? (((((/* implicit */_Bool) (short)-27617)) ? (((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-106))) : (-4192860688474932266LL))) : (6801454080727382506LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))));
        }
        for (int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_17 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)48696))) + (arr_2 [i_0] [i_2] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
            /* LoopNest 2 */
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                for (int i_4 = 1; i_4 < 8; i_4 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned long long int) max((max((arr_11 [i_0] [i_4 - 1] [i_3] [i_4 + 1] [i_2]), (arr_11 [i_0] [i_4 + 1] [i_3] [i_4] [i_2]))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (630033325U))))));
                        var_19 &= ((/* implicit */unsigned char) (~((+(((((/* implicit */_Bool) -6658199987319481731LL)) ? (630033330U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_0] [i_2])) ? (min((-1223992328), (((/* implicit */int) ((signed char) -6658199987319481722LL))))) : (((int) ((((/* implicit */_Bool) 3664933955U)) ? (((/* implicit */int) (signed char)42)) : (((/* implicit */int) var_15)))))));
        }
        arr_14 [5ULL] = ((/* implicit */long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (unsigned char i_6 = 4; i_6 < 7; i_6 += 4) 
            {
                {
                    var_21 &= ((/* implicit */long long int) var_3);
                    var_22 = ((/* implicit */short) (unsigned short)33651);
                    arr_21 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) var_3))))))), (arr_12 [i_0] [i_0] [i_0])));
                }
            } 
        } 
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_23 = ((/* implicit */long long int) var_10);
        var_24 = ((/* implicit */long long int) (short)27644);
    }
    /* vectorizable */
    for (short i_8 = 0; i_8 < 16; i_8 += 4) 
    {
        var_25 = arr_25 [i_8];
        var_26 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)48703)) == (((/* implicit */int) (signed char)-28)))))));
    }
    var_27 += ((/* implicit */signed char) var_6);
}
