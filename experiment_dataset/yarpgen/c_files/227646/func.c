/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227646
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) var_9))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 20; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)245))))) ? (((((((/* implicit */_Bool) -453229587)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))) ^ (max((((/* implicit */unsigned long long int) 1582406126U)), (arr_3 [i_1] [i_0]))))) : (max((((arr_0 [i_0]) << (((arr_3 [i_0] [i_1 - 2]) - (13501996312437110251ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_7)))))))));
            arr_7 [i_0] = ((/* implicit */unsigned long long int) var_8);
            var_11 = ((/* implicit */signed char) arr_0 [i_0]);
            var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((arr_2 [i_0]) ^ (((/* implicit */unsigned long long int) var_5))))) || (((/* implicit */_Bool) var_1))))))));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        {
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((arr_3 [i_1 + 3] [i_0 + 2]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [(short)7] [i_1 - 1] [i_4]))) : (arr_1 [i_0]))))))), (((signed char) ((((/* implicit */_Bool) 9621213331759817336ULL)) || (((/* implicit */_Bool) arr_16 [i_0] [i_1 + 2] [i_2] [i_3] [i_4])))))));
                            arr_18 [i_0] [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_13 [i_3] [i_0] [i_3 - 2] [i_3 - 1] [i_3] [i_3 - 2])), (arr_8 [i_4] [i_1 + 3] [i_0 - 1]))))) < ((-((+(arr_15 [i_1] [i_3 - 1] [16ULL] [i_3 - 2] [i_4] [i_2] [i_1 + 1])))))));
                            var_13 = ((/* implicit */unsigned char) ((arr_0 [i_0]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0 - 1] [i_0 + 2] [i_1 + 1] [i_3 - 2] [i_3]))))))));
                            var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned int) ((7558531948891951082ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_0])))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (var_5)))))));
                        }
                    } 
                } 
            } 
        }
        for (int i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            var_15 ^= ((((/* implicit */_Bool) min((17ULL), (6402424100734090111ULL)))) && (((/* implicit */_Bool) ((arr_2 [i_0 + 2]) & (arr_2 [i_0 + 1])))));
            arr_21 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (-((~(12044319972975461505ULL)))));
            var_16 ^= ((/* implicit */unsigned int) (~((~(min((((/* implicit */unsigned long long int) arr_12 [i_0 + 2] [i_0 + 2] [i_5] [i_5] [i_5])), (arr_20 [i_5])))))));
        }
        arr_22 [i_0] [i_0] = ((/* implicit */long long int) (-(min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) + (arr_20 [i_0]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(short)20] [i_0])), (arr_11 [i_0] [i_0] [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_6 = 2; i_6 < 22; i_6 += 3) 
        {
            arr_25 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_24 [(short)8])), (min((((/* implicit */long long int) ((12044319972975461518ULL) <= (((/* implicit */unsigned long long int) arr_16 [i_0] [i_6] [i_6 - 1] [i_6] [i_6 + 1]))))), (-8969186190308614764LL)))));
            var_17 = ((/* implicit */unsigned long long int) ((int) (short)7));
        }
        for (long long int i_7 = 2; i_7 < 21; i_7 += 4) 
        {
            arr_28 [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */int) max((((/* implicit */short) arr_9 [i_7] [i_7] [i_7] [i_7 + 1])), (var_4)))), ((-(((/* implicit */int) var_7)))))), (((/* implicit */int) ((max((((/* implicit */unsigned long long int) arr_19 [i_7 - 1])), (6854438867783482487ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_7 - 1] [i_7] [i_0 + 2]))) - (arr_14 [i_0] [(_Bool)1] [i_0] [(_Bool)1])))))))));
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) arr_27 [i_0 + 2] [i_0] [(signed char)13])), (((12044319972975461505ULL) ^ (((/* implicit */unsigned long long int) arr_24 [i_0])))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
            var_19 = ((/* implicit */short) max((arr_12 [i_0] [i_0 - 1] [i_7] [i_7 + 2] [i_0 - 1]), (((((/* implicit */_Bool) arr_26 [i_7 - 1] [i_7 - 1] [(short)9])) || (((/* implicit */_Bool) (unsigned char)251))))));
        }
    }
    var_20 = ((/* implicit */long long int) (-(((/* implicit */int) max((((short) 18446744073709551600ULL)), (((/* implicit */short) ((((/* implicit */int) var_0)) == (((/* implicit */int) var_8))))))))));
    var_21 -= ((/* implicit */unsigned int) var_0);
    var_22 = ((/* implicit */int) ((unsigned long long int) (!(((_Bool) var_6)))));
}
