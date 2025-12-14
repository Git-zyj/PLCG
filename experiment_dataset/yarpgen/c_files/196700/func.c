/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196700
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) (((~(((/* implicit */int) arr_1 [i_0] [i_0])))) > (((/* implicit */int) ((var_7) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0])))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((max((var_4), (((/* implicit */unsigned int) var_5)))) > (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_4)))))))));
        arr_4 [i_0] [i_0] = (+((+(arr_0 [i_0]))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 19; i_3 += 4) 
            {
                {
                    var_12 = arr_1 [i_2] [i_2];
                    arr_12 [i_1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), ((+(var_0)))));
                }
            } 
        } 
        arr_13 [i_1] = arr_7 [i_1 + 1] [i_1 - 2];
        arr_14 [i_1] [i_1] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 4294967295U)), (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_2))))), (((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned int) min(((_Bool)1), ((_Bool)1)))))))));
        arr_15 [i_1] = ((/* implicit */_Bool) ((max((arr_8 [i_1 - 2] [i_1] [i_1]), ((_Bool)1))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_1 - 1] [i_1 - 1] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) var_8)), (var_0)))));
    }
    for (int i_4 = 3; i_4 < 19; i_4 += 4) 
    {
        arr_20 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_10 [i_4] [i_4] [(_Bool)1])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((_Bool) var_7)))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1023U)) ? (((/* implicit */int) arr_17 [i_4])) : (1006039851)))) : ((-(17394040209271673826ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                {
                    {
                        var_13 = min((((/* implicit */unsigned int) var_1)), (min((((/* implicit */unsigned int) ((var_6) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))), (arr_23 [i_4] [i_4] [i_6]))));
                        arr_29 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((362110161U) - (var_0)))) ? (min((var_2), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (signed char)46)) : (((/* implicit */int) var_5)))))))) ? (max((min((((/* implicit */unsigned long long int) var_4)), (var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))))) : (((arr_0 [i_4 - 1]) / (6917191740498980018ULL)))));
                    }
                } 
            } 
        } 
    }
    var_14 = var_10;
    /* LoopNest 2 */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            {
                                arr_44 [i_12] [i_9] [11U] = ((/* implicit */int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)39)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : ((+(((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                } 
                var_16 = ((/* implicit */unsigned int) ((var_7) << (((max((max((((/* implicit */unsigned int) (_Bool)1)), (var_0))), ((~(arr_36 [i_8] [i_9] [0U]))))) - (3459213014U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_13 = 1; i_13 < 16; i_13 += 4) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    arr_52 [i_13] = ((/* implicit */int) arr_17 [i_14]);
                    arr_53 [i_13] [i_13] = ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_1)) != (((/* implicit */int) arr_25 [i_13] [i_14] [0U] [i_13])))))) : (max((((/* implicit */unsigned long long int) var_6)), (15608012057596950712ULL))))) >= (((/* implicit */unsigned long long int) -1928012576)));
                }
            } 
        } 
    } 
}
