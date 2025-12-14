/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35287
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
    var_13 = ((/* implicit */long long int) (~(var_1)));
    var_14 = ((/* implicit */signed char) ((7434101342086839674ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))));
    var_15 -= ((/* implicit */unsigned char) ((int) var_4));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_1 - 1]))) ? (min((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) arr_0 [(unsigned char)10])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))));
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 2) 
                {
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) min((((/* implicit */int) var_11)), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))))) >= (max((((/* implicit */long long int) (-(1059955043U)))), (5858915420533782402LL)))));
                    arr_8 [i_0] [i_0] [(_Bool)1] = ((/* implicit */_Bool) min(((~(var_1))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((signed char) var_3))))))));
                }
                for (short i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((var_2), (((/* implicit */unsigned long long int) (signed char)24)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_3)), (arr_1 [i_3]))))))) ? (((((/* implicit */_Bool) ((int) arr_0 [i_1]))) ? (max((((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_0] [i_0])), (var_9))) : (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_3] [i_3]), (((/* implicit */int) arr_6 [i_0]))))))) : (var_2)));
                    var_18 = ((/* implicit */_Bool) var_3);
                }
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
    {
        var_19 = ((/* implicit */signed char) min((((/* implicit */int) ((signed char) arr_14 [i_4] [i_4]))), (min((((/* implicit */int) arr_13 [i_4])), (arr_14 [i_4] [i_4])))));
        var_20 += ((/* implicit */signed char) min((((/* implicit */short) var_11)), (((short) min((((/* implicit */unsigned long long int) var_11)), (arr_15 [i_4]))))));
        var_21 = ((/* implicit */unsigned char) (-(-744772885)));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        var_22 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) var_8)), (arr_6 [i_5])))) ? (arr_15 [i_5]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (4294967295U)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1948312442)), (2686315015819671031ULL)))) ? (((/* implicit */int) ((arr_9 [i_5] [i_5]) <= (((/* implicit */int) var_8))))) : (min((((/* implicit */int) (signed char)87)), ((-2147483647 - 1)))))))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (short i_7 = 3; i_7 < 7; i_7 += 3) 
            {
                {
                    var_23 &= ((signed char) ((_Bool) arr_20 [(unsigned char)3] [i_6] [i_7 - 2]));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 1) 
                    {
                        for (short i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_15 [i_9 - 1])) ? (var_7) : (var_10)))));
                                var_25 = ((/* implicit */long long int) var_11);
                                arr_30 [i_6] [i_6] = ((/* implicit */unsigned long long int) (~(40794747)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
