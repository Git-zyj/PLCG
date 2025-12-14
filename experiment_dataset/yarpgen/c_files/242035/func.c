/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242035
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(max((5355273525684545072ULL), (max((((/* implicit */unsigned long long int) var_12)), (16169682843220823469ULL))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                for (signed char i_3 = 2; i_3 < 10; i_3 += 2) 
                {
                    {
                        arr_12 [i_0] [(short)10] [i_1 - 2] [i_1 - 1] [i_2 - 1] [i_0] = ((/* implicit */short) arr_5 [i_0] [i_0] [0]);
                        arr_13 [i_1] [(unsigned short)1] [i_1] [(unsigned short)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (16169682843220823464ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            for (unsigned int i_5 = 2; i_5 < 10; i_5 += 2) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_5 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_4]))) : (1635338864U)));
                            arr_24 [i_7] [i_7] = ((((/* implicit */_Bool) -1409188398)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_17 [i_7] [i_4] [i_5 - 2]));
                            arr_25 [i_5] [i_4] [i_4] [(signed char)6] [(signed char)5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2625617179U))));
                            var_21 = ((/* implicit */int) 5260938739247568063ULL);
                            var_22 = ((/* implicit */signed char) (+(((unsigned int) 15507913003727633934ULL))));
                        }
                        for (short i_8 = 1; i_8 < 9; i_8 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (+(arr_7 [i_8 + 1] [i_5 - 1] [7LL]))))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_8] [i_5 - 1] [i_8 + 1] [i_5 - 1])) && (((/* implicit */_Bool) ((unsigned char) -1409188406)))));
                            var_25 = var_9;
                        }
                        for (long long int i_9 = 0; i_9 < 11; i_9 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) && (((/* implicit */_Bool) arr_3 [i_0])))))));
                            arr_31 [i_9] [i_4] [i_9] [i_5] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)43242)) ? (((/* implicit */int) arr_30 [i_5 - 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5])) : (((((/* implicit */int) var_6)) >> (((arr_9 [i_0] [i_4] [(signed char)4]) - (3613618436458333459LL)))))));
                            var_27 = ((/* implicit */_Bool) ((long long int) 0LL));
                        }
                        for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            var_28 = ((/* implicit */int) (unsigned char)19);
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (~(arr_7 [i_5 - 1] [i_5 + 1] [i_10]))))));
                            var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 2659628431U)) ? (((/* implicit */long long int) ((/* implicit */int) ((6349454051781466432ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : ((~(arr_1 [i_6] [(signed char)3])))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) arr_5 [i_10] [(short)4] [(short)7]))));
                        }
                        var_32 = ((/* implicit */short) ((arr_26 [i_0] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [i_6]) << (((arr_26 [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 2] [i_5 - 1] [0LL]) - (208116880U)))));
                        arr_34 [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_4] [i_5 - 2] [i_6]);
                    }
                } 
            } 
        } 
    }
}
