/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231755
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] = var_10;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 3; i_4 < 15; i_4 += 4) 
                            {
                                arr_14 [4U] [i_3] [(signed char)13] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((arr_8 [(signed char)13] [i_1] [(signed char)13] [(signed char)13]) | (arr_4 [i_4 - 3]))), ((+(3U)))))) ? (min(((~(4080848646U))), (((/* implicit */unsigned int) var_17)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) != (((/* implicit */int) var_13))))))));
                                var_20 = arr_2 [i_2] [i_2] [i_1];
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((long long int) min((6857893691642229168LL), (((/* implicit */long long int) (_Bool)0))))))));
                            }
                            for (unsigned int i_5 = 0; i_5 < 18; i_5 += 4) 
                            {
                                var_22 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) (unsigned short)39932)), (1119321948U))) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(unsigned short)12] [3U] [i_5])))));
                                var_23 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2 + 1])) << (((((/* implicit */_Bool) max(((short)361), (((/* implicit */short) (unsigned char)131))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) : (max((7654621540348698129ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
                            }
                            /* LoopSeq 1 */
                            for (unsigned int i_6 = 0; i_6 < 18; i_6 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : ((+(9205412786797488416LL)))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)39))) : (((/* implicit */int) min((arr_13 [i_0] [(unsigned char)14] [i_2 + 2] [i_3] [(unsigned short)11]), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_15)))))))))))));
                                var_25 = ((/* implicit */unsigned int) max((var_25), (min((max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_4 [i_0]))), (((/* implicit */unsigned int) max(((unsigned char)71), (((/* implicit */unsigned char) arr_18 [i_1] [i_0] [i_2] [12U] [i_0]))))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_6] [i_6] [i_2 - 1] [i_3] [i_2 - 1])))))))));
                                var_26 = ((/* implicit */int) max((((arr_10 [i_2] [i_2 + 1] [i_2 + 1]) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [13U] [i_2 + 1] [i_2 + 1]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_10 [i_2] [i_2 + 2] [i_2 + 2])))))));
                                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4221437540054642792LL)) ? (((((/* implicit */_Bool) arr_8 [i_6] [i_2 - 1] [(unsigned char)10] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (arr_8 [11] [11] [7LL] [11]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))));
                            }
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [(unsigned short)5] [i_0])))))) : (arr_8 [(signed char)3] [i_2] [i_0] [i_0])));
                            arr_20 [i_3] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned int) -1845221303)), (min((1335034734U), (((/* implicit */unsigned int) (+(arr_17 [i_2 + 1] [i_3] [i_3] [(short)15] [i_2] [(short)16]))))))));
                            var_29 = ((/* implicit */int) (+((-(arr_15 [i_2 + 2] [i_2] [i_2] [5ULL] [i_2] [i_2 + 1] [i_3])))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7)))))));
}
