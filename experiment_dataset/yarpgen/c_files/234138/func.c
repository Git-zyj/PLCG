/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234138
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))))) - (((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)60393))))) * (((unsigned int) (_Bool)1))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned char) ((var_5) < (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_5 [(_Bool)0] [(_Bool)0])) ? (arr_4 [i_0] [i_0] [i_1]) : (var_1)))))) ? (((/* implicit */int) ((signed char) max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_4 [(_Bool)1] [i_1] [i_1 + 1]))))) : (((/* implicit */int) (!((_Bool)1)))))))));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (short)-18169))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 1])))));
            /* LoopSeq 1 */
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                var_16 = ((/* implicit */unsigned long long int) arr_3 [i_1 + 1]);
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_3 = 0; i_3 < 22; i_3 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) var_6);
                    arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] = (((((~(4839528559847988681LL))) + (9223372036854775807LL))) << (((/* implicit */int) (_Bool)0)));
                }
                for (long long int i_4 = 0; i_4 < 22; i_4 += 1) /* same iter space */
                {
                    arr_14 [i_0] [i_2] = ((/* implicit */short) ((((arr_0 [i_1 - 1] [i_1 - 1]) + (arr_0 [i_1 - 1] [i_1 + 1]))) - (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_1 [i_1]))))));
                    var_18 -= ((/* implicit */signed char) 1201960913749794804LL);
                }
                for (long long int i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) 3846406701813872138ULL))));
                    arr_18 [i_0] [(short)4] [i_1] [i_1] [i_0] = ((/* implicit */long long int) ((arr_9 [i_0] [i_1 + 1] [i_0] [i_2]) || (((arr_9 [5] [i_1 + 1] [i_0] [i_2]) && (arr_6 [i_0] [i_1 + 1] [i_1 + 1])))));
                    var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_1 - 1] [i_2])) ? (((/* implicit */unsigned long long int) ((8337888529099940654LL) << (((((/* implicit */int) arr_2 [i_0])) - (36)))))) : (13088239551519066364ULL))));
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_9 [i_1 + 1] [i_1 + 1] [i_0] [i_5])))) >= (682330838U)));
                }
                arr_19 [i_0] [i_1] [i_1 - 1] [i_2] = min((((/* implicit */unsigned long long int) ((unsigned char) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))), (((((arr_13 [i_0] [(short)1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_16 [3] [3] [i_2] [i_0])) ? (3846406701813872131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_10)), (arr_16 [i_0] [i_2] [i_1] [i_0])))))));
                var_22 = ((((/* implicit */long long int) ((/* implicit */int) var_2))) % ((-((~(-9223372036854775785LL))))));
            }
        }
        /* LoopNest 2 */
        for (short i_6 = 1; i_6 < 20; i_6 += 4) 
        {
            for (short i_7 = 0; i_7 < 22; i_7 += 1) 
            {
                {
                    arr_26 [(short)14] [i_6] [10LL] [i_7] |= ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_23 [i_6 + 2] [i_6 - 1]))) & (max((arr_23 [i_6 + 1] [i_6 + 2]), (var_4)))));
                    var_23 = ((/* implicit */unsigned int) (signed char)(-127 - 1));
                    arr_27 [i_0] [(short)0] [i_0] [i_7] = ((/* implicit */long long int) (+(((int) (~(2675164759U))))));
                }
            } 
        } 
    }
}
