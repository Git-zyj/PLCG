/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213808
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
    var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(var_11))))));
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((3363980343U), (((/* implicit */unsigned int) (_Bool)1)))))));
    var_22 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_1))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_23 = ((short) ((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])) <= (((/* implicit */int) arr_4 [i_1 - 3] [9] [i_0]))));
                        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((unsigned long long int) (!(((/* implicit */_Bool) ((int) var_2)))))))));
                        arr_10 [i_0] [i_1] [i_1] [i_1 - 2] = ((/* implicit */unsigned short) ((short) var_0));
                        arr_11 [i_1] [i_1] [i_2] [i_0] [(_Bool)1] [9ULL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((arr_3 [i_1] [7U] [i_3 + 2]), (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_2] [i_3])))), (((unsigned int) var_1))))) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (-1543966361)))) ? (min((((/* implicit */int) (unsigned short)5389)), (-1543966388))) : ((-(1196931194)))))));
                    }
                    for (short i_4 = 2; i_4 < 11; i_4 += 2) 
                    {
                        arr_14 [i_0] [i_1] [i_0] [(_Bool)0] [i_4 + 1] = ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_1] [i_2] [i_4])) ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0]))))))) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2233596837450021653LL)) ? (((/* implicit */int) (unsigned short)6793)) : (((/* implicit */int) (_Bool)1))))) <= (4598934789634022048ULL)))));
                        var_25 = ((/* implicit */int) arr_2 [i_0] [i_2 + 1]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_26 += ((/* implicit */_Bool) min((min(((~(arr_3 [i_0 + 1] [i_0 + 1] [i_2 + 1]))), (((/* implicit */unsigned int) ((arr_12 [2]) >= (arr_9 [i_0 + 1] [i_1 - 3] [9U] [i_5])))))), (((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_5 + 1] [i_2] [1ULL])) ? (arr_15 [i_1] [i_5 + 2] [i_5 + 2] [i_5 + 1]) : (arr_15 [i_2] [i_5 - 1] [i_6] [i_6])))));
                            var_27 = ((/* implicit */short) ((((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))), (var_11)))) ^ (arr_7 [i_1] [i_2 + 1] [i_6])));
                        }
                        for (unsigned int i_7 = 2; i_7 < 10; i_7 += 3) 
                        {
                            var_28 = ((int) var_16);
                            arr_25 [i_0 + 1] [i_0] [i_0 + 1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_2 [i_0] [4]);
                            arr_26 [i_0] [i_1] [i_2 + 1] [i_5] [i_7 - 1] = ((/* implicit */unsigned long long int) ((((unsigned long long int) min((arr_6 [i_0] [i_2 + 1] [i_5] [i_7 - 1]), (arr_3 [i_0] [i_1] [i_7])))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) arr_22 [i_7 - 2] [i_7 - 2] [i_7 - 1] [i_7] [i_0] [i_7] [8ULL]))))))));
                            var_29 = ((6409217651338877040ULL) << (((3363980343U) - (3363980339U))));
                        }
                        for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                        {
                            var_30 = ((/* implicit */int) arr_4 [i_0 + 1] [i_2] [i_0]);
                            var_31 = arr_15 [i_0] [i_1 - 1] [i_1 - 1] [i_1 - 1];
                            var_32 ^= ((/* implicit */int) var_2);
                        }
                        arr_29 [i_5] [i_0] [i_0] [i_0 + 1] = -1882694058;
                        arr_30 [i_0 + 1] [i_1 + 1] [i_0] [i_5] = ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((short) 16ULL))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -981977441)) <= (var_7))))));
                    }
                    for (long long int i_9 = 2; i_9 < 11; i_9 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 12; i_10 += 2) 
                        {
                            var_33 = ((/* implicit */_Bool) min((var_33), (arr_5 [i_0 + 1] [i_1] [i_2] [(short)0])));
                            arr_37 [i_0] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1066086699)) + (arr_6 [i_0 + 1] [7] [i_0] [i_0 + 1])))) ? (((unsigned long long int) arr_6 [i_0] [i_0] [i_0] [(unsigned short)4])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 619010416191311365ULL)) ? (arr_18 [i_9] [10LL] [i_2] [i_9 + 1]) : (1543966360)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_14))))));
                        }
                        arr_38 [i_9] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 13847809284075529562ULL)) ? (((/* implicit */unsigned long long int) arr_9 [i_9] [1U] [i_1 + 1] [i_0])) : (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_1 [i_0])))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) << (((/* implicit */int) ((arr_28 [i_9]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0 + 1] [i_2] [i_1 - 2] [i_0] [i_0 + 1]))))))))) : ((-(min((((/* implicit */unsigned long long int) arr_33 [i_9] [i_2] [i_1 - 3] [5U])), (arr_32 [i_0 + 1] [i_0 + 1] [i_0])))))));
                    }
                    var_34 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [3] [i_1] [i_2] [i_2 - 1] [1] [i_1])) << (((var_17) - (2024986365)))))) ? (((((/* implicit */_Bool) 539835819)) ? (((((/* implicit */unsigned long long int) var_5)) * (arr_28 [i_0]))) : (((/* implicit */unsigned long long int) arr_18 [i_0 + 1] [i_1 - 1] [i_1 - 2] [i_2 - 1])))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max(((unsigned short)17016), (((/* implicit */unsigned short) arr_31 [i_0 + 1] [i_0] [i_0] [(_Bool)1] [i_2 - 1]))))), ((+(2888273997U)))))));
                    var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) var_3))));
                }
            } 
        } 
    } 
}
