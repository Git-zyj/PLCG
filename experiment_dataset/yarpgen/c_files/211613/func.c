/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211613
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_3] [i_3] = 17273495940891851732ULL;
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                            {
                                var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) var_6))));
                                var_18 ^= max((((arr_10 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_3 + 1] [i_3 - 1]) ? (1410899869U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_3 + 1] [i_3 + 1] [i_3 + 1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0] [i_0 + 1] [(unsigned short)12] [i_3] [i_3 - 1] [i_3 - 1])) % (((/* implicit */int) arr_10 [i_0] [i_0 + 1] [i_0] [i_1] [i_3 - 1] [i_3 - 1]))))));
                            }
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0 + 1] [i_0] [i_0] [(signed char)3]))) < (arr_1 [i_0 + 1])))), (arr_11 [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) ((1410899868U) != ((~(var_1)))))), (max((((/* implicit */unsigned short) var_14)), (arr_11 [i_0 + 1] [i_1] [i_1] [i_1]))))))));
                arr_15 [i_0] [i_0 + 1] [i_0 + 1] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))), (arr_0 [(signed char)9])));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (~(var_1))))));
                    var_22 = ((/* implicit */_Bool) (((!(var_6))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24))))) : (((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))));
                    arr_20 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_5 + 1])) > (((arr_10 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (~(max((((/* implicit */int) var_3)), ((((_Bool)1) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_14))))))));
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) ((((/* implicit */int) var_12)) >= (((/* implicit */int) (short)23511))))) : (min((262140), (((/* implicit */int) var_12))))))) ? ((~((~(var_0))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1073741823)))))))));
    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (unsigned short)3968)) ? (3695958140U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65508))))) : (max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) var_15)), ((unsigned short)36)))), (max((1486607224U), (((/* implicit */unsigned int) var_6))))))));
}
