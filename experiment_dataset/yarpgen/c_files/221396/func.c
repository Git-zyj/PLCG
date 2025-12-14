/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221396
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_9 [i_1] [i_0])))) - (((min((var_9), (((/* implicit */int) (_Bool)0)))) + (((/* implicit */int) ((unsigned char) arr_7 [i_0])))))));
                    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((min((-2247485239561384316LL), (((/* implicit */long long int) (unsigned char)61)))), (arr_8 [i_0] [i_1] [i_2])))) ? (((/* implicit */int) ((1400410851538547700ULL) > (arr_2 [i_2])))) : ((~(((/* implicit */int) var_1))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17046333222171003905ULL)) ? (min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) var_3)))))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_4)), (var_7)))) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_4])) > (((/* implicit */int) arr_0 [i_0] [i_4])))))))));
                                var_19 += ((/* implicit */short) ((((/* implicit */_Bool) min((arr_14 [i_0] [i_4] [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_3] [i_2] [10LL])))) ? (((/* implicit */int) ((arr_5 [i_1]) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) max((arr_14 [i_0] [i_2] [i_1] [i_3] [i_3]), (((/* implicit */unsigned short) (_Bool)0)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (int i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) <= (((/* implicit */int) arr_9 [i_2] [i_5]))));
                            var_21 = ((/* implicit */unsigned short) (+(2147483643)));
                        }
                        for (unsigned char i_7 = 3; i_7 < 16; i_7 += 1) /* same iter space */
                        {
                            arr_21 [i_2] [i_1] [6U] &= ((/* implicit */signed char) ((((arr_4 [i_0] [i_0] [i_2]) / (((/* implicit */unsigned long long int) var_2)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)186)) > (((/* implicit */int) arr_17 [i_0] [10U] [i_2] [i_5] [i_7] [10U]))))))));
                            var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(arr_20 [i_7 - 2] [(_Bool)1] [i_7] [i_7] [i_7] [i_7] [i_7]))))));
                            arr_22 [i_2] [i_5] [i_2] [i_1] [i_1] [i_0] [i_2] &= ((/* implicit */_Bool) ((unsigned long long int) (short)19807));
                            var_23 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)236)) / (((/* implicit */int) var_1))));
                        }
                        for (unsigned char i_8 = 3; i_8 < 16; i_8 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) 17046333222171003910ULL);
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) (signed char)90))))) : (((/* implicit */int) (!((_Bool)0))))));
                        }
                        arr_25 [i_5] [i_2] [i_2] [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) -1LL);
                        var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [(unsigned char)15]))) > (17046333222171003898ULL)));
                        var_27 |= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (18446744073709551615ULL));
                    }
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 17046333222171003923ULL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))), (((/* implicit */int) max(((unsigned short)25452), (((/* implicit */unsigned short) var_15)))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) & (min((((/* implicit */unsigned long long int) var_15)), (17046333222171003904ULL)))))));
    var_29 |= ((/* implicit */unsigned short) ((unsigned char) 17046333222171003892ULL));
}
