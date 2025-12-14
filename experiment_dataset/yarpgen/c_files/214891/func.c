/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214891
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 24; i_0 += 3) 
    {
        var_12 = ((/* implicit */long long int) arr_2 [i_0 - 2]);
        /* LoopNest 3 */
        for (unsigned short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                for (long long int i_3 = 2; i_3 < 24; i_3 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 3; i_4 < 24; i_4 += 2) 
                        {
                            var_13 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_3 + 1] [i_1 + 1] [i_1 - 1] [i_0])) || (((/* implicit */_Bool) arr_9 [i_1] [i_3 - 2] [i_1 + 1] [i_1] [i_1]))))));
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((/* implicit */unsigned int) (unsigned short)0)), (((((/* implicit */_Bool) (-(var_0)))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_1]))))))))));
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (unsigned short)0))));
                            var_16 -= ((/* implicit */short) arr_7 [i_3] [i_3] [i_2] [i_3]);
                            var_17 -= ((/* implicit */signed char) max(((-(0ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)10)) << (((2147483647) - (2147483631))))))));
                        }
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) max((((/* implicit */int) (unsigned short)0)), ((~((-2147483647 - 1)))))))));
                        var_19 = ((/* implicit */unsigned char) (+((-(((/* implicit */int) max(((unsigned short)65526), (((/* implicit */unsigned short) var_6)))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (long long int i_6 = 1; i_6 < 23; i_6 += 2) 
            {
                {
                    var_20 -= ((/* implicit */short) min((var_10), (((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_5])) * (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_7 = 0; i_7 < 25; i_7 += 2) 
                    {
                        var_21 -= ((/* implicit */unsigned short) var_6);
                        var_22 = ((/* implicit */long long int) -464766422);
                        arr_20 [i_7] [i_0] [i_5] [i_0] [i_0] [i_7] |= ((/* implicit */short) var_2);
                        var_23 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0] [i_5] [i_6 + 1] [i_0]))));
                        arr_21 [i_5] [i_6] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (2147483633) : (((/* implicit */int) (signed char)-8))));
                    }
                }
            } 
        } 
        var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [20LL])) : (((/* implicit */int) arr_16 [(_Bool)0] [i_0] [i_0])))), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (var_5))))) : (arr_8 [(signed char)20] [(signed char)20] [(signed char)20] [(signed char)20])));
    }
    var_25 = ((/* implicit */unsigned short) var_4);
}
