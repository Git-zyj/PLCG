/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44209
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
    var_16 -= ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) var_10)))))), ((+(var_2)))));
    var_18 = ((/* implicit */long long int) var_7);
    var_19 &= ((/* implicit */short) (+(var_11)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_0] [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */long long int) (+(1301904517U)))) : (((((/* implicit */_Bool) (~(arr_5 [i_1] [i_1] [i_1])))) ? (arr_3 [i_1 + 1] [i_1 + 2] [i_1 + 4]) : (((/* implicit */long long int) 2878006828U)))))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_5 [i_1 - 1] [i_1] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_5 [i_0] [i_0] [i_1])))) ? ((+((~(((/* implicit */int) var_7)))))) : (((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))) == (2093056LL))), ((!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))))))))));
        }
        arr_6 [i_0] = ((/* implicit */long long int) (((+(max((arr_4 [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])))))) == ((-(max((9684207534225760676ULL), (((/* implicit */unsigned long long int) 3761903173U))))))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        var_22 = ((((/* implicit */_Bool) 511U)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL)));
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_7 [i_0] [i_2] [i_3])) ^ (max((arr_9 [i_0]), (((/* implicit */long long int) arr_8 [i_2] [i_3] [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_5)) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))))))) : (((unsigned long long int) ((((/* implicit */_Bool) 3272878067U)) ? (arr_9 [i_2]) : (arr_2 [i_0]))))));
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) ((short) 3819042183U));
                            arr_16 [i_5] [i_2] [i_5] = arr_2 [i_5];
                        }
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) max(((+(((/* implicit */int) arr_12 [i_3] [i_3] [i_3])))), (((/* implicit */int) (_Bool)1))));
                            var_25 = ((/* implicit */int) max((((/* implicit */unsigned int) (~(((/* implicit */int) (short)20323))))), ((+(var_1)))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_17 [i_0] [i_0] [5LL] [i_4] [i_6]))) ? ((+(((/* implicit */int) arr_12 [i_0] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_6] [i_3] [i_2])))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1416960460U)))))));
                            arr_23 [i_0] [i_0] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_3] [i_4] [i_7]);
                            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (~(arr_7 [i_0] [i_4] [14ULL]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59964)) ? (18446744073709551607ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_3])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) * (((/* implicit */int) arr_13 [i_0] [(_Bool)1]))))) : (((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_2] [i_0] [i_2] [i_4] [i_7])) ? (arr_4 [i_0] [i_3] [0]) : (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((/* implicit */unsigned long long int) (+(min((((/* implicit */unsigned int) (_Bool)1)), (4294967277U))))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_8 = 0; i_8 < 20; i_8 += 1) 
    {
        arr_27 [i_8] [i_8] = ((/* implicit */_Bool) (~((-(4628978418785135821ULL)))));
        var_29 = ((/* implicit */signed char) ((((((/* implicit */int) arr_24 [i_8])) + (((/* implicit */int) arr_24 [i_8])))) & ((-(((/* implicit */int) arr_24 [i_8]))))));
    }
    /* vectorizable */
    for (unsigned int i_9 = 3; i_9 < 21; i_9 += 1) 
    {
        var_30 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) >= (arr_28 [(_Bool)1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 17167543120888920860ULL))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_10))))));
        var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_30 [i_9 + 2])))))));
        var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_9 - 2])) ? (arr_30 [i_9 + 2]) : (arr_30 [i_9 - 1])));
        var_33 = ((/* implicit */long long int) min((var_33), (arr_30 [i_9])));
    }
}
