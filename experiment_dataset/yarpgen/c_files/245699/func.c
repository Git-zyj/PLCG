/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245699
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
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [0] = ((/* implicit */short) (unsigned char)193);
                arr_6 [(signed char)0] [(signed char)0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) : (var_3))))))), (((((/* implicit */_Bool) ((unsigned short) arr_2 [(_Bool)1]))) ? (((((/* implicit */_Bool) var_17)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_3 [i_0] [i_0]) != (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))))))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 4; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_14 [i_0] [1U] [i_1] [i_0] [i_3] [2U] [i_4])), (max((((/* implicit */unsigned long long int) (unsigned short)46129)), (0ULL))))), (((/* implicit */unsigned long long int) var_11))));
                                var_20 = ((_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned char)7] [i_2])) ? (arr_9 [i_0] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_13)) != (((/* implicit */int) arr_4 [i_1]))))))));
                                var_21 = ((/* implicit */unsigned int) -4950681688012431607LL);
                            }
                        } 
                    } 
                    var_22 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65523)) > (((/* implicit */int) (short)15589))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 0; i_5 < 13; i_5 += 1) 
                    {
                        arr_20 [i_2] [i_2] [10U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 524287)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-6731973635336279778LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [(signed char)10] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (arr_2 [i_0])));
                        arr_21 [i_2] [i_1] = ((_Bool) arr_11 [i_0] [i_1] [4ULL] [9ULL]);
                    }
                    var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [(unsigned char)7] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (((unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                }
                for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 3) 
                {
                    var_24 = ((_Bool) var_18);
                    var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) ((unsigned short) 17947587174251281082ULL)))));
                    var_26 = ((((/* implicit */int) (!(((/* implicit */_Bool) ((arr_0 [i_0]) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [(unsigned char)12]))))))))) | (((((/* implicit */_Bool) (signed char)61)) ? ((+(((/* implicit */int) (unsigned short)7)))) : (((/* implicit */int) (unsigned char)32)))));
                }
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)5968))));
}
