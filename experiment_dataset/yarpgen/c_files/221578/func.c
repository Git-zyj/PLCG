/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221578
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
    var_12 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
    var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-90)) ? (((/* implicit */int) var_1)) : (2147483647)))))))));
    var_14 = var_9;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            arr_10 [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
                            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)246)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30737))))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 2) /* same iter space */
                            {
                                arr_13 [i_0] [i_0] [i_3] [i_0] = ((/* implicit */short) max((((((/* implicit */int) ((unsigned char) (unsigned short)30759))) * (((/* implicit */int) (unsigned short)65508)))), (((/* implicit */int) var_1))));
                                arr_14 [i_3] [11U] [i_1] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((arr_1 [i_3] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34777)))))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0])))))) : ((-(arr_0 [(unsigned char)6]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((-2680332042665750408LL) / (((/* implicit */long long int) arr_8 [i_0])))))))))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 10; i_5 += 2) /* same iter space */
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] &= (+(((/* implicit */int) (unsigned short)34771)));
                                arr_19 [i_3] [i_5 - 1] [i_3] [i_3] [i_0] [i_0] = ((/* implicit */unsigned char) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) + (((/* implicit */int) var_4)))))));
                                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_6 [i_0] [i_1 - 2] [i_2]))));
                            }
                            for (unsigned short i_6 = 1; i_6 < 10; i_6 += 2) /* same iter space */
                            {
                                arr_22 [i_3] [i_1] [i_3] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (-680920354)))))) ? (arr_17 [i_3] [i_3] [i_2] [i_0] [i_0]) : (((((/* implicit */_Bool) var_0)) ? (arr_11 [i_2] [i_2]) : (((arr_11 [i_0] [i_0]) << (((((/* implicit */int) arr_7 [i_0])) - (13931)))))))));
                                arr_23 [i_6] [i_3] [i_2] [i_3] [i_0] = ((/* implicit */unsigned char) var_11);
                                var_17 = ((/* implicit */long long int) max(((unsigned short)34776), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)29624)))))));
                                arr_24 [i_3] [i_3] [i_3] [i_2] [i_2] = ((/* implicit */short) var_8);
                            }
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) (~((-(((/* implicit */int) (signed char)34))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (~(min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (-680920354) : (((/* implicit */int) var_10))))), (3198616445901405778LL)))));
}
